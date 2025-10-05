#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    string option[4] = {"dream", "dreamer", "erase", "eraser"};
    for (int i = 0; i < 4; i++) {
        reverse(option[i].begin(), option[i].end());
    }
    int cnt[4] = {0, 0, 0, 0}; 
    string T = S;
    for (int i = S.size() - 1; i >= 0; i--) {
        char now = S[i];
        for (int j = 0; j < 4; j++) {
            // Sの最後尾の文字とoption[i]のcnt[i]の文字を比較
            if (now == option[j][cnt[j]]) {
                cnt[j]++;
                // どれか一つでも全一致したらその文字列を消す
                if (cnt[j] == option[j].size()) {
                    // jが2の倍数の時のoption[i]はoption[j+1]より文字数が小さく、j+1より早くたまる可能性がある
                    // j+1の方もcntがたまっていたら、option[j]のpopはcontinue
                    // たまっているとはcnt[j + 1] == cnt[j]-1 + (option[j +
                    // 1].size() - option[j].size())が満たされていること
                    int size_dif = option[j + 1].size() - option[j].size();
                    if (j % 2 == 0 &&
                        cnt[j + 1] ==
                            cnt[j] - 1 +
                                size_dif)  // cnt[j]-1 :
                                           // 5行前でインクリメントを相殺
                    {
                        continue;
                    }
                    // 一致文字個数(文字列の大きさ)回ループ
                    for (int k = 0; k < cnt[j]; k++) {
                        T.pop_back();
                    }
                    // 全文字列の一致文字個数リセット
                    for (int &e : cnt) {
                        e = 0;
                    }
                }
            }
        }
    }
    if (T.size() == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}