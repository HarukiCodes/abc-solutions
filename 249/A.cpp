#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;
    int tCicle = A + C, aCicle = D + F;
    int tWalkTime = (X / tCicle) * A + min(X % tCicle, A);
    int aWalkTime = (X / aCicle) * D + min(X % aCicle, D);
    int tDist = tWalkTime * B;
    int aDist = aWalkTime * E;
    if (tDist > aDist) {
        cout << "Takahashi" << endl;
    } else if (tDist == aDist) {
        cout << "Draw" << endl;
    } else {
        cout << "Aoki" << endl;
    }
    return 0;
}