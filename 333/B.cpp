// B
#include <bits/stdc++.h>
using namespace std;
struct point
{
    int length;
    point(char P, char Q)
    {
        if ((P == 'A' && Q == 'B') || (P == 'B' && Q == 'A'))
            this->length = 1;
        else if ((P == 'A' && Q == 'C') || (P == 'C' && Q == 'A'))
            this->length = 2;
        else if ((P == 'A' && Q == 'D') || (P == 'D' && Q == 'A'))
            this->length = 2;
        else if ((P == 'A' && Q == 'E') || (P == 'E' && Q == 'A'))
            this->length = 1;
        else if ((P == 'B' && Q == 'C') || (P == 'C' && Q == 'B'))
            this->length = 1;
        else if ((P == 'B' && Q == 'D') || (P == 'D' && Q == 'B'))
            this->length = 2;
        else if ((P == 'B' && Q == 'E') || (P == 'E' && Q == 'B'))
            this->length = 2;
        else if ((P == 'C' && Q == 'D') || (P == 'D' && Q == 'C'))
            this->length = 1;
        else if ((P == 'C' && Q == 'E') || (P == 'E' && Q == 'C'))
            this->length = 2;
        else if ((P == 'D' && Q == 'E') || (P == 'E' && Q == 'D'))
            this->length = 1;
    };
};
int main()
{
    char S1, S2, T1, T2;
    cin >> S1 >> S2 >> T1 >> T2;
    point S(S1, S2);
    point T(T1, T2);
    if (S.length == T.length)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}