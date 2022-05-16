#include <map>
#include <string>
class Bible30
{
	struct be1	{ int val; const char *msg; };
	struct be2	{ int val; const char *msg; };
	struct be3	{ int val; const char *msg; };
	struct be4	{ int val; const char *msg; };
	struct be5	{ int val; const char *msg; };
	struct be6	{ int val; const char *msg; };
	struct be7	{ int val; const char *msg; };
	struct be8	{ int val; const char *msg; };
	struct be9	{ int val; const char *msg; };
public:
static void view1() {
struct be1 poems[] = {
	{1, "1 Словы Амоса, аднаго пастуха Тэкойскага, якія ён чуў ва ўяве пра Ізраіля ў дні Азіі, цара Юдэйскага і ў дні Ераваама, сына Ёасавага, цара Ізраільскага, за два гады перад землятрусам."},
	{2, "2 І сказаў ён: Гасподзь загрыміць зь Сіёна і дасьць голас Свой зь Ерусаліма, - і заплачуць халупы пастухоў, і высахне вяршыня Карміла."},
	{3, "3 Так кажа Гасподзь: за тры злачынствы Дамаска і за чатыры не пашкадую яго, бо яны малацілі Галаад жалезнымі цапамі."},
	{4, "4 І пашлю агонь на дом Азаіла, - і зжарэ ён харомы Вэнадада."},
	{5, "5 І скрышу замкі Дамаска і зьнішчу жыхароў даліны Авэн і таго, хто трымае жазло - з дому Эдэнавага, і пойдзе народ Арамейскі ў палон у Кір, кажа Гасподзь."},
	{6, "6 Так кажа Гасподзь: за тры злачынствы Газы і за чатыры не пашкадую яе, бо яны вывелі ўсіх у палон, каб аддаць іх Эдому."},
	{7, "7 І пашлю агонь у сьцены Газы, - і зжарэ харомы яе."},
	{8, "8 І зьнішчу жыхароў Азота і таго, які трымае жазло ў Аскалоне, і павярну руку Маю на Экрон, - і загіне рэшта Філістымлянаў, кажа Гасподзь Бог."},
	{9, "9 Так кажа Гасподзь: за тры злачынствы Тыра і за чатыры не пашкадую яго, бо яны аддалі ўсіх палонных Эдому і не згадалі пра братэрскае спрымірэньне."},
	{10, "10 Пашлю агонь у сьцены Тыра, - і зжарэ харомы яго."},
	{11, "11 Так кажа Гасподзь: за тры злачынствы Эдома і за чатыры не пашкадую яго, бо ён перасьледаваў брата свайго мечам, прыдушыў пачуцьці роднасьці, лютаваў пастаянна ў гневе сваім і заўсёды захоўваў лютасьць сваю."},
	{12, "12 І пашлю агонь на Тэман, - і зжарэ харомы Васора."},
	{13, "13 Так кажа Гасподзь: за тры злачынствы сыноў Амонавых і за чатыры не пашкадую іх, бо яны расьціналі цяжарных у Галаадзе, каб пашырыць межы свае."},
	{14, "14 І запалю агонь у сьценах Равы, - і зжарэ харомы яе сярод крыку ў дзень бітвы, зь віхураю ў дзень буры."},
	{15, "15 І пойдзе цар іхні ў палон, ён і князі ягоныя разам зь ім, кажа Гасподзь."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct be2 poems[] = {
	{1, "1 Так кажа Гасподзь: за тры злачынствы Маава і за чатыры не пашкадую яго, бо ён перапаліў косткі цара Эдомскага на вапну."},
	{2, "2 І пашлю агонь на Маава, - і зжарэ харомы Карыота, і загіне Мааў сярод разгрому з шумам пад гук трубы."},
	{3, "3 Зьнішчу судзьдзю з асяродзьдзя яго і ўсьмерчу ўсіх князёў яго разам зь ім, кажа Гасподзь."},
	{4, "4 Так кажа Гасподзь: за тры злачынствы Юды і за чатыры не пашкадую яго, бо адкінулі закон Гасподні і пастановаў Яго не захавалі, і ідалы іхнія, сьледам за якімі хадзілі бацькі іхнія, зьвярнулі іх з дарогі."},
	{5, "5 І пашлю агонь на Юду, - і зжарэ харомы Ерусаліма."},
	{6, "6 Так кажа Гасподзь: за тры злачынствы Ізраіля і за чатыры не пашкадую яго, бо прадаюць праўдзівага за срэбра і беднага - за пару сандаляў."},
	{7, "7 Прагнуць, каб пыл зямны быў на галаве ў бедных, і шлях паслухмяных скрыўляюць; нават бацька і сын ходзяць да адной жанчыны, каб няславіць сьвятое імя Маё."},
	{8, "8 На вопратцы, узятай пад заклад, ляжаць каля кожнага ахвярніка, і віно, спаганянае з абвінавачаных, п'юць у доме багоў сваіх."},
	{9, "9 А Я зьнішчыў перад абліччам іх Амарэя, вышыня якога была як вышыня кедра, і які быў моцны як дуб; Я зьнішчыў плод яго наверсе і карэньне яго ўнізе."},
	{10, "10 А вас Я вывеў зь зямлі Егіпецкай і вадзіў вас у пустыні сорак гадоў, каб вы ўспадкавалі зямлю Амарэйскую."},
	{11, "11 З сыноў вашых Я выбіраў у прарокі і з хлопцаў вашых - у назарэі; ці ж ня так гэта, сыны Ізраіля? кажа Гасподзь."},
	{12, "12 А вы назарэяў паілі віном і прарокам загадвалі, кажучы: не прарочце."},
	{13, "13 Вось, Я прыцісну вас, як цісьне калясьніца, накладзеная снапамі, -"},
	{14, "14 і ва ўвішнага ня станецца сілы бегчы, і моцны ня ўтрымае крэпасьці сваёй і адважны не ўратуе свайго жыцьця,"},
	{15, "15 ні стралец з лука ня ўстоіць, ні скараход не ўцячэ, ні кожны верхавец не ўратуе свайго жыцьця."},
	{16, "16 І самы адважны з адважных уцячэ голы ў той дзень, кажа Гасподзь."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct be3 poems[] = {
	{1, "1 Слухайце слова гэтае, якое Гасподзь прамовіў на вас, сыны Ізраіля, - на ўсё племя, якое вывеў Я зь зямлі Егіпецкай, - кажучы:"},
	{2, "2 толькі вас прызнаў Я з усіх плямёнаў зямлі, таму і спаганю з вас за ўсе беззаконьні вашыя."},
	{3, "3 Ці пойдуць двое разам, не згаварыўшыся паміж сабою?"},
	{4, "4 Ці раве леў у лесе, калі няма перад ім здабычы? ці падае свой голас ільвяня з логвішча свайго, калі ён нічога не злавіў?"},
	{5, "5 Ці трапіць птушка ў пятлю на зямлі, калі сіла няма ёй? Ці падымецца зь зямлі пятля, калі нічога не трапіла ў яе?"},
	{6, "6 Ці трубіць у горадзе труба, - і каб народ не спалохаўся? Ці бывае ў горадзе бедства, якое не Гасподзь наслаў бы?"},
	{7, "7 Бо Гасподзь Бог нічога ня робіць, не адкрыўшы сваёй таямніцы рабам Сваім прарокам."},
	{8, "8 Леў пачаў рыкаць, - хто не здрыганецца? Гасподзь Бог сказаў, хто ня будзе прарочыць?"},
	{9, "9 Абвясьцеце на дахах у Азоце і на дахах у зямлі Егіпецкай і скажэце: зьбярэцеся на горы Самарыі і паглядзеце на вялікае бясчынства ў ёй і на ўціскі сярод яе."},
	{10, "10 Яны не ўмеюць чыніць справядліва, кажа Гасподзь: гвалтам і рабункам зьбіраюць скарбы ў харомы свае."},
	{11, "11 Таму так кажа Гасподзь Бог: вось няпрыяцель, і прытым вакол усёй зямлі! ён скіне магутнасьць тваю, і абабраны будуць харомы твае."},
	{12, "12 Так кажа Гасподзь: як часам пастух вырывае з пашчы ільвінай дзьве галені альбо частку вуха, так уратаваныя будуць сыны Ізраілевыя, якія сядзяць у Самарыі ў кутку пасьцелі і ў Дамаску на ложку."},
	{13, "13 Слухайце і засьведчыце дому Якава, кажа Гасподзь Бог, Бог Саваоф."},
	{14, "14 Бо ў той дзень, калі Я спаганю зь Ізраіля за злачынствы ягоныя, спаганю і за ахвярнікі ў Вэтылі, - адцятыя будуць рогі алтара і ўпадуць на зямлю."},
	{15, "15 І пакараю дом зімовы разам з домам летнім, і зьнікнуць дамы з украсамі са слановай касьці, і ня стане многіх дамоў, кажа Гасподзь."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct be4 poems[] = {
	{1, "1 Слухайце слова гэтае, цяляты Васанскія, якія на гары Самарыйскай, - вы, што ўціскаеце бедных, прыгнятаеце гаротных, кажаце гаспадарам сваім: падавай, і мы будзем піць!"},
	{2, "2 Бажыўся Гасподзь Бог сьвятасьцю Сваёю, што вось, прыйдуць на вас дні, калі павалакуць вас бусакамі і астатніх вашых вудамі."},
	{3, "3 І праз праломіны ў мурах выйдзеце, кожнае - як станецца, і кінеце ўсё ўбранства харомаў, кажа Гасподзь."},
	{4, "4 Ідзеце ў Вэтыль - і грашэце, у Галгал - і памнажайце злачынствы; прыносьце ахвяры вашыя кожнае раніцы, дзесяціны вашыя хоць праз кожныя тры дні."},
	{5, "5 Прыносьце ў ахвяру падзяку квасную, узьвяшчайце пра дабраахвотныя прынашэньні вашыя і расказвайце пра іх, бо гэта вы любіце, сыны Ізраілевыя, кажа Гасподзь Бог."},
	{6, "6 Затое і даў Я вам голыя зубы ва ўсіх гарадах вашых і нястачу хлеба ва ўсіх селішчах вашых; але вы не зьвярнуліся да Мяне, кажа Гасподзь."},
	{7, "7 І стрымліваў ад вас дождж за тры месяцы да жніва; праліваў дождж на адзін горад, а на другі горад не праліваў дажджу; адна дзялянка напойваная была дажджом, а другая, не пакропленая дажджом, засыхала."},
	{8, "8 І сыходзіліся два, тры гарады ў адзін горад, каб напіцца вады, і не маглі ўдосыць напіцца; але і тады вы не зьвярнуліся да Мяне, кажа Гасподзь Бог."},
	{9, "9 Я пакараю вас іржою і блякласьцю хлеба; мноства садоў вашых і вінаграднікаў вашых, і смакоўніц вашых і масьлін вашых пажыраў вусень, - і пры ўсім тым вы не зьвярнуліся да Мяне, кажа Гасподзь."},
	{10, "10 Пасылаў Я на вас згубную пошасьць, падобную на Егіпецкую, забіваў мечам хлопцаў вашых, адводзячы коней у палон, так што смурод ад сыноў вашых падымаўся ў ноздры вашыя, - і пры ўсім тым вы не зьвярнуліся да Мяне, кажа Гасподзь."},
	{11, "11 Чыніў Я сярод вас разбурэньні, як разбурыў Бог Садому і Гамору, і вы былі выхапленыя, як галавешка з агню, - і пры ўсім тым вы не зьвярнуліся да Мяне, кажа Гасподзь."},
	{12, "12 Таму так зраблю Я з табою, Ізраіле; і як Я так зраблю з табою, дык падрыхтуйся да сустрэчы Бога твайго, Ізраіле,"},
	{13, "13 бо вось, - Ён, Які стварае горы і творыць вецер і абвяшчае чалавеку намеры ягоныя, ранішняе сьвятло абарочвае ў морак і крочыць вышэй зямлі. Гасподзь Бог Саваоф - імя Яму."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct be5 poems[] = {
	{1, "1 Слухайце гэтае слова, у якім я падыму плач па вас, дом Ізраілеў."},
	{2, "2 Упала, не ўстае болей дзева Ізраілева! павалена на зямлі сваёй, і няма каму падняць яе."},
	{3, "3 бо так кажа Гасподзь Бог: горад, які выступаў з тысячаю, застанецца толькі з сотняю, і які выступіў з сотняю, застанецца зь дзясяткам каля дома Ізраілевага."},
	{4, "4 Бо так кажа Гасподзь Бог дому Ізраілеваму: знайдзеце Мяне - і будзеце жывыя."},
	{5, "5 Ня шукайце Вэтыля і не хадзеце ў Галгал і ў Вірсавію не вандруйце, бо Галгал увесь пойдзе ў палон і Вэтыль абернецца ў нішто."},
	{6, "6 Знайдзеце Госпада - і будзеце жывыя, каб Ён не памкнуўся на дом Язэпаў як агонь, які зжарэ яго, і ня будзе каму патушыць яго ў Вэтылі."},
	{7, "7 О вы, якія суд ператвараеце ў атруту і праўду кідаеце на зямлю!"},
	{8, "8 Хто стварыў сямізор'е і Арыён і ператварае сьмяротны цень у ясную раніцу, а дзень робіць цёмным як ноч, заклікае воды марскія і разьлівае іх па ўлоньні зямлі? Гасподзь - імя Яму!"},
	{9, "9 Ён мацуе спусташальніка супроць дужага, і спусташальнік уваходзіць у крэпасьць."},
	{10, "10 А яны ненавідзяць выкрывальніка ў браме і грэбуюць тым, хто кажа праўду."},
	{11, "11 Дык вось, за тое, што вы топчаце беднага і бераце зь яго дарункі хлебам, вы пабудуеце дамы з часанага каменьня, але жыць ня будзеце ў іх; разьведзяце цудоўныя вінаграднікі, а віна зь іх ня піцьмеце."},
	{12, "12 Бо Я ведаю, якія шматлікія злачынствы вашыя і якія цяжкія грахі вашыя: вы - ворагі справядлівага, бераце хабар і перакручваеце ў судзе справы бедных."},
	{13, "13 Таму разумны маўчыць гэтым часам, бо ліхі гэты час."},
	{14, "14 Шукайце дабра, а ня ліха, каб засталіся вы жывыя, - і тады Гасподзь Бог Саваоф будзе з вамі, як вы кажаце."},
	{15, "15 Зьненавідзьце зло і палюбеце дабро і аднавеце каля брамы правасудзьдзе; магчыма, Гасподзь Бог Саваоф пашкадуе рэшту Язэпавую."},
	{16, "16 Таму так кажа Гасподзь Бог Саваоф, Усяўладны: на ўсіх вуліцах будзе плач, і на ўсіх дарогах будуць усклікаць: жаль, жаль! і заклічуць земляробы бедаваць і спанатраных у жалобных песьнях - плакаць,"},
	{17, "17 і ва ўсіх вінаградніках будзе плач, бо Я прайду сярод Цябе, кажа Гасподзь."},
	{18, "18 Гора тым, якія жадаюць дня Гасподняга! Навошта вам гэты дзень Гасподні? ён - цемра, а не сьвятло, -"},
	{19, "19 тое самае, як калі б хто ўцёк ад ільва - і трапіўся б яму насустрач мядзьведзь, альбо калі б прыйшоў дахаты і абаперся рукою аб сьцяну - і зьмяя ўкусіла б яго."},
	{20, "20 Хіба дзень Гасподні ня морак, а сьвятло? ён - цемра, і няма ў ім зьзяньня."},
	{21, "21 Ненавіджу, адкідаю сьвяты вашыя і ня нюхаю ахвяр у час урачыстых сходаў вашых."},
	{22, "22 Калі прынесяце Мне цэласпаленьне і хлебнае прынашэньне, Я ня прыму іх і не пагляджу на падзякавальную ахвяру з тлустых цяльцоў вашых."},
	{23, "23 Адвядзі ад Мяне шум песьняў тваіх, бо гукаў гусьляў тваіх Я ня буду слухаць."},
	{24, "24 Хай як вада цячэ суд, і праўда - як моцны паток!"},
	{25, "25 Ці прыносілі вы Мне ахвяры і хлебныя дарункі ў пустыні ў ходзе сарака гадоў, дом Ізраілеў?"},
	{26, "26 Вы насілі скінію Малохавую і зоркі бога вашага Рэмфана, выявы, якія вы сабе зрабілі."},
	{27, "27 За тое Я перасялю вас за Дамаск, кажа Гасподзь; Бог Саваоф - імя Яму!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct be6 poems[] = {
	{1, "1 Гора бястурботным на Сіёне і спадзявальцам на гару Самарыйскую, знакамітым народу-першынца, да якіх прыходзіў дом Ізраіля!"},
	{2, "2 Прайдзеце ў Калне і паглядзеце, адтуль перайдзеце ў Эмат вялікі і спусьцецеся ў Гэт Філістымкі: ці ня лепшыя яны за гэтыя царствы? ці ня шырэйшыя іх абшары за абшары вашыя?"},
	{3, "3 Вы, якія дзень бедства лічыце далёкім і набліжаеце перамогу насільля, -"},
	{4, "4 вы, якія ляжыце на ложках з слановай касьці і песьціцеся на пасьцелях вашых, ясьце найлепшых бараноў са статку і цялят з кормнае пашы,"},
	{5, "5 сьпяваеце пад гукі гусьляў, думаючы, што валодаеце зычным інструментам, як Давід."},
	{6, "6 п'яце з чараў віно, мажацеся найлепшымі масьцямі і ня ўбольваецеся зь бедства Язэпа!"},
	{7, "7 За тое сёньня пойдуць яны ў палон на чале палонных, і скончыцца вялікая радасьць сьпешчаных."},
	{8, "8 Божыцца Гасподзь Бог Самім Сабою, і так кажа Гасподзь Бог Саваоф: грэбую пыхлівасьцю Якава і ненавіджу харомы ягоныя, і аддам горад і ўсё, што напаўняе яго."},
	{9, "9 І будзе: калі ў якім доме застанецца дзесяць чалавек, дык памруць і яны,"},
	{10, "10 і возьме іх родзіч іхні альбо спальшчык, каб вынесьці косткі іх з дому, і скажа прыдомніку: ці ёсьць у цябе яшчэ хто? Той адкажа: няма нікога. І скажа гэты: маўчы! бо нельга згадваць імя Гасподняга."},
	{11, "11 Бо вось, Гасподзь дасьць загад і ўразіць вялікія дамы расколінамі, а малыя дамы - шчылінамі."},
	{12, "12 Ці бегаюць коні па скале? ці можна араць яе валамі? Вы тым часам суд ператвараеце ў атруту і плод праўды - у горыч,"},
	{13, "13 вы, якія захапляецеся нікчэмнымі рэчамі і кажаце: ці не сваёю сілаю мы набылі сабе магутнасьць?"},
	{14, "14 Вось Я, кажа Гасподзь Бог Саваоф, падыму народ супроць вас, дом Ізраілеў, і буду ціснуць вас ад уваходу ў Эмат да патока ў пустыні."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct be7 poems[] = {
	{1, "1 Такую ўяву адкрыў мне Гасподзь Бог: вось, Ён стварыў саранчу на пачатку росту позьняй травы, і гэта была трава пасьля царскага пакосу."},
	{2, "2 І было, калі яна скончыла есьці траву на зямлі, я сказаў: Госпадзе Божа! пашкадуй; як устаіць Якаў? ён вельмі малы."},
	{3, "3 І пашкадаваў Гасподзь пра тое: ня будзе гэтага, сказаў Гасподзь."},
	{4, "4 Такую ўяву адкрыў мне Гасподзь Бог: вось, Гасподзь Бог утварыў для суду агонь, - і ён зжэр вялікую багну, зжэр і частку зямлі."},
	{5, "5 І сказаў я: Госпадзе Божа! спыні; як устаіць Якаў? ён вельмі малы."},
	{6, "6 І пашкадаваў Гасподзь пра тое: і гэтага ня будзе, сказаў Гасподзь Бог."},
	{7, "7 Такую ўяву адкрыў Ён мне: вось, Гасподзь стаяў на выноснай сьцяне, і ў руцэ ў яго сьвінцовая вага."},
	{8, "8 І сказаў мне Гасподзь: што ты бачыш, Амосе?, я адказаў: вагу. І Гасподзь сказаў: вось, пакладу вагу сярод народу майго Ізраіля; ня буду больш дараваць яму."},
	{9, "9 І спустошаны будуць ахвярныя вышыні Ісакавыя, і разбураны будуць сьвяцілішчы Ізраілевыя, і паўстану зь мечам супроць дому Ераваамавага."},
	{10, "10 І паслаў Амасія, сьвятар Вэтыльскі, да Ераваама, цара Ізраільскага, сказаць: Амос утварае смуту супроць цябе сярод дому Ізраілевага; зямля ня можа цярпець усіх слоў ягоных,"},
	{11, "11 бо так кажа Амос: ад меча памрэ Ераваам, а Ізраіль абавязкова зьведзены будзе палонным зь зямлі сваёй."},
	{12, "12 І сказаў Амасія Амосу: празорлівец! ідзі і сыдзі ў зямлю Юдавую; там еж хлеб і там прароч,"},
	{13, "13 а ў Вэтылі больш не прароч, бо ён - сьвятыня цара і дом царскі."},
	{14, "14 І адказваў Амос і сказаў Амасію: я - не прарок і ня сын прарока, я быў пастух і зьбіраў сікаморы."},
	{15, "15 Але Гасподзь узяў мяне ад авечак, і сказаў мне Гасподзь: ідзі, прароч народу Майму Ізраілю."},
	{16, "16 Цяпер выслухай слова Гасподняе. Ты кажаш: не прароч на Ізраіля і не вымаўляй слоў на дом Ісакаў."},
	{17, "17 За гэта, вось што кажа Гасподзь: жонка твая будзе зьняслаўлена ў горадзе, сыны і дочкі твае загінуць ад меча, зямля твая будзе падзелена межавою вяроўкаю, а ты памрэш у зямлі нячыстай, і Ізраіль мусова выведзены будзе зь зямлі сваёй."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct be8 poems[] = {
	{1, "1 Такую ўяву адкрыў мне Гасподзь Бог: вось, кош са сьпелымі пладамі."},
	{2, "2 І сказаў Ён: што ты бачыш, Амосе? Я адказаў: кош са сьпелымі пладамі. Тады Гасподзь сказаў мне: насьпеў канец народу Майму Ізраілю: ня буду болей дараваць яму."},
	{3, "3 Песьні хорама ў той дзень ператворацца ў галашэньне, кажа Гасподзь Бог; многа будзе трупаў, на кожным месцы будуць кідаць іх моўчкі."},
	{4, "4 Выслухайце гэта, хто прагне праглынуць бедных і загубіць убогіх, -"},
	{5, "5 вы, якія кажаце: некалісь прыйдзе час маладзіка, каб мы прадавалі хлеб, і субота - каб адчыніць засекі, паменшыць меру, павялічыць цану сікля і ашукваць няправільнымі вагамі,"},
	{6, "6 каб купляць немаёмасных за срэбра і бедных за пару абутку, а высеўкі з хлеба прадаваць."},
	{7, "7 Бажыўся Гасподзь славаю Якава: сапраўды не забуду вавек ніводнага з учынкаў іхніх!"},
	{8, "8 Ці не пахісьнецца ад гэтага зямля, і ці не заплача кожны, хто жыве на ёй? Захвалюецца яна як рака, і будзе падымацца і апускацца як рака Егіпецкая."},
	{9, "9 І будзе ў той дзень, кажа Гасподзь Бог: учыню заход сонца апоўдні і азмрочу зямлю сярод сьветлага дня,"},
	{10, "10 і абярну сьвяткаваньні вашыя ў бедаваньні і ўсе песьні вашы - у плач, і ўскладу на ўсе сьцёгны вярэту і плешыну на кожную галаву; і ўчыню ў краіне плач, як па адзіным сыне, і канец яе будзе - як горкі дзень."},
	{11, "11 Вось настаюць дні, кажа Гасподзь Бог, калі Я пашлю на зямлю голад, - ня голад хлеба, ня смагу вады, а смагу чуцьця слоў Гасподніх."},
	{12, "12 І будуць хадзіць ад мора да мора і бадзяцца ад поўначы да ўсходу, шукаючы слова Гасподняга, і ня знойдуць яго."},
	{13, "13 У той дзень раставаць будуць ад смагі прыгожыя дзяўчаты і хлопцы,"},
	{14, "14 якія божацца грахом Самарыйскім і кажуць: жывы Бог твой, Дане! і жывы шлях у Вірсавію! - Яны ўпадуць і ўжо ня ўстануць."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view9() {
struct be9 poems[] = {
	{1, "1 Бачыў я Госпада, Які стаяў над ахвярнікам, і Ён сказаў: стукні ў бэльку над варотамі, каб патрэсьліся вушакі, і абярні іх на галовы ўсіх іх, а астатніх зь іх Я паб'ю мечам: не ўцячэ ў іх ніхто, хто бяжыць, і не ўратуецца зь іх ніхто, хто жадае ўратавацца."},
	{2, "2 Хоць бы яны зачыніліся ў апраметную, і адтуль рука Мая возьме іх; хоць бы ўзышлі на неба, і адтуль скіну іх."},
	{3, "3 І хоць бы яны схаваліся на вяршыні Карміла, і там знайду і вазьму іх; хоць бы схаваліся ад вачэй Маіх на дне мора, і там загадаю марскому зьмею ўгрызьці іх."},
	{4, "4 І калі пойдуць у палон паперадзе ворагаў сваіх, дык загадаю мечу і там забіць іх. Абярну на іх вочы Мае на бяду ім, а не на дабро."},
	{5, "5 Бо Гасподзь Бог Саваоф дакранецца да зямлі, - і яна растане, і заплачуць усе жывыя на ёй; і падымецца ўся яна як рака, і апусьціцца Як рака Егіпецкая."},
	{6, "6 Ён зладзіў вышнія харомы Свае на нябёсах і скляпеньне Сваё ўмацаваў на зямлі, заклікае воды марскія і вылівае іх па ўлоньні зямлі; Гасподзь - імя Яму."},
	{7, "7 Ці не такія, як сыны Эфіопаў, і вы для Мяне, сыны Ізраілевыя? кажа Гасподзь. Ці ня Я вывеў Ізраіля зь зямлі Егіпецкай і Філістымлянаў - з Кафтора і Арамлянаў - з Кіра?"},
	{8, "8 Вось, вочы Госпада Бога - на грэшнае царства, і Я зьнішчу яго з аблічча зямлі; але дом Якава ня зусім зьнішчу, кажа Гасподзь."},
	{9, "9 Бо вось, Я загадаю і рассыплю дом Ізраілеў па ўсіх народах, як рассыпаюць зерне ў рэшаце, і ніводнае не ўпадзе на зямлю."},
	{10, "10 Ад меча памруць усе грэшнікі з народу Майго, якія кажуць: не спасьцігне нас і ня прыйдзе да нас гэтае бедства!"},
	{11, "11 У той дзень Я аднаўлю скінію Давідавую заняпалую, што ўпала, зачыню трэшчыны ў ёй і разбуранае адбудую, і зладжу яе, як у дні старадаўнія,"},
	{12, "12 каб яны авалодалі рэштай Эдома і ўсімі народамі, паміж якімі абвесьціце імя Маё, кажа Гасподзь, Які творыць усё гэта."},
	{13, "13 Вось, настануць дні, кажа Гасподзь, калі араты застане яшчэ жняца, а той, таптальнік вінаграду, - сейбіта; і горы крынічыць будуць вінаградным сокам, і ўсе пагоркі пацякуць."},
	{14, "14 І вярну з палону народ Мой, Ізраіля, і забудуць апусьцелыя гарады і паселяцца ў іх, насадзяць вінаграднікі і будуць піць віно зь іх, разьвядуць сады і пачнуць есьці плады зь іх."},
	{15, "15 І асялю іх на зямлі іхняй і іх ня будуць болей вырываць зь зямлі іхняй, якую Я даў ім, кажа Гасподзь Бог твой жа Гасподзь."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};