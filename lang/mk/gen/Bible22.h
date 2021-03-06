#include <map>
#include <string>
class Bible22
{
	struct mk1	{ int val; const char *msg; };
	struct mk2	{ int val; const char *msg; };
	struct mk3	{ int val; const char *msg; };
	struct mk4	{ int val; const char *msg; };
	struct mk5	{ int val; const char *msg; };
	struct mk6	{ int val; const char *msg; };
	struct mk7	{ int val; const char *msg; };
	struct mk8	{ int val; const char *msg; };
public:
static void view1() {
struct mk1 poems[] = {
	{1, "1 Соломоновата Песна над песните"},
	{2, "2 Возљубената: Да, сакам да ме целиваш со бакнежи на устата своја! Зашто твоите милувања се подобри од виното."},
	{3, "3 Од пријатниот мирис на твоите масла името ти е како разлеано миро; затоа те сакаат момите."},
	{4, "4 Поведи ме, да побрзаме; царот ме воведува во одаите свои, - ке се восхитуваме и ке се радуваме со тебе, ке ги фалиме твоите милувања повеке од вино. Навистина те сакаат!"},
	{5, "5 Kерки ерусалимски, црна сум но сепак сум убава како шаторите кидарски, како Соломонови завеси."},
	{6, "6 Не гладајте ме оти сум црномурна, зашто сонцето ме подгорело: мајчините синови и се налутија, ме поставија да ги чувам лозјата - но своето сопствено лозје не го зачував."},
	{7, "7 Кажи ми ти, кого го сака душата моја: каде го пасеш стадото, каде пладнуваш? Зошто да бидам како скитник крај стадата околу твоите другари?"},
	{8, "8 Хорот: Ако не го знаеш тоа, о, најубава ме у жените, тогаш оди си по овците свои и паси ги јарињата покрај пастирските шатори."},
	{9, "9 Возљубениот: Ти си ми, драга моја, како кобилка во фараонова двоколка."},
	{10, "10 Прекрасни се твоите образи под обетките, вратот твој - со ерданите;"},
	{11, "11 Kе ти направам златни обетки со сребрени топчиња."},
	{12, "12 Возљубената: Додека царот беше крај трпезата, народот мој го испушташе својот пријатен мирис."},
	{13, "13 Смирнова китка е мојот возљубен: стои ме у градите мои."},
	{14, "14 Мојот возљубен ми е како кипарисов грозд во Енгедските лозја."},
	{15, "15 Возљубениот: О, убава си, мила моја, убава си! Имаш очи гулабови."},
	{16, "16 Возљубената: О, убав си, мил мој, прекрасен си! И постелата наша се зеленее."},
	{17, "17 Возљубениот: Покривите на куките ни се кедри, штиците наши - кипариси."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct mk2 poems[] = {
	{1, "1 Возљубената: Јас сум саронски нарцис, долински крин!"},
	{2, "2 Возљубениот: Она што е кринот ме у трњето, тоа е мојата возљубена ме у момите."},
	{3, "3 Возљубената: Она што е јаболкницата ме у шумските дрвја, тоа е мојот возљубен ме у момците. Посакав сенка нејзина, и седнав; плодовите нејзини се слатки за грлото мое."},
	{4, "4 Тој ме воведе во куката за гозба, и знамето негово над мене беше љубов."},
	{5, "5 Поткрепете ме со сочни гроздови, освежете ме со јаболка, зашто сум болна од љубов."},
	{6, "6 Левата рака негова ми е под главата, а со десната ме прегрнува."},
	{7, "7 Возљубениот: Ве заколнувам керки ерусалимски, во срцните и во полските кошути: немојте да ја разбудувате и да ја вознемирувате возљубената, додека сама не посака."},
	{8, "8 Возљубената: Гласот на мојот возљубен, еве, го: доа а, скока преку фиданките по горите, прескокнува преку ридовите."},
	{9, "9 Мојот возљубен прилега на срна, на млад елен. Ете, стои зад sидот наш, погледнува низ прозорецот, sирка низ решетката."},
	{10, "10 Мојот возљубен се огаси и ми рече: 'Стани, мила моја, убавице моја, дојди!"},
	{11, "11 Еве, зимата веке мина, дождот го снема, престана веке,"},
	{12, "12 цвекињата се појавија по земјата; настана време за кроење лози, и гласот на гугутката се слуша во земјата наша;"},
	{13, "13 смокрите ги отворија пупките свои, и расцутените лози пријатно мирисаат. Стани, мила моја, убавице моја, и дојди!"},
	{14, "14 Гулабице моја во карпест пролом, под камено засолниште, покажи ми го лицето свое, дај ми да го чујам гласот твој, зашто гласот ти е sвонлив, и лицето ти е прекрасно."},
	{15, "15 Фатете ни ги лисиците, лисичињата, оти тие ги пустошат лозјата, а лозјата ни цутат."},
	{16, "16 Мојот возљубен е мој, јас, пак, сум - негова; тој го пасе стадото ме у кринови."},
	{17, "17 Додека денот не измине и сенките ги снемува, врати се, мил мој, и биди како срна, како млад елен, по горите што не разделуваат."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct mk3 poems[] = {
	{1, "1 Ноква во леглото мое го барав оној, кога го сака душата моја, го барав и не го најдов."},
	{2, "2 Затоа ке станам, ке тргнам по градот, по улиците и плоштадите, и ке го барам оној, кого душата моја го сака. Го барав, но не го најдов."},
	{3, "3 Ме сретнаа стражарите, што го обиколуваат градот: 'Дали го видовте - ги прашав - оној, кого душата моја го сака?'"},
	{4, "4 Но, штом ги одминав, го најдов оној, што го сака душата моја, се фатив за него цврсто и не го пуштив, додека не го одведов во куката на мојата мајка и во одајата на родителката своја."},
	{5, "5 Возљубениот: Ве заколнувам, керки ерусалимски, во срните и полските кошути: немојте да ја вознемирувате возљубената, додека сама не посака."},
	{6, "6 Хорот: Што е таа, која се издига од пустињата како столб од дим, што мириса на смирна и темјан, и на секакви пријатни мириси?"},
	{7, "7 Еве ја носилката - на Соломона: околу неа шеесет души јунаци ме у кои јунаците Израилеви."},
	{8, "8 Сите држат по еден меч и се вешти во борба; секој има меч на бедрото свое поради нокниот страв."},
	{9, "9 Носилка си направил царот Соломон од ливанско дрво;"},
	{10, "10 скалата ја направил од сребро, оградите нејзини се од злато, седиштето - порфир; внатрешноста со љубов ја украсиле керките ерусалимски."},
	{11, "11 Излезете, керки сионски, и погледајте го цар Соломона со венецот, со кој го украсила мајката негова во денот на свадбата негова, во радосниот ден за срцето негово."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct mk4 poems[] = {
	{1, "1 Возљубениот: О, убава си, љубов моја, убава си! Очите твои се гулабови под твојот превез; косата ти е како стадо кози, кога слегуваат од Галадската гора;"},
	{2, "2 забите твои - како стадо истрижени овци, кога излегуваат од капење, од кои секоја има по две јагниња, и без јагне нема ниедна;"},
	{3, "3 усните твои - како алова панделка, а устата твоја слаткоречива; твоите јаготки под превезот твој се како половинки од калинка;"},
	{4, "4 вратот ти е - како Давидовата кула, изградена за оружје: на неа висат иљадници штитови - се штитови на јунаци;"},
	{5, "5 двете твои гради се како близначиња од млада срна, кои пасат ме у кринови."},
	{6, "6 Додека денот на залади, и не одминат сенките, ке одам на смирновата гора и на темјановиот рид."},
	{7, "7 Цела си убава, мила моја, и дамка нема на тебе!"},
	{8, "8 Слези со мене од Ливан, невесто, слези и дојди од Ливан, од врвот на Аман, од врвот на Сенир и Аермон, од лавовските пештери, од леопардовите гори!"},
	{9, "9 Ти го освои срцето мое, сестричке невесто, го плени срцето мое со еден поглед на очите свои и само со веришката на вратот свој."},
	{10, "10 О, колку е слатка љубовта твоја сестричке невесто! Послатка е љубовта твоја од вино, и пријатниот мирис од твоите масла е попријатен од сите ароми."},
	{11, "11 Од устата твоја капе восочен мед, невесто, мед и млеко под јазикот твој, и мирисот на облеката твоја е како мирис ливански!"},
	{12, "12 Затворена градина е мојата сестричка невеста, извор затворен, кладенец запечатен;"},
	{13, "13 твојот насад е градина од дрвја во вкусен плодови, кипар и нард,"},
	{14, "14 нард и шафран, трска и цимет со секакви пријатно - мирисни дрвја, смирна и алој со најубави ароми,"},
	{15, "15 ти си градински извор, кладенец од жива вода, што истечува од Ливан."},
	{16, "16 Возљубената: Подигни се, ветре, од север, повеј и ти, ветре, од југ и повеј над градината моја, за да прострујат аромите нејзини! Нека дојде мојот возљубен во градината своја и нека касне од слатките плодови свои."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct mk5 poems[] = {
	{1, "1 Возљубениот: Дојдов во градината своја, сестричке невесто, ја обрав смирната моја и мирисите мои, ги јадев медените питки до мојот мед, го пиев виното со моето млеко. Јадете, пријатели, пијте и насиете се, мили мои!"},
	{2, "2 Возљубената: Спијам, но срцето мое е будно; ете го гласот на мојот возљубен, кој чука: 'Отвори ми сестро, мила моја гулабице моја, совршена моја, зашто главата моја е целата со роса покриена, и косата моја - со нокна влага."},
	{3, "3 Го соблеков хитонот свој, пак ли да го облекувам? Сум ги измил нозете свои, како да ги валкам?'"},
	{4, "4 Мојот возљубен ја протегна раката низ отворот, и срцето мое затрепери од него."},
	{5, "5 Станав да му отворам на мојот возљубен; од рацете ми капеше смирна, од прстите мои пријатен мирис на смирна врз држката од клучалката."},
	{6, "6 Му отворив на мојот возљубен, а мојот возљубен си беше отишол. Душата ми премре, додека тој говореше; го барав, но не го најдов; го викав, но не ми се јавуваше."},
	{7, "7 Ме сретнаа стражарите, што го обиколуваа градот, ме натепаа, ме изнаранија; ми го симнаа превезот оние, што ги чуваа sидиштата."},
	{8, "8 Ве заколнувам, керки ерусалимски! Ако го сретнете мојот возљубен, кажете му, дека изнемошувам од љубов."},
	{9, "9 Хорот: Со што е твојот возљубен подобар од другите возљубени, о, најубава ме у жените? Во што твојот возљубен е подобар од другите, па така не заколнуваш?"},
	{10, "10 Возљубената: Мојот возљубен е бел и румен, избран ме у десет иљади други;"},
	{11, "11 главата негова - чисто злато; кадрите негови - брановидни, црни како гавран;"},
	{12, "12 очите негови - како гулаби крај водни потоци, што се капат во млеко, што стојат задоволни;"},
	{13, "13 образите негови - ароматен цветник, леи со миризливи билки; усните негови - кринови од кои капе чиста смирна;"},
	{14, "14 рацете негови - златни валци, опсипани со топази; стомакот негов - како сад од слонова коска, обложен со сафири;"},
	{15, "15 нозете негови - мермерни столбови, поставени врз златни подлоги; изглед има како Ливан, величествен е како кедар;"},
	{16, "16 устата негова - сладост, и целиот тој е пожелен. Ете, кој е мојот возљубен, и ете, кој е пријателот мој, керки ерусалимски."},
	{17, "17 Хорот: Каде отиде твојот возљубен, о, најубава ме у жените? Каде скришна твојот возљубен? Ние ке го побараме со тебе."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct mk6 poems[] = {
	{1, "1 Возљубената: Мојот возљубен отиде во градината своја, во ароматните цветници, за да пасе во градината и да бере кринови."},
	{2, "2 Јас му припа ам на мојот возљубен, а мојот возљубен мене; тој пасе ме у криновите."},
	{3, "3 Возљубениот: Убава си, мила моја, како Тирса, прекрасна - привлечна како Ерусалим, страшна како војска со знамиња."},
	{4, "4 Тргни ги очите од мене, зашто ме збунуваат. Косата ти е како стадо кози, кога слегуваат од Галад;"},
	{5, "5 забите ти се како стадо овци, кога излегуваат од капење, од кое секоја е со по две јагниња, и јалова ме у нив нема,"},
	{6, "6 твоите образи под превезот твој се како две половинки од калинка."},
	{7, "7 Има шеесет царици, осумдесет наложници и безброј моми,"},
	{8, "8 но единствена е таа, гулабицата моја, совршената моја; единствена е таа на мајка си, избрана кај родитеката своја. Ја видоа момите, и ја возвеличија, ја видоа и цариците вљубената, и ја пофалија."},
	{9, "9 Хорот: 'Која е таа, што болска како зора, убава како месечина, светла како сонце, страшна како војска со знамиња?'"},
	{10, "10 Слегов во ореовата градина да погледнам зелена долина, да видам дали се развила лозата, дали процутеле калинките. Таму ке ти ги дадам усните мои."},
	{11, "11 Не знам, како душата да ме влече кон колите на големците од мојот народ."},
	{12, "12 Хорот: Сврти се, сврти се Суламко, сврти се, сврти се, да те погледаме! Возљубениот: Зошто сакате да ја гледате Суламка, како на оро манаимско?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct mk7 poems[] = {
	{1, "1 Хорот: О, колку се убави нозете твои во сандали, керко знаменита! Облите колкови твое се како веришки, дело од рацете на вешт уметник,"},
	{2, "2 папкот ти е како чаша тркалезна, никогаш без арома; утробата твоја - купа пченица, опкружена со кринови;"},
	{3, "3 двете твои гради - како две јаренца, како близначиња на срна;"},
	{4, "4 Вратот твој - како столб од слонова коска; очите твои - Есевонски езерца кај Ватравимските порти; носот твој - Ливанска кула, свртена кон Дамаск;"},
	{5, "5 главата твоја на тебе - како Кармил; а косата на главата твоја - како пурпур; цар се вплел во плетенките."},
	{6, "6 Возљубениот: О, колку си убава, о, колку заносна, возљубена моја, со твојата убавина!"},
	{7, "7 Таа твоја снага прилега на палма, а твоите гради - на гроздови."},
	{8, "8 Си помислив: да се качев на палма, би се фатил за ветките нејзини; и твоите гради би биле место гроздови, и мирисот од твоите ноздри - како мирис на јаболко;"},
	{9, "9 устата твоја е како најдобро вино. Возљубената: Тоа тече право кон возљубениот мој, и тече нечујно преку усните кои спијат."},
	{10, "10 Јас припа ам на возљубениот мој, и тој копнее по мене."},
	{11, "11 Дојди, мил мој, да излеземе во полето, да пренокеваме по селата;"},
	{12, "12 утре рано ке појдеме во лозјата, да видиме дали потерала лозата, дали се отвориле пупките, процутеле ли калинките; таму ке те опсипам со милувања."},
	{13, "13 Мандрагорите веке шират пријатен мирис, и до вратата наша има секакви најубави плодови, нови и стари; кои ги зачував за тебе, мил мој!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct mk8 poems[] = {
	{1, "1 О, да ми беше брат мој, да беше хранет од градите на мајка ми! Тогаш, кога ке те сретнев на улица, ке сакав да те бакнам, и немаше да ме осудуваат."},
	{2, "2 Би сакала да те поведам, сакав да те воведам во одајата на мајка ми, во онаа каде што ме одгледала. Ти ке ме учеше, а јас, пак, ке те поев со ароматно вино, со сок од моите калинки."},
	{3, "3 Левата рака негова е под главата моја, а со десната ме прегрнува."},
	{4, "4 Возљубениот: Ве заколнувам, керки ерусалимски, зошто да ја разбудувате и зошто да ја вознемирувате возљубената, се додека сама не посака?!"},
	{5, "5 Хорот: Која е таа, што доа а од пустињата, потпирајки се на својот возљубен? Возљубениот: Те разбудив јас под јаболкницата: таму те родила мајка ти твоја, таму те добила твојата родителка."},
	{6, "6 положи ме како печат на срцето свое, како печат на мишката своја, зашто љубовта е силна како смрт; љубомората - лута како пекол; стрелите нејзини се стрели огнени; огнен жар на нејзиниот пламен."},
	{7, "7 Големата вода не може да ја угасне љубовта, и реки нема да ја потопат. Ако некој го дадеше сето богатство на својот дом за љубов, тој би бил отфрлен со презир."},
	{8, "8 Хорот: Имаме сестра, која е уште мала: уште нема гради; што ке правиме со сестрата наша, ако дојдат по неа сватови?"},
	{9, "9 Да беше карпа, ке изградевме врз неа и дворци од сребро; да беше врата, ке ја обложевме со кедрови штици."},
	{10, "10 Возљубената: Јас сум карпа и имам гради како кула; затоа во очите негови јас станав како онаа што нашла мир."},
	{11, "11 Хорот: Соломон имаше лозје во Ваал-Хамон; тој им го предаде тоа лозје на чувари; секој беше должен да даде за плодоивте негови иљада сребреници."},
	{12, "12 Возљубената: А моето лозје си е кај мене. Иљадата нека се за тебе, Соломоне, а двесте - за чуварите на плодовите негови."},
	{13, "13 Возљубениот: Жителко на градините, другарите го слушаат гласот твој. Дај и јас да го послушам."},
	{14, "14 Возљубената: Побрзај мил мој, и биди како срна и како еленче по гори мирисни!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};