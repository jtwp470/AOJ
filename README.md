# Java-Intro
私専用の役立ちそうなものを残しておくところです．
以下はソースを読めばわかりますが軽い中身たちの説明です．
### NumberToken.java
Javaにも慣れてきたのでAIZU ONLINE JUDGEの問題を解いてみようと思っていた矢先Volume100の[Rectangle](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=10002)の問題で入力方法に詰まったものを解決した．

入力の仕方として以下のように空白で間の空いた文字列を分解する．

'''
3 5
'''

上のように入力した場合，resultnum[0]=3, resultnum[1]=5が代入される．

なお，今まではStringTokenizerクラスを用いてこれを実現していたがJava Se7では
>StringTokenizer は、互換性を維持する目的で保持されているレガシークラスであり、新規コードでは使用が推奨されていません。この機能の使用を考えているなら、String の split メソッドまたは java.util.regex パッケージを代わりに使用することをお勧めします。
との記載があるので使用を見送った．

過去にStringTokenizerクラスを用いたソースはNumberTokenLegacy.javaである．

ちなみにStaticsを見ればわかるとおりこの問題をJavaで解く奴はほとんどいないようだ
