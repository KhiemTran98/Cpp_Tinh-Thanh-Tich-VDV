#include<iostream>
#include<string>
#include"CTime.h"
using namespace std;
class CKetQua
{
private:
	string TenVDV;
	CTime* ThanhTich;
public:
	~CKetQua();
	void Nhap();
	void Xuat();
	int SoSanh(CKetQua* B);
};