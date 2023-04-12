#include<stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    // minimum
    if (x <= y && x <=z){
        printf("%d ", x);
    }
    else if (y <= x && y <=z){
        printf("%d ", y);
    }
    else {
        printf("%d ", z);
    }

    // maximum
    if (x >= y && x >=z){
        printf("%d", x);
    }
    else if (y >= x && y >=z){
        printf("%d", y);
    }
    else {
        printf("%d", z);
    }

    // if (x >= y && x >= z) {
    //     if (y <= z) {
    //         printf("%d %d", y, x);
    //     } else {
    //         printf("%d %d", z, x);
    //     }
    // }
    // else if (y >= x && y >= z){
    //     if (x <= z){
    //         printf("%d %d", x, y);
    //     } else {
    //         printf("%d %d", z, y);
    //     }
    // }
    // else {
    //     if (x <= y){
    //         printf("%d %d", x, z);
    //     } else {
    //         printf("%d %d", y, z);
    //     }
    // }
    return 0;
}