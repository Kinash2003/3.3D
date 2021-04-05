//3.3D.cpp
#include <iostream>
#include "Date_Private.h"
#include "Date_Public.h"

int main()
{
    Date_Public A1, B1,C1,D1;
    Date_Private A2,B2,C2,D2;
    int result; 

    cout << " Date_Public: " << endl;

    cout << " Enter t1: " << endl;
    cin >> A1;
    
    cout << " Enter t2: " << endl;
    cin >> B1;

    cout << " Comparison Triad: " << endl;
    result = A1.Сomparison(A1, B1);
    A1.TriadResult(result);

    cout << " Enter d1: " << endl;
    cin >> C1;

    cout << " Enter d2: " << endl;
    cin >> D1;
    
    cout << " Comparison Date: " << endl;
    result = C1.Сomparison(C1, D1);
    C1.date1(result);
    
    cout << " A2++ " << endl; cout << A1++ << endl;
    cout << " A2-- " << endl; cout << A1-- << endl;
    cout << " ++A2 " << endl; cout << ++A1 << endl;
    cout << " --A2 " << endl; cout << --A1 << endl;

    cout << " Date_Private: " << endl;

    cout << " Enter t1: " << endl;
    cin >> A2;

    cout << " Enter t2: " << endl;
    cin >> B2;

    cout << " Comparison Triad: " << endl;
    result = A2.Сomparison(A2, B2);
    A2.TriadResult(result);

    cout << " Enter d1: " << endl;
    cin >> C2;

    cout << " Enter d2: " << endl;
    cin >> D2;

    cout << " Comparison Date: " << endl;
    result = C2.Сomparison(C2, D2);
    C2.date1(result);

    cout << " A2++ " << endl; cout << A2++ << endl;
    cout << " A2-- " << endl; cout << A2-- << endl;
    cout << " ++A2 " << endl; cout << ++A2 << endl;
    cout << " --A2 " << endl; cout << --A2 << endl;

    return 0;
}