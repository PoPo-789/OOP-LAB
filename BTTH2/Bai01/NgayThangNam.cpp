#include "NgayThangNam.h"

void NgayThangNam::Nhap() {
    cout << "Nhap vao ngay thang nam: ";
    cin >> iNgay >> iThang >> iNam;
}

void NgayThangNam::Xuat() {
    cout << iNgay << '/' << iThang << '/' << iNam;
    cout << '\n';
}

void NgayThangNam::NgayThangNamTiepTheo() {
    int nextDay, nextMonth, nextYear;
    if (iNgay < daysInMonth(iThang, iNam)) {
        nextDay = iNgay + 1;
        nextMonth = iThang;
        nextYear = iNam;
    } else {
        nextDay = 1;
        if (iThang < 12) {
            nextMonth = iThang + 1;
            nextYear = iNam;
        } else {
            nextMonth = 1;
            nextYear = iNam + 1;
        }
    }
    cout << "Ngay tiep theo la: ";
    cout << nextDay << '/' << nextMonth << '/' << nextYear;

}