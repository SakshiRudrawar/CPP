#include<stdio.h>

int arithmetic(int&, int&, int&, int&, int&, int&, char&, int&, int&, int&, int&);

int main() {
    int num1, num2, Add, Sub, Mul, Div, a, b, c, d;
    char ch;

    printf("Enter the num1: ");
    scanf("%d", &num1);

    printf("Enter the num2: ");
    scanf("%d", &num2);

    printf("Enter your choice +, -, *, /: ");
    scanf(" %c", &ch); 

    arithmetic(num1, num2, Add, Sub, Mul, Div, ch, a, b, c, d);

    if (ch == '+') 
	{
        printf("Addition is %d", a);
    }
    if (ch == '-') 
	{
        printf("Subtraction is %d", b);
    }
    if (ch == '*') 
	{
        printf("Multiplication is %d", c);
    }
    if (ch == '/') 
	{
        printf("Division is %d", d);
    }

    return 0;
}

int arithmetic(int& num1, int& num2, int& Add, int& Sub, int& Mul, int& Div, char& ch, int& a, int& b, int& c, int& d) 
{
    if (ch == '+') 
	{
        a = Add = num1 + num2;
    }
    if (ch == '-') 
	{
        b = Sub = num1 - num2;
    }
    if (ch == '*') 
	{
        c = Mul = num1 * num2;
    }
    if (ch == '/') 
	{
        d = Div = num1 / num2;
    }
}




