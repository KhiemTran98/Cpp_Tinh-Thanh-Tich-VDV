class CTime
{
private:
	int h, m, s;
public:
	CTime();
	~CTime();
	void Nhap();
	void Xuat();
	int SoSanh(CTime* B);
};