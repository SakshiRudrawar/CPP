#include <stdio.h>

struct Complex
{
    int real;
    int imaginary;

    Complex()
    {
        this->real = 0;
        this->imaginary = 0;
    }
    Complex(int real1, int imaginary1)
    {
        this->real = real1;
        this->imaginary = imaginary1;
    }
    Complex add(Complex c2)
    {
        Complex temp;
        temp.real = this->real + c2.real;
        temp.imaginary = this->imaginary + c2.imaginary;
        return temp;
    }
    Complex sub(Complex c2)
    {
        Complex temp;
        temp.real = this->real - c2.real;
        temp.imaginary = this->imaginary - c2.imaginary;
        return temp;
    }
    Complex mul(Complex c2)
    {
    	Complex temp;
    	temp.real=this->real*c2.real;
    	temp.imaginary=this->imaginary*c2.imaginary;
    	return temp;
	}
	Complex div(Complex c2)
	{
		Complex temp;
		temp.real=this->real / c2.real;
		temp.imaginary=this->imaginary / c2.imaginary;
		return temp;
	}

    Complex add(int no)
    {
        Complex temp;
        temp.real = this->real + no;
        temp.imaginary = this->imaginary + no;
        return temp;
    }
    Complex sub(int no)
    {
        Complex temp;
        temp.real = this->real - no;
        temp.imaginary = this->imaginary - no;
        return temp;
    }
    Complex mul(int no)
    {
    	Complex temp;
        temp.real = this->real * no;
        temp.imaginary = this->imaginary *no;
        return temp;
	}
	Complex div(int no)
    {
    	Complex temp;
        temp.real = this->real / no;
        temp.imaginary = this->imaginary /no;
        return temp;
	}
    void display()
    {
        printf("\nComplex Number: %d + %di", this->real, this->imaginary);
    }
    //getter
    int getreal()
    {
        return this->real;
    }

    int getimaginary()
    {
        return this->imaginary;
    }

    //setter
    void setreal(int r)
    {
        this->real = r;
    }

    void setimaginary(int i)
    {
        this->imaginary = i;
    }
};

Complex add(int, Complex);
Complex sub(int, Complex);
Complex mul(int,Complex);
Complex div(int,Complex);

int main()
{
    Complex c;
    Complex c1(30, 40);
    Complex c2(3, 5);
    
    Complex c3 = c1.add(c2);
    c3.display();
    int a = 10;
    Complex c4 = c1.add(a);
    c4.display();
    Complex c5 = add(15, c1);
    c5.display();

    Complex c6 = c1.sub(c2);
    c6.display();
    Complex c7=c1.sub(a);
    c7.display();
    Complex c8 =sub(100, c1);
    c8.display();
    
    Complex c9=c1.mul(c2);
    c9.display();
    Complex c10=c1.mul(a);
    c10.display();
    Complex c11=mul(5,c1);
    c11.display();
    
    Complex c12=c1.div(c2);
    c12.display();
    Complex c13=c1.div(a);
    c13.display();
    Complex c14=div(120,c1);
    c14.display();
    
}

Complex add(int a, Complex c1)
{
    int r, i;
    Complex t;
    r = a + c1.getreal();
    i = a + c1.getimaginary();
    t.setreal(r);
    t.setimaginary(i);
    return t;
}
Complex sub(int a, Complex c1)
{
    int r, i;
    Complex t;
    r = a - c1.getreal();
    i = a - c1.getimaginary();
    t.setreal(r);
    t.setimaginary(i);
    return t;
}
Complex mul(int a,Complex c1)
{
	int r,i;
	Complex t;
	r=a*c1.getreal();
	i=a*c1.getimaginary();
	t.setreal(r);
	t.setimaginary(i);
	return t;
}
Complex div(int a,Complex c1)
{
	int r,i;
	Complex t;
	r=a/c1.getreal();
	i=a/c1.getimaginary();
	t.setreal(r);
	t.setimaginary(i);
	return t;
}
