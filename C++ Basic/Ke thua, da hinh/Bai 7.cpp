#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class Hinh
{
public:
	virtual void NhapThongTin()
	{

	}

	virtual void XuatThongTin()
	{

	}

	virtual float TinhDienTich()
	{
		return 0;
	}

};

class HinhChuNhat : public Hinh
{
private:
	float chieuDai = 0;
	float chieuRong = 0;

public:
	void NhapThongTin()
	{
		cout << "\nNhap thong tin hinh chu nhat : " << endl;
		do
		{
			cout << "Nhap chieu dai : ";
			cin >> chieuDai;
		} while (chieuDai <= 0);
		do
		{
			cout << "Nhap chieu rong : ";
			cin >> chieuRong;
		} while (chieuRong <= 0);

	}

	void XuatThongTin()
	{
		cout << "Hinh chu nhat : " << endl;
		cout << "Chieu dai : " << chieuDai << endl;
		cout << "Chieu rong : " << chieuRong << endl;
	}

	float TinhDienTich()
	{
		return chieuDai * chieuRong;
	}

};

class HinhTron : public Hinh
{
private:
	float banKinh = 0;

public:

	void NhapThongTin()
	{
		cout << "\nNhap thong tin hinh tron : " << endl;
		do
		{
			cout << "Nhap ban kinh : ";
			cin >> banKinh;
		} while (banKinh <= 0);

	}

	void XuatThongTin()
	{
		cout << "Hinh tron : " << endl;
		cout << "Ban kinh : " << banKinh << endl;
	}

	float TinhDienTich()
	{
		return 3.14 * banKinh * banKinh;
	}

};

class HinhTamGiac : public Hinh
{
private:
	float chieuCao = 0;
	float canhDay = 0;

public:

	void NhapThongTin()
	{
		cout << "\nNhap thong tin hinh tam giac : " << endl;
		do
		{
			cout << "Nhap chieu cao : ";
			cin >> chieuCao;
		} while (chieuCao <= 0);
		do
		{
			cout << "Nhap canh day : ";
			cin >> canhDay;
		} while (canhDay <= 0);

	}

	void XuatThongTin()
	{
		cout << "Hinh tam giac : " << endl;
		cout << "Chieu cao : " << chieuCao << endl;
	}

	float TinhDienTich()
	{
		return 0.5 * chieuCao * canhDay;
	}
};

class QuanLyHinh
{
private:
	vector<Hinh*> DanhSachHinh;

public:

	void ThemHinh()
	{
		Hinh* hinh;
		int check;
		do
		{
			system("cls");
			cout << "\n1. Them hinh chu nhat";
			cout << "\n2. Them hinh tron";
			cout << "\n3. Them hinh tam giac";
			cout << "\n4. Quay lai";
			cout << "\nLua chon cua ban la : ";
			cin >> check;
			switch (check)
			{
			case 1:
			{
				hinh = new HinhChuNhat();
				hinh->NhapThongTin();
				DanhSachHinh.push_back(hinh);
				break;
			}
			case 2:
			{
				hinh = new HinhTron();
				hinh->NhapThongTin();
				DanhSachHinh.push_back(hinh);
				break;
			}
			case 3:
			{
				hinh = new HinhTamGiac();
				hinh->NhapThongTin();
				DanhSachHinh.push_back(hinh);
				break;
			}
			case 4:
			{
				break;
			}
			default:
				cout << "Gia tri khong hop le" << endl;
				system("pause");
			}

		} while (check != 4);
	}

	void XuatDanhSach()
	{
		for (int i = 0; i < DanhSachHinh.size(); ++i)
		{
			cout << "\nHinh thu : " << i + 1 << endl;
			DanhSachHinh[i]->XuatThongTin();
		}
	}

	void TimDienTichMax()
	{
		float dienTichMax = -1;
		float vitri = -1;
		if (DanhSachHinh.size() == 0)
		{
			cout << "Danh sach trong" << endl;
		}
		else
		{
			for (int i = 0; i < DanhSachHinh.size(); ++i)
			{
				if (dienTichMax < DanhSachHinh[i]->TinhDienTich())
				{
					dienTichMax = DanhSachHinh[i]->TinhDienTich();
					vitri = i;
				}
			}
			cout << "\nHinh co dien tich lon nhat la : " << endl;
			DanhSachHinh[vitri]->XuatThongTin();
			cout << "Dien tich lon nhat la : " << dienTichMax << endl;
		}
	}
};

void Menu()
{
	QuanLyHinh quanlyhinh;
	int check;
	do
	{
		system("cls");
		cout << "\n=====QUAN LY HINH=====" << endl;
		cout << "\n1. Them hinh vao danh sach";
		cout << "\n2. Xem danh sach cac hinh";
		cout << "\n3. Hinh co dien tich lon nhat";
		cout << "\n4. Thoat";
		cout << "\nLua chon cua ban la : ";
		cin >> check;
		switch (check)
		{
		case 1:
		{
			quanlyhinh.ThemHinh();
			break;
		}
		case 2:
		{
			quanlyhinh.XuatDanhSach();
			system("pause");
			break;
		}
		case 3:
		{
			quanlyhinh.TimDienTichMax();
			system("pause");
			break;
		}
		case 4:
		{
			break;
		}
		default:
			cout << "Gia tri khong hop le" << endl;
			system("pause");
		}

	} while (check != 4);
}


int main()
{
	Menu();
	return 0;
}