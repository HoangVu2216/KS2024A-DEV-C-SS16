#include <stdio.h>

int timKiemPhanTu(int arr[], int kichThuoc, int giaTri) {
    for (int i = 0; i < kichThuoc; i++) {
        if (arr[i] == giaTri) {
            return i;
        }
    }
    return -1;
}

int main() {
    int mang[] = {1, 2, 4, 5, 6, 7};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    int giaTriCanTim = 7;

    int viTri = timKiemPhanTu(mang, kichThuoc, giaTriCanTim);

    if (viTri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", giaTriCanTim, viTri);
    } else {
        printf("Phan tu %d khong co trong mang.\n", giaTriCanTim);
    }

    return 0;
}

