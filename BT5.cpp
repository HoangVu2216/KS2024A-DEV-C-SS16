	#include <stdio.h>

void capNhatPhanTu(int arr[], int kichThuoc, int giaTriMoi, int viTri) {
    if (viTri < 0 || viTri >= kichThuoc) {
        printf("Vi tri cap nhat khong hop le.\n");
        return;
    }
    arr[viTri] = giaTriMoi;
}

void inMang(int arr[], int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang ban dau: ");
    inMang(mang, kichThuoc);

    int giaTriMoi = 10;
    int viTri = 2;

    capNhatPhanTu(mang, kichThuoc, giaTriMoi, viTri);

    printf("Mang sau khi cap nhat: ");
    inMang(mang, kichThuoc);

    return 0;
}

