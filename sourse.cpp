#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double T,m,P,k=100;//Где T - период колебания маятника
    cin >> m;
    cin >> P;
    T = 2 * P * sqrt(m / k);//Формула периода колебания маятника
    cout << "Период равен " << T << endl;
    return 0;
}
//Вычислить период колебания пружинного маятника по формуле:
//T = 2π√mk
//где m –масса(с клавиатуры после приглашения в той же строке), k
//= 100 H / м - коэффициент упругости.