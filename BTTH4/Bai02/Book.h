#include <bits/stdc++.h>
using namespace std;

class Book
{
    private:
        string maSach;
        string ngayNhap;
        double donGia;
        int soLuong;
        string nhaXuatBan;
    public:
        Book();
        Book(string, string, double, int, string);
        void nhapThongTin();
        void xuatThongTin() const;
        int getSoLuong() const { return soLuong; }
        double getDonGia() const { return donGia; }
        string getnhaXuatBan() const { return nhaXuatBan; }
};

class BookGK : public Book
{
    private:
        string tinhTrang;
    public:
        BookGK();
        BookGK(string, string, double, int, string, string);
        void nhapThongTin();
        void xuatThongTin() const;
        double tinhThanhTien();
};

class BookTK : public Book
{
    private:
        int Thue;
    public:
        BookTK();
        BookTK(string, string, double, int, string, int);
        void nhapThongTin();
        void xuatThongTin() const;
        double tinhThanhTien();
};

class QuanLy
{
    private:
        vector<BookGK> dsGK;
        vector<BookTK> dsTK;
    public:
        void tinhTongThanhTienGK();
        void tinhTongThanhTienTK();
        void trungbinhDonGiaTK();
        void timsachtheoNXB();
        void menu();
};