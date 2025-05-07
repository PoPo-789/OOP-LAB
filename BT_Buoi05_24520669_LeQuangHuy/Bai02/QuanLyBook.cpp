#include "QuanLyBook.h"



void QuanLy::tinhTongThanhTienGK()
{
    double tong = 0;
    for (int i = 0; i < dsGK.size(); i++)
    {
        tong += dsGK[i].tinhThanhTien();
    }
    cout << "Tong thanh tien sach giao khoa: " << tong << endl;
}

void QuanLy::tinhTongThanhTienTK()
{
    double tong = 0;
    for (int i = 0; i < dsTK.size(); i++)
    {
        tong += dsTK[i].tinhThanhTien();
    }
    cout << "Tong thanh tien sach tham khao: " << tong << endl;
}

void QuanLy::trungbinhDonGiaTK()
{
    double tong = 0;
    for (int i = 0; i < dsTK.size(); i++)
    {
        tong += dsTK[i].getDonGia();
    }
    cout << "Trung binh don gia sach tham khao: " << tong / dsTK.size() << endl;
}

void QuanLy::timsachtheoNXB()
{
    string nxb;
    cout << "Nhap nha xuat ban can tim: ";
    cin.ignore();
    getline(cin, nxb);
    cout << "Sach co nha xuat ban " << nxb << " la: " << endl;
    for (int i = 0; i < dsGK.size(); i++)
    {
        if (dsGK[i].getnhaXuatBan() == nxb)
        {
            dsGK[i].xuatThongTin();
        }
    }
    for (int i = 0; i < dsTK.size(); i++)
    {
        if (dsTK[i].getnhaXuatBan() == nxb)
        {
            dsTK[i].xuatThongTin();
        }
    }
}

void QuanLy::menu()
{
    while (true)
    {
        cout << "*************** MENU ***************" << endl;
        cout << "1. Nhap danh sach sach giao khoa" << endl;
        cout << "2. Nhap danh sach sach tham khao" << endl;
        cout << "3. Xuat danh sach sach giao khoa" << endl;
        cout << "4. Xuat danh sach sach tham khao" << endl;
        cout << "5. Tinh tong thanh tien sach giao khoa" << endl;
        cout << "6. Tinh tong thanh tien sach tham khao" << endl;
        cout << "7. Tinh trung binh don gia sach tham khao" << endl;
        cout << "8. Tim sach theo nha xuat ban" << endl;
        cout << "9. Thoat" << endl;
        cout << "************************************" << endl;
        cout << "Chon chuc nang: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
            case 1: {
                int n;
                cout << "Nhap so luong sach giao khoa: ";
                cin >> n;
                for (int i = 0; i < n; i++)
                {
                    BookGK bookGK;
                    bookGK.nhapThongTin();
                    dsGK.push_back(bookGK);
                }
                break;
            }
            case 2: {
                int n;
                cout << "Nhap so luong sach tham khao: ";
                cin >> n;
                for (int i = 0; i < n; i++)
                {
                    BookTK bookTK;
                    bookTK.nhapThongTin();
                    dsTK.push_back(bookTK);
                }
                break;
            }
            case 3: {
                for (int i = 0; i < dsGK.size(); i++)
                {
                    dsGK[i].xuatThongTin();
                    cout << endl;
                }
                break;
            }
            case 4: {
                for (int i = 0; i < dsTK.size(); i++)
                {
                    dsTK[i].xuatThongTin();
                    cout << endl;
                }
                break;
            } 
            case 5: {
                tinhTongThanhTienGK();
                break;
            }
            case 6: {
                tinhTongThanhTienTK();
                break;
            }
            case 7: {
                trungbinhDonGiaTK();
                break;
            }
            case 8: {
                timsachtheoNXB();
                break;
            }
            case 9: {
                cout << "Hen gap lai!" << endl;
                return;
            }
            default:
                cout << "Lua chon khong hop le!" << endl;
                break;
        }
    }
}