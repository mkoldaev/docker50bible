#include <map>
#include <string>
class Bible62
{
	struct ro1	{ int val; const char *msg; };
	struct ro2	{ int val; const char *msg; };
	struct ro3	{ int val; const char *msg; };
	struct ro4	{ int val; const char *msg; };
	struct ro5	{ int val; const char *msg; };
public:
static void view1() {
struct ro1 poems[] = {
	{1, "1 Ce era dela început, ce am auzit, ce am văzut cu ochii noştri, ce am privit şi ce am pipăit cu mînile noastre, cu privire la Cuvîntul vieţii, -"},
	{2, "2 pentrucă viaţa a fost arătată, şi noi am văzut -o, şi mărturisim despre ea, şi vă vestim viaţa vecinică, viaţă care era la Tatăl, şi care ne -a fost arătată; -"},
	{3, "3 deci, ce am văzut şi am auzit, aceea vă vestim şi vouă, ca şi voi să aveţi părtăşie cu noi. Şi părtăşia noastră este cu Tatăl şi cu Fiul Său, Isus Hristos."},
	{4, "4 Şi vă scriem aceste lucruri pentru ca bucuria voastră să fie deplină."},
	{5, "5 Vestea, pe care am auzit -o dela El şi pe care v'o propovăduim, este că Dumnezeu e lumină, şi în El nu este întunerec."},
	{6, "6 Dacă zicem că avem părtăşie cu El, şi umblăm în întunerec, minţim, şi nu trăim adevărul."},
	{7, "7 Dar dacă umblăm în lumină, după cum El însuş este în lumină, avem părtăşie unii cu alţii; şi sîngele lui Isus Hristos, Fiul Lui, ne curăţeşte de orice păcat."},
	{8, "8 Dacă zicem că n'avem păcat, ne înşelăm singuri, şi adevărul nu este în noi."},
	{9, "9 Dacă ne mărturisim păcatele, El este credincios şi drept, ca să ne ierte păcatele şi să ne curăţească de orice nelegiuire."},
	{10, "10 Dacă zicem că n'am păcătuit, Îl facem mincinos, şi Cuvîntul Lui nu este în noi."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct ro2 poems[] = {
	{1, "1 Copilaşilor, vă scriu aceste lucruri, ca să nu păcătuiţi. Dar dacă cineva a păcătuit, avem la Tatăl un Mijlocitor (Sau Advocat. Greceşte: Paraclet, adică apărător, ajutor.), pe Isus Hristos, Cel neprihănit."},
	{2, "2 El este jertfa de ispăşire pentru păcatele noastre; şi nu numai pentru ale noastre, ci pentru ale întregei lumi."},
	{3, "3 Şi prin aceasta ştim că Îl cunoaştem, dacă păzim poruncile Lui."},
	{4, "4 Cine zice: 'Îl cunosc', şi nu păzeşte poruncile Lui, este un mincinos, şi adevărul nu este în el."},
	{5, "5 Dar cine păzeşte Cuvîntul Lui, în el dragostea lui Dumnezeu a ajuns desăvîrşită; prin aceasta ştim că sîntem în El."},
	{6, "6 Cine zice că rămîne în El, trebuie să trăiască şi el cum a trăit Isus."},
	{7, "7 Prea iubiţilor nu vă scriu o poruncă nouă, ci o poruncă veche, pe care aţi avut -o dela început. Porunca aceasta veche este Cuvîntul, pe care l-aţi auzit."},
	{8, "8 Totuş vă scriu o poruncă nouă, lucru care este adevărat atît cu privire la El, cît şi cu privire la voi; căci întunerecul se împrăştie, şi lumina adevărată şi răsare chiar."},
	{9, "9 Cine zice că este în lumină, şi urăşte pe fratele său, este încă în întunerec pînă acum."},
	{10, "10 Cine iubeşte pe fratele său, rămîne în lumină, şi în el nu este niciun prilej de poticnire."},
	{11, "11 Dar cine urăşte pe fratele său, este în întunerec, umblă în întunerec, şi nu ştie încotro merge, pentrucă întunerecul i -a orbit ochii."},
	{12, "12 Vă scriu, copilaşilor, fiindcă păcatele vă sînt iertate pentru Numele Lui."},
	{13, "13 Vă scriu, părinţilor, fiindcă aţi cunoscut pe Cel ce este dela început. Vă scriu, tinerilor, fiindcă aţi biruit pe cel rău. V'am scris, copilaşilor, fiindcă aţi cunoscut pe Tatăl."},
	{14, "14 V'am scris, părinţilor, fiindcă aţi cunoscut pe Cel ce este dela început. V'am scris, tinerilor, fiindcă sînteţi tari, şi Cuvîntul lui Dumnezeu rămîne în voi, şi aţi biruit pe cel rău."},
	{15, "15 Nu iubiţi lumea, nici lucrurile din lume. Dacă iubeşte cineva lumea, dragostea Tatălui nu este în El."},
	{16, "16 Căci tot ce este în lume: pofta firii pămînteşti, pofta ochilor şi lăudăroşia vieţii, nu este dela Tatăl, ci din lume."},
	{17, "17 Şi lumea şi pofta ei trece; dar cine face voia lui Dumnezeu, rămîne în veac."},
	{18, "18 Copilaşilor, este ceasul cel de pe urmă. Şi, după cum aţi auzit că are să vină anticrist, să ştiţi că acum s'au ridicat mulţi anticrişti: prin aceasta cunoaştem că este ceasul de pe urmă."},
	{19, "19 Ei au ieşit din mijlocul nostru, dar nu erau dintre ai noştri. Căci dacă ar fi fost dintre ai noştri, ar fi rămas cu noi; ci au ieşit, ca să se arate că nu toţi sînt dintre ai noştri."},
	{20, "20 Dar voi aţi primit ungerea din partea Celui sfînt, şi ştiţi orice lucru."},
	{21, "21 V'am scris nu că n'aţi cunoaşte adevărul, ci pentrucă îl cunoaşteţi, şi ştiţi că nicio minciună nu vine din adevăr."},
	{22, "22 Cine este mincinosul, dacă nu cel ce tăgăduieşte că Isus este Hristosul? Acela este Anticristul, care tăgăduieşte pe Tatăl şi pe Fiul."},
	{23, "23 Oricine tăgăduieşte pe Fiul, n'are pe Tatăl. Oricine mărturiseşte pe Fiul, are şi pe Tatăl."},
	{24, "24 Ce aţi auzit dela început, aceea să rămînă în voi. Dacă rămîne în voi ce aţi auzit dela început, şi voi veţi rămînea în Fiul şi în Tatăl."},
	{25, "25 Şi făgăduinţa, pe care ne -a făcut -o El, este aceasta: viaţa vecinică."},
	{26, "26 V'am scris aceste lucruri în vederea celor ce caută să vă rătăcească."},
	{27, "27 Cît despre voi, ungerea, pe care aţi primit -o dela El, rămîne în voi, şi n'aveţi trebuinţă să vă înveţe cineva; ci, după cum ungerea Lui vă învaţă despre toate lucrurile şi este adevărată, şi nu este o minciună, rămîneţi în El, după cum v'a învăţat ea."},
	{28, "28 Şi acum, copilaşilor, rămîneţi în El, pentruca atunci cînd Se va arăta El, să avem îndrăsneală, şi, la venirea Lui, să nu rămînem de ruşine şi depărtaţi de El."},
	{29, "29 Dacă ştiţi că El este neprihănit, să ştiţi şi că oricine trăieşte în neprihănire este născut din El."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct ro3 poems[] = {
	{1, "1 Vedeţi ce dragoste ne -a arătat Tatăl, să ne numim copii ai lui Dumnezeu! Şi sîntem. Lumea nu ne cunoaşte, pentrucă nu L -a cunoscut nici pe El."},
	{2, "2 Prea iubiţilor, acum sîntem copii ai lui Dumnezeu. Şi ce vom fi, nu s'a arătat încă. Dar ştim că atunci cînd Se va arăta El, vom fi ca El; pentrucă Îl vom vedea aşa cum este."},
	{3, "3 Oricine are nădejdea aceasta în El, se curăţeşte, după cum El este curat."},
	{4, "4 Oricine face păcat, face şi fărădelege; şi păcatul este fărădelege."},
	{5, "5 Şi ştiţi că El S'a arătat ca să ia păcatele; şi în El nu este păcat."},
	{6, "6 Oricine rămîne în El, nu păcătuieşte; oricine păcătuieşte, nu L -a văzut, nici nu L -a cunoscut."},
	{7, "7 Copilaşilor, nimeni să nu vă înşele! Cine trăieşte în neprihănire, este neprihănit, cum El însuş este neprihănit."},
	{8, "8 Cine păcătuieşte, este dela diavolul, căci diavolul păcătuieşte dela început. Fiul lui Dumnezeu S'a arătat ca să nimicească lucrările diavolului."},
	{9, "9 Oricine este născut din Dumnezeu, nu păcătuieşte, pentrucă sămînţa Lui rămîne în el; şi nu poate păcătui, fiindcă este născut din Dumnezeu."},
	{10, "10 Prin aceasta se cunosc copiii lui Dumnezeu şi copiii diavolului. Oricine nu trăieşte în neprihănire, nu este dela Dumnezeu; nici cine nu iubeşte pe fratele său."},
	{11, "11 Căci vestirea, pe care aţi auzit -o dela început, este aceasta: să ne iubim unii pe alţii;"},
	{12, "12 nu cum a fost Cain, care era dela cel rău, şi a ucis pe fratele său. Şi pentruce l -a ucis? Pentrucă faptele lui erau rele, iar ale fratelui său erau neprihănite."},
	{13, "13 Nu vă miraţi, fraţilor, dacă vă urăşte lumea."},
	{14, "14 Noi ştim că am trecut din moarte la viaţă, pentrucă iubim pe fraţi. Cine nu iubeşte pe fratele său, rămîne în moarte."},
	{15, "15 Oricine urăşte pe fratele său, este un ucigaş; şi ştiţi că niciun ucigaş n'are viaţa vecinică rămînînd în el."},
	{16, "16 Noi am cunoscut dragostea Lui prin aceea că El Şi -a dat viaţa pentru noi; şi noi deci trebuie să ne dăm viaţa pentru fraţi."},
	{17, "17 Dar cine are bogăţiile lumii acesteia, şi vede pe fratele său în nevoie, şi îşi închide inima faţă de el, cum rămîne în el dragostea de Dumnezeu?"},
	{18, "18 Copilaşilor, să nu iubim cu vorba, nici cu limba, ci cu fapta şi cu adevărul."},
	{19, "19 Prin aceasta vom cunoaşte că sîntem din adevăr, şi ne vom linişti inimile înaintea Lui,"},
	{20, "20 ori în ce ne osîndeşte inima noastră; căci Dumnezeu este mai mare decît inima noastră, şi cunoaşte toate lucrurile."},
	{21, "21 Prea iubiţilor, dacă nu ne osîndeşte inima noastră, avem îndrăzneală la Dumnezeu."},
	{22, "22 Şi orice vom cere, vom căpăta dela El, fiindcă păzim poruncile Lui, şi facem ce este plăcut înaintea Lui."},
	{23, "23 Şi porunca Lui este să credem în Numele Fiului Său Isus Hristos, şi să ne iubim unii pe alţii, cum ne -a poruncit El."},
	{24, "24 Cine păzeşte poruncile Lui, rămîne în El, şi El în el. Şi cunoaştem că El rămîne în noi prin Duhul, pe care ni L -a dat."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct ro4 poems[] = {
	{1, "1 Prea iubiţilor, să nu daţi crezare oricărui duh; ci să cercetaţi duhurile, dacă sînt dela Dumnezeu; căci în lume au ieşit mulţi prooroci mincinoşi."},
	{2, "2 Duhul lui Dumnezeu să -L cunoaşteţi după aceasta: Orice duh, care mărturiseşte că Isus Hristos a venit în trup, este de la Dumnezeu;"},
	{3, "3 şi orice duh, care nu mărturiseşte pe Isus, nu este dela Dumnezeu, ci este duhul lui Antihrist, de a cărui venire aţi auzit. El chiar este în lume acum."},
	{4, "4 Voi, copilaşilor, sînteţi din Dumnezeu; şi i-aţi biruit, pentrucă Cel ce este în voi, este mai mare decît cel ce este în lume."},
	{5, "5 Ei sînt din lume; deaceea vorbesc ca din lume, şi lumea îi ascultă."},
	{6, "6 Noi însă sîntem din Dumnezeu; cine cunoaşte pe Dumnezeu, ne ascultă; cine nu este din Dumnezeu, nu ne ascultă. Prin aceasta cunoaştem duhul adevărului şi duhul rătăcirii."},
	{7, "7 Prea iubiţilor, să ne iubim unii pe alţii; căci dragostea este dela Dumnezeu. Şi oricine iubeşte, este născut din Dumnezeu, şi cunoaşte pe Dumnezeu."},
	{8, "8 Cine nu iubeşte, n'a cunoscut pe Dumnezeu; pentrucă Dumnezeu este dragoste."},
	{9, "9 Dragostea lui Dumnezeu faţă de noi s'a arătat prin faptul că Dumnezeu a trimes în lume pe singurul Său Fiu, ca noi să trăim prin El."},
	{10, "10 Şi dragostea stă nu în faptul că noi am iubit pe Dumnezeu, ci în faptul că El ne -a iubit pe noi, şi a trimes pe Fiul Său ca jertfă de ispăşire pentru păcatele noastre."},
	{11, "11 Prea iubiţilor, dacă astfel ne -a iubit Dumnezeu pe noi, trebuie să ne iubim şi noi unii pe alţii."},
	{12, "12 Nimeni n'a văzut vreodată pe Dumnezeu; dacă ne iubim unii pe alţii, Dumnezeu rămîne în noi, şi dragostea Lui a ajuns desăvîrşită în noi."},
	{13, "13 Cunoaştem că rămînem în El şi că El rămîne în noi prin faptul că ne -a dat din Duhul Său."},
	{14, "14 Şi noi am văzut şi mărturisim că Tatăl a trimes pe Fiul ca să fie Mîntuitorul lumii."},
	{15, "15 Cine va mărturisi că Isus este Fiul lui Dumnezeu, Dumnezeu rămîne în el, şi el în Dumnezeu."},
	{16, "16 Şi noi am cunoscut şi am crezut dragostea pe care o are Dumnezeu faţă de noi. Dumnezeu este dragoste; şi cine rămîne în dragoste, rămîne în Dumnezeu, şi Dumnezeu rămîne în el."},
	{17, "17 Cum este El, aşa sîntem şi noi în lumea aceasta: astfel se face că dragostea este desăvîrşită în noi, pentru ca să avem deplină încredere în ziua judecăţii."},
	{18, "18 În dragoste nu este frică; ci dragostea desăvîrşită izgoneşte frica; pentrucă frica are cu ea pedeapsa; şi cine se teme, n'a ajuns desăvîrşit în dragoste."},
	{19, "19 Noi Îl iubim pentrucă El ne -a iubit întîi."},
	{20, "20 Dacă zice cineva: 'Eu iubesc pe Dumnezeu', şi urăşte pe fratele său, este un mincinos; căci cine nu iubeşte pe fratele său, pe care -l vede, cum poate să iubească pe Dumnezeu, pe care nu -L vede?"},
	{21, "21 Şi aceasta este porunca, pe care o avem dela El: cine iubeşte pe Dumnezeu, iubeşte şi pe fratele său."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct ro5 poems[] = {
	{1, "1 Oricine crede că Isus este Hristosul, este născut din Dumnezeu; şi oricine iubeşte pe Celce L -a născut, iubeşte şi pe cel născut din El."},
	{2, "2 Cunoaştem că iubim pe copiii lui Dumnezeu prin aceea că iubim pe Dumnezeu şi păzim poruncile Lui."},
	{3, "3 Căci dragostea de Dumnezeu stă în păzirea poruncilor Lui. Şi poruncile Lui nu sînt grele;"},
	{4, "4 pentrucă oricine este născut din Dumnezeu, biruieşte lumea; şi ceeace cîştigă biruinţă asupra lumii, este credinţa noastră."},
	{5, "5 Cine este celce a biruit lumea, dacă nu celce crede că Isus este Fiul lui Dumnezeu?"},
	{6, "6 El, Isus Hristos, este Celce a venit cu apă şi cu sînge; nu numai cu apă, ci cu apă şi cu sînge; şi Duhul este Celce mărturiseşte despre lucrul acesta, fiindcă Duhul este adevărul."},
	{7, "7 (Căci trei sînt cari mărturisesc în cer: Tatăl, Cuvîntul şi Duhul Sfînt, şi aceşti trei una sînt.)"},
	{8, "8 Şi trei sînt cari mărturisesc (pe pămînt): Duhul, apa şi sîngele, şi aceşti trei sînt una în mărturisirea lor."},
	{9, "9 Dacă primim mărturisirea oamenilor, mărturisirea lui Dumnezeu este mai mare; şi mărturisirea lui Dumnezeu este mărturisirea, pe care a făcut -o El despre Fiul Său."},
	{10, "10 Cine crede în Fiul lui Dumnezeu, are mărturisirea aceasta în el; cine nu crede pe Dumnezeu, Îl face mincinos, fiindcă nu crede mărturisirea, pe care a făcut -o Dumnezeu despre Fiul Său."},
	{11, "11 Şi mărturisirea este aceasta: Dumnezeu ne -a dat viaţa vecinică, şi această viaţă este în Fiul Său."},
	{12, "12 Cine are pe Fiul, are viaţa; cine n'are pe Fiul lui Dumnezeu, n'are viaţa."},
	{13, "13 V'am scris aceste lucruri ca să ştiţi că voi, cari credeţi în Numele Fiului lui Dumnezeu, aveţi viaţa vecinică."},
	{14, "14 Îndrăzneala, pe care o avem la El, este că, dacă cerem ceva după voia Lui, ne ascultă."},
	{15, "15 Şi dacă ştim că ne ascultă, orice i-am cere, ştim că sîntem stăpîni pe lucrurile pe cari I le-am cerut."},
	{16, "16 Dacă vede cineva pe fratele său săvîrşind un păcat care nu duce la moarte, să se roage; şi Dumnezeu îi va da viaţa, pentru ceice n'au săvîrşit un păcat care duce la moarte. Este un păcat care duce la moarte; nu -i zic să se roage pentru păcatul acela."},
	{17, "17 Orice nelegiuire este păcat; dar este un păcat, care nu duce la moarte."},
	{18, "18 Ştim că oricine este născut din Dumnezeu, nu păcătuieşte, ci Cel născut din Dumnezeu îl păzeşte, şi cel rău nu se atinge de el."},
	{19, "19 Ştim că sîntem din Dumnezeu şi că toată lumea zace în cel rău."},
	{20, "20 Ştim că Fiul lui Dumnezeu a venit, şi ne -a dat pricepere să cunoaştem pe Celce este adevărat. Şi noi sîntem în Celce este adevărat, adică în Isus Hristos, Fiul Lui. El este Dumnezeul adevărat şi viaţa vecinică."},
	{21, "21 Copilaşilor, păziţi-vă de idoli. Amin"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};