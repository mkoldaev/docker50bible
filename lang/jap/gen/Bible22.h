#include <map>
#include <string>
class Bible22
{
	struct jap1	{ int val; const char *msg; };
	struct jap2	{ int val; const char *msg; };
	struct jap3	{ int val; const char *msg; };
	struct jap4	{ int val; const char *msg; };
	struct jap5	{ int val; const char *msg; };
	struct jap6	{ int val; const char *msg; };
	struct jap7	{ int val; const char *msg; };
	struct jap8	{ int val; const char *msg; };
public:
static void view1() {
struct jap1 poems[] = {
	{1, "1 ソロモンの雅歌"},
	{2, "2 どうか、あなたの口の口づけをもって、わたしに口づけしてください。あなたの愛はぶどう酒にまさり、"},
	{3, "3 あなたのにおい油はかんばしく、あなたの名は注がれたにおい油のようです。それゆえ、おとめたちはあなたを愛するのです。"},
	{4, "4 あなたのあとについて、行かせてください。わたしたちは急いでまいりましょう。王はわたしをそのへやに連れて行かれた。わたしたちは、あなたによって喜び楽しみ、ぶどう酒にまさって、あなたの愛をほめたたえます。おとめたちは真心をもってあなたを愛します。"},
	{5, "5 エルサレムの娘たちよ、わたしは黒いけれども美しい。ケダルの天幕のように、ソロモンのとばりのように。"},
	{6, "6 わたしが日に焼けているがために、日がわたしを焼いたがために、わたしを見つめてはならない。わが母の子らは怒って、わたしにぶどう園を守らせた。しかし、わたしは自分のぶどう園を守らなかった。"},
	{7, "7 わが魂の愛する者よ、あなたはどこで、あなたの群れを養い、昼の時にどこで、それを休ませるのか、わたしに告げてください。どうして、わたしはさまよう者のように、あなたの仲間の群れのかたわらに、いなければならないのですか。"},
	{8, "8 女のうちの最も美しい者よ、あなたが知らないなら、群れの足跡に従っていって、羊飼たちの天幕のかたわらで、あなたの子やぎを飼いなさい。"},
	{9, "9 わが愛する者よ、わたしはあなたをパロの車の雌馬になぞらえる。"},
	{10, "10 あなたのほおは美しく飾られ、あなたの首は宝石をつらねた首飾で美しい。"},
	{11, "11 われわれは銀を散らした金の飾り物を、あなたのために造ろう。"},
	{12, "12 王がその席に着かれたとき、わたしのナルドはそのかおりを放った。"},
	{13, "13 わが愛する者は、わたしにとっては、わたしの乳ぶさの間にある没薬の袋のようです。"},
	{14, "14 わが愛する者は、わたしにとっては、エンゲデのぶどう園にあるヘンナ樹の花ぶさのようです。"},
	{15, "15 わが愛する者よ、見よ、あなたは美しい、見よ、あなたは美しい、あなたの目ははとのようだ。"},
	{16, "16 わが愛する者よ、見よ、あなたは美しく、まことにりっぱです。わたしたちの床は緑、"},
	{17, "17 わたしたちの家の梁は香柏、そのたるきはいとすぎです。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct jap2 poems[] = {
	{1, "1 わたしはシャロンのばら、谷のゆりです。"},
	{2, "2 おとめたちのうちにわが愛する者のあるのは、いばらの中にゆりの花があるようだ。"},
	{3, "3 わが愛する者の若人たちの中にあるのは、林の木の中にりんごの木があるようです。わたしは大きな喜びをもって、彼の陰にすわった。彼の与える実はわたしの口に甘かった。"},
	{4, "4 彼はわたしを酒宴の家に連れて行った。わたしの上にひるがえる彼の旗は愛であった。"},
	{5, "5 干ぶどうをもって、わたしに力をつけ、りんごをもって、わたしに元気をつけてください。わたしは愛のために病みわずらっているのです。"},
	{6, "6 どうか、彼の左の手がわたしの頭の下にあり、右の手がわたしを抱いてくれるように。"},
	{7, "7 エルサレムの娘たちよ、わたしは、かもしかと野の雌じかをさして、あなたがたに誓い、お願いする、愛のおのずから起るときまでは、ことさらに呼び起すことも、さますこともしないように。"},
	{8, "8 わが愛する者の声が聞える。見よ、彼は山をとび、丘をおどり越えて来る。"},
	{9, "9 わが愛する者はかもしかのごとく、若い雄じかのようです。見よ、彼はわたしたちの壁のうしろに立ち、窓からのぞき、格子からうかがっている。"},
	{10, "10 わが愛する者はわたしに語って言う、「わが愛する者よ、わが麗しき者よ、立って、出てきなさい。"},
	{11, "11 見よ、冬は過ぎ、雨もやんで、すでに去り、"},
	{12, "12 もろもろの花は地にあらわれ、鳥のさえずる時がきた。山ばとの声がわれわれの地に聞える。"},
	{13, "13 いちじくの木はその実を結び、ぶどうの木は花咲いて、かんばしいにおいを放つ。わが愛する者よ、わが麗しき者よ、立って、出てきなさい。"},
	{14, "14 岩の裂け目、がけの隠れ場におるわがはとよ、あなたの顔を見せなさい。あなたの声を聞かせなさい。あなたの声は愛らしく、あなたの顔は美しい。"},
	{15, "15 われわれのためにきつねを捕えよ、ぶどう園を荒す小ぎつねを捕えよ、われわれのぶどう園は花盛りだから」と。"},
	{16, "16 わが愛する者はわたしのもの、わたしは彼のもの。彼はゆりの花の中で、その群れを養っている。"},
	{17, "17 わが愛する者よ、日の涼しくなるまで、影の消えるまで、身をかえして出ていって、険しい山々の上で、かもしかのように、若い雄じかのようになってください。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct jap3 poems[] = {
	{1, "1 わたしは夜、床の上で、わが魂の愛する者をたずねた。わたしは彼をたずねたが、見つからなかった。わたしは彼を呼んだが、答がなかった。"},
	{2, "2 「わたしは今起きて、町をまわり歩き、街路や広場で、わが魂の愛する者をたずねよう」と、彼をたずねたが、見つからなかった。"},
	{3, "3 町をまわり歩く夜回りたちに出会ったので、「あなたがたは、わが魂の愛する者を見ましたか」と尋ねた。"},
	{4, "4 わたしが彼らと別れて行くとすぐ、わが魂の愛する者に出会った。わたしは彼を引き留めて行かせず、ついにわが母の家につれて行き、わたしを産んだ者のへやにはいった。"},
	{5, "5 エルサレムの娘たちよ、わたしは、かもしかと野の雌じかをさして、あなたがたに誓い、お願いする、愛のおのずから起るときまでは、ことさらに呼び起すことも、さますこともしないように。"},
	{6, "6 没薬、乳香など、商人のもろもろの香料をもって、かおりを放ち、煙の柱のように、荒野から上って来るものは何か。"},
	{7, "7 見よ、あれはソロモンの乗物で、六十人の勇士がそのまわりにいる。イスラエルの勇士で、"},
	{8, "8 皆、つるぎをとり、戦いをよくし、おのおの腰に剣を帯びて、夜の危険に備えている。"},
	{9, "9 ソロモン王はレバノンの木をもって、自分のために輿をつくった。"},
	{10, "10 その柱は銀、そのうしろは金、その座は紫の布でつくった。その内部にはエルサレムの娘たちが、愛情をこめてつくった物を張りつけた。"},
	{11, "11 シオンの娘たちよ、出てきてソロモン王を見よ。彼は婚姻の日、心の喜びの日に、その母の彼にかぶらせた冠をいただいている。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct jap4 poems[] = {
	{1, "1 わが愛する者よ、見よ、あなたは美しい、見よ、あなたは美しい。あなたの目は、顔おおいのうしろにあって、はとのようだ。あなたの髪はギレアデの山を下るやぎの群れのようだ。"},
	{2, "2 あなたの歯は洗い場から上ってきた毛を切られた雌羊の群れのようだ。みな二子を産んで、一匹も子のないものはない。"},
	{3, "3 あなたのくちびるは紅の糸のようで、その口は愛らしい。あなたのほおは顔おおいのうしろにあって、ざくろの片われのようだ。"},
	{4, "4 あなたの首は武器倉のために建てたダビデのやぐらのようだ。その上には一千の盾を掛けつらね、みな勇士の大盾である。"},
	{5, "5 あなたの両乳ぶさは、かもしかの二子である二匹の子じかが、ゆりの花の中に草を食べているようだ。"},
	{6, "6 日の涼しくなるまで、影の消えるまで、わたしは没薬の山および乳香の丘へ急ぎ行こう。"},
	{7, "7 わが愛する者よ、あなたはことごとく美しく、少しのきずもない。"},
	{8, "8 わが花嫁よ、レバノンからわたしと一緒にきなさい、レバノンからわたしと一緒にきなさい。アマナの頂を去り、セニルおよびヘルモンの頂を去り、ししの穴、ひょうの山を去りなさい。"},
	{9, "9 わが妹、わが花嫁よ、あなたはわたしの心を奪った。あなたはただひと目で、あなたの首飾のひと玉で、わたしの心を奪った。"},
	{10, "10 わが妹、わが花嫁よ、あなたの愛は、なんと麗しいことであろう。あなたの愛はぶどう酒よりも、あなたの香油のかおりはすべての香料よりも、いかにすぐれていることであろう。"},
	{11, "11 わが花嫁よ、あなたのくちびるは甘露をしたたらせ、あなたの舌の下には、蜜と乳とがある。あなたの衣のかおりはレバノンのかおりのようだ。"},
	{12, "12 わが妹、わが花嫁は閉じた園、閉じた園、封じた泉のようだ。"},
	{13, "13 あなたの産み出す物は、もろもろの良き実をもつざくろの園、ヘンナおよびナルド、"},
	{14, "14 ナルド、さふらん、しょうぶ、肉桂、さまざまの乳香の木、没薬、ろかい、およびすべての尊い香料である。"},
	{15, "15 あなたは園の泉、生ける水の井、またレバノンから流れ出る川である。"},
	{16, "16 北風よ、起れ、南風よ、きたれ。わが園を吹いて、そのかおりを広く散らせ。わが愛する者がその園にはいってきて、その良い実を食べるように。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct jap5 poems[] = {
	{1, "1 わが妹、わが花嫁よ、わたしはわが園にはいって、わが没薬と香料とを集め、わが蜜蜂の巣と、蜜とを食べ、わがぶどう酒と乳とを飲む。友らよ、食らえ、飲め、愛する人々よ、大いに飲め。"},
	{2, "2 わたしは眠っていたが、心はさめていた。聞きなさい、わが愛する者が戸をたたいている。「わが妹、わが愛する者、わがはと、わが全き者よ、あけてください。わたしの頭は露でぬれ、わたしの髪の毛は夜露でぬれている」と言う。"},
	{3, "3 わたしはすでに着物を脱いだ、どうしてまた着られようか。すでに足を洗った、どうしてまた、よごせようか。"},
	{4, "4 わが愛する者が掛けがねに手をかけたので、わが心は内におどった。"},
	{5, "5 わたしが起きて、わが愛する者のためにあけようとしたとき、わたしの手から没薬がしたたり、わたしの指から没薬の液が流れて、貫の木の取手の上に落ちた。"},
	{6, "6 わたしはわが愛する者のために開いたが、わが愛する者はすでに帰り去った。彼が帰り去ったとき、わが心は力を失った。わたしは尋ねたけれども見つからず、呼んだけれども答がなかった。"},
	{7, "7 町をまわり歩く夜回りらはわたしを見ると、撃って傷つけ、城壁を守る者らは、わたしの上着をはぎ取った。"},
	{8, "8 エルサレムの娘たちよ、わたしはあなたがたに誓って、お願いする。もしわが愛する者を見たなら、わたしが愛のために病みわずらっていると、彼に告げてください。"},
	{9, "9 女のうちの最も美しい者よ、あなたの愛する者は、ほかの人の愛する者に、なんのまさるところがあるか。あなたの愛する者は、ほかの人の愛する者に、なんのまさるところがあって、そのように、わたしたちに誓い、願うのか。"},
	{10, "10 わが愛する者は白く輝き、かつ赤く、万人にぬきんで、"},
	{11, "11 その頭は純金のように、その髪の毛はうねっていて、からすのように黒い。"},
	{12, "12 その目は泉のほとりのはとのように、乳で洗われて、良く落ち着いている。"},
	{13, "13 そのほおは、かんばしい花の床のように、かおりを放ち、そのくちびるは、ゆりの花のようで、没薬の液をしたたらす。"},
	{14, "14 その手は宝石をはめた金の円筒のごとく、そのからだはサファイヤをもっておおった象牙の細工のごとく、"},
	{15, "15 その足のすねは金の台の上にすえた大理石の柱のごとく、その姿はレバノンのごとく、香柏のようで、美しい。"},
	{16, "16 その言葉は、はなはだ美しく、彼はことごとく麗しい。エルサレムの娘たちよ、これがわが愛する者、これがわが友なのです。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct jap6 poems[] = {
	{1, "1 女のうちの最も美しい者よ、あなたの愛する者はどこへ行ったか。あなたの愛する者はどこへおもむいたか。わたしたちはあなたと一緒にたずねよう。"},
	{2, "2 わが愛する者は園の中で、群れを飼い、またゆりの花を取るために自分の園に下り、かんばしい花の床へ行きました。"},
	{3, "3 わたしはわが愛する人のもの、わが愛する者はわたしのものです。彼はゆりの花の中で、その群れを飼っています。"},
	{4, "4 わが愛する者よ、あなたは美しいことテルザのごとく、麗しいことエルサレムのごとく、恐るべきこと旗を立てた軍勢のようだ。"},
	{5, "5 あなたの目はわたしを恐れさせるゆえ、わたしからそむけてください。あなたの髪はギレアデの山を下るやぎの群れのようだ。"},
	{6, "6 あなたの歯は洗い場から上ってきた雌羊の群れのようだ。みな二子を産んで、一匹も子のないものはない。"},
	{7, "7 あなたのほおは顔おおいのうしろにあって、ざくろの片われのようだ。"},
	{8, "8 王妃は六十人、そばめは八十人、また数しれぬおとめがいる。"},
	{9, "9 わがはと、わが全き者はただひとり、彼女は母のひとり子、彼女を産んだ者の最愛の者だ。おとめたちは彼女を見て、さいわいな者ととなえ、王妃たち、そばめたちもまた、彼女を見て、ほめた。"},
	{10, "10 「このしののめのように見え、月のように美しく、太陽のように輝き、恐るべき事、旗を立てた軍勢のような者はだれか」。"},
	{11, "11 わたしは谷の花を見、ぶどうが芽ざしたか、ざくろの花が咲いたかを見ようと、くるみの園へ下っていった。"},
	{12, "12 わたしの知らないうちに、わたしの思いは、わたしを車の中のわが君のかたわらにおらせた。"},
	{13, "13 帰れ、帰れ、シュラムの女よ、帰れ、帰れ、わたしたちはあなたを見たいものだ。あなたがたはどうしてマハナイムの踊りを見るようにシュラムの女を見たいのか。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct jap7 poems[] = {
	{1, "1 女王のような娘よ、あなたの足は、くつの中にあって、なんと麗しいことであろう。あなたのももは、まろやかで、玉のごとく、名人の手のわざのようだ。"},
	{2, "2 あなたのほぞは、混ぜたぶどう酒を欠くことのない丸い杯のごとく、あなたの腹は、ゆりの花で囲まれた山盛りの麦のようだ。"},
	{3, "3 あなたの両乳ぶさは、かもしかの二子である二匹の子じかのようだ。"},
	{4, "4 あなたの首は象牙のやぐらのごとく、あなたの目は、バテラビムの門のほとりにあるヘシボンの池のごとく、あなたの鼻は、ダマスコを見おろすレバノンのやぐらのようだ。"},
	{5, "5 あなたの頭は、カルメルのようにあなたを飾り、髪の毛は紫色のようで、王はそのたれ髪に捕われた。"},
	{6, "6 愛する者よ、快活なおとめよ、あなたはなんと美しく愛すべき者であろう。"},
	{7, "7 あなたはなつめやしの木のように威厳があり、あなたの乳ぶさはそのふさのようだ。"},
	{8, "8 わたしは言う、「このなつめやしの木にのぼり、その枝に取りつこう。どうか、あなたの乳ぶさが、ぶどうのふさのごとく、あなたの息のにおいがりんごのごとく、"},
	{9, "9 あなたの口づけが、なめらかに流れ下る良きぶどう酒のごとく、くちびると歯の上をすべるように」と。"},
	{10, "10 わたしはわが愛する人のもの、彼はわたしを恋い慕う。"},
	{11, "11 わが愛する者よ、さあ、わたしたちはいなかへ出ていって、村里に宿りましょう。"},
	{12, "12 わたしたちは早く起き、ぶどう園へ行って、ぶどうの木が芽ざしたか、ぶどうの花が咲いたか、ざくろが花咲いたかを見ましょう。その所で、わたしはわが愛をあなたに与えます。"},
	{13, "13 恋なすは、かおりを放ち、もろもろの良きくだものは、新しいのも古いのも共にわたしたちの戸の上にある。わが愛する者よ、わたしはこれをあなたのためにたくわえました。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct jap8 poems[] = {
	{1, "1 どうか、あなたは、わが母の乳ぶさを吸ったわが兄弟のようになってください。わたしがそとであなたに会うとき、あなたに口づけしても、だれもわたしをいやしめないでしょう。"},
	{2, "2 わたしはあなたを導いて、わが母の家に行き、わたしを産んだ者のへやにはいり、香料のはいったぶどう酒、ざくろの液を、あなたに飲ませましょう。"},
	{3, "3 どうか、彼の左の手がわたしの頭の下にあり、右の手がわたしを抱いてくれるように。"},
	{4, "4 エルサレムの娘たちよ、わたしはあなたがたに誓い、お願いする、愛のおのずから起るときまでは、ことさらに呼び起すことも、さますこともしないように。"},
	{5, "5 自分の愛する者によりかかって、荒野から上って来る者はだれですか。りんごの木の下で、わたしはあなたを呼びさました。あなたの母上は、かしこで、あなたのために産みの苦しみをなし、あなたの産んだ者が、かしこで産みの苦しみをした。"},
	{6, "6 わたしをあなたの心に置いて印のようにし、あなたの腕に置いて印のようにしてください。愛は死のように強く、ねたみは墓のように残酷だからです。そのきらめきは火のきらめき、最もはげしい炎です。"},
	{7, "7 愛は大水も消すことができない、洪水もおぼれさせることができない。もし人がその家の財産をことごとく与えて、愛に換えようとするならば、いたくいやしめられるでしょう。"},
	{8, "8 わたしたちに小さい妹がある、まだ乳ぶさがない。わたしたちの妹に縁談のある日には、彼女のために何をしてやろうか。"},
	{9, "9 彼女が城壁であるなら、その上に銀の塔を建てよう。彼女が戸であるなら、香柏の板でそれを囲もう。"},
	{10, "10 わたしは城壁、わたしの乳ぶさは、やぐらのようでありました。それでわたしは彼の目には、平和をもたらす者のようでありました。"},
	{11, "11 ソロモンはバアルハモンにぶどう園をもっていた。彼はぶどう園を、守る者どもにあずけて、おのおのその実のために銀一千を納めさせた。"},
	{12, "12 わたしのものであるぶどう園は、わたしの前にある。ソロモンよ、あなたは一千を獲るでしょう、その実を守る者どもは二百を獲るでしょう。"},
	{13, "13 園の中に住む者よ、わたしの友だちはあなたの声に耳を傾けます、どうぞ、それをわたしに聞かせてください。"},
	{14, "14 わが愛する者よ、急いでください。かんばしい山々の上で、かもしかのように、また若い雄じかのようになってください。"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};