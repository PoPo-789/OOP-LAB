#include "Book.h"

Book::Book()
{
    maSach = "";
    ngayNhap = "";
    donGia = 0.0;
    soLuong = 0;
    nhaXuatBan = "";
}

Book::Book(string maSach, string ngayNhap, double donGia, int soLuong, string nhaXuatBan)
{
    this->maSach = maSach;
    this->ngayNhap = ngayNhap;
    this->donGia = donGia;
    this->soLuong = soLuong;
    this->nhaXuatBan = nhaXuatBan;
}

void Book::nhapThongTin()
{
    cout << "Nhap ma sach: ";
    cin >> maSach;
    cout << "Nhap ngay nhap: ";
    cin >> ngayNhap;
    cout << "Nhap don gia: ";
    cin >> donGia;
    cout << "Nhap so luong: ";
    cin >> soLuong;
    cout << "Nhap nha xuat ban: ";
    cin.ignore();
    getline(cin, nhaXuatBan);
}

void Book::xuatThongTin() const
{
    cout << "Ma sach: " << maSach << endl;
    cout << "Ngay nhap: " << ngayNhap << endl;
    cout << "Don gia: " << donGia << endl;
    cout << "So luong: " << soLuong << endl;
    cout << "Nha xuat ban: " << nhaXuatBan << endl;
}

BookGK::BookGK()
{
    tinhTrang = "";
}

BookGK::BookGK(string maSach, string ngayNhap, double donGia, int soLuong, string nhaXuatBan, string tinhTrang) : Book(maSach, ngayNhap, donGia, soLuong, nhaXuatBan)
{
    this->tinhTrang = tinhTrang;
}

void BookGK::nhapThongTin()
{
    Book::nhapThongTin();
    cout << "Nhap tinh trang: ";
    cin >> tinhTrang;
}

void BookGK::xuatThongTin() const
{
    Book::xuatThongTin();
    cout << "Tinh trang: " << tinhTrang << endl;
}

double BookGK::tinhThanhTien()
{
    if (tinhTrang == "moi")
        return getDonGia() * getSoLuong();
    else if (tinhTrang == "cu")
        return getDonGia() * getSoLuong() * 0.5;
    else
        return 0; 
}

BookTK::BookTK()
{
    Thue = 0;
}

BookTK::BookTK(string maSach, string ngayNhap, double donGia, int soLuong, string nhaXuatBan, int Thue) : Book(maSach, ngayNhap, donGia, soLuong, nhaXuatBan)
{
    this->Thue = Thue;
}

void BookTK::nhapThongTin()
{
    Book::nhapThongTin();
    cout << "Nhap thue: ";
    cin >> Thue;
}

void BookTK::xuatThongTin() const
{
    Book::xuatThongTin();
    cout << "Thue: " << Thue << endl;
}

double BookTK::tinhThanhTien()
{
    return getDonGia() * getSoLuong() + Thue;
}

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