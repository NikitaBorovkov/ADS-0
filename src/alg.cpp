// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int p = 0;
    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    p = a + b;
    return (p);
}
