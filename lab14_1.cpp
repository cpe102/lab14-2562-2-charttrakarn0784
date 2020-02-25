#include <iostream>
using namespace std;


int main(){
	int a = 5;
	char b = 'A';
	char &c = b;
	int *x = &a;
	char *y = &b;
	int **z = &x;
	cout << "a = " << a << endl; 
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << x << endl;
	cout << "y = " << (int*)y << endl;
	cout << "z = " << z << endl;
	cout << "------------------------------\n";
	cout << "&a = " << &a << endl; 
	cout << "&b = " << (int*)&b << endl;
	cout << "&c = " << (int*)&c << endl;
	cout << "&x = " << &x << endl;
	cout << "&y = " << &y << endl;
	cout << "&z = " << &z << endl;
	c = 'F';
	cout << "------------------------------\n";
	cout << "a = " << a << endl; 
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << x << endl;
	cout << "y = " << (int*)y << endl;
	cout << "z = " << z << endl;
	*y = 'W';
	cout << "------------------------------\n";
	cout << "a = " << a << endl; 
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << x << endl;
	cout << "y = " << (int*)y << endl;
	cout << "z = " << z << endl;
	*x = 6;
	cout << "------------------------------\n";
	cout << "a = " << a << endl; 
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << x << endl;
	cout << "y = " << (int*)y << endl;
	cout << "z = " << z << endl;
	**z = 7;
	cout << "------------------------------\n";
	cout << "a = " << a << endl; 
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "x = " << x << endl;
	cout << "y = " << (int*)y << endl;
	cout << "z = " << z << endl;
	
	
	
	return 0;
}
