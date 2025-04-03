#include "GioPhutGiay.cpp"

int main()
{
    GioPhutGiay n;
    n.Nhap();
    cout << "Gio phut giay ban da nhap: ";
    n.Xuat();
    cout << "Gio phut giay sau khi cong them 1 giay: ";
    n.TinhCongThemMotGiay().Xuat();
}