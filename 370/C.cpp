// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string S, T;
//     cin >> S >> T;

//     vector<string> X;
//     int M = 0, length = static_cast<int>(S.size());
//     for (int i = 0; i < length; i++)
//     {
//         if (S[i] != T[i])
//         {
//             M++;
//             S[i] = T[i];
//             X.push_back(S);
//         }
//     }
//     sort(X.begin(), X.end());
//     cout << M << endl;
//     for (int i = 0; i < length; i++)
//     {
//         cout << X[i] << endl;
//     }
//     cout << endl;
// }