#include <bits/stdc++.h>
using namespace std;

class BDS
{
    private:
        string maGD;
        string ngayGD;
        long long donGia;
        double dienTich;
    public:
        BDS();
        BDS(string maGD, string ngayGD, long long donGia, double dienTich);
        void Nhap();
        void Xuat() const;
        long long getDonGia() const { return donGia; }
        double getDienTich() const { return dienTich; }
        string getNgayGD() const { return ngayGD; }
};

class BDSDat : public BDS
{
    private:
        char loaiDat;
    public:
        BDSDat();
        BDSDat(string maGD, string ngayGD, long long donGia, double dienTich, char loaiDat);
        void Nhap();
        void Xuat() const;
        double thanhTien();
};

class BDSChungCu : public BDS
{
    private:
        string maCanHo;
        int tang;
    public:
        BDSChungCu();
        BDSChungCu(string maGD, string ngayGD, long long donGia, double dienTich, string maCanHo, int tang);
        void Nhap();
        void Xuat() const;
        double thanhTien();
};

class BDSNha : public BDS
{
    private:
        string loaiNha;
        string diaChi;
    public:
        BDSNha();
        BDSNha(string maGD, string ngayGD, long long donGia, double dienTich, string loaiNha, string diaChi);
        void Nhap();
        void Xuat() const;
        double thanhTien();
};

class QuanLyBDS
{
    private:
        vector<BDSDat> dsBDSDat;
        vector<BDSChungCu> dsBDSChungCu;
        vector<BDSNha> dsBDSNha;
    public:
        void NhapDSBDSDat();
        void NhapDSBDSChungCu();
        void NhapDSBDSNha();
        void TongSoLuongBDSDat();
        void TongSoLuongBDSChungCu();
        void TongSoLuongBDSNha();
        void TrungBinhThanhTienBDSChungCu();
        void BDSNhaCoGiaTriCaoNhat();
        void TimDSGiaoDichTheoNgay();
        void Menu();
};