#include "GioPhutGiay.h"

GioPhutGiay::GioPhutGiay() // Khoi tao gio phut giay
{
    iGio = 0;
    iPhut = 0;
    iGiay = 0;
}

GioPhutGiay::GioPhutGiay(int iGio, int iPhut, int iGiay) // Khoi tao gio phut giay
{
    this->iGio = iGio;
    this->iPhut = iPhut;
    this->iGiay = iGiay;
}

bool GioPhutGiay::KiemTraGioPhutGiayHopLe() // Kiem tra gio phut giay hop le
{
    if (iGio < 0 || iPhut < 0 || iGiay < 0 || iPhut >= 60 || iGiay >= 60 || iGio >= 24) {
        return false;
    }
    return true;
}

void GioPhutGiay::Nhap() // Nhap gio phut giay
{
    while (true) {
        cout << "Nhap gio: ";
        cin >> iGio;
        cout << "Nhap phut: ";
        cin >> iPhut;
        cout << "Nhap giay: ";
        cin >> iGiay;
        if (KiemTraGioPhutGiayHopLe()) {
            break;
        } else {
            cout << "Gio phut giay khong hop le. Vui long nhap lai." << endl;
        }
    }
}

void GioPhutGiay::Xuat() // Xuat gio phut giay
{
    cout << iGio << " gio " << iPhut << " phut " << iGiay << " giay" << endl;
}

GioPhutGiay GioPhutGiay::TinhCongThemMotGiay() // Tinh cong them 1 giay
{
    iGiay++;
    if (iGiay >= 60) {
        iGiay = 0;
        iPhut++;
        if (iPhut >= 60) {
            iPhut = 0;
            iGio++;
            if (iGio >= 24) {
                iGio = 0;
            }
        }
    }
    return *this;
}
