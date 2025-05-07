#include "QuanLyGiaoDich.h"



void QuanLy::NhapDSGiaoDichVang()
{
    int n;
    cout << "Nhap so luong giao dich vang: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        GiaoDichVang gdv;
        gdv.Nhap();
        dsGiaoDichVang.push_back(gdv);
    }
}

void QuanLy::NhapDSGiaoDichTienTe()
{
    int n;
    cout << "Nhap so luong giao dich tien te: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        GiaoDichTienTe gdt;
        gdt.Nhap();
        dsGiaoDichTienTe.push_back(gdt);
    }
}

void QuanLy::XuatDSGiaoDichVang() const
{
    cout << "Danh sach giao dich vang:" << endl;
    for (int i = 0; i < dsGiaoDichVang.size(); i++)
    {
        dsGiaoDichVang[i].Xuat();
        cout << endl;
    }
}

void QuanLy::XuatDSGiaoDichTienTe() const
{
    cout << "Danh sach giao dich tien te:" << endl;
    for (int i = 0; i < dsGiaoDichTienTe.size(); i++)
    {
        dsGiaoDichTienTe[i].Xuat();
        cout << endl;
    }
}

void QuanLy::GiaoDichVangThanhTienCaoNhat()
{
    if (dsGiaoDichVang.empty())
    {
        cout << "Khong co giao dich vang nao!" << endl;
        return;
    }
    long long maxThanhTien = 0;
    int index = -1;
    for (int i = 0; i < dsGiaoDichVang.size(); i++)
    {
        long long thanhTien = dsGiaoDichVang[i].getSoLuong() * dsGiaoDichVang[i].getDonGia();
        if (thanhTien > maxThanhTien)
        {
            maxThanhTien = thanhTien;
            index = i;
        }
    }
    cout << "Giao dich vang co thanh tien cao nhat:" << endl;
    dsGiaoDichVang[index].Xuat();
}

long long GiaoDichTienTe::thanhTien()
{
    if (loaiTienTe == "Euro")
    {
        return getSoLuong() * getDonGia() * tyGia;
    }
    else if (loaiTienTe == "USD")
    {
        return getSoLuong() * getDonGia() * tyGia;
    }
    else if (loaiTienTe == "VND")
    {
        return getSoLuong() * getDonGia();
    }
}

void QuanLy::GiaoDichEuroThanhTienThapNhat()
{
    if (dsGiaoDichTienTe.empty())
    {
        cout << "Khong co giao dich tien te nao!" << endl;
        return;
    }
    long long minThanhTien = 1e18;
    int index = -1;
    for (int i = 0; i < dsGiaoDichTienTe.size(); i++)
    {
        if (dsGiaoDichTienTe[i].thanhTien() < minThanhTien && dsGiaoDichTienTe[i].getLoaiTienTe() == "Euro")
        {
            minThanhTien = dsGiaoDichTienTe[i].thanhTien();
            index = i;
        }
    }
    cout << "Giao dich Euro co thanh tien thap nhat:" << endl;
    dsGiaoDichTienTe[index].Xuat();
}

void QuanLy::GiaoDichTren1Ty()
{
    cout << "Danh sach giao dich co thanh tien tren 1 ty:" << endl;
    for (int i = 0; i < dsGiaoDichTienTe.size(); i++)
    {
        if (dsGiaoDichTienTe[i].thanhTien() > 1000000000)
        {
            dsGiaoDichTienTe[i].Xuat();
            cout << endl;
        }
    }
}

void QuanLy::Menu()
{
    while (true) 
    {
        cout << "***************** MENU *****************" << endl;
        cout << "1. Nhap danh sach giao dich vang" << endl;
        cout << "2. Nhap danh sach giao dich tien te" << endl;
        cout << "3. Xuat danh sach giao dich vang" << endl;
        cout << "4. Xuat danh sach giao dich tien te" << endl;
        cout << "5. Giao dich vang co thanh tien cao nhat" << endl;
        cout << "6. Giao dich Euro co thanh tien thap nhat" << endl;
        cout << "7. Giao dich co thanh tien tren 1 ty" << endl;
        cout << "8. Thoat" << endl;
        cout << "***************************************" << endl;
        cout << "Chon chuc nang: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
            case 1:
                NhapDSGiaoDichVang();
                break;
            case 2:
                NhapDSGiaoDichTienTe();
                break;
            case 3:
                XuatDSGiaoDichVang();
                break;
            case 4:
                XuatDSGiaoDichTienTe();
                break;
            case 5:
                GiaoDichVangThanhTienCaoNhat();
                break;
            case 6:
                GiaoDichEuroThanhTienThapNhat();
                break;
            case 7:
                GiaoDichTren1Ty();
                break;
            case 8:
                cout << "Hen gap lai!" << endl;
                return;
            default:
                cout << "Chuc nang khong hop le! Vui long chon lai." << endl;
                break;
        }
    }
}

