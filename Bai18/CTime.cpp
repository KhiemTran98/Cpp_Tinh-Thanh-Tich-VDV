#include<iostream>
#include"CTime.h"
using namespace std;
CTime::CTime()
{
	h = m = s = 0;
}
CTime::~CTime() {}
void CTime::Nhap()
{
	cout << "Nhap gio: ";
	cin >> h;
	cout << "Nhap phut: ";
	cin >> m;
	cout << "Nhap giay: ";
	cin >> s;
}
void CTime::Xuat()
{
	cout << h << ":" << m << ":" << s;
}
int CTime::SoSanh(CTime* B)
{
	if (this->h > B->h)
		return 1;
	if (this->h < B->h)
		return -1;
	if (this->m > B->m)
		return 1;
	if (this->m < B->m)
		return -1;
	if (this->s > B->s)
		return 1;
	if (this->s < B->s)
		return -1;
	return 0;
}