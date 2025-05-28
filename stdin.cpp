#include <bits/stdc++.h>  // 標準ライブラリを全て一括でインクルード
using namespace std;      // std:: を省略するため

int main(void){
    int n;  // 入力される文字列の個数
    cin >> n;             // ユーザーから整数 n を読み込む
    cout << n << endl;    // 読み込んだ n を出力

    // n 個の文字列を格納するベクターを定義
    vector<string> a(n);

    // n 回繰り返して、各文字列を標準入力から読み取る
    for (int i = 0; i < n; i++) {
        cin >> a[i];  // 各文字列をベクターに格納（空白区切りの単語として読み取る）
    }

    // ベクターに格納された文字列を、1 行にスペース区切りで出力
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";  // 各文字列を出力
    }
    cout << endl;  // 最後に改行を出力

    return 0;  // プログラムの終了
}
