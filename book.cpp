#include <iostream>
#include <string.h>

using namespace std;

struct Book {
    int b_id;
    char b_name[200];
    char b_author[200];
    double price;
    double rating;

    Book() {
        this->b_id = 0;
        strcpy(b_name, "name");
        strcpy(b_author, "author");
        this->price = 0;
        this->rating = 0;
    }

    Book(int id, const char* name, const char* author, double price, double rating) {
        this->b_id = id;
        strcpy(b_name, name);
        strcpy(b_author, author);
        this->price = price;
        this->rating = rating;
    }

    void setb_id(int id) {
        this->b_id = id;
    }

    void setb_name(char* name) {
        strcpy(b_name, name);
    }

    void setb_author(char* author) {
        strcpy(b_author, author);
    }

    void setprice(double p) {
        this->price = p;
    }

    void setrating(double r) {
        this->rating = r;
    }

    int getb_id() {
        return this->b_id;
    }

    char* getb_name() {
        return this->b_name;
    }

    char* getb_author() {
        return this->b_author;
    }

    double getprice() {
        return this->price;
    }

    double getrating() {
        return this->rating;
    }

    void displayfun() {
        cout << "Id is " << this->b_id << "\n";
        cout << "Name is " << this->b_name << "\n";
        cout << "Author Name is " << this->b_author << "\n";
        cout << "Price is " << this->price << "\n";
        cout << "Rating is " << this->rating << "\n";
    }
};

void storebook(struct Book* arr, int size, int* numofbooks);
void displaybook(struct Book* arr, int numofbooks);
void addbook(struct Book* arr, int size, int* numofbooks);
void removebook(struct Book* arr, int* numofbooks);
void searchbook(struct Book* arr, int numofbooks);
void showauthor(struct Book* arr, int numofbooks);
void updatebook(struct Book* arr, int numofbooks);
void displaytop3ratings(struct Book* arr, int numofbooks);
void displayallbooks(struct Book* arr, int numofbooks);

// ... (previous code)

int main() 
{
    int i;
    int a;
    cout << "enter the book size: ";
    cin >> a;
    int choice;
    int numofbooks = 0;
    int size = 8;
    struct Book arr[size];

    // Use parameterized constructor
    Book b1(10, "Java", "Abc", 250, 23); // Paramertized Constructor//

    // Store 3 books
    for (i = 0; i < a; i++) {
        if (numofbooks < size) {
            storebook(arr, size, &numofbooks);
        } else {
            cout << "The array is full.\n";
            break;
        }
    }

    do {
        cout << "\n************* Book Menu *****************\n";
        cout << "\t 1. Display Book\n";
        cout << "\t 2. Add Book\n";
        cout << "\t 3. Remove Book\n";
        cout << "\t 4. Search Book\n";
        cout << "\t 5. Show author's Books\n";
        cout << "\t 6. Update Book Data\n";
        cout << "\t 7. Display Top 3 Books\n";
        cout << "\t 8. Display All Books\n";
        cout << "\t 0. Exit\n \n";

        cout << "\tEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            for (int i = 0; i < numofbooks; i++) {
                arr[i].displayfun();
            }
            break;

        case 2:
            addbook(arr, size, &numofbooks);
            break;

        case 3:
            removebook(arr, &numofbooks);
            break;

        case 4:
            searchbook(arr, numofbooks);
            break;

        case 5:
            showauthor(arr, numofbooks);
            break;

        case 6:
            updatebook(arr, numofbooks);
            break;

        case 7:
            displaytop3ratings(arr, numofbooks);
            break;

        case 8:
            displayallbooks(arr, numofbooks);
            break;
        }

    } while (choice != 0);

    return 0;
}

// ... (rest of the code)

void storebook(struct Book* arr, int size, int* numofbooks) {
    if (*numofbooks < size) {
        int i = *numofbooks;

        cout << "\nEnter the book id: ";
        cin >> arr[i].b_id;

        cout << "Enter the book name: ";
        cin >> arr[i].b_name;

        cout << "Enter the book author: ";
        cin >> arr[i].b_author;

        cout << "Enter the price: ";
        cin >> arr[i].price;

        cout << "Enter the rating: ";
        cin >> arr[i].rating;

        (*numofbooks)++;

        cout << "\n";

        cout << "Book stored successfully.\n";
    } else {
        cout << "The array is full. Cannot store more books.\n";
    }
}



