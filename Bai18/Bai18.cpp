#include<iostream>
#include<conio.h>
#include"CMangKQ.h"
using namespace std;
void main()
{
	CMangKQ* Mang = new CMangKQ();
	cout << "Nhap danh sach ket qua" << endl;
	Mang->Nhap();
	cout << "\nSap xep thanh tich giam dan\n";
	Mang->SapXepGiamDan();
	Mang->Xuat();
	delete Mang;
	_getch();
}