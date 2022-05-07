#include"std_lib_facilities.h"

//This Compiled.
void swap_v(int a, int b)
{
	int temp; 
	temp = a,
	a = b; 
	b = temp;
}

//This Compiled.
void swap_r(int& a, int& b)
{
	int temp; 
	temp = a,
	a = b;
	b = temp;
}

//This Would not agree to compile.
//Because the values cant be assigned to many constant variables which are a and b. 
/*
void swap_cr(const int& a, const int& b)
{
	int temp; temp = a, a = b; b = temp;
}
*/

int main()
{
	int x = 7;
	int y = 9;
	swap_v(x, y); //This was able to compile. But was not swapped.
	swap_r(x, y); //This was able to compile. But was swapped.
	swap_v(7, 9); //This was able to compile. But was not swapped.
	swap_r(7, 9); //This wasnt able to compile.
	const int cx = 7;
	const int cy = 9;
	swap_v(cx, cy); //This was able to compile. But was not swapped.
	swap_r(cx, cy);  //This wasnt able to compile. 
	swap_v(7.7, 9.9); //This was able to compile. But was not swapped.
	swap_r(7.7, 9.9); //This wasnt able to compile.
	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx, dy); //This was compiled. But was not swapped.
	swap_r(dx, dy);  //This wasnt able to compile. 
	swap_v(7.7, 9.9); //This was able to compile. But was not swapped.
	swap_r(7.7, 9.9); //This wasnt able to compile. 
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "cx = " << cx << endl;
	cout << "cy = " << cy << endl;
	cout << "dx = " << dx << endl;
	cout << "dy = " << dy << endl;
	return 0;
}