#include <stdio.h>

int so_ngay_trong_thang(int thang, int nam) {
    int so_ngay;
    if (thang == 2) {
        if (nam % 4 == 0 && (nam % 100 != 0 || nam % 400 == 0)) {
            so_ngay = 29; 
        } else {
            so_ngay = 28;
        }
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        so_ngay = 30;
    } else {
        so_ngay = 31;
    }
    return so_ngay;
}

int main() {
    int nam, thang;

    printf("Nhap nam: ");
    scanf("%d", &nam);

    printf("Nhap thang (1-12): ");
    scanf("%d", &thang);

    while (thang < 1 || thang > 12) {
        printf("Thang khong hop le. Vui long nhap lai: ");
        scanf("%d", &thang);
    }

    int so_ngay = so_ngay_trong_thang(thang, nam);
    printf("Thang %d nam %d co %d ngay.\n", thang, nam, so_ngay);

    return 0;
}