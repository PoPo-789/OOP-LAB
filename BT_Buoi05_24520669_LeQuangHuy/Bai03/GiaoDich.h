#include <bits/stdc++.h>
using namespace std;

class GiaoDich
{
    private:
        string maGD;
        string ngayGD;
        long long soLuong;
        long long donGia;
    public:
        GiaoDich();
        GiaoDich(string maGD, string ngayGD, long long soLuong, long long donGia);
        void Nhap();
        void Xuat() const;
        long long getSoLuong() const { return soLuong; } 
        long long getDonGia() const { return donGia; }
};

class GiaoDichVang : public GiaoDich
{
    private:
        string loaiVang;
    public:
        GiaoDichVang();
        GiaoDichVang(string maGD, string ngayGD, long long soLuong, long long donGia, string loaiVang);
        void Nhap();
        void Xuat() const;
};

class GiaoDichTienTe : public GiaoDich
{
    private:
        string loaiTienTe;
        long long tyGia;
    public:
        GiaoDichTienTe();
        GiaoDichTienTe(string maGD, string ngayGD, long long soLuong, long long donGia, string loaiTienTe, long long tyGia);
        void Nhap();
        long long thanhTien(); 
        string getLoaiTienTe() const { return loaiTienTe; }
        void Xuat() const;
};

class QuanLy
{
    private:
        vector<GiaoDichVang> dsGiaoDichVang;
        vector<GiaoDichTienTe> dsGiaoDichTienTe;
    public:
        void NhapDSGiaoDichVang();
        void NhapDSGiaoDichTienTe();
        void XuatDSGiaoDichVang() const;
        void XuatDSGiaoDichTienTe() const;
        void GiaoDichVangThanhTienCaoNhat();
        void GiaoDichEuroThanhTienThapNhat();
        void GiaoDichTren1Ty();
        void Menu();
};