#include"CMangKQ.h"
using namespace std;
CMangKQ::~CMangKQ()
{
	for (int i = 0; i < n; i++)
		delete a[i];
	delete[] a;
}
void CMangKQ::Nhap()
{
	cout << "Nhap so ket qua: ";
	cin >> n;
	a = new CKetQua*[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new CKetQua();
		cout << "\nNhap ket qua thu " << i + 1 << endl;
		a[i]->Nhap();
	}
}
void CMangKQ::Xuat()
{
	for (int i = 0; i < n; i++)
		a[i]->Xuat();
}
void CMangKQ::SapXepGiamDan()
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[j]->SoSanh(a[i]) == -1)
			{
				CKetQua* temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
}