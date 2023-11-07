#include <stdio.h>

float findrt(int k) {
    int s = 0;
    int e = k;
    float ans = 0;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (mid * mid <= k) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    while (ans * ans < k) {
        ans += 0.001;
    }

    return ans;
}

int main() {
    for (int i = 1; i < 11; i++) {
        printf("%.3f\n", findrt(i));
    }
    return 0;
}
