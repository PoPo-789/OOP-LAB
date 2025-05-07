#include "Book.h"

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