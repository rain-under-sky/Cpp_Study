#include <iostream>
#include <string>
using namespace std;
int main() {
    int s, i, x,e, v, n, t, w, y;
    for (s = 1; s <= 9; s++) {
        for (i = 0; i <= 9; i++) {
            for (x = 0; x <= 9; x++) {
                for (e = 0; e <= 9; e++) {
                    for (v = 0; v <= 9; v++) {
                        for (n = 0; n <= 9; n++) {
                            for (t = 1; t <= 9; t++) {
                                for (w = 0; w <= 9; w++) {
                                    for (y = 0; y <= 9; y++) {
                                        if (100 * s + 10 * i + x + 20000 * s + 2000 * e + 200 * v + 20 * e + 2 * n == 100000 * t + 10000 * w + 1000 * e + 100 * n + 10 * t + y&&s!=i&&s!=x&&s!=e&&s!=v&&s!=n&&s!=t&&s!=w&&
                                            s!=y&&i!=x&&i!=e&&i!=v&&i!=n&&i!=t&&i!=w&&i!=y&&x!=e&&x!=v&&x!=n&&x!=t
                                            &&x!=w&&x!=y&&e!=v&&e!=n&&e!=t&&e!=w&&e!=y&&v!=n&&v!=t&&v!=w&&v!=y&&
                                            n!=t&&n!=w&&n!=y&&t!=w&&t!=y&&w!=y) {
                                            cout << "s= " << s << " i=" << i << " x=" << x
                                                 << " e=" << e << " v=" << v << " n=" << n << " t="
                                                 << t << " w=" << w << " y=" << y << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}