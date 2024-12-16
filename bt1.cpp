#include <stdio.h>

int main() {
    int number;
     printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("So ban vua nhap la mot so duong.\n");
    } else if (number < 0) {
        printf("So ban vua nhap la mot so am.\n");
    } else {
        printf("So ban vua nhap la so 0.\n");
    }

    return 0;
}
