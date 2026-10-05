#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, X_poch, X_kin, dX;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "X_poch = ";
    cin >> X_poch;
    cout << "X_kin = ";
    cin >> X_kin;
    cout << "dX = ";
    cin >> dX;

    cout << "\n--------------------------\n";
    cout << setw(10) << "x" << setw(15) << "F(x)" << endl;
    cout << "--------------------------\n";

    for (double x = X_poch; x <= X_kin; x += dX) {
        double F;

        if (c < 0 && b != 0) {
            F = a * x * x + b * b * x;
        }
        else if (c > 0 && b == 0) {
            if (x + c == 0) {
                cout << setw(10) << x << setw(15) << "не визначено" << endl;
                continue;
            }
            F = (x + a) / (x + c);
        }
        else {
            if (c == 0) {
                cout << setw(10) << x << setw(15) << "не визначено" << endl;
                continue;
            }
            F = x / c;
        }

        cout << fixed << setprecision(4);
        cout << setw(10) << x << setw(15) << F << endl;
    }

    return 0;
}