void displaybook(struct Book* arr, int numofbooks) {
    int i;

    cout << "\n-----------------------------------------------------------------------------------------------------------------\n";
    cout << "  ID   |   Book Name        |   Author         |   Price   |   Rating  \n";
    cout << "-------------------------------------------------------------------------------------------------------------------\n";

    for (i = 0; i < numofbooks; i++) {
        cout << "  " << arr[i].b_id << " | " << arr[i].b_name << " | " << arr[i].b_author << " | " << arr[i].price << " | " << arr[i].rating << "\n";
    }

    cout << "-------------------------------------------------------------------------------------------------------------------\n";
}

void addbook(struct Book* arr, int size, int* numofbooks) {
    char addNew = 'y';

    cout << "\n";
    cout << "-----------------------------------------Add book------------------------------------------------------------------\n";
    cout << "Do you want to add a book? (y/n):";
    cin >> addNew;
    cout << "\n";

    while (addNew == 'y' && *numofbooks < size) {
        int i = *numofbooks;

        cout << "Enter the book id: ";
        cin >> arr[i].b_id;

        cout << "Enter the book name: ";
        cin >> arr[i].b_name;

        cout << "Enter the book author: ";
        cin >> arr[i].b_author;

        cout << "Enter the price: ";
        cin >> arr[i].price;

        cout << "Enter the rating: ";
        cin >> arr[i].rating;

        (*numofbooks)++;

        cout << "\n";

        cout << "Book added successfully.\n \n";

        cout << "Do you want to add another book? (y/n): ";
        cin >> addNew;
    }
}

// ... (previous code)

