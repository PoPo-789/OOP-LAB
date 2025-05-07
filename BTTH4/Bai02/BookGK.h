#include "Book.h"


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