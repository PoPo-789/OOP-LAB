#include "Vehicle.h"

cVehicle::cVehicle()
{
    maChuyen = "";
    hoTenTaiXe = "";
    soXe = "";
    doanhThu = 0;
}

cVehicle::cVehicle(string maChuyen, string hoTenTaiXe, string soXe, int doanhThu)
{
    this->maChuyen = maChuyen;
    this->hoTenTaiXe = hoTenTaiXe;
    this->soXe = soXe;
    this->doanhThu = doanhThu;
}

void cVehicle::nhapThongTin()
{
    cout << "Nhap ma chuyen: ";
    cin >> maChuyen;
    cout << "Nhap ho ten tai xe: ";
    cin.ignore();
    getline(cin, hoTenTaiXe);
    cout << "Nhap so xe: ";
    cin >> soXe;
    cout << "Nhap doanh thu: ";
    cin >> doanhThu;
}

void cVehicle::xuatThongTin() const
{
    cout << "Ma so chuyen: " << maChuyen << endl;
    cout << "Ho ten tai xe: " << hoTenTaiXe << endl;
    cout << "So xe: " << soXe << endl;
    cout << "Doanh thu: " << doanhThu << endl;
}

