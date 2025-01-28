#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 3;
    double a[3][3], L[3][3] = {0}, U[3][3] = {0};
    double b[3], x[3], y[3];

    cout << "Input the 3x3 matrix to factorize:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Input the right-hand side Matrix (b):\n";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
    
        for (int j = i; j < n; j++) {
            U[i][j] = a[i][j];
            for (int k = 0; k < i; k++) {
                U[i][j] -= L[i][k] * U[k][j];
            }
        }
        for (int j = i; j < n; j++) {
            if (i == j) {
                L[i][i] = 1;
            } else {
                L[j][i] = a[j][i];
                for (int k = 0; k < i; k++) {
                    L[j][i] -= L[j][k] * U[k][i];
                }
                L[j][i] /= U[i][i];
            }
        }
    }

    cout << "\nLower Triangular Matrix (L):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << L[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nUpper Triangular Matrix (U):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << U[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        y[i] = b[i];
        for (int j = 0; j < i; j++) {
            y[i] -= L[i][j] * y[j];
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        x[i] = y[i];
        for (int j = i + 1; j < n; j++) {
            x[i] -= U[i][j] * x[j];
        }
        x[i] /= U[i][i];
    }

    cout << "\nSolution Of(x):\n";
    for (int i = 0; i < n; i++) {
        cout << x[i] << endl;
    }

    return 0;
}
