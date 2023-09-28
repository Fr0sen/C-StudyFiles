//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdio>
//#include <vector>
//using namespace std;
//
//int main() {
//    double polonomial[1001] = { 0 };
//    int k;
//    scanf("%d", &k);
//    while (k--) {
//        int n;
//        double d;
//        scanf("%d%lf", &n, &d);
//        polonomial[n] += d;
//    }
//    scanf("%d", &k);
//    while (k--) {
//        int n;
//        double d;
//        scanf("%d%lf", &n, &d);
//        polonomial[n] += d;
//    }
//    int sum = 0;
//    for (int i = 0; i <= 1000; i++) {
//        if (polonomial[i] != 0)sum++;
//    }
//    printf("%d", sum);
//    for (int i = 1000; i >= 0; i--) {
//        if (polonomial[i] != 0) {
//            printf(" %d %.1f", i, polonomial[i]);
//        }
//    }
//}