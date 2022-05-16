#include <map>
#include <string>
class Bible53
{
	struct be1	{ int val; const char *msg; };
	struct be2	{ int val; const char *msg; };
	struct be3	{ int val; const char *msg; };
public:
static void view1() {
struct be1 poems[] = {
	{1, "1 Павал і Сілуан і Цімафей - Фесаланіцкай Царкве ў Богу Айцы нашым і Госпадзе Ісусе Хрысьце:"},
	{2, "2 мілата вам і мір ад Бога Айца нашага і Госпада Ісуса Хрыста."},
	{3, "3 Заўсёды па справядлівасьці мы павінны дзякаваць Богу за вас, браты, бо ўзрастае вера вашая, і памнажаецца любоў кожнага адно да аднаго паміж усімі вамі."},
	{4, "4 так што мы самі хвалімся вамі ў цэрквах Божых, цярплівасьцю вашай і вераю ва ўсіх ганеньнях і нягодах, якія вы пераносіце"},
	{5, "5 у доказ таго, што будзе справядлівы суд Божы, каб вам быць вартымі Царства Божага, дзеля якога вы і пакутуеце."},
	{6, "6 Бо праведна прад Богам - тым, хто вас зьневажае, плаціць смуткам,"},
	{7, "7 а вам, каго зьневажаюць, радасьцю разам з намі, у прышэсьце Госпада Ісуса зь неба, з анёламі моцы Ягонай,"},
	{8, "8 у полымным вагні таго, хто помсьціцца тым, што не спазналі Бога і не ўпакорваюцца зьвеставаньню Госпада нашага Ісуса Хрыста,"},
	{9, "9 якія прымуць кару, вечную пагібель ад імя Госпада і ад славы магутнасьці Ягонай,"},
	{10, "10 калі Ён прыйдзе праславіцца ў сьвятых Сваіх і зьявіцца дзівосным у дзень той усім вернікам, бо вы паверылі нашаму сьведчаньню."},
	{11, "11 На тое і молімся заўсёды за вас, каб Бог наш зрабіў вас вартымі пакліканьня і ўчыніў усякую добрую ласку даброці і справу веры ў моцы."},
	{12, "12 Няхай праславіцца імя Госпада нашага Ісуса Хрыста ў вас, і вы ў Ім, па мілаце Бога нашага і Госпада Ісуса Хрыста."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct be2 poems[] = {
	{1, "1 Молім вас, браты, за прышэсьце Госпада нашага Ісуса Хрыста, за нашу сустрэчу зь Ім,"},
	{2, "2 не сьпяшацца пахіснуцца ў розуме і бянтэжыцца ні ад духа, ні ад слова, ні ад пасланьня, нібыта намі (пасланага), быццам ужо настаў дзень Хрыстовы."},
	{3, "3 Хай не ашукае вас ніхто ніяк: бо дзень той ня прыйдзе, пакуль ня прыйдзе раней адступленьне і не адкрыецца чалавек грэху, сын пагібелі,"},
	{4, "4 які супрацівіцца і выстаўляецца вышэй за ўсё, што называецца Богам ці сьвятыняю, так што ў храме Божым сядзе ён, як Бог, выдаючы сябе за Бога."},
	{5, "5 Ці ж не памятаеце, як я, яшчэ калі быў у вас, казаў вам пра гэта?"},
	{6, "6 І цяпер вы ведаеце, што не дазваляе адкрыцца яму ў сваім часе."},
	{7, "7 Бо таямніца беззаконьня ўжо ў дзеяньні; толькі ня зьдзейсьніцца да таго часу, пакуль ня будзе ўзяты з асяродзьдзя той, хто трымае цяпер, -"},
	{8, "8 і тады адкрыецца беззаконьнік, якога Гасподзь Ісус заб'е духам вуснаў Сваіх і зьнішчыць зьяўленьнем прышэсьця Свайго,"},
	{9, "9 таго, прышэсьце якога, пасьля дзеяньня сатаны, будзе з усякаю сілаю і азнакамі і цудамі фальшывымі,"},
	{10, "10 і з усякім няправедным ашуканствам тых, якія гінуць за тое, што яны не прынялі любові ісьціны дзеля свайго збавеньня."},
	{11, "11 І за гэта пашле ім Бог дзеяньне аблуды, так што яны будуць верыць хлусьні,"},
	{12, "12 хай будуць асуджаны ўсе тыя, што ня верылі ісьціне, а ўпадабалі няпраўду."},
	{13, "13 А мы заўсёды павінны дзякаваць Богу за вас, любасныя Богу браты, што Бог ад пачатку, праз асьвячэньне Духа і веру ісьціне, выбраў вас на ратаваньне,"},
	{14, "14 да якога і паклікаў вас зьвеставаньнем нашым, дзеля дасягненьня славы Госпада нашага Ісуса Хрыста."},
	{15, "15 Дык вось, браты, стойце і трымайце паданьні, якім вы навучаны або словам, або пасланьнем нашым."},
	{16, "16 А Сам Гасподзь наш Ісус Хрыстос і Бог і Айцец наш, Які палюбіў нас і даў уцеху вечную і надзею добрую ў мілаце,"},
	{17, "17 няхай суцешыць вашыя сэрцы і ўмацуе вас у кожным слове і справе добрай."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct be3 poems[] = {
	{1, "1 Дык вось, малецеся за нас, браты, каб слова Гасподняе шырылася і праслаўлялася, як і ў вас,"},
	{2, "2 і каб нам пазбыцца падступных і ліхіх людзей; бо не ва ўсіх вера."},
	{3, "3 Але верны Гасподзь, Які ўмацуе вас і аслоніць ад ліхадзея."},
	{4, "4 Мы пэўныя за вас у Госпадзе, што вы выконваеце і будзеце выконваць тое, што мы вам наказваем."},
	{5, "5 А Гасподзь хай скіруе сэрцы вашыя ў любоў Божую і ў цярплівасьць Хрыстовую."},
	{6, "6 А наказваем вам, браты, імем Госпада нашага Ісуса Хрыста, цурацца кожнага брата, які жыве гультаём, а не паводле паданьня, якое прынялі ад нас,"},
	{7, "7 бо вы самі ведаеце, як павінны вы пераймаць нас; бо мы не гультаявалі ў вас,"},
	{8, "8 ні ў кога ня елі хлеба дарма, а займаліся працай і рабілі ноч і дзень, каб ня стацца цяжарам каму-небудзь з вас,"},
	{9, "9 не таму, каб мы ня мелі ўлады, а каб сябе саміх даць вам у прыклад на перайманьне нас."},
	{10, "10 Бо, калі мы былі ў вас, дык наказвалі вам вось што: калі хто ня хоча працаваць, той і ня еж."},
	{11, "11 Але чуем, што некаторыя ў вас жывуць гультаямі, нічога ня робяць, а хітра абыходзяцца;"},
	{12, "12 такіх умаўляем і пераконваем Госпадам нашым Ісусам Хрыстом, каб яны, моўчкі працуючы, елі свой хлеб."},
	{13, "13 А вы, браты, ня падайце духам, робячы дабро."},
	{14, "14 Калі ж хто не паслухае слова нашага ў гэтым пасланьні, таго майце на прыкмеце і не вадзецеся зь ім, каб даць яму сораму;"},
	{15, "15 але ня лічэце яго за ворага, а стаўце на розум, як брата."},
	{16, "16 А Сам Гасподзь міру няхай дасьць вам мір заўсёды ва ўсім; Гасподзь з усімі вамі!"},
	{17, "17 Прывітаньне маёю рукою Паўлаваю, што служыць знакам у кожным пасланьні; пішу я так:"},
	{18, "18 мілата Госпада нашага Ісуса Хрыста з усімі вамі. Амін."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};