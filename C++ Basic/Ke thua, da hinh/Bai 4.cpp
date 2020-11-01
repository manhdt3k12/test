#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class HocSinh
{
protected:
	int namSinh = 0;
	string hoTen = "";

public:

	virtual void NhapThongTin()
	{
		do
		{
			cout << "Nam sinh : ";
			cin >> namSinh;
			cin.ignore();
		} while (namSinh <= 1000 || namSinh > 2020);
		cout << "Ho ten : ";
		getline(cin, hoTen);
	}

	virtual void XuatThongTin()
	{
		cout << "Nam sinh : " << namSinh << endl;
		cout << "Ho ten : " << hoTen << endl;
	}
};

class HocSinhCToan : public HocSinh
{
private:
	float diemToan = 0;

public:
	void NhapThongTin()
	{
		HocSinh::NhapThongTin();
		do
		{
			cout << "Diem chuyen toan : ";
			cin >> diemToan;
			cin.ignore();
		} while (diemToan <= 0 || diemToan > 10);

		
	}

	void XuatThongTin()
	{
		cout << "Hoc sinh chuyen toan :" << endl;
		HocSinh::XuatThongTin();
		cout << "Diem chuyen toan : " << diemToan << endl;
	}
};

class QuanLyHocSinh
{
private:
	vector<HocSinh*> DanhSachHocSinh;
	//int index = 0;
	//HocSinh* DSHC[100];

public:
	void ThemHocSinh()
	{
		HocSinh* hocsinh;
		int check;
		do
		{
			system("cls");
			cout << "\n1. Nhap thong tin hoc sinh binh thuong";
			cout << "\n2. Nhap thong tin hoc sinh chuyen toan";
			cout << "\n3. Thoat";
			cout << "\nLua chon cua ban la : ";
			cin >> check;
			cin.ignore();
			switch (check)
			{
			case 1:
			{
				//DSHC[index] = new HocSinh();
				//DSHC[index]->NhapThongTin();
				//++index;
				hocsinh = new HocSinh();
				hocsinh->NhapThongTin();
				DanhSachHocSinh.push_back(hocsinh);
				break;
			}
			case 2:
			{
				//DSHC[index] = new HocSinhCToan();
				//DSHC[index]->NhapThongTin();
				//++index;
				hocsinh = new HocSinhCToan();
				hocsinh->NhapThongTin();
				DanhSachHocSinh.push_back(hocsinh);
				break;
			}
			case 3:
			{
				break;
			}
			default:
				cout << "Gia tri khong hop le" << endl;
				system("pause");
			}

		} while (check != 3);
	}

	void XuatDanhSach()
	{
		int idx = DanhSachHocSinh.size();
		for (int i = 0; i < idx; ++i)
		{
			cout << "\nHoc sinh thu : " << i + 1 << endl;
			DanhSachHocSinh[i]->XuatThongTin();
		}
	}
};

void Menu()
{
	QuanLyHocSinh quanlyhocsinh;
	int check;
	do
	{
		system("cls");
		cout << "\n=====QUAN LY HOC SINH=====" << endl;
		cout << "\n1. Them hoc sinh vao danh sach";
		cout << "\n2. Xem danh sach cac hoc sinh";
		cout << "\n3. Thoat";
		cout << "\nLua chon cua ban la : ";
		cin >> check;
		cin.ignore();
		switch (check)
		{
		case 1:
		{
			quanlyhocsinh.ThemHocSinh();
			break;
		}
		case 2:
		{
			quanlyhocsinh.XuatDanhSach();
			system("pause");
			break;
		}
		case 3:
		{
			break;
		}
		default:
			cout << "Gia tri khong hop le" << endl;
			system("pause");
		}

	} while (check != 3);
}

int main()
{
	Menu();

	return 0;
}