void removebook(struct Book* arr, int* numofbooks)
{
    int bookidRemove;
    int i, j;

    cout << "\n";
    cout << "-----------------------------------------Remove book------------------------------------------------------------------\n";

    cout << "\n Enter the id of the book you want to remove: \n";
    cin >> bookidRemove;

    for (i = 0; i < *numofbooks; i++)
    {
        if (arr[i].b_id == bookidRemove)
        {
            for (j = i; j < *numofbooks - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            (*numofbooks)--;

            cout << "Book with id " << bookidRemove << " is removed.\n";
            return; // exit once the book is removed
        }
    }

    cout << "Book with id " << bookidRemove << " not found.\n";
}

void searchbook(struct Book* arr, int numofbooks) {
    int choice;

    cout << "\n";
    cout << "-----------------------------------------Search book------------------------------------------------------------------\n";

    cout << "Search by:\n";
    cout << "1. Book ID\n";
    cout << "2. Book Name\n \n";

    cout << "Enter your choice: ";
    cin >> choice;
    cout << "\n";

    switch (choice) {
    case 1:
    {
        int searchID, i;
        int found = 0;

        cout << "Enter the ID of the book you want to search: ";
        cin >> searchID;

        for (i = 0; i < numofbooks; i++)
        {
            if (arr[i].b_id == searchID)
            {
                cout << "\n Book found:\n";
                cout << "\t ID: " << arr[i].b_id << "\n";
                cout << "\t Name: " << arr[i].b_name << "\n";
                cout << "\t Author: " << arr[i].b_author << "\n";
                cout << "\t Price: " << arr[i].price << "\n";
                cout << "\t Rating: " << arr[i].rating << "\n";
                found = 1;
            }
        }

        if (!found)
        {
            cout << "\n Book with ID " << searchID << " not found.\n";
        }
        break;
    }

    case 2: {
        char searchName[200];
        int found = 0;
        int i;

        cout << "Enter the name of the book you want to search: ";
        cin >> searchName;
        cout << "\n";

        for (i = 0; i < numofbooks; i++)
        {
            if (strcmp(arr[i].b_name, searchName) == 0)
            {
                cout << "\n Book found:\n";
                cout << "\t ID: " << arr[i].b_id << "\n";
                cout << "\t Name: " << arr[i].b_name << "\n";
                cout << "\t Author: " << arr[i].b_author << "\n";
                cout << "\t Price: " << arr[i].price << "\n";
                cout << "\t Rating: " << arr[i].rating << "\n";
                found = 1;
            }
        }

        if (!found)
        {
            cout << "\nBook with name '" << searchName << "' not found.\n";
        }
        break;
    }
    default:
        cout << "Invalid choice.\n";
    }
}

void showauthor(struct Book* arr, int numofbooks) {
    char searchAuthor[200];
    int i;
    int found = 0;

    cout << "\n";
    cout << "-----------------------------------------Show the author's books------------------------------------------------------------------\n";

    cout << "Enter the name of the author whose books you want to search: ";
    cin >> searchAuthor;

    for (i = 0; i < numofbooks; i++) {
        if (strcmp(arr[i].b_author, searchAuthor) == 0) {
            cout << "Book found:\n";
            cout << "ID: " << arr[i].b_id << "\n";
            cout << "Name: " << arr[i].b_name << "\n";
            cout << "Author: " << arr[i].b_author << "\n";
            cout << "Price: " << arr[i].price << "\n";
            cout << "Rating: " << arr[i].rating << "\n";
            found = 1;
        }
    }

    if (!found) {
        cout << "Books by author '" << searchAuthor << "' not found.\n";
    }
}


void updatebook(struct Book* arr, int numofbooks)
{
    int updateId;
    int i;
    int found = 0;

    cout << "\n";
    cout << "-----------------------------------------Update book------------------------------------------------------------------\n";

    cout << "Enter the ID of the book you want to update: ";
    cin >> updateId;

    for (i = 0; i < numofbooks; i++)
    {
        if (arr[i].b_id == updateId)
        {
            cout << "Book found:\n";
            cout << "ID: " << arr[i].b_id << "\n";
            cout << "Name: " << arr[i].b_name << "\n";
            cout << "Author: " << arr[i].b_author << "\n";
            cout << "Price: " << arr[i].price << "\n";
            cout << "Rating: " << arr[i].rating << "\n";

            cout << "Enter the updated book name: ";
            cin >> arr[i].b_name;

            cout << "Enter the updated book author: ";
            cin >> arr[i].b_author;

            cout << "Enter the updated price: ";
            cin >> arr[i].price;

            cout << "Enter the updated rating: ";
            cin >> arr[i].rating;

            cout << "\n";
            cout << "Book updated successfully.\n";
            found = 1;
            break;
        }
    }

    if (!found)
    {
        cout << "Book with ID " << updateId << " not found.\n";
    }
}

void displaytop3ratings(struct Book* arr, int numofbooks)
{
    int i, j;

    for (i = 0; i < numofbooks - 1; i++) // Sort the books by rating in descending order
    {
        for (j = 0; j < numofbooks - 1 - i; j++)
        {
            if (arr[j].rating < arr[j + 1].rating)
            {
                struct Book temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+ 1] = temp;
            }
        }
    }

    cout << "\n";
    cout << "--------------------------------Top 3 Books by Rating:---------------------------------------------------------\n";

    for (i = 0; i < 3 && i < numofbooks; i++)
    {
        cout << "Rank " << i + 1 << ": " << arr[i].b_name << " (Rating: " << arr[i].rating << ")\n";
    }
}

void displayallbooks(struct Book* arr, int numofbooks)
{
    cout << "\n";
    cout << "-----------------------------------------All Books:--------------------------------------------------------------\n";

    int i;
    for (i = 0; i < numofbooks; i++)
    {
        cout << "ID: " << arr[i].b_id << "\n";
        cout << "Name: " << arr[i].b_name << "\n";
        cout << "Author: " << arr[i].b_author << "\n";
        cout << "Price: " << arr[i].price << "\n";
        cout << "Rating: " << arr[i].rating << "\n\n";
    }
}

 
 
 
 
 
 
 
 
 
 
 
 
 
