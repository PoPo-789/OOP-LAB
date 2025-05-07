#include "QuanLyVehicle.h"

void QuanLy::tinhTongDoanhThu() const
{
    int sum = 0;
    for (int i = 0; i < dsNoiThanh.size(); i++)
    {
        sum += dsNoiThanh[i].getDoanhThu();
    }
    for (int i = 0; i < dsNgoaiThanh.size(); i++)
    {
        sum += dsNgoaiThanh[i].getDoanhThu();
    }
    cout << "Tong doanh thu: " << sum << endl;
}

void QuanLy::tinhTongDoanhThuNoiThanh() const
{
    int sum = 0;
    for (int i = 0; i < dsNoiThanh.size(); i++)
    {
        sum += dsNoiThanh[i].getDoanhThu();
    }
    cout << "Tong doanh thu noi thanh: " << sum << endl;
}

void QuanLy::tinhTongDoanhThuNgoaiThanh() const
{
    int sum = 0;
    for (int i = 0; i < dsNgoaiThanh.size(); i++)
    {
        sum += dsNgoaiThanh[i].getDoanhThu();
    }
    cout << "Tong doanh thu ngoai thanh: " << sum << endl;
}

void QuanLy::menu()
{
    while (true) {
        cout << "************* Menu *************" << endl;
        cout << "1. Nhap thong tin xe noi thanh" << endl;
        cout << "2. Nhap thong tin xe ngoai thanh" << endl;
        cout << "3. Xuat thong tin xe noi thanh" << endl;
        cout << "4. Xuat thong tin xe ngoai thanh" << endl;
        cout << "5. Tinh tong doanh thu" << endl;
        cout << "6. Tinh tong doanh thu xe noi thanh" << endl;
        cout << "7. Tinh tong doanh thu xe ngoai thanh" << endl;
        cout << "8. Thoat" << endl;
        cout << "*********************************" << endl;
        cout << "Chon chuc nang: ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: {
                int n;
                cout << "Nhap so luong xe noi thanh: ";
                cin >> n;
                for (int i = 0; i < n; i++)
                {
                    cInVehicle inVehicle;
                    inVehicle.nhapThongTin();
                    dsNoiThanh.push_back(inVehicle);
                }
                break;
            }
            case 2: {
                int n;
                cout << "Nhap so luong xe ngoai thanh: ";
                cin >> n;
                for (int i = 0; i < n; i++)
                {
                    cOutVehicle outVehicle;
                    outVehicle.nhapThongTin();
                    dsNgoaiThanh.push_back(outVehicle);
                }
                break;
            }
            case 3: {
                for (int i = 0; i < dsNoiThanh.size(); i++)
                {
                    dsNoiThanh[i].xuatThongTin();
                    cout << endl;
                }
                break;
            }
            case 4: {
                for (int i = 0; i < dsNgoaiThanh.size(); i++)
                {
                    dsNgoaiThanh[i].xuatThongTin();
                    cout << endl;
                }
                break;
            }
            case 5: {
                tinhTongDoanhThu();
                break;
            }
            case 6: {
                tinhTongDoanhThuNoiThanh();
                break;
            }
            case 7: {
                tinhTongDoanhThuNgoaiThanh();
                break;
            }
            case 8: {
                cout << "Hen gap lai!" << endl;
                return;
            }
            default:
                cout << "Chuc nang khong hop le. Vui long chon lai." << endl;
        }
    }
}