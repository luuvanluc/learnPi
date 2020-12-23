#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Tinh binh phuong va can bac hai" << endl;
	cout << "Nhap so can tinh: " ;
	float x = 0.0f;
	cin >> x;
	cout << "Binh phuong cua so " << x << " la " << x*x << endl;
	cout << "Can bac hai cua so " << x << " la " << sqrtf(x) << endl;
	return 0;
}
