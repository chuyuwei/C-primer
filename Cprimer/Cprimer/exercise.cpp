#include<iostream>

using namespace std;

int main()
{
	int val = 42;
	int *ptr1 = &val;
	int *ptr2;
	ptr2= &val;
	cout << *ptr1 <<" "<<*ptr2<<endl;
	cout << ptr1 << " " << ptr2<< endl;
	system("pause");
	return 0;
}