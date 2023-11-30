# VisualStudioからGitHubへのPush方法

## 必要な準備
1.githubアカウントの作成  
2.[[git for windowsのインストール](https://prog-8.com/docs/git-env-win)]  
3.Visual Studioのインストール

## Gitの使い方 

### ローカルのフォルダgithubに上げる方法
github上で先にリポジトリを作成しておく
  ```
  git init
  git add README.md
  git commit -m "first commit"
  git branch -M main
  git remote add origin https://github.com/richu72/AOJ_ITP1.git
  git push -u origin main
  ```

### …or push an existing repository from the command line
```
  git remote add origin https://github.com/richu72/AOJ_ITP1.git
  git branch -M main
  git push -u origin main
```
### 別の環境で作業したいとき
#### まだリポジトリフォルダが存在しないとき(別の環境での最初の作業)
```
  git clone https://github.com/richu72/AOJ_ITP1.git
```
#### 上記の作業でローカルリポジトリをすでに作成したあとファイルを変更した場合
```
  git add .
  git commit -m "hogehoge"
  git push -u origin main
```

### [コマンド]
#### 設定に対する確認や変更などの処理
```
git config {ファイル名}
```
｛ファイル名｝（例）  
##### 一般
```color.ui ```: Gitの出力の色分け（通常はautoと設定）  
```core.editor``` : コミットメッセージなどの編集で用いるエディタ  
```user.name``` : ユーザー名  
```user.email``` : Eメールアドレス 
##### 設定値の確認
```--local -l``` : ローカル  
```--global -l``` : グルーバル  
```--system -l``` : システム 
#### リモートリポジトリの表示
```
git remote -v
```
### [アップロード方法]
#### ステージング
```
git add .
```
add . は変更したファイルをすべてステージングする方法です。
ステージングとは、システムを公開する手前の段階で、実際にサービスを提供する環境（本番環境）とほぼ同じ環境にシステムを反映させ、動作や表示などの最終確認を行う段階、もしくは環境のこと。要するに最新の状態にファイルを更新すること
#### 前回のコミット時からの変更  
```
git commit -m "{コメント}"
```
{コメント}には具体的にな変更点を書く。
#### 作業ディレクトリの状態とステージング エリアの状態を表示する  
```
git status  
```
##### コミット済み
`nothing to commit, working tree clean` 

最新のアップロードデータ
#### ローカルリポジトリに挙げる  
```
git push origin main  
```
### [[ダウンロード方法](http://www.gougle.com)]

#### ※初めてローカルに落とすとき
ローカル環境でローカルリポジトリを作成。ターミナルで、任意の場所にディレクトリを作成し、作ったディレクトリに移動。
```
git clone https://github.com/[ユーザー名]/[リポジトリ名].git
```
なお、プライベートリポジトリの場合は上記の方法でできない。ググれ
#### リモートリポジトリからローカルリポジトリへ
```
git fetch
```
リモートの「master」ブランチ → ローカルの「origin/master」ブランチ
#### ローカルリポジトリからリモートリポジトリへ
```
git merge
```
ローカルの「origin/master」ブランチ → ローカルの「master」ブランチ
#### リモートリポジトリ⇔ローカルリポジトリ
```
git pull
```
リモートの「master」ブランチ →（ローカルの「origin/master」ブランチ→） ローカルの「master」ブランチ
### [エラーと対処法]

#### git push origin main 時のエラー
`failed to push some refs to...`
##### 原因
daunloadをZipから新規的に呼び出して上書きしたため
##### 対処法
こうなると、GitHabで新規作成しコピペするしかない。  

`failed to push some refs to...`
##### 原因
リモートリポジトリに変更を反映しようとしたため
##### [対処法](https://kinsta.com/jp/knowledgebase/error-failed-to-push-some-refs-to/)
`git pull`を実行する。
### [Logcatでの注意点]
タグ付けは、以下のテンプレートにする。
`package:main`  
Logが更新されないときはタグの左のデバイスを確認する。
