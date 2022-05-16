#include <map>
#include <string>
class Bible22
{
	struct ro1	{ int val; const char *msg; };
	struct ro2	{ int val; const char *msg; };
	struct ro3	{ int val; const char *msg; };
	struct ro4	{ int val; const char *msg; };
	struct ro5	{ int val; const char *msg; };
	struct ro6	{ int val; const char *msg; };
	struct ro7	{ int val; const char *msg; };
	struct ro8	{ int val; const char *msg; };
public:
static void view1() {
struct ro1 poems[] = {
	{1, "1 Cîntarea cîntărilor, făcută de Solomon."},
	{2, "2 Să mă sărute cu sărutările gurii lui! Căci toate desmierdările tale sînt mai bune de cît vinul,"},
	{3, "3 mirodeniile tale au un miros plăcut. Numele tău este ca o mireasmă vărsată. De aceea te iubesc pe tine fetele!"},
	{4, "4 Trage-mă după tine! Şi haidem să alergăm! Împăratul mă duce în odăile lui... Ne vom veseli şi ne vom bucura de tine; vom lăuda desmierdările tale mai mult de cît vinul! Pe drept eşti iubit."},
	{5, "5 Sînt neagră, dar sînt frumoasă, fiice ale Ierusalimului, cum sînt corturile Chedarului, şi cum sînt covoarele lui Solomon."},
	{6, "6 Nu vă uitaţi că sînt aşa de negricioasă, căci m'a ars soarele. Fiii mamei mele s'au mîniat pe mine, şi m'au pus păzitoare la vii. Dar via frumuseţii mele n'am păzit -o."},
	{7, "7 Spune-mi tu, pe care te iubeşte inima mea, unde îţi paşti oile, unde te odihneşti la amiază? Căci de ce să umblu ca o rătăcită pe la turmele tovarăşilor tăi? -"},
	{8, "8 Dacă nu ştii, o tu, cea mai frumoasă dintre femei, ieşi pe urmele oilor, şi paşte-ţi iezii lîngă colibele păstorilor."},
	{9, "9 Cu iapa înhămată la carăle lui Faraon, te asemăn eu pe tine, scumpa mea."},
	{10, "10 Ce frumoşi îţi sînt obrajii în mijlocul lănţişoarelor dela gît, şi ce frumos îţi este gîtul în mijlocul şirurilor de mărgăritare!"},
	{11, "11 Îţi vom face deci lănţişoare de aur, cu stropituri de argint. -"},
	{12, "12 Cît stă împăratul la masa lui, nardul meu îşi răspîndeşte mirosul."},
	{13, "13 Prea iubitul meu îmi este ca un mănunchi de mir, care se odihneşte între ţîţele mele."},
	{14, "14 Prea iubitul meu este pentru mine un strugure de măliniţă, din viile din En-Ghedi. -"},
	{15, "15 Ce frumoasă eşti, iubito, uite ce frumoasă eşti, cu ochii tăi de porumbiţă! -"},
	{16, "16 Ce frumos eşti, prea iubitule, ce plăcut eşti! Verdeaţa este patul nostru! -"},
	{17, "17 Cedrii sînt grinzile caselor noastre, şi chiparoşii sînt pardoselele noastre. -"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct ro2 poems[] = {
	{1, "1 Eu sînt un trandafir din Saron, un crin din văi. -"},
	{2, "2 Ca un crin în mijlocul spinilor, aşa este iubita mea între fete. -"},
	{3, "3 Ca un măr între copacii pădurii, aşa este prea iubitul meu între tineri. Cu aşa drag stau la umbra lui, şi rodul lui este dulce pentru cerul gurii mele."},
	{4, "4 El m'a dus în casa de ospăţ, şi dragostea era steagul fluturat peste mine."},
	{5, "5 Întăriţi-mă cu turte de struguri, învioraţi-mă cu mere, căci sînt bolnavă de dragostea lui."},
	{6, "6 Să-şi pună mîna stîngă supt capul meu, şi să mă îmbrăţişeze cu dreapta lui! -"},
	{7, "7 Vă jur, fiice ale Ierusalimului, pe căprioarele şi cerboaicele de pe cîmp: nu stîrniţi, nu treziţi dragostea, pînă nu vine ea! -"},
	{8, "8 Aud glasul prea iubitului meu! Iată -l că vine, sărind peste munţi, săltînd pe dealuri."},
	{9, "9 Prea iubitul meu seamănă cu o căprioară, sau cu puiul de cerboaică. Iată -l că este după zidul nostru, se uită pe fereastră, priveşte printre zăbrele."},
	{10, "10 Prea iubitul meu vorbeşte şi-mi zice: Scoală-te, iubito, şi vino, frumoaso!"},
	{11, "11 Căci iată că a trecut iarna; a încetat ploaia, şi s'a dus."},
	{12, "12 Se arată florile pe cîmp, a venit vremea cîntării, şi se aude glasul turturicii în cîmpiile noastre."},
	{13, "13 Se pîrguiesc roadele în smochin, şi viile înflorite îşi răspîndesc mirosul. Scoală-te, iubito, şi vino, frumoaso."},
	{14, "14 Porumbiţă din crăpăturile stîncii, ascunsă în scobiturile prăpăstiilor, arată-mi faţa ta, şi fă-mă să-ţi aud glasul! Căci glasul tău este dulce, şi faţa ta plăcută."},
	{15, "15 Prindeţi-ne vulpile, vulpile cele mici, cari strică viile; căci viile noastre sînt în floare."},
	{16, "16 Prea iubitul meu este al meu, şi eu sînt a lui; el îşi paşte turma între crini."},
	{17, "17 Pînă la răcoarea zilei, şi pînă la lungirea umbrelor, întoarce-te!... Iubitule, sai ca o căprioară sau ca puiul de cerb, peste munţii ce ne despart."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct ro3 poems[] = {
	{1, "1 Am căutat noaptea, în aşternutul meu, am căutat pe iubitul inimii mele; l-am căutat, dar nu l-am găsit..."},
	{2, "2 M'am sculat, atunci, şi am cutreierat cetatea, uliţele şi pieţele; şi am căutat pe iubitul inimii mele... L-am căutat, dar nu l-am găsit!"},
	{3, "3 M'au întîlnit păzitorii cari dau ocol cetăţii; şi i-am întrebat: 'N'aţi văzut pe iubitul inimii mele?'"},
	{4, "4 Abia trecusem de ei, şi am găsit pe iubitul inimii mele. L-am apucat, şi nu l-am mai lăsat pînă nu l-am adus în casa mamei mele, în odaia celei ce m'a zămislit. -"},
	{5, "5 Vă jur, fiice ale Ierusalimului, pe căprioarele şi cerboaicele de pe cîmp, nu stîrniţi, nu treziţi dragostea, pînă nu vine ea. -"},
	{6, "6 Ce se vede suindu-se din pustie, ca nişte stîlpi de fum, în mijlocul aburilor de mir şi de tămîie, înconjurată de toate mirezmele negustorilor de mir? -"},
	{7, "7 Iată, este pataşca lui Solomon, cu şasezeci de viteji, de jur împrejur, cei mai viteji din Israel."},
	{8, "8 Toţi sînt înarmaţi cu săbii, şi toţi sînt deprinşi la luptă, fiecare cu sabia la coapsă, ca să n'aibă nimic de temut în timpul nopţii."},
	{9, "9 Împăratul Solomon şi -a făcut această pataşcă din lemn din Liban."},
	{10, "10 Stîlpii i -a făcut de argint, rezemătoarea de aur, scaunul de purpură; iar mijlocul împodobit cu o ţesătură aleasă, lucrată de dragostea fiicelor Ierusalimului."},
	{11, "11 Ieşiţi, fetele Sionului, şi priviţi pe împăratul Solomon, cu cununa cu care l -a încununat mamă-sa în ziua cununiei lui, în ziua veseliei inimii lui. -"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct ro4 poems[] = {
	{1, "1 Ce frumoasă eşti, iubito, ce frumoasă eşti! Ochii tăi sînt ochi de porumbiţă, supt măhrama ta. Părul tău este ca o turmă de capre, poposită pe coama muntelui Galaad."},
	{2, "2 Dinţii tăi sînt ca o turmă de oi tunse, cari ies din scăldătoare, toate cu gemeni, şi nici una din ele nu este stearpă."},
	{3, "3 Buzele tale sînt ca un fir de cîrmîz, şi gura ta este drăguţă; obrazul tău este ca o jumătate de rodie, supt măhrama ta."},
	{4, "4 Gîtul tău este ca turnul lui David, zidit ca să fie o casă de arme; o mie de scuturi atîrnă de el, toate scuturi de viteji."},
	{5, "5 Amîndouă ţîţele tale sînt ca doi pui de cerb, ca gemenii unei căprioare, cari pasc între crini."},
	{6, "6 Pînă se răcoreşte ziua, şi pînă fug umbrele, voi veni la tine, munte de mir, şi la tine, deal de tămîie."},
	{7, "7 Eşti frumoasă de tot, iubito, şi n'ai nici un cusur."},
	{8, "8 Vino cu mine din Liban, mireaso, vino cu mine din Liban! Priveşte din vîrful muntelui Amana, din vîrful muntelui Senir şi Hermon, din vizuinile leilor, din munţii pardoşilor!"},
	{9, "9 Mi-ai răpit inima, soro, mireaso, mi-ai răpit inima numai cu o privire, numai cu unul din lănţişoarele dela gîtul tău!"},
	{10, "10 Ce lipici în desmierdările tale, soro, mireaso! Desmierdările tale preţuiesc mai mult decît vinul, şi mirezmele tale sînt mai plăcute decît toate miroznele!"},
	{11, "11 Miere picură din buzele tale, mireaso, miere şi lapte se află supt limba ta, şi mirosul hainelor tale este ca mirosul Libanului."},
	{12, "12 Eşti o grădină închisă, soro, mireaso, un izvor închis, o fîntînă pecetluită."},
	{13, "13 Odraslele tale sînt o grădină de rodii, cu cele mai alese roade, mălini negri şi nard;"},
	{14, "14 nard şi şofran, trestie mirositoare şi scorţişoară, cu tot felul de tufari de tămîie, smirnă şi aloe, cu cele mai alese mirezme."},
	{15, "15 O fîntînă din grădini, un izvor de ape vii, ce curge din Liban."},
	{16, "16 Scoală-te, crivăţule! Vino, vîntule de miazăzi! Suflaţi peste grădina mea, ca să picure mirosurile din ea! -Să intre iubitul meu în grădina lui, şi să mănînce din roadele ei alese! -"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct ro5 poems[] = {
	{1, "1 Eu intru în grădina mea, soro, mireaso, îmi culeg smirna cu mirezmele mele, îmi mănînc fagurul de miere cu mierea mea, îmi beau vinul cu laptele meu... -Mîncaţi, prieteni, beţi şi îmbătaţi-vă de dragoste! -"},
	{2, "2 Adormisem, dar inima îmi veghea... Este glasul prea iubitului meu, care bate: 'Deschide-mi, soro, scumpo, porumbiţo, neprihănito! Căci capul îmi este plin de rouă, cîrlionţii îmi sînt plini de picurii nopţii.' -"},
	{3, "3 'Mi-am scos haina, cum să mă îmbrac iarăş? Mi-am spălat picioarele: cum să le murdăresc iarăş?"},
	{4, "4 Dar iubitul meu a vîrît mîna pe gaura zăvorului, şi mi -a fost milă de el atunci."},
	{5, "5 M'am sculat să deschid iubitului meu, în timp ce de pe mînile mele picura smirnă, şi de pe degetele mele picura cea mai aleasă smirnă pe mînerul zăvorului."},
	{6, "6 Am deschis iubitului meu; dar iubitul meu plecase, se făcuse nevăzut. Înebuneam, cînd îmi vorbea. L-am căutat, dar nu l-am găsit; l-am strigat, dar nu mi -a răspuns."},
	{7, "7 Păzitorii cari dau ocol cetăţii m'au întîlnit; m'au bătut, m'au rănit; mi-au luat măhrama străjerii de pe ziduri."},
	{8, "8 Vă rog ferbinte, fiice ale Ierusalimului, dacă găsiţi pe iubitul meu, ce -i veţi spune?... Că sînt bolnavă de dragoste! -"},
	{9, "9 Ce are iubitul tău mai mult de cît altul, o, cea mai frumoasă dintre femei? Ce are iubitul tău mai mult de cît altul, de ne rogi aşa de fierbinte? -"},
	{10, "10 Iubitul meu este alb şi rumen, osebindu-se din zece mii."},
	{11, "11 Capul lui este o cunună de aur curat, pletele lui ca nişte valuri, sînt negre cum e corbul."},
	{12, "12 Ochii lui sînt ca nişte porumbei pe marginea izvoarelor, scăldaţi în lapte, şi odihnindu-se în faţa lui plină."},
	{13, "13 Obrajii lui sînt ca nişte straturi de mirezme, în cari cresc saduri mirositoare; buzele lui sînt nişte crini, din cari curge cea mai aleasă smirnă."},
	{14, "14 Mînile lui sînt nişte inele de aur, ferecate cu pietre de hrisolit; trupul lui este un chip de fildeş lustruit, acoperit cu pietre de safir;"},
	{15, "15 picioarele lui sînt nişte stîlpi de marmoră albă, aşezaţi pe nişte temelii de aur curat. Înfăţişarea lui este ca Libanul, pare un tînăr ales ca cedrii."},
	{16, "16 Cerul gurii lui este numai dulceaţă şi toată fiinţa lui este plină de farmec. Aşa este iubitul meu, aşa este scumpul meu, fiice ale Ierusalimului! -"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct ro6 poems[] = {
	{1, "1 Unde s'a dus iubitul tău, cea mai frumoasă dintre femei? Încotro a apucat iubitul tău, ca să -l căutăm şi noi împreună cu tine? -"},
	{2, "2 Iubitul meu s'a pogorît la grădina lui, la stratul de mirezme, ca să-şi pască turma în grădini, şi să culeagă crini."},
	{3, "3 Eu sînt a iubitului meu şi iubitul meu este al meu; el îşi paşte turma între crini. -"},
	{4, "4 Frumoasă eşti, iubito, ca Tirţa, plăcută ca Ierusalimul, dar cumplită ca nişte oşti supt steagurile lor."},
	{5, "5 Întoarce-ţi ochii dela mine, căci mă turbură. Perii tăi sînt ca o turmă de capre, cari poposesc pe coama Galaadului."},
	{6, "6 Dinţii tăi sînt ca o turmă de oi, cari ies din scăldătoare, toate cu gemeni, şi niciuna din ele nu este stearpă."},
	{7, "7 Obrazul tău este ca o jumătate de rodie, supt măhrama ta..."},
	{8, "8 Am şasezeci de împărătese, optzeci de ţiitoare, şi fete fără număr,"},
	{9, "9 dar numai una singură este porumbiţa mea, neprihănita mea; ea este singură la mamă-sa, cea mai aleasă a celei ce a născut -o. Fetele o văd, şi o numesc fericită; împărătesele şi ţiitoarele de asemenea o laudă. -"},
	{10, "10 'Cine este aceea care se iveşte ca zorile, frumoasă ca luna, curată ca soarele, dar cumplită ca nişte oşti supt steagurile lor?' -"},
	{11, "11 M'am pogorît în grădina cu nuci, să văd verdeaţa din vale, să văd dacă a înmugurit via, şi dacă au înflorit rodiile."},
	{12, "12 Dar fără să bag de seamă, dorinţa mea m'a dus la carăle poporului unui om ales. -"},
	{13, "13 Întoarce-te, întoarce-te, Sulamito! Întoarce-te, întoarce-te, ca să te privim. -Ce aveţi voi să vă uitaţi la Sulamita ca la nişte fete ce joacă în cor?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct ro7 poems[] = {
	{1, "1 Ce frumoase îţi sînt picioarele în încălţămintea ta, fată de domn! Marginile rotunde ale coapsei tale sînt ca nişte lănţişoare de pus la gît, lucrate de mînile unui meşter iscusit."},
	{2, "2 Pîntecele tău este un pahar rotund, de unde nu lipseşte vinul mirositor; trupul tău este un snop de grîu, încins cu crini."},
	{3, "3 Amîndouă ţîţele tale sînt ca doi pui de cerb, ca gemenii unei căprioare."},
	{4, "4 Gîtul tău este ca un turn de fildeş; ochii tăi sînt ca iazurile Hesbonului, de lîngă poarta Bat-Rabim; nasul tău este ca turnul Libanului, care priveşte spre Damasc."},
	{5, "5 Capul tău este cum e Carmelul, şi părul capului tău este ca purpura împărătească: pînă şi un împărat ar fi înlănţuit de pletele tale!..."},
	{6, "6 Ce frumoasă şi ce plăcută eşti, tu, iubito, în mijlocul desfătărilor!"},
	{7, "7 Statura ta este ca finicul, şi ţîţele tale ca nişte struguri."},
	{8, "8 Îmi zic: 'Mă voi sui în finic, şi -i voi apuca crăcile!' Atunci ţîţele tale vor fi ca strugurii din vie, mirosul suflării tale ca al merelor."},
	{9, "9 Şi gura ta toarnă un vin ales, care curge lin ca răspuns la desmierdările mele, şi alunecă pe buzele noastre cînd adormim!"},
	{10, "10 Eu sînt a iubitului meu, şi el doreşte de mine."},
	{11, "11 Vino, iubitule, haidem să ieşim pe cîmp, să mînem noaptea în sate!"},
	{12, "12 Dis de dimineaţă ne vom duce la vii, să vedem dacă a înmugurit via, dacă s'a deschis floarea, şi dacă au înflorit rodiile. Acolo îţi voi da dragostea mea."},
	{13, "13 Mandragorele îşi răspîndesc mirosul, şi deasupra uşii avem tot felul de roade bune, noi şi vechi, pe cari, pentru tine, iubitule, le-am păstrat."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct ro8 poems[] = {
	{1, "1 O! de ai fi fratele meu, care a supt la ţîţele mamei mele! Cînd te-aş întîlni în uliţă, te-aş săruta, şi nimeni nu m'ar ţinea de rău."},
	{2, "2 Te-aş lua şi te-aş aduce la casa mamei mele; ea m'ar învăţa să-ţi dau să bei vin mirositor, must din rodiile mele."},
	{3, "3 Mîna lui cea stîngă să fie supt capul meu, şi dreapta lui să mă îmbrăţişeze! -"},
	{4, "4 Vă rog fierbinte, fiice ale Ierusalimului, nu stîrniţi, nu treziţi dragostea, pînă nu vine ea. -"},
	{5, "5 Cine este aceea, care se suie din pustie, rezemată de iubitul ei şi zicînd: 'Te-am trezit supt măr; acolo te -a născut mamă-ta, acolo te -a născut şi te -a făcut ea.' -"},
	{6, "6 Pune-mă ca o pecete pe inima ta, ca o pecete pe braţul tău; căci dragostea este tare ca moartea, şi gelozia este neînduplecată ca locuinţa morţilor; jarul ei este jar de foc, o flacără a Domnului."},
	{7, "7 Apele cele mari nu pot să stingă dragostea, şi rîurile n'ar putea s'o înece; de ar da omul toate averile din casa lui pentru dragoste, tot n'ar avea de cît dispreţ."},
	{8, "8 Avem o soră micuţă, care n'are încă ţîţe. Ce vom face cu sora noastră în ziua cînd îi vor veni peţitorii?"},
	{9, "9 Dacă este zid, vom zidi nişte zimţi de argint pe ea; dar dacă este uşă, o vom închide cu o scîndură de cedru. -"},
	{10, "10 Eu sînt un zid, şi ţîţele mele sînt ca nişte turnuri; în ochii lui am fost ca una care a găsit pace."},
	{11, "11 Solomon avea o vie la Baal-Hamon; a închiriat -o unor păzitori; şi fiecare trebuia să aducă pentru rodul ei o mie de sicli de argint."},
	{12, "12 Via mea, care este a mea, o păstrez eu. Ţine-ţi, Solomoane, cei o mie de sicli, şi două sute fie celor ce păzesc rodul! -"},
	{13, "13 Tu, care locuieşti în grădini, nişte prieteni îşi pleacă urechea la glasul tău: binevoieşte şi fă-mă să -l aud! -"},
	{14, "14 Vino repede, iubitule, ca o căprioară sau ca puiul de cerb pe munţii plini de mirozne"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};