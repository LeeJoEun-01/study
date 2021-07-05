#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // 백준 브론즈 4 1330번
    double a;
    double b;
    cin >> a >> b;

    if (a > b) {
        cout << ">";
    }
    else if (a < b) {
        cout << "<";
    }
    else if (a == b) {
        cout << "==";
    }
}

// 백준 브론즈 4 1297번
    /*double x;
    double h;
    double w;
    double y;

    cin >> x >> h >> w;

    y = sqrt( x*x / (h*h + w*w));

    cout << int(h*y) << " " << int(w*y) ;*/
