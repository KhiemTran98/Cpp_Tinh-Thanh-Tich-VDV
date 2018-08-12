#include"CKetQua.h"
using namespace std;
CKetQua::~CKetQua()
{
	delete ThanhTich;
}
void CKetQua::Nhap()
{
	cout << "Nhap ten VDV: ";
	cin.ignore();
	getline(cin, TenVDV);
	ThanhTich = new CTime();
	ThanhTich->Nhap();
}
void CKetQua::Xuat()
{
	cout << "Ten VDV: " << TenVDV << endl;
	cout << "Thanh tich: ";
	ThanhTich->Xuat();
	cout << endl;
}
int CKetQua::SoSanh(CKetQua* B)
{
	return this->ThanhTich->SoSanh(B->ThanhTich);
}