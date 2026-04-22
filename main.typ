#import "@preview/js:0.1.3":*
#show:js
#maketitle(
    title:[openflowについて],
    authors:"渡辺 晃佑"
)

#outline()
#show figure.where(kind: table): set figure.caption(position: top)

#pagebreak()

= openflow(1.0)メッセージ

= 非同期メッセージ
- スイッチからコントローラへ送るメッセージ
== Packet-In
対応するフローエントリがフローテーブルに存在しない場合、または明示的にコントローラに転送するようにフローエントリが設定されている場合に送られるメッセージ
== Flow-Removed
スイッチにインストールされたフローエントリが何らかの理由によって作所された際に送るメッセージ
== Port-Status
Openflowスイッチの物理ポートが追加、削除、および設定変更が行われた場合に送られるメッセージ
= スイッチ制御メッセージ
- コントローラからスイッチへ送るメッセージ
== Feature
コントローラがスイッチの構成や性能、そしてサポートしているインターフェイスの種類を知るために送るメッセージ
== configure
スイッチの設定情報の確認とそれらの設定情報を更新するためのメッセージ
== modify-Sate
スイッチのフローテーブルに格納されるフローエントリに対する操作を行うフローエントリ変更メッセージ(物理ポートの設定変更を行うポート変更メッセージもある)
== Read-State
スイッチが持つフローテーブルに含まれるフローエントリの確認や利用状況の統計値等を取得するためのメッセージ
== Send-Packet
パケットをスイッチの特定のポートに対して出力するためのメッセージ
== Barrier
コントローラとスイッチの同期を取る際に送るメッセージ
= シンメトリックメッセージ
- コントローラとスイッチの両方から送るメッセージ
== Hello
スイッチとコントローラがはられた際にまず最初にやりとりするためのメッセージ
== Echo
Keep-Aliveのためのメッセージ
== Vendor
ベンダーによる拡張機能に用意されたメッセージ

= Openflowメッセージの構造体

#import "@preview/cetz:0.4.2": *

#figure(canvas({

    import draw: *
    let arrow = line.with(mark: (end: ">",fill:black))

    rect((-5,-0.5),(5,2),name:"openflow_message")
    content((rel:(0,-0.5),to: "openflow_message.north"))[*openflowメッセージ*]

    rect((-4.5,1),(-1,0),name:"openflow_header")
    content((rel:(0,0),to: "openflow_header"))[*openflowヘッダ*]
    rect((-0.5,1),(4.5,0),name:"openflow_header")
    content((rel:(0,0),to: "openflow_header"))[*openflowヘッダ*]

}))