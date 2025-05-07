#include "BDS.h"

BDS::BDS()
{
    maGD = "";
    ngayGD = "";
    donGia = 0;
    dienTich = 0;
}

BDS::BDS(string maGD, string ngayGD, long long donGia, double dienTich)
{
    this->maGD = maGD;
    this->ngayGD = ngayGD;
    this->donGia = donGia;
    this->dienTich = dienTich;
}

void BDS::Nhap()
{
    cout << "Nhap ma giao dich: ";
    cin >> maGD;
    cout << "Nhap ngay giao dich: ";
    cin >> ngayGD;
    cout << "Nhap don gia: ";
    cin >> donGia;
    cout << "Nhap dien tich: ";
    cin >> dienTich;
}

void BDS::Xuat() const
{
    cout << "Ma giao dich: " << maGD << endl;
    cout << "Ngay giao dich: " << ngayGD << endl;
    cout << "Don gia: " << donGia << endl;
    cout << "Dien tich: " << dienTich << endl;
}

BDSDat::BDSDat()
{
    loaiDat = ' ';
}

BDSDat::BDSDat(string maGD, string ngayGD, long long donGia, double dienTich, char loaiDat) : BDS(maGD, ngayGD, donGia, dienTich)
{
    this->loaiDat = loaiDat;
}

void BDSDat::Nhap()
{
    BDS::Nhap();
    cout << "Nhap loai dat (A/B/C): ";
    cin >> loaiDat;
}

void BDSDat::Xuat() const
{
    BDS::Xuat();
    cout << "Loai dat: " << loaiDat << endl;
}

double BDSDat::thanhTien()
{
    if (loaiDat == 'A') 
        return getDonGia() * getDienTich() * 1.5;
    else 
        return getDonGia() * getDienTich();
}

BDSChungCu::BDSChungCu()
{
    maCanHo = "";
    tang = 0;
}

BDSChungCu::BDSChungCu(string maGD, string ngayGD, long long donGia, double dienTich, string maCanHo, int tang) : BDS(maGD, ngayGD, donGia, dienTich)
{
    this->maCanHo = maCanHo;
    this->tang = tang;
}

void BDSChungCu::Nhap()
{
    BDS::Nhap();
    cout << "Nhap ma can ho: ";
    cin >> maCanHo;
    cout << "Nhap tang: ";
    cin >> tang;
}

void BDSChungCu::Xuat() const
{
    BDS::Xuat();
    cout << "Ma can ho: " << maCanHo << endl;
    cout << "Tang: " << tang << endl;
}

double BDSChungCu::thanhTien()
{
    if (tang == 1) 
        return getDonGia() * getDienTich() * 2;
    else if (tang >= 15)
        return getDonGia() * getDienTich() * 1.2;
    else 
        return getDonGia() * getDienTich();
}

BDSNha::BDSNha()
{
    loaiNha = "";
    diaChi = "";
}

BDSNha::BDSNha(string maGD, string ngayGD, long long donGia, double dienTich, string loaiNha, string diaChi) : BDS(maGD, ngayGD, donGia, dienTich)
{
    this->loaiNha = loaiNha;
    this->diaChi = diaChi;
}

void BDSNha::Nhap()
{
    BDS::Nhap();
    cout << "Nhap loai nha: ";
    cin.ignore();
    getline(cin, loaiNha);
    cout << "Nhap dia chi: ";
    getline(cin, diaChi);
}

void BDSNha::Xuat() const
{
    BDS::Xuat();
    cout << "Loai nha: " << loaiNha << endl;
    cout << "Dia chi: " << diaChi << endl;
}

double BDSNha::thanhTien()
{
    if (loaiNha == "cao cap") 
        return getDonGia() * getDienTich();
    else 
        return getDonGia() * getDienTich() * 0.9;
}

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
