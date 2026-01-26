#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(9);
    double r;
    cin >> r;
    cout << 3.14159265358979323846 * r * r << endl;
}