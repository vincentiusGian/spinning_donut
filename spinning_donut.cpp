#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  float A,B =0;
  float i,j;

  int size = 9;

  float R1=1, R2=2, K2=5;
  R2=R2+(size-5)*0.2;

  float K1 = 10 / (R1 + R2);
    vector<char> b(1760, ' ');
    vector<float> z(1760, 0);
    cout << "\x1b[2J";
    for (;;) {
        fill(b.begin(), b.end(), ' ');
        fill(z.begin(), z.end(), 0);
        for (j = 0; 6.28 > j; j += 0.07)
            for (i = 0; 6.28 > i; i += 0.02) {
                float c = sin(i), d = cos(j), e = sin(A), f = sin(j),
                      g = cos(A), h = d + 2, D = 1 / (c * h * e + f * g + 5),
                      l = cos(i), m = cos(B), n = sin(B),
                      t = c * h * g - f * e;
                int x = 40 + 30 * D * (l * h * m - t * n),
                    y = 12 + 15 * D * (l * h * n + t * m),
                    o = x + 80 * y,
                    N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        cout << "\x1b[H";
        for (int k = 0; 1761 > k; k++)
            if (k % 80) {
                cout  << b[k];
            } else {
                cout << endl;
            }
        A += 0.04;
        B += 0.02;
        usleep(30000);
    }


  return 0;
}
