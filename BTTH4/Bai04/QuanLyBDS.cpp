#include "QuanLyBDS.h"

void QuanLyBDS::NhapDSBDSDat()
{
    int n;
    cout << "Nhap so luong giao dich dat: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        BDSDat bdsDat;
        bdsDat.Nhap();
        dsBDSDat.push_back(bdsDat);
    }
}

void QuanLyBDS::NhapDSBDSChungCu()
{
    int n;
    cout << "Nhap so luong giao dich chung cu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        BDSChungCu bdsChungCu;
        bdsChungCu.Nhap();
        dsBDSChungCu.push_back(bdsChungCu);
    }
}

void QuanLyBDS::NhapDSBDSNha()
{
    int n;
    cout << "Nhap so luong giao dich nha: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        BDSNha bdsNha;
        bdsNha.Nhap();
        dsBDSNha.push_back(bdsNha);
    }
}

void QuanLyBDS::TongSoLuongBDSDat()
{
    cout << "Tong so luong giao dich dat: " << dsBDSDat.size() << endl;
}

void QuanLyBDS::TongSoLuongBDSChungCu()
{
    cout << "Tong so luong giao dich chung cu: " << dsBDSChungCu.size() << endl;
}

void QuanLyBDS::TongSoLuongBDSNha()
{
    cout << "Tong so luong giao dich nha: " << dsBDSNha.size() << endl;
}

void QuanLyBDS::TrungBinhThanhTienBDSChungCu()
{
    if (dsBDSChungCu.empty())
    {
        cout << "Khong co giao dich chung cu nao!" << endl;
        return;
    }
    double tongThanhTien = 0;
    for (int i = 0; i < dsBDSChungCu.size(); i++)
    {
        tongThanhTien += dsBDSChungCu[i].thanhTien();
    }
    double trungBinh = tongThanhTien / dsBDSChungCu.size();
    cout << "Trung binh thanh tien giao dich chung cu: " << trungBinh << endl;
}

void QuanLyBDS::BDSNhaCoGiaTriCaoNhat()
{
    if (dsBDSNha.empty())
    {
        cout << "Khong co giao dich nha nao!" << endl;
        return;
    }
    double maxGiaTri = 0;
    int index = -1;
    for (int i = 0; i < dsBDSNha.size(); i++)
    {
        if (dsBDSNha[i].thanhTien() > maxGiaTri)
        {
            maxGiaTri = dsBDSNha[i].thanhTien();
            index = i;
        }
    }
    cout << "Giao dich nha co gia tri cao nhat:" << endl;
    dsBDSNha[index].Xuat();
}

void QuanLyBDS::TimDSGiaoDichTheoNgay()
{
    string ngay;
    cout << "Nhap ngay can tim: ";
    cin >> ngay;
    cout << "Danh sach giao dich theo ngay " << ngay << ":" << endl;
    for (int i = 0; i < dsBDSDat.size(); i++)
    {
        if (dsBDSDat[i].getNgayGD() == ngay)
        {
            dsBDSDat[i].Xuat();
            cout << endl;
        }
    }
    for (int i = 0; i < dsBDSChungCu.size(); i++)
    {
        if (dsBDSChungCu[i].getNgayGD() == ngay)
        {
            dsBDSChungCu[i].Xuat();
            cout << endl;
        }
    }
    for (int i = 0; i < dsBDSNha.size(); i++)
    {
        if (dsBDSNha[i].getNgayGD() == ngay)
        {
            dsBDSNha[i].Xuat();
            cout << endl;
        }
    }
}

void QuanLyBDS::Menu()
{
    while (true)
    {
        cout << "**************** MENU ****************" << endl;
        cout << "1. Nhap danh sach giao dich dat" << endl;
        cout << "2. Nhap danh sach giao dich chung cu" << endl;
        cout << "3. Nhap danh sach giao dich nha" << endl;
        cout << "4. Tong so luong giao dich dat" << endl;
        cout << "5. Tong so luong giao dich chung cu" << endl;
        cout << "6. Tong so luong giao dich nha" << endl;
        cout << "7. Trung binh thanh tien giao dich chung cu" << endl;
        cout << "8. Giao dich nha co gia tri cao nhat" << endl;
        cout << "9. Tim danh sach giao dich theo ngay" << endl;
        cout << "10. Thoat" << endl;
        cout << "**************************************" << endl;
        cout << "Chon chuc nang: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
            case 1:
                NhapDSBDSDat();
                break;
            case 2:
                NhapDSBDSChungCu();
                break;
            case 3: 
                NhapDSBDSNha();
                break;
            case 4:
                TongSoLuongBDSDat();
                break;
            case 5: 
                TongSoLuongBDSChungCu();
                break;
            case 6:         
                TongSoLuongBDSNha();
                break;  
            case 7:
                TrungBinhThanhTienBDSChungCu();
                break;
            case 8:
                BDSNhaCoGiaTriCaoNhat();
                break;
            case 9:
                TimDSGiaoDichTheoNgay();
                break;
            case 10:
                cout << "Hen gap lai!" << endl;
                return;
            default:
                cout << "Lua chon khong hop le!" << endl;
                break;
        }
    }
}
