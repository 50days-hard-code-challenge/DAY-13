int calcGCD(int n, int m) {

    if (n == m) {

        return n; // If n equals m, the GCD is n (or m, they're the same).

    }

    else if (n > m) {

        n = n - m;

    } 

    else {

        m = m - n;

    }

    

    for (int i = min(n, m); i >= 1; i--) {// checking in reverse order 

        if (n % i == 0 && m % i == 0) {

            return i;

        }

    }

    return 1; 

}
