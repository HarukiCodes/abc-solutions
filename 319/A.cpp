#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    const unordered_map<string, int> players = {
        {"tourist", 3858},
        {"ksun48", 3679},
        {"Benq", 3658},
        {"Um_nik", 3648},
        {"apiad", 3638},
        {"Stonefeang", 3630},
        {"ecnerwala", 3613},
        {"mnbvmar", 3555},
        {"newbiedmy", 3516},
        {"semiexp", 3481},
    };

    string s;
    cin >> s;
    cout << players.at(s) << endl;
    return 0;
}
