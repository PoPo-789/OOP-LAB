#include <iostream>
using namespace std;

class NgayThangNam
{
    private:
        int iNgay, iThang, iNam;
    public:
        void Nhap();
        void Xuat();
        void NgayThangNamTiepTheo();
};

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    if (month == 2) return isLeapYear(year) ? 29 : 28;
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}
