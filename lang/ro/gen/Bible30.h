#include <map>
#include <string>
class Bible30
{
	struct ro1	{ int val; const char *msg; };
	struct ro2	{ int val; const char *msg; };
	struct ro3	{ int val; const char *msg; };
	struct ro4	{ int val; const char *msg; };
	struct ro5	{ int val; const char *msg; };
	struct ro6	{ int val; const char *msg; };
	struct ro7	{ int val; const char *msg; };
	struct ro8	{ int val; const char *msg; };
	struct ro9	{ int val; const char *msg; };
public:
static void view1() {
struct ro1 poems[] = {
	{1, "1 Cuvintele lui Amos, unul din păstorii din Tecoa, vedeniile pe cari le -a avut el despre Israel, pe vremea lui Ozia, împăratul lui Iuda, şi pe vremea lui Ieroboam, fiul lui Ioas, împăratul lui Israel, cu doi ani înaintea cutremurului de pămînt."},
	{2, "2 El a zis: 'Domnul răcneşte din Sion, glasul Lui răsună din Ierusalim. Păşunele păstorilor jălesc, şi vîrful Carmelului este uscat."},
	{3, "3 Aşa vorbeşte Domnul: 'Pentru trei nelegiuiri ale Damascului, ba pentru patru, nu-Mi schimb hotărîrea, pentru că au treierat Galaadul cu treierătoarea de fer."},
	{4, "4 De aceea voi trimete foc în casa lui Hazael, care va mistui palatele lui Ben-Hadad."},
	{5, "5 Voi sfărîma zăvoarele Damascului, şi voi nimici cu desăvîrşire pe locuitorii din Bicat-Aven, împreună cu cel ce ţine toiagul de cîrmuire în Bet-Eden; şi poporul Siriei va fi dus rob la Chir, zice Domnul.'"},
	{6, "6 Aşa vorbeşte Domnul: 'Pentru trei nelegiuiri ale Gazei, ba pentru patru, nu-Mi schimb hotărîrea, pentru că au luat pe toţi oamenii prinşi de război şi i-au dat Edomului:"},
	{7, "7 de aceea, voi trimete foc în zidurile Gazei, şi -i va mistui palatele."},
	{8, "8 Voi nimici cu desăvîrşire pe locuitorii din Asdod, şi pe cel ce ţine toiagul împărătesc în Ascalon; Îmi voi întoarce mîna împotriva Ecronului, şi ce va mai rămînea din Filisteni va pieri, zice Domnul Dumnezeu.'"},
	{9, "9 Aşa vorbeşte Domnul: 'Pentru trei nelegiuiri ale Tirului, ba pentru patru, nu-Mi schimb hotărîrea, pentrucă au luat pe toţi oamenii prinşi de război, şi i-au dat Edomului, şi nu s'au gîndit la legămîntul frăţesc."},
	{10, "10 De aceea, voi trimete foc în zidurile Tirului, şi -i va mistui palatele.'"},
	{11, "11 Aşa vorbeşte Domnul: 'Pentru trei nelegiuiri ale Edomului, ba pentru patru, nu-Mi schimb hotărîrea, pentrucă a urmărit pe fraţii săi cu sabia, înăduşindu-şi mila, a dat drumul mîniei, şi îşi ţinea într'una urgia."},
	{12, "12 De aceea, voi trimete foc peste Teman, şi va mistui palatele Boţrei.'"},
	{13, "13 Aşa vorbeşte Domnul: 'Pentru trei nelegiuiri ale copiilor lui Amon, ba pentru patru, nu-Mi schimb hotărîrea, pentrucă au spintecat pîntecele femeilor însărcinate ale Galaadului, ca să-şi mărească ţinutul:"},
	{14, "14 de aceea, voi aprinde focul în zidurile Rabei, şi -i va mistui palatele, în mijlocul strigătelor de război în ziua luptei, şi în mijlocul vijeliei în ziua furtunii."},
	{15, "15 Şi împăratul lor va merge în robie, el, şi căpeteniile lui împreună cu el, zice Domnul.'"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct ro2 poems[] = {
	{1, "1 Aşa vorbeşte Domnul: 'Pentru trei nelegiuiri ale Moabului, ba pentru patru, nu-Mi schimb hotărîrea: pentrucă a ars, a ars pînă le -a făcut var, oasele împăratului Edomului,"},
	{2, "2 de aceea voi trimete foc în Moab, şi va mistui palatele Cheriotului; şi Moabul va pieri în mijlocul zarvei, în mijlocul strigătelor de război şi sunetul trîmbiţei:"},
	{3, "3 Voi nimici cu desăvîrşire pe judecător din mijlocul lui, şi voi ucide pe toate căpeteniile lui împreună cu el, zice Domnul.'"},
	{4, "4 Aşa vorbeşte Domnul: 'Pentru trei nelegiuiri ale lui Iuda, ba pentru patru, nu-Mi schimb hotărîrea, pentrucă au nesocotit Legea Domnului şi n'au păzit poruncile Lui, ci s'au lăsat duşi în rătăcire de idolii cei mincinoşi după cari au umblat şi părinţii lor;"},
	{5, "5 de aceea, voi trimete foc în Iuda, şi va mistui palatele Ierusalimului.'"},
	{6, "6 Aşa vorbeşte Domnul: 'Pentru trei nelegiuiri ale lui Israel, ba pentru patru, nu-Mi schimb hotărîrea, pentrucă au vîndut pe cel neprihănit pe bani, şi pe sărac pe o păreche de încălţăminte."},
	{7, "7 Ei doresc să vadă ţărîna pămîntului pe capul celor sărmani, şi calcă în picioare dreptul celor nenorociţi. Fiul şi tatăl se duc la aceeaş fată, ca să pîngărească Numele Meu cel sfînt."},
	{8, "8 Se întind lîngă fiecare altar pe haine luate ca zălog, şi beau în casa dumnezeilor lor amenda celor osîndiţi de ei."},
	{9, "9 Şi totuş Eu am nimicit dinaintea lor pe Amoriţi, cari erau cît cedrii de înalţi, şi tari ca stejarii; le-am nimicit roadele din vîrf pînă în rădăcini."},
	{10, "10 Şi Eu v'am scos din ţara Egiptului, şi v'am povăţuit patruzeci de ani în pustie, ca să vă dau în stăpînire ţara Amoriţilor."},
	{11, "11 Am ridicat prooroci dintre fiii voştri, şi Nazirei dintre tinerii voştri. Nu este aşa, copii ai lui Israel? zice Domnul..."},
	{12, "12 Iar voi aţi dat Nazireilor să bea vin, şi proorocilor le-aţi poruncit: ,Nu proorociţi!`"},
	{13, "13 Iată, vă voi stropşi cum stropşeşte pămîntul carul încărcat cu snopi,"},
	{14, "14 aşa că cel iute nu va putea să fugă, iar cel tare nu se va putea sluji de tăria lui, şi omul viteaz nu-şi va scăpa viaţa."},
	{15, "15 Cel ce mînuieşte arcul nu va putea să ţină piept, cel iute de picioare nu va scăpa, şi călăreţul nu-şi va scăpa viaţa;"},
	{16, "16 iar cel mai inimos dintre războinici, va fugi în pielea goală în ziua aceea, zice Domnul.'"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct ro3 poems[] = {
	{1, "1 Ascultaţi cuvîntul acesta, pe care -l rosteşte Domnul împotriva voastră, copii ai lui Israel, împotriva întregei familii pe care am scos -o din ţara Egiptului!"},
	{2, "2 'Eu v'am ales numai pe voi dintre toate familiile pămîntului: de aceea vă voi şi pedepsi pentru toate nelegiuirile voastre."},
	{3, "3 Merg oare doi oameni împreună, fără să fie învoiţi?"},
	{4, "4 Răcneşte leul în pădure, dacă n'are pradă? Sbiară puiul de leu din fundul vizuinei lui, dacă n'a prins nimic?"},
	{5, "5 Cade pasărea în laţul de pe pămînt, dacă nu i s'a întins o cursă? Se ridică laţul dela pămînt, fără să se fi prins ceva în el?"},
	{6, "6 Sau sună cineva cu trîmbiţa într'o cetate, fără să se spăimînte poporul? Sau se întîmplă o nenorocire într'o cetate, fără s'o fi făcut Domnul?"},
	{7, "7 Nu, Domnul Dumnezeu nu face nimic fără să-Şi descopere taina Sa slujitorilor Săi prooroci."},
	{8, "8 Leul răcneşte: cine nu se va speria? Domnul Dumnezeu vorbeşte: cine nu va prooroci?'"},
	{9, "9 Strigaţi de pe acoperişul palatelor Asdodului şi de pe palatele ţării Egiptului, şi spuneţi: 'Strîngeţi-vă pe munţii Samariei, şi vedeţi ce neorînduială mare este în mijlocul ei, ce asupriri sînt în ea!"},
	{10, "10 Nu sînt în stare să lucreze cu neprihănire, zice Domnul, ci îşi grămădesc în palate comori cîştigate prin sîlnicie şi răpire.'"},
	{11, "11 De aceea, aşa vorbeşte Domnul Dumnezeu: 'Vrăjmaşul va împresura ţara, îţi va doborî tăria, şi palatele tale vor fi jăfuite!'"},
	{12, "12 Aşa vorbeşte Domnul: 'După cum păstorul scapă din gura leului numai două bucăţi de picioare sau un vîrf de ureche, aşa vor scăpa copiii lui Israel cari stau în Samaria în colţul unui pat şi pe covoare de Damasc!"},
	{13, "13 Ascultaţi, şi spuneţi lucrul acesta casei lui Iacov, zice Domnul Dumnezeu, Dumnezeul oştirilor:"},
	{14, "14 'În ziua cînd voi pedepsi pe Israel pentru fărădelegile lui, voi pedepsi şi altarele din Betel; coarnele altarului vor fi sfărîmate, şi vor cădea la pămînt."},
	{15, "15 Voi surpa casele de iarnă şi casele de vară; palatele de fildeş se vor duce, şi casele cele multe se vor nimici, zice Domnul.'"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct ro4 poems[] = {
	{1, "1 'Ascultaţi cuvîntul acesta, juncane din Basan, de pe muntele Samariei, voi cari asupriţi pe cei sărmani, zdrobiţi pe cei lipsiţi, şi ziceţi bărbaţilor voştri: ,Daţi-ne să bem!'"},
	{2, "2 Domnul Dumnezeu a jurat pe sfinţenia Lui, şi a zis: 'Iată, vin zile pentru voi, cînd vă vor prinde cu cîrligele, şi rămăşiţa voastră cu undiţi de pescari;"},
	{3, "3 ,veţi ieşi prin spărturi, fiecare drept înainte, şi veţi fi lepădate în Harmon, zice Domnul.'"},
	{4, "4 Duceţi-vă numai la Betel, şi păcătuiţi! Duceţi-vă la Ghilgal, şi păcătuiţi şi mai mult! Aduceţi-vă jertfele în fiecare dimineaţă, şi zeciuielile la fiecare trei zile!"},
	{5, "5 Faceţi să fumege jertfe de mulţămire făcute cu aluat! Trîmbiţaţi-vă, vestiţi-vă darurile de mîncare de bună voie! Căci aşa vă place, copii ai lui Israel, zice Domnul Dumnezeu.'"},
	{6, "6 Şi Eu, de partea Mea, v'am trimes foametea în toate cetăţile voastre, şi lipsa de pîne în toate locuinţele voastre. Cu toate acestea tot nu v'aţi întors la Mine, zice Domnul.' -"},
	{7, "7 'N'am vrut să vă dau nici ploaie, cînd mai erau încă trei luni pînă la secerat; am dat ploaie peste o cetate, dar n'am dat ploaie peste o altă cetate; într'un ogor a plouat, şi altul, în care n'a plouat, s'a uscat."},
	{8, "8 Două, trei cetăţi s'au dus la alta ca să bea apă, şi tot nu şi-au potolit setea. Cu toate acestea, tot nu v'aţi întors la Mine, zice Domnul.' -"},
	{9, "9 V'am lovit cu rugină în grîu şi cu tăciune; grădinile voastre cele multe, viile, smochinii şi măslinii voştri i-au mîncat deseori lăcustele. Cu toate acestea, tot nu v'aţi întors la Mine, zice Domnul.'"},
	{10, "10 Am trimes în voi ciuma, ca în Egipt; v'am ucis tinerii cu sabia, şi am lăsat să vi se ia caii, am făcut să vi se suie în nări duhoarea taberii voastre. Şi cu toate acestea, tot nu v'aţi întors la Mine, zice Domnul.' -"},
	{11, "11 'V'am nimicit ca pe Sodoma şi Gomora, pe cari le -a nimicit Dumnezeu; şi aţi fost ca un tăciune scos din foc. Cu toate acestea, tot nu v'aţi întors la Mine, zice Domnul..."},
	{12, "12 'De aceea îţi voi face astfel, Israele, -şi fiindcă îţi voi face astfel, pregăteşte-te să întîlneşti pe Dumnezeul tău, Israele!"},
	{13, "13 Căci iată că El a întocmit munţii, a făcut vîntul, şi spune omului pînă şi gîndurile lui. El preface zorile în întunerec, şi umblă pe înălţimile pămîntului: Domnul, Dumnezeul oştirilor, este Numele Lui."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct ro5 poems[] = {
	{1, "1 Ascultaţi cuvîntul acesta, cîntecul acesta de jale, pe care -l fac pentru voi, casa lui Israel!"},
	{2, "2 'A căzut şi nu se va mai scula, fecioara lui Israel; stă trîntită la pămînt, şi nimeni n'o ridică."},
	{3, "3 Căci aşa vorbeşte Domnul Dumnezeu: cetatea care scotea la luptă o mie de oameni, nu va rămînea decît cu o sută, şi cea care scotea o sută de oameni, nu va mai rămînea decît cu zece, din casa lui Israel.'"},
	{4, "4 Căci aşa vorbeşte Domnul către casa lui Israel: 'Căutaţi-Mă, şi veţi trăi!"},
	{5, "5 Nu căutaţi Betelul, nu vă duceţi la Ghilgal, şi nu treceţi la Beer-Şeba. Căci Ghilgalul va fi dus în robie, şi Betelul va fi nimicit."},
	{6, "6 Căutaţi pe Domnul, şi veţi trăi! Temeţi-vă ca nu cumva să apuce ca un foc casa lui Iosif, şi focul acesta s'o mistuie, fără să fie cineva la Betel ca să -l stingă,"},
	{7, "7 voi cari prefaceţi dreptul în pelin, şi călcaţi dreptatea în picioare!"},
	{8, "8 El a făcut Cloşca cu pui şi Orionul, El preface întunerecul în zori, iar ziua în noapte neagră; El cheamă apele mării, şi le varsă pe faţa pămîntului: Domnul este Numele Lui."},
	{9, "9 El aduce ca fulgerul prăpădul peste cei puternici, aşa că nimicirea vine peste cetăţui.'"},
	{10, "10 Ei urăsc pe cel ce -i mustră la poarta cetăţii, şi le este scîrbă de cel ce vorbeşte din inimă."},
	{11, "11 Deaceea, pentrucă pe sărac îl călcaţi în picioare, şi luaţi daruri de grîu dela el: măcar că aţi zidit case de piatră cioplită, nu le veţi locui; măcarcă aţi sădit vii foarte bune, nu veţi bea din vinul lor!"},
	{12, "12 Căci Eu ştiu că nelegiuirile voastre sînt multe, şi că păcatele voastre sînt fără număr: asupriţi pe cel drept, luaţi mită, şi călcaţi în picioare la poarta cetăţii dreptul săracilor."},
	{13, "13 De aceea, în vremuri ca acestea, înţeleptul trebuie să tacă; căci sînt vremuri rele."},
	{14, "14 Căutaţi binele şi nu răul, ca să trăiţi, şi ca astfel, Domnul, Dumnezeul oştirilor, să fie cu voi, cum spuneţi voi!"},
	{15, "15 Urîţi răul şi iubiţi binele, faceţi să domnească dreptatea la poarta cetăţii; şi poate că Domnul, Dumnezeul oştirilor, va avea milă de rămăşiţele lui Iosif."},
	{16, "16 De aceea, aşa vorbeşte Domnul, Dumnezeul oştirilor, Cel Atotputernic: 'În toate pieţele se vor boci, şi pe toate uliţile vor zice: ,Vai! Vai!` Vor chema pe plugar la jale, şi la bocire pe ceice fac jălanii pentru morţi."},
	{17, "17 În toate viile va fi bocet, cînd voi trece prin mijlocul tău, zice Domnul."},
	{18, "18 'Vai de cei ce doresc ,ziua Domnului!` Ce aşteptaţi voi dela ziua Domnului? Ea va fi întunerec şi nu lumină."},
	{19, "19 Veţi fi ca un om care fuge dinaintea unui leu pe care -l întîlneşte un urs, şi care, cînd ajunge acasă, îşi reazimă mîna pe zid, şi -l muşcă un şarpe!"},
	{20, "20 Nu va fi oare ziua Domnului întunerec, în loc de lumină? Nu va fi ea întunecoasă şi fără strălucire?"},
	{21, "21 Eu urăsc, dispreţuiesc sărbătorile voastre, şi nu pot să vă sufăr adunările de sărbătoare!"},
	{22, "22 Cînd Îmi aduceţi arderi de tot şi daruri de mîncare, n'am nicio plăcere de ele; şi viţeii îngrăşaţi pe cari -i aduceţi ca jertfe de mulţămire, nici nu Mă uit la ei."},
	{23, "23 Depărtează de Mine vuietul cîntecelor tale; nu pot asculta sunetul alăutelor tale!"},
	{24, "24 Ci dreptatea să curgă ca o apă curgătoare, şi neprihănirea ca un pîrîu care nu seacă niciodată!"},
	{25, "25 Mi-aţi adus voi jertfe şi daruri de mîncare, în timpul celor patruzeci de ani din pustie, casa lui Israel?..."},
	{26, "26 Veţi ridica dar pe Sacut, împăratul vostru, şi pe Caivan, chipurile voastre idoleşti, steaua dumnezeului vostru, pe care vi l-aţi făcut,"},
	{27, "27 şi vă voi duce în robie dincolo de Damasc, zice Domnul, al cărui Nume este Dumnezeul oştirilor!'"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct ro6 poems[] = {
	{1, "1 Vai de ceice trăiesc fără grijă în Sion, şi la adăpost pe muntele Samariei, vai de mai marii aceştia ai celui dintîi dintre neamuri, la cari aleargă casa lui Israel!..."},
	{2, "2 Treceţi la Calne şi vedeţi, duceţi-vă de acolo pînă la Hamatul cel mare, şi pogorîţi-vă în Gat la Filisteni; sînt oare cetăţile acestea mai înfloritoare decît cele două împărăţii ale voastre, şi este ţinutul lor mai întins decît al vostru?..."},
	{3, "3 Credeţi că ziua nenorocirii este departe, şi faceţi să se apropie domnia silniciei."},
	{4, "4 Ei se culcă pe paturi de fildeş, şi stau întinşi a lene pe aşternuturile lor; mănîncă miei din turmă, şi viţei puşi la îngrăşat."},
	{5, "5 Aiurează în sunetul alăutei, se cred iscusiţi ca David în instrumentele de muzică."},
	{6, "6 Beau vin cu pahare largi, se ung cu cel mai bun untdelemn, şi nu se întristează de prăpădul lui Iosif!"},
	{7, "7 De aceea vor merge în robie, în fruntea prinşilor de război; şi vor înceta strigătele de veselie ale acestor desfătaţi."},
	{8, "8 Domnul Dumnezeu a jurat pe Sine însuş, şi Domnul, Dumnezeul oştirilor, a zis: 'Mi -e scîrbă de mîndria lui Iacov, şi -i urăsc palatele; de aceea, voi da în mîna vrăjmaşului cetatea cu tot ce este în ea."},
	{9, "9 Şi dacă vor mai rămînea zece oameni într'o casă vor muri."},
	{10, "10 Cînd unchiu-său va lua pe cel mort să -l ardă, ridicîndu -i oasele din casă, şi va întreba pe cel din fundul casei: 'Mai este cineva cu tine?' Acela va răspunde: 'Nimeni'... Iar celalt va zice: 'Tăcere! Căci nu trebuie să pomenim acum Numele Domnului!'"},
	{11, "11 Căci iată că Domnul porunceşte să se dărîme casa cea mare, şi să se facă bucăţi casa cea mică."},
	{12, "12 Pot caii să alerge pe o stîncă? Sau poate cineva să are marea cu boii, de aţi prefăcut judecata în otravă, şi roada dreptăţii în pelin?"},
	{13, "13 Vă bucuraţi de lucruri de nimic, şi ziceţi: 'Oare nu prin tăria noastră am cîştigat noi putere?'"},
	{14, "14 De aceea, iată, voi ridica împotriva voastră, casa lui Israel, zice Domnul, Dumnezeul oştirilor, un neam, care vă va asupri dela intrarea Hamatului pînă la pîrîul pustiei.'"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct ro7 poems[] = {
	{1, "1 Domnul Dumnezeu mi -a trimes vedenia aceasta. Iată, făcea nişte lăcuste, în clipa cînd începea să crească otava; era otava după cositul împăratului."},
	{2, "2 Şi după ce au mîncat ele cu desăvîrşire toată iarba din ţară, am zis: 'Doamne Dumnezeule, iartă! Cum ar putea să stea Iacov în picioare? Căci este aşa de slab!'"},
	{3, "3 Atunci Domnul S'a căit de lucrul acesta: 'Nu se va întîmpla una ca aceasta, a zis Domnul.'"},
	{4, "4 Domnul Dumnezeu mi -a trimes vedenia aceasta: Iată, Domnul Dumnezeu vestea pedeapsa prin foc; şi focul mînca Adîncul cel mare şi apucase şi cîmpia."},
	{5, "5 Eu am zis: 'Doamne Dumnezeule, opreşte! Cum ar putea să stea în picioare Iacov? Căci este aşa de slab!'"},
	{6, "6 Atunci Domnul S'a căit şi de lucrul acesta. 'Nici una ca aceasta nu se va întîmpla, a zis Domnul Dumnezeu.'"},
	{7, "7 El mi -a trimes vedenia aceasta: Iată, Domnul stătea pe un zid făcut la cumpănă, şi avea o cumpănă în mînă."},
	{8, "8 Domnul mi -a zis: 'Ce vezi, Amos?' Eu am răspuns: 'O cumpănă.' Şi Domnul a zis: 'Iată, voi pune cumpăna în mijlocul poporului Meu Israel, şi nu -l voi mai ierta;"},
	{9, "9 ci înălţimile lui Isaac vor fi pustiite; sfintele locaşuri ale lui Israel vor fi dărîmate, şi Mă voi ridica împotriva casei lui Ieroboam cu sabia.'"},
	{10, "10 Atunci Amaţia, preotul din Betel, a trimes să spună lui Ieroboam, împăratul lui Israel: 'Amos unelteşte împotriva ta în mijlocul casei lui Israel; ţara nu poate să sufere toate cuvintele lui!"},
	{11, "11 Căci iată ce zice Amos: ,Ieroboam va fi ucis de sabie, şi Israel va fi dus în robie departe de ţara sa!`.'"},
	{12, "12 Şi Amaţia a zis lui Amos: 'Pleacă, văzătorule, şi fugi în ţara lui Iuda! Mănîncă-ţi pînea acolo, şi acolo prooroceşte."},
	{13, "13 Dar nu mai prooroci la Betel, căci este un locaş sfînt al împăratului, şi este un templu al împărăţiei!'"},
	{14, "14 Amos a răspuns lui Amaţia: 'Eu nu sînt nici prooroc, nici fiu de prooroc; ci sînt păstor, şi strîngător de smochine de Egipt."},
	{15, "15 Dar Domnul m'a luat dela oi, şi Domnul mi -a zis: ,Du-te şi prooroceşte poporului Meu Israel!`"},
	{16, "16 Ascultă acum Cuvîntul Domnului, tu care zici: ,Nu prooroci împotriva lui Israel, nu vorbi împotriva casei lui Isaac!`"},
	{17, "17 Din pricina aceasta, iată ce zice Domnul: ,Nevastă-ta va curvi în cetate, fiii şi fiicele tale vor cădea loviţi de sabie, ogorul tău va fi împărţit cu frînghia de măsurat; tu însă vei muri într'un pămînt necurat, şi Israel va fi dus în robie departe de ţara lui!'"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct ro8 poems[] = {
	{1, "1 Domnul Dumnezeu mi -a trimes următoarea vedenie. Iată, era un coş cu poame coapte."},
	{2, "2 El a zis: 'Ce vezi, Amos?' Eu am răspuns: 'Un coş cu poame coapte.' Şi Domnul mi -a zis: 'A venit sfîrşitul poporului Meu Israel; nu -l mai pot ierta!"},
	{3, "3 În ziua aceea, cîntecele Templului se vor preface în gemete, zice Domnul Dumnezeu, pretutindeni vor arunca în tăcere o mulţime de trupuri moarte.'"},
	{4, "4 Ascultaţi lucrul acesta, voi cari mîncaţi pe cel lipsit, şi prăpădiţi pe cei nenorociţi din ţară!"},
	{5, "5 Voi, cari ziceţi: 'Cînd va trece luna nouă, ca să vindem grîul, şi Sabatul ca să deschidem grînarele, să micşorăm efa şi să mărim siclul, şi să strîmbăm cumpăna ca să înşelăm?"},
	{6, "6 Apoi vom cumpăra pe cei nevoiaşi pe argint, şi pe sărac pe o păreche de încălţăminte, şi vom vinde codina în loc de grîu.' -"},
	{7, "7 Domnul a jurat pe slava lui Iacov: 'Niciodată nu voi uita niciuna din faptele lor!"},
	{8, "8 Nu se va cutremura ţara din pricina acestor mişelii, şi nu se vor jăli toţi locuitorii ei? Nu se va umfla toată ţara ca rîul, ridicîndu-se şi pogorîndu-se iarăş ca rîul Egiptului?"},
	{9, "9 În ziua aceea, zice Domnul Dumnezeu, voi face să asfinţească soarele la amiază, şi voi întuneca pămîntul ziua nămeaza mare."},
	{10, "10 Vă voi preface sărbătorile în jale, şi toate cîntările în bociri pentru morţi, voi acoperi toate coapsele cu saci şi voi face toate capetele pleşuve; voi arunca ţara într'o jale ca pentru un singur fiu, şi sfîrşitul ei va fi ca o zi amară.'"},
	{11, "11 'Iată, vin zile, zice Domnul Dumnezeu, cînd voi trimete foamete în ţară, nu foamete de pîne, nici sete de apă, ci foame şi sete după auzirea cuvintelor Domnului."},
	{12, "12 Vor pribegi atunci dela o mare la alta, de la miază-noapte la răsărit, vor umbla istoviţi încoace şi încolo, ca să caute Cuvîntul Domnului, şi tot nu -l vor găsi."},
	{13, "13 În ziua aceea se vor topi de sete fetele frumoase şi flăcăii."},
	{14, "14 Ei, cari jură acum pe păcatul Samariei, şi zic: ,Pe Dumnezeul tău cel viu, Dane!` Şi: ,Pe drumul Beer-Şebei!` Vor cădea, şi nu se vor mai scula.'"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view9() {
struct ro9 poems[] = {
	{1, "1 Am văzut pe Domnul stînd pe altar. Şi a zis: 'Loveşte pragul de sus al porţii, ca să se cutremure uşiorii, şi sfărîmă -i peste capetele lor ale tuturora. Rămăşiţa lor însă o voi pierde cu sabia, aşa că niciunul din ei nu va putea să scape fugind, şi niciunul din cei ce vor scăpa, nu va scăpa."},
	{2, "2 De ar pătrunde chiar pînă în locuinţa morţilor, şi de acolo îi va smulge mîna Mea; de s'ar sui chiar în ceruri, şi de acolo îi voi pogorî."},
	{3, "3 De s'ar ascunde chiar pe vîrful Carmelului, şi acolo îi voi căuta şi -i voi lua; de s'ar ascunde de privirile Mele chiar în fundul mării, şi acolo voi porunci şarpelui să -i muşte."},
	{4, "4 De ar merge în robie chiar înaintea vrăjmaşilor lor, şi acolo voi porunci săbiei să -i peardă; voi pune astfel ochii pe ei ca să le fac rău, nu bine."},
	{5, "5 Domnul, Dumnezeul oştirilor, atinge pămîntul, şi se topeşte, şi toţi locuitorii lui jălesc. Se înalţă ca rîul Nil, şi se pogoară ca rîul Egiptului."},
	{6, "6 El Şi -a zidit cămara în ceruri, Şi -a întemeiat bolta deasupra pămîntului; cheamă apele mării, şi le varsă pe faţa pămîntului. Domnul este Numele Lui!"},
	{7, "7 'Nu sînteţi voi oare pentru Mine ca şi copiii Etiopienilor, copii ai lui Israel? zice Domnul. N'am scos Eu pe Israel din ţara Egiptului, ca şi pe Filisteni din Caftor şi pe Sirieni din Chir?'"},
	{8, "8 'Iată, Domnul Dumnezeu are ochii pironiţi peste împărăţia aceasta vinovată, ca s'o nimicesc de pe faţa pămîntului; totuş nu voi nimici de tot casa lui Iacov, zice Domnul.'"},
	{9, "9 'Căci iată, voi porunci, şi voi vîntura casa lui Israel între toate neamurile, cum se vîntură cu ciurul, fără să cadă un singur bob la pămînt!"},
	{10, "10 Toţi păcătoşii poporului Meu vor muri de sabie, cei ce zic: ,Nu ne va ajunge nenorocirea, şi nu va veni peste noi.'"},
	{11, "11 'În vremea aceea voi ridica din căderea lui cortul lui David, îi voi drege spărturile, îi voi ridica dărîmăturile, şi -l voi zidi iarăş cum era odinioară,"},
	{12, "12 ca să stăpînească rămăşiţa Edomului şi toate neamurile peste cari a fost chemat Numele Meu, zice Domnul, care va împlini aceste lucruri."},
	{13, "13 'Iată, vin zile, zice Domnul, cînd plugarul va ajunge pe secerător, şi cel ce calcă strugurii pe cel ce împrăştie sămînţa, cînd mustul va picura din munţi şi va curge de pe toate dealurile."},
	{14, "14 Voi aduce înapoi pe prinşii de război ai poporului Meu Israel; ei vor zidi iarăş cetăţile pustiite şi le vor locui, vor sădi vii şi le vor bea vinul, vor face grădini şi le vor mînca roadele."},
	{15, "15 Îi voi sădi în ţara lor, şi nu vor mai fi smulşi din ţara pe care le-am dat -o, zice Domnul, Dumnezeul tău!`"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};