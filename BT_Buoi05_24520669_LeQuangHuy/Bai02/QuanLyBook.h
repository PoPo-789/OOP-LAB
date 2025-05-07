#include "Book.h"

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