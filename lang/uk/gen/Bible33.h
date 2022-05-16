#include <map>
#include <string>
class Bible33
{
	struct uk1	{ int val; const char *msg; };
	struct uk2	{ int val; const char *msg; };
	struct uk3	{ int val; const char *msg; };
	struct uk4	{ int val; const char *msg; };
	struct uk5	{ int val; const char *msg; };
	struct uk6	{ int val; const char *msg; };
	struct uk7	{ int val; const char *msg; };
public:
static void view1() {
struct uk1 poems[] = {
	{1, "1 Слово Господнє, що було до морешетського Михея за днів Йотама, Ахаза та Єзекії, Юдиних царів, яке він бачив на Самарію та Єрусалим."},
	{2, "2 Почуйте оце, всі народи, послухай, ти земле та все, що на ній! і хай буде за свідка на вас Господь Бог, Господь з храму святого Свого!"},
	{3, "3 Бо Господь ось виходить із місця Свого, і Він сходить і ступає по висотах землі."},
	{4, "4 І топляться гори під Ним, і тануть долини, мов віск від огню, мов ті води, що ллються з узбіччя."},
	{5, "5 Усе це за провинення Якова, за гріхи дому Ізраїля. Хто провинення Якова, чи ж не Самарія? А хто гріх дому Юдиного, чи ж не Єрусалим?"},
	{6, "6 І зроблю Самарію руїною в полі, за місце садити виноград, і повикидаю в долину каміння її, і відкрию основи її."},
	{7, "7 І потовчені будуть усі її ідоли, всі ж дарунки її за розпусту попалені будуть в огні, і всіх бовванів її Я віддам на спустошення. Бо зібрала вона від дарунків за блуд, і на подарунки за блуд це повернеться."},
	{8, "8 Над оцим голоситиму я та ридатиму, ходитиму босий й нагий, заводити буду, немов ті шакали, і буду тужити, як струсі!"},
	{9, "9 Бо рани її невигойні, бо це аж до Юди прийшло, воно досягло аж до брами народу Мого, аж до Єрусалиму."},
	{10, "10 Цього не оголошуйте в Ґаті, і плакати не плачте, качайтесь по поросі в Бет-Леафрі."},
	{11, "11 Переходь собі ти, о мешканко Шафіру, нага, осоромлена, вже бо не вийде мешканка Цаанану, голосіння Бет-Гаецелу не дасть вам спинитися в ньому."},
	{12, "12 Бо мешканка Мароту чекала добра, та до єрусалимської брами зійшло оце лихо від Господа."},
	{13, "13 Запряжи баскі коні до воза, мешканко Лахішу! Ти початок гріха для сіонської доньки, бо знайшлись серед тебе провини Ізраїлеві,"},
	{14, "14 тому то даси розводові листи на Морешет-Ґат. Доми Ахзіва омана для Ізраїлевих царів."},
	{15, "15 Спроваджу тобі ще спадкоємця Я, о мешканко Мареші, Аж по Адуллам прийде слава Ізраїля."},
	{16, "16 Зроби собі лисину та острижися за синів своїх любих, пошир свою лисину, мов ув орла, бо пішли на вигнання від тебе вони!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct uk2 poems[] = {
	{1, "1 Горе тим, що задумують кривду і на ложах своїх учиняють лихе! За світла поранку виконують це, бо їхня рука має силу."},
	{2, "2 Якщо піль жадають, то грабують вони, а домів то хапають. І вони переслідують мужа та дома його, і чоловіка й спадки його."},
	{3, "3 Тому так промовляє Господь: Ось Я замишляю на цей рід лихе, що ший своїх з нього не визволите, і ходити не будете гордо, бо це час лихий."},
	{4, "4 Того дня проголосять на вас приповістку, і співатимуть пісню жалобну, говорячи: Сталось! До пня опустошені ми, уділ народу мого змінився, як це діткнуло мене! Наше поле поділене буде чужинцями,"},
	{5, "5 тому в тебе не буде нікого, хто кидав би шнура мірничого, як жеребка на Господнім зібранні."},
	{6, "6 Не проповідуйте, та вони проповідують! Хай нам не проповідують, не досягне нас ганьба."},
	{7, "7 О ти, що звешся Яковів дім, чи змалів Дух Господній? Чи ці чини Його? Хіба добре не роблять слова Мої тому, хто ходить правдиво?"},
	{8, "8 Ще вчора були ви народом Моїм, тепер же стаєте за ворога, з одежі верхньої плаща ви стягаєте з тих, хто проходить безпечно, як здобич війни."},
	{9, "9 Жінок Мого народу з приємного дому її виганяєте кожну, з дітей славу Мою ви берете навіки."},
	{10, "10 Устаньте й ідіть, бо тут не спочинок, це за занечищення ваше, що загладу для вас принесе, вирішальну загладу."},
	{11, "11 Коли б чоловік, який ходить за вітром, і брехню набрехав, говорячи: Буду тобі проповідувати про вино та про напій п'янкий, то був би він любим пророком оцьому народові."},
	{12, "12 Невідмінно зберу тебе всього, о Якове, невідмінно згромаджу останок Ізраїлів, разом поставлю його, як отару в Боцрі, як ту череду на пасовищі, і будуть гомоніти вони від многолюдства!"},
	{13, "13 Перед ними виламувач піде, вони продеруться та браму перейдуть і вийдуть із неї. І піде їхній цар перед ними, а Господь на чолі їх!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct uk3 poems[] = {
	{1, "1 А я відказав: Послухайте ж, голови Якова та начальники дому Ізраїля, чи ж не вам знати право?"},
	{2, "2 Добро ви ненавидите та кохаєте зло, шкіру їхню здираєте з них, а їхнє тіло з костей їхніх."},
	{3, "3 Ви останок народу Мого їсте та стягаєте з них їхню шкіру, а їхні кості ламаєте, і січете, немов до горняти, і мов м'ясо в котел."},
	{4, "4 Вони тоді кликати будуть до Господа, та Він відповіді їм не дасть, і заховає обличчя Своє того часу від них, коли будуть робити лихі свої вчинки."},
	{5, "5 Так говорить Господь на пророків, що вводять народ Мій у блуд, що зубами своїми гризуть та покликують: Мир! А на того, хто їм не дає що до рота, на нього святую війну оголошують."},
	{6, "6 Тому буде вам ніч, щоб не стало видіння, і стемніє вам, щоб не чарувати. І над тими пророками сонце закотиться, і над ними потемніє день."},
	{7, "7 І посоромлені будуть такі прозорливці, і будуть застиджені чарівники, і всі вони свої уста закриють, бо не буде їм Божої відповіді."},
	{8, "8 А я повний сили й Господнього Духа, і правди й відваги, щоб представити Якову прогріх його, а Ізраїлеві його гріх."},
	{9, "9 Почуйте ж це, голови дому Якового та начальники дому Ізраїля, які нехтують справедливість, а все просте викривлюють,"},
	{10, "10 вони кров'ю будують Сіона, а кривдою Єрусалима."},
	{11, "11 Його голови судять за хабара, і навчають за плату його ті священики, і за срібло ворожать пророки його, хоч на Господа вони опираються, кажучи: Хіба не Господь серед нас? Зло не прийде на нас!"},
	{12, "12 О так, через вас Сіон буде на поле заораний, а Єрусалим на руїни обернеться, а гора храмова стане взгір'ями лісу..."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct uk4 poems[] = {
	{1, "1 Та буде наприкінці днів, гора дому Господнього міцно поставлена буде вершиною гір, і піднесена буде вона понад узгір'я, і будуть народи до неї пливсти."},
	{2, "2 І підуть численні народи та й скажуть: Ходімо, і вийдім на гору Господню та до дому Якового, і Він буде навчати доріг Своїх нас, і ми будемо ходити стежками Його. Бо вийде Закон із Сіону, а слово Господнє із Єрусалиму."},
	{3, "3 І Він буде судити численні племена, і розсуджувати буде народи міцні аж у далечині. І вони перекують мечі свої на лемеші, а списи свої на серпи. Не підійме меча народ на народ, і більше не будуть навчатись війни!"},
	{4, "4 І буде кожен сидіти під своїм виноградником, і під своєю фіґовницею, і не буде того, хто б страшив, бо уста Господа Саваота оце прорекли."},
	{5, "5 Усі бо народи ходитимуть кожен ім'ям свого бога, а ми будем ходити Ім'ям Господа, нашого Бога, на віки віків!"},
	{6, "6 Того дня промовляє Господь позбираю кульгаве й згромаджу розігнане, і те, що на нього навів коли лихо."},
	{7, "7 І зроблю Я кульгаве останком, а віддалене потужним народом, і зацарює над ними Господь на Сіонській горі відтепер й аж навіки!"},
	{8, "8 А ти, башто Черідна, підгірку Сіонської доньки, прийде до тебе і дійде старе панування, царювання для донечки Єрусалиму."},
	{9, "9 Тепер нащо здіймаєш ти окрик? Чи в тебе немає царя? Чи ж загинув твій радник, що ти корчишся, мов породілля?"},
	{10, "10 Вийся та корчся, о дочко Сіону, немов породілля, бо тепер вийдеш із міста та перебуватимеш у полі, і прийдеш аж до Вавилону. Та будеш ти там урятована, там Господь тебе викупить з рук твоїх ворогів!"},
	{11, "11 А зараз зібрались на тебе численні народи, говорячи: Нехай він зневажений буде, і нехай наше око побачить нещастя Сіону!"},
	{12, "12 Та не знають вони Господніх думок, і не розуміють поради Його, бо Він їх позбирав, як до клуні снопи."},
	{13, "13 Ставай та молоти, дочко Сіону, бо Я ріг твій залізом учиню, а копита твої вчиню міддю, і ти розпорошиш численні народи та вчиниш закляттям для Господа несправедливий їхній зиск, а їхнє багатство Владиці всієї землі."},
	{14, "14 І згромаджуйсь тепер, дочко товпищ! Облогу вчинили на нас, тростиною б'ють по щоці Ізраїлевого суддю..."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct uk5 poems[] = {
	{1, "1 А ти, Віфлеєме-Єфрате, хоч малий ти у тисячах Юди, із тебе Мені вийде Той, що буде Владика в Ізраїлі, і віддавна постання Його, від днів віковічних."},
	{2, "2 Тому Він їх видасть до часу, аж поки ота не породить, що має родити, а останок братів Його вернеться до Ізраїлевих синів."},
	{3, "3 І стане, і буде Він пасти Господньою силою, величністю Ймення Господа Бога Свого. І осядуть вони, бо Він стане великий тепер аж до кінців землі!"},
	{4, "4 І Він буде миром. Як прийде до нашого краю Ашшур, і буде топтатись по наших палатах, то поставимо на нього сім пастирів та восьмеро людських княжат."},
	{5, "5 І вони будуть пасти мечем край Ашшура, край же Німрода у воротях його. Та Він від Ашшура врятує, як той прийде в наш Край, і коли буде топтатись по наших границях."},
	{6, "6 І Яковів залишок буде посеред численних народів, як роса та від Господа, як той дощ на траві, і він надії не кластиме на чоловіка, і не буде надії складати на людських синів."},
	{7, "7 І Яковів залишок буде між людами, серед численних народів, як лев між лісною худобою, як левчук між отарами овець, що як він переходить, то топче й шматує, і немає нікого, хто б зміг урятувати."},
	{8, "8 Хай зведеться рука твоя на твоїх ненависників, і хай всі вороги твої витяті будуть!"},
	{9, "9 І станеться в день той, говорить Господь, і витну Я коні твої з-серед тебе, і колесниці твої повигублюю."},
	{10, "10 І понищу міста твого Краю, і всі твердині твої порозвалюю."},
	{11, "11 І повиполюю чари з твоєї руки, і ворожбитів у тебе не буде."},
	{12, "12 І понищу боввани твої та жертовні стовпи твої з-посеред тебе, і ти чинові рук своїх більше не будеш вклонятися."},
	{13, "13 І повитинаю дерева жертовні твої з-серед тебе, і міста твої вигублю."},
	{14, "14 І в гніві та в лютості помсту вчиню над народами, що Мене не послухались!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct uk6 poems[] = {
	{1, "1 Послухайте, що промовляє Господь: Устань, сперечайсь перед горами, і хай узгір'я почують твій голос!"},
	{2, "2 Послухайте, гори, Господнього суду, і візьміть до вух, ви, основи землі, бо в Господа пря із народом Своїм, і з Ізраїлем буде судитися Він!"},
	{3, "3 Народе ти Мій, що тобі Я зробив і чим мучив тебе, свідчи на Мене!"},
	{4, "4 Бо Я з краю єгипетського тебе вивів, і тебе викупив з дому рабів, і перед тобою послав Я Мойсея, Аарона та Маріям."},
	{5, "5 Мій народе, згадай, що Балак, цар моавський, задумував був, і що йому відповів Валаам, син Беорів, від Шіттіму аж по Ґілґал, щоб пізнати тобі справедливості Господа."},
	{6, "6 З чим піду перед Господа, схилюсь перед Богом Високости? Чи піду перед Нього з цілопаленнями, з річними телятами?"},
	{7, "7 Чи Господь уподобає тисячі баранів, десятитисячки потоків оливи? Чи дам за свій гріх свого первенця, плід утроби моєї за гріх моєї душі?"},
	{8, "8 Було тобі виявлено, о людино, що добре, і чого пожадає від тебе Господь, нічого, а тільки чинити правосуддя, і милосердя любити, і з твоїм Богом ходити сумирно."},
	{9, "9 Голос Господній кличе до міста, а хто мудрий, боїться той Ймення Твого: Послухайте жезла й Того, Хто призначив його:"},
	{10, "10 Чи є ще у домі безбожного коштовності несправедливі, та неповна й неправна ефа?"},
	{11, "11 Чи Я всправедливлю вагу неправдиву, і калитку з важками обманними?"},
	{12, "12 Що повні насильства його багачі, мешканці ж його говорили неправду, а їхній язик в їхніх устах омана,"},
	{13, "13 то теж бити зачну Я тебе, пустошити тебе за гріхи твої."},
	{14, "14 Будеш ти їсти, але не наситишся, і буде голод у нутрі твоїм, і станеш ховати, але не врятуєш, а що ти врятуєш мечеві віддам."},
	{15, "15 Ти сіяти будеш, але не пожнеш, ти будеш оливку топтати, та не будеш маститись оливою, і молодий виноград, та вина ти не питимеш!"},
	{16, "16 Бо ще переховуються всі устави Омрі та всі вчинки дому Ахава, і за їхніми радами ходите ви, тому то Я видам тебе на спустошення, і на посміх мешканців його, і ви ганьбу народу Мого понесете!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct uk7 poems[] = {
	{1, "1 Горе мені, бо я став, мов недобірки літні, як залишки по винобранні; нема грона на їжу, немає доспілої фіґи, якої жадає душа моя!"},
	{2, "2 Згинув побожний з землі, і нема поміж людьми правдивого. Вони всі чатують на кров, один одного ловлять у сітку."},
	{3, "3 Наставлені руки на зло, щоб вправно чинити його, начальник жадає дарунків, суддя ж судить за плату, а великий говорить жадання своєї душі, і викривлюють все."},
	{4, "4 Найліпший із них як будяк, найправдивіший гірший від терену. Настає день Твоїх сторожів, Твоїх відвідин, тепер буде збентеження їхнє!"},
	{5, "5 І другові не довіряйте, не надійтесь на приятеля, від тієї, що при лоні твоєму лежить, пильнуй двері уст своїх!"},
	{6, "6 Бо гордує син батьком своїм, дочка повстає проти неньки своєї, невістка проти свекрухи своєї, вороги чоловіку домашні його!"},
	{7, "7 А я виглядаю на Господа, надіюсь на Бога спасіння мого, Бог мій почує мене!"},
	{8, "8 Не тішся, моя супротивнице, з мене, хоч я впала, Сіонська дочка, проте встану, хоч сиджу в темноті, та Господь мені світло!"},
	{9, "9 Буду зносити я гнів Господній, бо згрішила Йому, аж поки не вирішить справи моєї, та суду не вчинить мені. Він на світло мене попровадить, побачу Його справедливість!"},
	{10, "10 І побачить оце все моя супротивниця, і сором покриє її, бо казала мені: Де Він, Господь, Бог твій? Приглядатимуться мої очі до неї, її топчуть тепер, як болото на вулицях."},
	{11, "11 Настане той день, щоб мури твої будувати, тоді віддалиться границя твоя цього дня!"},
	{12, "12 Це той день, коли прийдуть до тебе з Асирії та аж до Єгипту, і від Єгипту та аж до Ріки, і від моря до моря, і від гори до гори."},
	{13, "13 І спустошенням стане земля на мешканців її, через плід їхніх учинків."},
	{14, "14 Паси Мій народ своїм берлом, отару спадку Твого; що пробуває в лісі самотно, у середині саду, хай пасуться вони на Башані й Ґілеаді, як за днів стародавніх."},
	{15, "15 Як за днів твого виходу з краю єгипетського, покажу йому чуда."},
	{16, "16 Народи побачать оце, і посоромлені будуть при всій своїй силі, руку покладуть на уста, їхні вуха оглухнуть."},
	{17, "17 Будуть порох лизати вони, як той гад, як плазюче землі, повилазять з дрижанням з укріплень своїх, вони будуть тремтіти перед Господом, Богом нашим, і будуть боятись Тебе!"},
	{18, "18 Хто Бог інший, як Ти, що прощає провину і пробачує прогріх останку спадку Свого, Свого гніву не держить назавжди, бо кохається в милості?"},
	{19, "19 Знов над нами Він змилується, наші провини потопче, Ти кинеш у морську глибочінь усі наші гріхи."},
	{20, "20 Ти даси правду Яковові, Авраамові милість, яку присягнув Він для наших батьків від днів стародавніх."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};