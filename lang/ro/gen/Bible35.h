#include <map>
#include <string>
class Bible35
{
	struct ro1	{ int val; const char *msg; };
	struct ro2	{ int val; const char *msg; };
	struct ro3	{ int val; const char *msg; };
public:
static void view1() {
struct ro1 poems[] = {
	{1, "1 Proorocia descoperită proorocului Habacuc."},
	{2, "2 Pînă cînd voi striga către Tine, Doamne, fără s'Asculţi? Pînă cînd mă voi tîngui Ţie, fără să dai ajutor?"},
	{3, "3 Pentru ce mă laşi să văd nelegiuirea, şi Te uiţi la nedreptate? Asuprirea şi sîlnicia se fac supt ochii mei, se nasc certuri, şi se stîrneşte gîlceavă."},
	{4, "4 Deaceea legea este fără putere, şi dreptatea nu se vede, căci cel rău biruieşte pe cel neprihănit, de aceea se fac judecăţi nedrepte. -"},
	{5, "5 Aruncaţi-vă ochii printre neamuri, şi priviţi, uimiţi-vă, şi îngroziţi-vă! Căci în zilele voastre voi face o lucrare, pe care n'aţi crede -o dacă v'ar povesti -o cineva!"},
	{6, "6 Iată, voi ridica pe Haldei, popor turbat şi iute, care străbate întinderi mari de ţări, ca să pună mîna pe locuinţe cari nu sînt ale lui."},
	{7, "7 El este grozav şi înfricoşat; numai din el însuş îi iese dreptul şi mărirea lui."},
	{8, "8 Caii lui sînt mai iuţi decît leoparzii, mai sprinteni decît lupii de seară, şi călăreţii lui înaintează în galop de departe, sboară ca vulturul care se repede asupra prăzii."},
	{9, "9 Tot poporul acesta vine numai ca să jăfuiască; privirile lui lacome caută înainte, şi strînge prinşi de război ca nisipul."},
	{10, "10 Îşi bate joc de împăraţi, şi voivozii sînt o nimica pentru el, rîde de toate întăriturile, căci grămădeşte pămînt, şi le ia."},
	{11, "11 Apoi aprinderea i se îndoieşte, întrece măsura şi se face vinovat, căci puterea lui o ia ca dumnezeu al lui!"},
	{12, "12 Doamne, nu eşti Tu din vecinicie, Dumnezeul meu, Sfîntul meu? Nu vom muri! Doamne, Tu ai ridicat pe poporul acesta ca să-Ţi împlineşti judecăţile Tale; Tu, Stînca mea, l-ai ridicat ca să dai prin el pedepsele Tale!"},
	{13, "13 Ochii Tăi sînt aşa de curaţi că nu pot să vadă răul, şi nu poţi să priveşti nelegiuirea! Cum ai putea privi Tu pe cei mişei, şi să taci, cînd cel rău mănîncă pe cel mai neprihănit decît el?"},
	{14, "14 Vei face Tu omului ca peştilor mării, ca tîrîtoarei, care n'are stăpîn?"},
	{15, "15 El îi scoate pe toţi cu undiţa, îi trage în mreaja sa, îi strînge în năvodul său. Deaceea se bucură şi se veseleşte."},
	{16, "16 De aceea aduce jertfe mrejei sale, aduce tămîie năvodului său; căci lor le datoreşte partea lui cea grasă şi bucatele lui gustoase!"},
	{17, "17 Pentru aceasta îşi va goli el într'una mreaja, şi va înjunghia fără milă pe neamuri?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct ro2 poems[] = {
	{1, "1 M'am dus la locul meu de strajă, şi stam pe turn ca să veghez şi să văd ce are să-mi spună Domnul, şi ce-mi va răspunde la plîngerea mea."},
	{2, "2 Domnul mi -a răspuns, şi a zis: 'Scrie proorocia, şi sapă -o pe table, ca să se poată citi uşor!"},
	{3, "3 Căci este o proorocie, a cărei vreme este hotărîtă, se apropie de împlinire, şi nu va minţi; dacă zăboveşte, aşteaptă -o, căci va veni şi se va împlini negreşit."},
	{4, "4 Iată, i s'a îngîmfat sufletul, nu este fără prihană în el; dar cel neprihănit va trăi prin credinţa lui."},
	{5, "5 Ca şi cel beat şi semeţ, cel mîndru nu stă liniştit; ci îşi lărgeşte gura ca locuinţa morţilor, este nesăţios ca moartea aşa că pe toate neamurile vrea să le strîngă la el, şi toate popoarele le trage la el."},
	{6, "6 Nu va fi el de batjocura tuturor acestora, de rîs şi de pomină? Se va zice: 'Vai de cel ce adună ce nu este al lui! Pînă cînd se va împovăra cu datorii?"},
	{7, "7 Nu se vor ridica deodată ceice te-au împrumutat? Nu se vor trezi asupritorii tăi, şi vei ajunge prada lor?"},
	{8, "8 Fiindcă ai jăfuit multe neamuri, toată rămăşiţa popoarelor te va jăfui, din pricina vărsării sîngelui oamenilor, din pricina sîlniciilor făcute în ţară şi împotriva cetăţii tuturor locuitorilor ei.'"},
	{9, "9 Vai de cel ce strînge cîştiguri nelegiuite pentru casa lui, ca să-şi aşeze apoi cuibul într'un loc înalt, şi să scape din mîna nenorocirii!"},
	{10, "10 Ruşinea casei tale ţi-ai croit, nimicind o mulţime de popoare, şi împotriva ta însuţi ai păcătuit."},
	{11, "11 Căci piatra din mijlocul zidului strigă, şi lemnul care leagă grinda îi răspunde."},
	{12, "12 Vai de cel ce zideşte o cetate cu sînge, care întemeiază o cetate cu nelegiuire!"},
	{13, "13 Iată, cînd Domnul oştirilor a hotărît lucrul acesta, popoarele se ostenesc pentru foc, şi neamurile se trudesc degeaba."},
	{14, "14 Căci pămîntul va fi plin de cunoştinţa salvei Domnului, ca fundul mării de apele cari -l acopăr."},
	{15, "15 Vai de cel ce dă aproapelui său să bea, vai de tine care îi torni băutură spumoasă şi -l ameţeşti, ca să -i vezi goliciunea!"},
	{16, "16 Te vei sătura de ruşine în loc de slavă; bea şi tu, şi desveleşte-te! Îţi va veni şi ţie rîndul să iei paharul din dreapta Domnului, şi va veni ruşinea peste slava ta."},
	{17, "17 Căci sîlniciile făcute împotriva Libanului vor cădea asupra ta, şi pustiirile fiarelor te vor îngrozi, pentru vărsarea sîngelui oamenilor, şi sîlniciile făcute în ţară, împotriva cetăţii şi împoriva tuturor locuitorilor ei."},
	{18, "18 La ce ar putea folosi un chip cioplit, pe care -l ciopleşte lucrătorul? La ce ar putea folosi un chip turnat, care învaţă pe oameni minciuni, pentru ca lucrătorul care l -a făcut să-şi pună încrederea în el, pe cînd el făureşte numai nişte idoli muţi?"},
	{19, "19 Vai de celce zice lemnului: 'Scoală-te', şi unei pietre mute: 'Trezeşte-te'! Poate ea să dea învăţătură? Iată că este împodobită cu aur şi argint, dar în ea nu este un duh care s'o însufleţească."},
	{20, "20 Domnul însă este în Templul Lui cel sfînt. Tot pămîntul să tacă înaintea Lui!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct ro3 poems[] = {
	{1, "1 Rugăciunea proorocului Habacuc. (De cîntat în felul cîntecelor de jale)."},
	{2, "2 Cînd am auzit, Doamne, ce ai vestit, m'am îngrozit. Însufleţeşte-Ţi lucrarea în cursul anilor, Doamne! Fă-Te cunoscut în trecerea anilor! Dar, în mînia Ta, adu-ţi aminte de îndurările Tale!"},
	{3, "3 Dumnezeu vine din Teman, şi Cel Sfînt vine din muntele Paran... -(Oprire.) -Măreţia Lui acopere cerurile, şi slava Lui umple pămîntul."},
	{4, "4 Strălucirea Lui este ca lumina soarelui, din mîna Lui pornesc raze, şi acolo este ascunsă tăria Lui."},
	{5, "5 Înaintea Lui merge ciuma, şi molima calcă pe urmele lui."},
	{6, "6 Se opreşte, şi măsoară pămîntul cu ochiul; priveşte, şi face pe neamuri să tremure; munţii cei vecinici se sfărîmă, dealurile cele vechi se pleacă; El umblă pe cărări vecinice."},
	{7, "7 Văd corturile Etiopiei, pline de groază, şi se cutremură colibele din ţara Madianului."},
	{8, "8 S'a mîniat oare Domnul pe rîuri? Împotriva rîurilor se aprinde mînia Ta, sau împotriva mării se varsă urgia Ta, de ai încălecat pe caii Tăi, şi Te-ai suit în carul Tău de biruinţă?"},
	{9, "9 Arcul Tău este desvelit; blestemele sînt săgeţile Cuvîntului Tău... -(Oprire.) -Tu despici pămîntul ca să dai drumul rîurilor."},
	{10, "10 La vederea Ta, se cutremură munţii; se năpustesc rîuri de apă; adîncul îşi ridică glasul, şi îşi înalţă valurile în sus."},
	{11, "11 Soarele şi luna se opresc în locuinţa lor, de lumina săgeţilor Tale cari pornesc, de strălucirea suliţei Tale care luceşte."},
	{12, "12 Tu cutreieri pămîntul în urgia ta, zdrobeşti neamurile în mînia Ta."},
	{13, "13 Ieşi ca să izbăveşti pe poporul Tău, să izbăveşti pe unsul Tău; sfărîmi acoperişul casei celui rău, o nimiceşti din temelii pînă în vîrf. -(Oprire.) -"},
	{14, "14 Străpungi cu săgeţile Tale capul căpeteniilor lui, cari se năpustesc peste mine ca furtuna, să mă pună pe fugă, scoţînd strigăte de bucurie, ca şi cum ar fi şi mîncat pe cel nenorocit în culcuş."},
	{15, "15 Cu caii Tăi mergi pe mare, pe spuma apelor mari."},
	{16, "16 Cînd am auzit... lucrul acesta, mi s'a cutremurat trupul; la vestea aceasta, mi se înfioară buzele, îmi intră putrezirea în oase, şi-mi tremură genunchii. Căci aş putea oare aştepta în tăcere ziua necazului, ziua cînd asupritorul va merge împotriva poporului?"},
	{17, "17 Căci chiar dacă smochinul nu va înflori, viţa nu va da niciun rod, rodul măslinului va lipsi, şi cîmpiile nu vor da hrană, oile vor pieri din staule, şi nu vor mai fi boi în grajduri,"},
	{18, "18 eu tot mă voi bucura în Domnul, mă voi bucura în Dumnezeul mîntuirii mele!"},
	{19, "19 Domnul Dumnezeul este tăria mea; El îmi face picioarele ca ale cerbilor, şi mă face să merg pe înălţimile mele. -Către mai marele cîntăreţilor. De cîntat cu instrumente cu coarde"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};