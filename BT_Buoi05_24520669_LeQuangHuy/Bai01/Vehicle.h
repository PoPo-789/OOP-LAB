#include <bits/stdc++.h>
using namespace std;

class cVehicle
{
    private: 
        string maChuyen;
        string hoTenTaiXe;
        string soXe;
        int doanhThu;
    public:
        cVehicle();
        cVehicle(string, string, string, int);
        void nhapThongTin();
        void xuatThongTin() const;
        int getDoanhThu() const { return doanhThu; }
};

class cInVehicle : public cVehicle
{
    private:
        int soTuyen;
        double soKmDiDuoc;
    public:
        cInVehicle();
        cInVehicle(string, string, string, int, int, double);
        void nhapThongTin();
        void xuatThongTin() const;
};

class cOutVehicle : public cVehicle
{
    private:
        string noiDen;
        int soNgayDiDuoc;
    public:
        cOutVehicle();
        cOutVehicle(string, string, string, int, string, int);
        void nhapThongTin();
        void xuatThongTin() const;
};

class QuanLy
{
    private:
        vector<cInVehicle> dsNoiThanh;
        vector<cOutVehicle> dsNgoaiThanh;
    public:
        void tinhTongDoanhThu() const;
        void tinhTongDoanhThuNoiThanh() const;
        void tinhTongDoanhThuNgoaiThanh() const;
        void menu();
};