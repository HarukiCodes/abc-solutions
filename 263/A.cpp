#include <iostream>
using namespace std;

int main() {
    int cards[5]{}, cardCount[14]{};
    for (int i = 0; i < 5; i++) {
        cin >> cards[i];
        cardCount[cards[i]]++;
    }
    bool card3 = false, card2 = false;
    for (int i = 1; i < 14; i++) {
        if (cardCount[i] == 2) {
            card2 = true;
        } else if (cardCount[i] == 3) {
            card3 = true;
        }
    }
    cout << (card2 && card3 ? "Yes" : "No") << endl;
    return 0;
}