#include <iostream>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    setlocale(0, "");
	int n;
    int c = 0;
    printf("Последовательность:");
    while (true) {
        scanf_s("%d", &n);
        if (n == 0) break;

        if (isPrime(n)) {
            c++;
        }
    }
    printf("Кол-во простых чисел: %d\n", c);
    return 0;

}