#include <map>
#include <string>
class Bible50
{
	struct jap1	{ int val; const char *msg; };
	struct jap2	{ int val; const char *msg; };
	struct jap3	{ int val; const char *msg; };
	struct jap4	{ int val; const char *msg; };
public:
static void view1() {
struct jap1 poems[] = {
	{1, "1 キリスト・イエスの僕たち、パウロとテモテから、ピリピにいる、キリスト・イエスにあるすべての聖徒たち、ならびに監督たちと執事たちへ。"},
	{2, "2 わたしたちの父なる神と主イエス・キリストから、恵みと平安とが、あなたがたにあるように。"},
	{3, "3 わたしはあなたがたを思うたびごとに、わたしの神に感謝し、"},
	{4, "4 あなたがた一同のために祈るとき、いつも喜びをもって祈り、"},
	{5, "5 あなたがたが最初の日から今日に至るまで、福音にあずかっていることを感謝している。"},
	{6, "6 そして、あなたがたのうちに良いわざを始められたかたが、キリスト・イエスの日までにそれを完成して下さるにちがいないと、確信している。"},
	{7, "7 わたしが、あなたがた一同のために、そう考えるのは当然である。それは、わたしが獄に捕われている時にも、福音を弁明し立証する時にも、あなたがたをみな、共に恵みにあずかる者として、わたしの心に深く留めているからである。"},
	{8, "8 わたしがキリスト・イエスの熱愛をもって、どんなに深くあなたがた一同を思っていることか、それを証明して下さるかたは神である。"},
	{9, "9 わたしはこう祈る。あなたがたの愛が、深い知識において、するどい感覚において、いよいよ増し加わり、"},
	{10, "10 それによって、あなたがたが、何が重要であるかを判別することができ、キリストの日に備えて、純真で責められるところのないものとなり、"},
	{11, "11 イエス・キリストによる義の実に満たされて、神の栄光とほまれとをあらわすに至るように。"},
	{12, "12 さて、兄弟たちよ。わたしの身に起った事が、むしろ福音の前進に役立つようになったことを、あなたがたに知ってもらいたい。"},
	{13, "13 すなわち、わたしが獄に捕われているのはキリストのためであることが、兵営全体にもそのほかのすべての人々にも明らかになり、"},
	{14, "14 そして兄弟たちのうち多くの者は、わたしの入獄によって主にある確信を得、恐れることなく、ますます勇敢に、神の言を語るようになった。"},
	{15, "15 一方では、ねたみや闘争心からキリストを宣べ伝える者がおり、他方では善意からそうする者がいる。"},
	{16, "16 後者は、わたしが福音を弁明するために立てられていることを知り、愛の心でキリストを伝え、"},
	{17, "17 前者は、わたしの入獄の苦しみに更に患難を加えようと思って、純真な心からではなく、党派心からそうしている。"},
	{18, "18 すると、どうなのか。見えからであるにしても、真実からであるにしても、要するに、伝えられているのはキリストなのだから、わたしはそれを喜んでいるし、また喜ぶであろう。"},
	{19, "19 なぜなら、あなたがたの祈と、イエス・キリストの霊の助けとによって、この事がついには、わたしの救となることを知っているからである。"},
	{20, "20 そこで、わたしが切実な思いで待ち望むことは、わたしが、どんなことがあっても恥じることなく、かえって、いつものように今も、大胆に語ることによって、生きるにも死ぬにも、わたしの身によってキリストがあがめられることである。"},
	{21, "21 わたしにとっては、生きることはキリストであり、死ぬことは益である。"},
	{22, "22 しかし、肉体において生きていることが、わたしにとっては実り多い働きになるのだとすれば、どちらを選んだらよいか、わたしにはわからない。"},
	{23, "23 わたしは、これら二つのものの間に板ばさみになっている。わたしの願いを言えば、この世を去ってキリストと共にいることであり、実は、その方がはるかに望ましい。"},
	{24, "24 しかし、肉体にとどまっていることは、あなたがたのためには、さらに必要である。"},
	{25, "25 こう確信しているので、わたしは生きながらえて、あなたがた一同のところにとどまり、あなたがたの信仰を進ませ、その喜びを得させようと思う。"},
	{26, "26 そうなれば、わたしが再びあなたがたのところに行くので、あなたがたはわたしによってキリスト・イエスにある誇を増すことになろう。"},
	{27, "27 ただ、あなたがたはキリストの福音にふさわしく生活しなさい。そして、わたしが行ってあなたがたに会うにしても、離れているにしても、あなたがたが一つの霊によって堅く立ち、一つ心になって福音の信仰のために力を合わせて戦い、"},
	{28, "28 かつ、何事についても、敵対する者どもにろうばいさせられないでいる様子を、聞かせてほしい。このことは、彼らには滅びのしるし、あなたがたには救のしるしであって、それは神から来るのである。"},
	{29, "29 あなたがたはキリストのために、ただ彼を信じることだけではなく、彼のために苦しむことをも賜わっている。"},
	{30, "30 あなたがたは、さきにわたしについて見、今またわたしについて聞いているのと同じ苦闘を、続けているのである。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct jap2 poems[] = {
	{1, "1 そこで、あなたがたに、キリストによる勧め、愛の励まし、御霊の交わり、熱愛とあわれみとが、いくらかでもあるなら、"},
	{2, "2 どうか同じ思いとなり、同じ愛の心を持ち、心を合わせ、一つ思いになって、わたしの喜びを満たしてほしい。"},
	{3, "3 何事も党派心や虚栄からするのでなく、へりくだった心をもって互に人を自分よりすぐれた者としなさい。"},
	{4, "4 おのおの、自分のことばかりでなく、他人のことも考えなさい。"},
	{5, "5 キリスト・イエスにあっていだいているのと同じ思いを、あなたがたの間でも互に生かしなさい。"},
	{6, "6 キリストは、神のかたちであられたが、神と等しくあることを固守すべき事とは思わず、"},
	{7, "7 かえって、おのれをむなしうして僕のかたちをとり、人間の姿になられた。その有様は人と異ならず、"},
	{8, "8 おのれを低くして、死に至るまで、しかも十字架の死に至るまで従順であられた。"},
	{9, "9 それゆえに、神は彼を高く引き上げ、すべての名にまさる名を彼に賜わった。"},
	{10, "10 それは、イエスの御名によって、天上のもの、地上のもの、地下のものなど、あらゆるものがひざをかがめ、"},
	{11, "11 また、あらゆる舌が、「イエス・キリストは主である」と告白して、栄光を父なる神に帰するためである。"},
	{12, "12 わたしの愛する者たちよ。そういうわけだから、あなたがたがいつも従順であったように、わたしが一緒にいる時だけでなく、いない今は、いっそう従順でいて、恐れおののいて自分の救の達成に努めなさい。"},
	{13, "13 あなたがたのうちに働きかけて、その願いを起させ、かつ実現に至らせるのは神であって、それは神のよしとされるところだからである。"},
	{14, "14 すべてのことを、つぶやかず疑わないでしなさい。"},
	{15, "15 それは、あなたがたが責められるところのない純真な者となり、曲った邪悪な時代のただ中にあって、傷のない神の子となるためである。あなたがたは、いのちの言葉を堅く持って、彼らの間で星のようにこの世に輝いている。"},
	{16, "16 このようにして、キリストの日に、わたしは自分の走ったことがむだでなく、労したこともむだではなかったと誇ることができる。"},
	{17, "17 そして、たとい、あなたがたの信仰の供え物をささげる祭壇に、わたしの血をそそぐことがあっても、わたしは喜ぼう。あなたがた一同と共に喜ぼう。"},
	{18, "18 同じように、あなたがたも喜びなさい。わたしと共に喜びなさい。"},
	{19, "19 さて、わたしは、まもなくテモテをあなたがたのところに送りたいと、主イエスにあって願っている。それは、あなたがたの様子を知って、わたしも力づけられたいからである。"},
	{20, "20 テモテのような心で、親身になってあなたがたのことを心配している者は、ほかにひとりもない。"},
	{21, "21 人はみな、自分のことを求めるだけで、キリスト・イエスのことは求めていない。"},
	{22, "22 しかし、テモテの錬達ぶりは、あなたがたの知っているとおりである。すなわち、子が父に対するようにして、わたしと一緒に福音に仕えてきたのである。"},
	{23, "23 そこで、この人を、わたしの成行きがわかりしだい、すぐにでも、そちらへ送りたいと願っている。"},
	{24, "24 わたし自身もまもなく行けるものと、主にあって確信している。"},
	{25, "25 しかし、さしあたり、わたしの同労者で戦友である兄弟、また、あなたがたの使者としてわたしの窮乏を補ってくれたエパフロデトを、あなたがたのもとに送り返すことが必要だと思っている。"},
	{26, "26 彼は、あなたがた一同にしきりに会いたがっているからである。その上、自分の病気のことがあなたがたに聞えたので、彼は心苦しく思っている。"},
	{27, "27 彼は実に、ひん死の病気にかかったが、神は彼をあわれんで下さった。彼ばかりではなく、わたしをもあわれんで下さったので、わたしは悲しみに悲しみを重ねないですんだのである。"},
	{28, "28 そこで、大急ぎで彼を送り返す。これで、あなたがたは彼と再び会って喜び、わたしもまた、心配を和らげることができよう。"},
	{29, "29 こういうわけだから、大いに喜んで、主にあって彼を迎えてほしい。また、こうした人々は尊重せねばならない。"},
	{30, "30 彼は、わたしに対してあなたがたが奉仕のできなかった分を補おうとして、キリストのわざのために命をかけ、死ぬばかりになったのである。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct jap3 poems[] = {
	{1, "1 最後に、わたしの兄弟たちよ。主にあって喜びなさい。さきに書いたのと同じことをここで繰り返すが、それは、わたしには煩らわしいことではなく、あなたがたには安全なことになる。"},
	{2, "2 あの犬どもを警戒しなさい。悪い働き人たちを警戒しなさい。肉に割礼の傷をつけている人たちを警戒しなさい。"},
	{3, "3 神の霊によって礼拝をし、キリスト・イエスを誇とし、肉を頼みとしないわたしたちこそ、割礼の者である。"},
	{4, "4 もとより、肉の頼みなら、わたしにも無くはない。もし、だれかほかの人が肉を頼みとしていると言うなら、わたしはそれをもっと頼みとしている。"},
	{5, "5 わたしは八日目に割礼を受けた者、イスラエルの民族に属する者、ベニヤミン族の出身、ヘブル人の中のヘブル人、律法の上ではパリサイ人、"},
	{6, "6 熱心の点では教会の迫害者、律法の義については落ち度のない者である。"},
	{7, "7 しかし、わたしにとって益であったこれらのものを、キリストのゆえに損と思うようになった。"},
	{8, "8 わたしは、更に進んで、わたしの主キリスト・イエスを知る知識の絶大な価値のゆえに、いっさいのものを損と思っている。キリストのゆえに、わたしはすべてを失ったが、それらのものを、ふん土のように思っている。それは、わたしがキリストを得るためであり、"},
	{9, "9 律法による自分の義ではなく、キリストを信じる信仰による義、すなわち、信仰に基く神からの義を受けて、キリストのうちに自分を見いだすようになるためである。"},
	{10, "10 すなわち、キリストとその復活の力とを知り、その苦難にあずかって、その死のさまとひとしくなり、"},
	{11, "11 なんとかして死人のうちからの復活に達したいのである。"},
	{12, "12 わたしがすでにそれを得たとか、すでに完全な者になっているとか言うのではなく、ただ捕えようとして追い求めているのである。そうするのは、キリスト・イエスによって捕えられているからである。"},
	{13, "13 兄弟たちよ。わたしはすでに捕えたとは思っていない。ただこの一事を努めている。すなわち、後のものを忘れ、前のものに向かってからだを伸ばしつつ、"},
	{14, "14 目標を目ざして走り、キリスト・イエスにおいて上に召して下さる神の賞与を得ようと努めているのである。"},
	{15, "15 だから、わたしたちの中で全き人たちは、そのように考えるべきである。しかし、あなたがたが違った考えを持っているなら、神はそのことも示して下さるであろう。"},
	{16, "16 ただ、わたしたちは、達し得たところに従って進むべきである。"},
	{17, "17 兄弟たちよ。どうか、わたしにならう者となってほしい。また、あなたがたの模範にされているわたしたちにならって歩く人たちに、目をとめなさい。"},
	{18, "18 わたしがそう言うのは、キリストの十字架に敵対して歩いている者が多いからである。わたしは、彼らのことをしばしばあなたがたに話したが、今また涙を流して語る。"},
	{19, "19 彼らの最後は滅びである。彼らの神はその腹、彼らの栄光はその恥、彼らの思いは地上のことである。"},
	{20, "20 しかし、わたしたちの国籍は天にある。そこから、救主、主イエス・キリストのこられるのを、わたしたちは待ち望んでいる。"},
	{21, "21 彼は、万物をご自身に従わせうる力の働きによって、わたしたちの卑しいからだを、ご自身の栄光のからだと同じかたちに変えて下さるであろう。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct jap4 poems[] = {
	{1, "1 だから、わたしの愛し慕っている兄弟たちよ。わたしの喜びであり冠である愛する者たちよ。このように、主にあって堅く立ちなさい。"},
	{2, "2 わたしはユウオデヤに勧め、またスントケに勧める。どうか、主にあって一つ思いになってほしい。"},
	{3, "3 ついては、真実な協力者よ。あなたにお願いする。このふたりの女を助けてあげなさい。彼らは、「いのちの書」に名を書きとめられているクレメンスや、その他の同労者たちと協力して、福音のためにわたしと共に戦ってくれた女たちである。"},
	{4, "4 あなたがたは、主にあっていつも喜びなさい。繰り返して言うが、喜びなさい。"},
	{5, "5 あなたがたの寛容を、みんなの人に示しなさい。主は近い。"},
	{6, "6 何事も思い煩ってはならない。ただ、事ごとに、感謝をもって祈と願いとをささげ、あなたがたの求めるところを神に申し上げるがよい。"},
	{7, "7 そうすれば、人知ではとうてい測り知ることのできない神の平安が、あなたがたの心と思いとを、キリスト・イエスにあって守るであろう。"},
	{8, "8 最後に、兄弟たちよ。すべて真実なこと、すべて尊ぶべきこと、すべて正しいこと、すべて純真なこと、すべて愛すべきこと、すべてほまれあること、また徳といわれるもの、称賛に値するものがあれば、それらのものを心にとめなさい。"},
	{9, "9 あなたがたが、わたしから学んだこと、受けたこと、聞いたこと、見たことは、これを実行しなさい。そうすれば、平和の神が、あなたがたと共にいますであろう。"},
	{10, "10 さて、わたしが主にあって大いに喜んでいるのは、わたしを思う心が、あなたがたに今またついに芽ばえてきたことである。実は、あなたがたは、わたしのことを心にかけてくれてはいたが、よい機会がなかったのである。"},
	{11, "11 わたしは乏しいから、こう言うのではない。わたしは、どんな境遇にあっても、足ることを学んだ。"},
	{12, "12 わたしは貧に処する道を知っており、富におる道も知っている。わたしは、飽くことにも飢えることにも、富むことにも乏しいことにも、ありとあらゆる境遇に処する秘けつを心得ている。"},
	{13, "13 わたしを強くして下さるかたによって、何事でもすることができる。"},
	{14, "14 しかし、あなたがたは、よくもわたしと患難を共にしてくれた。"},
	{15, "15 ピリピの人たちよ。あなたがたも知っているとおり、わたしが福音を宣伝し始めたころ、マケドニヤから出かけて行った時、物のやりとりをしてわたしの働きに参加した教会は、あなたがたのほかには全く無かった。"},
	{16, "16 またテサロニケでも、一再ならず、物を送ってわたしの欠乏を補ってくれた。"},
	{17, "17 わたしは、贈り物を求めているのではない。わたしの求めているのは、あなたがたの勘定をふやしていく果実なのである。"},
	{18, "18 わたしは、すべての物を受けてあり余るほどである。エパフロデトから、あなたがたの贈り物をいただいて、飽き足りている。それは、かんばしいかおりであり、神の喜んで受けて下さる供え物である。"},
	{19, "19 わたしの神は、ご自身の栄光の富の中から、あなたがたのいっさいの必要を、キリスト・イエスにあって満たして下さるであろう。"},
	{20, "20 わたしたちの父なる神に、栄光が世々限りなくあるように、アァメン。"},
	{21, "21 キリスト・イエスにある聖徒のひとりびとりに、よろしく。わたしと一緒にいる兄弟たちから、あなたがたによろしく。"},
	{22, "22 すべての聖徒たちから、特にカイザルの家の者たちから、よろしく。"},
	{23, "23 主イエス・キリストの恵みが、あなたがたの霊と共にあるように。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};