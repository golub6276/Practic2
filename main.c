#include <stdio.h>

int NSD(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int NSK(int a, int b) {
    return (a * b) / NSD(a, b);
}

int main() {
    int p;
    printf("Enter the quantity of elements: ");
    scanf("%d", &p);

    int num[p];
    printf("Enter the elements: ");
    for (int i = 0; i < p; i++) {
        scanf("%d", &num[i]);
    }

    int res = num[0];
    for (int i = 1; i < p; i++) {
        res = NSK(res, num[i]);
    }

    printf("NSK of this %d number is: %d\n",p, res);

    return 0;
}
