#include <stdio.h>

#define MOD 1000000007

long long sum_from_1_to_n(long long n) {
    return (n * (n + 1) / 2) % MOD;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long S, E;
        scanf("%lld %lld", &S, &E);

        long long sum_to_E = sum_from_1_to_n(E);
        long long sum_to_S_minus_1 = sum_from_1_to_n(S - 1);

        long long result = (sum_to_E - sum_to_S_minus_1 + MOD) % MOD;
        printf("%lld\n", result);
    }

    return 0;
}
