#include <map>
#include <string>
class Bible32
{
	struct ro1	{ int val; const char *msg; };
	struct ro2	{ int val; const char *msg; };
	struct ro3	{ int val; const char *msg; };
	struct ro4	{ int val; const char *msg; };
public:
static void view1() {
struct ro1 poems[] = {
	{1, "1 Cuvîntul Domnului a vorbit lui Iona, fiul lui Amitai, astfel:"},
	{2, "2 'Scoală-te, du-te la Ninive, cetatea cea mare, şi strigă împotriva ei. Căci răutatea ei s'a suit pînă la Mine!'"},
	{3, "3 Şi Iona s'a sculat să fugă la Tars, departe de Faţa Domnului. S'a pogorît la Iafo, şi a găsit acolo o corabie care mergea la Tars. A plătit preţul călătoriei, şi s'a suit în corabie ca să meargă împreună cu călătorii la Tars, departe... de Faţa Domnului."},
	{4, "4 Dar Domnul a făcut să sufle pe mare un vînt năpraznic, şi a stîrnit o mare furtună. Corabia ameninţa să se sfărîme."},
	{5, "5 Corăbierii s'au temut, au strigat fiecare la dumnezeul lui, şi au aruncat în mare uneltele din corabie, ca s'o facă mai uşoară. Iona s'a pogorît în fundul corăbiei, s'a culcat şi a adormit dus."},
	{6, "6 Cîrmaciul s'a apropiat de el, şi i -a zis: 'Ce dormi? Scoală-te şi cheamă pe Dumnezeul tău! Poate că Dumnezeu va voi să se gîndeasc la noi, şi nu vom pieri!'"},
	{7, "7 Şi au zis unul către altul: 'Veniţi să tragem la sorţ, ca să ştim pricina din cui a venit peste noi nenorocirea aceasta!' Au tras la sorţ, şi sorţul a căzut pe Iona."},
	{8, "8 Atunci ei i-au zis: 'Spune-ne din pricina cui a venit peste noi nenorocirea aceasta? Ce meserie ai, şi de unde vii? Care îţi este ţara, şi din ce popor eşti?'"},
	{9, "9 El le -a răspuns: 'Sînt Evreu, şi mă tem de Domnul, Dumnezeul cerurilor, care a făcut marea şi uscatul!'"},
	{10, "10 Oamenii aceia au avut o mare teamă, şi i-au zis: 'Pentruce ai făcut lucrul acesta?' Căci oamenii aceia ştiau că fugea de Faţa Domnului, pentrucă le spusese el."},
	{11, "11 Ei i-au zis: 'Ce să-ţi facem, ca să se potolească marea faţă de noi?' Căci marea era din ce în ce mai înfuriată."},
	{12, "12 El le -a răspuns: 'Luaţi-mă, şi aruncaţi-mă în mare, şi marea se va linişti faţă de voi! Căci ştiu că din vina mea vine peste voi această mare furtună!'"},
	{13, "13 Oamenii aceştia vîsleau ca să ajungă la uscat, dar nu puteau, pentrucă marea se întărîta tot mai mult împotriva lor."},
	{14, "14 Atunci au strigat către Domnul, şi au zis: 'Doamne, nu ne pierde din pricina vieţii omului acestuia, şi nu ne împovăra cu sînge nevinovat! Căci, Tu, Doamne, faci ce vrei!"},
	{15, "15 Apoi au luat pe Iona, şi l-au aruncat în mare. Şi furia mării s'a potolit."},
	{16, "16 Pe oamenii aceia i -a apucat o mare frică de Domnul, şi au adus Domnului o jertfă, şi I-au făcut juruinţe."},
	{17, "17 Domnul a trimes un peşte mare să înghită pe Iona, şi Iona a stat în pîntecele peştelui trei zile şi trei nopţi."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct ro2 poems[] = {
	{1, "1 Iona s'a rugat Domnului, Dumnezeului său, din pîntecele peştelui,"},
	{2, "2 şi a zis: 'În strîmtorarea mea, am chemat pe Domnul, şi m'a ascultat; din mijlocul locuinţei morţilor am strigat, şi mi-ai auzit glasul."},
	{3, "3 Şi totuş mă aruncasei în adînc, în inima mării, şi rîurile de apă mă înconjuraseră; toate valurile şi toate talazurile Tale au trecut peste mine."},
	{4, "4 Ziceam: 'Sînt lepădat dinaintea ochilor Tăi! Dar iarăş voi vedea Templul Tău cel sfînt'."},
	{5, "5 Apele m'au acoperit pînă aproape să-mi ia viaţa, adîncul m'a învăluit, papura s'a împletit în jurul capului meu."},
	{6, "6 M'am pogorît pînă la temeliile munţilor, zăvoarele pămîntului mă încuiau pe vecie; dar Tu m'ai scos viu din groapă, Doamne, Dumnezeul meu!"},
	{7, "7 Cînd îmi tînjea sufletul în mine, mi-am adus aminte de Domnul, şi rugăciunea mea a ajuns pînă la Tine, în Templul Tău ce sfînt."},
	{8, "8 Ceice se lipesc de idoli deşerţi îndepărtează îndurarea dela ei."},
	{9, "9 Eu însă Îţi voi aduce jertfe cu un strigăt de mulţămire, voi împlini juruinţele pe cari le-am făcut. Mîntuirea vine dela Domnul.'"},
	{10, "10 Domnul a vorbit peştelui, şi peştele a vărsat pe Iona pe pămînt."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct ro3 poems[] = {
	{1, "1 Cuvîntul Domnului a vorbit a doua oară lui Iona, astfel:"},
	{2, "2 'Scoală-te, du-te la Ninive, cetatea cea mare, şi vesteşte acolo strigarea pe care ţi -o voi da!'"},
	{3, "3 Şi Iona s'a sculat, şi s'a dus la Ninive, după Cuvîntul Domnului. Şi Ninive era o cetate foarte mare, cît o călătorie de trei zile."},
	{4, "4 Iona a început să pătrundă în oraş, cale de o zi, strigînd şi zicînd: 'Încă patruzeci de zile, şi Ninive va fi nimicită!'"},
	{5, "5 Oamenii din Ninive au crezut în Dumnezeu, au vestit un post, şi s'au îmbrăcat cu saci, dela cei mai mari pînă la cei mai mici."},
	{6, "6 Lucrul a ajuns la urechea împăratului din Ninive; el s -a sculat de pe scaunul lui de domnie, şi -a scos mantia de pe el, s'a acoperit cu un sac, şi a şezut în cenuşă."},
	{7, "7 Şi a trimes să se dea de ştire în Ninive, din porunca împăratului şi mai marilor lui, următoarele: 'Oamenii şi vitele, boii şi oile, să nu guste nimic, să nu pască, şi nici să nu bea apă deloc!"},
	{8, "8 Ci oamenii şi vitele să se acopere cu saci, strige cu putere către Dumnezeu, şi să se întoarcă dela calea lor cea rea şi dela faptele de asuprire, de cari le sînt pline mînile!"},
	{9, "9 Cine ştie dacă nu Se va întoarce Dumnezeu şi Se va căi, şi dacă nu-Şi va opri mînia Lui aprinsă, ca să nu pierim!'"},
	{10, "10 Dumnezeu a văzut ce făceau ei şi că se întorceau dela calea lor cea rea. Atunci Dumnezeu S'a căit de răul pe care se hotărîse să li -l facă, şi nu l -a făcut."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct ro4 poems[] = {
	{1, "1 Lucrul acesta n'a plăcut deloc lui Iona, şi s'a mîniat."},
	{2, "2 S'a rugat Domnului, şi a zis: 'Ah! Doamne, nu este aceasta tocmai ce ziceam eu cînd eram încă în ţara mea? Tocmai lucrul acesta voiam să -l înlătur fugind la Tars. Căci ştiam că eşti un Dumnezeu milos şi plin de îndurare, îndelung răbdător, şi bogat în bunătate, şi că Te căieşti de rău!"},
	{3, "3 Acum, Doamne, ia-mi viaţa, căci vreau mai bine să mor decît să trăiesc!'"},
	{4, "4 Domnul a răspuns: 'Bine faci Tu de te mînii?'"},
	{5, "5 Şi Iona a ieşit din cetate, şi s'a aşezat la răsărit de cetate. Acolo şi -a făcut un umbrar, şi a stătut supt el, pînă va vedea ce are să se întîmple cu cetatea."},
	{6, "6 Domnul Dumnezeu a făcut să crească un curcubete, care s'a ridicat peste Iona, ca să facă umbră capului lui şi să -l facă să -i treacă mînia. Iona s'a bucurat foarte mult de curcubetele acesta."},
	{7, "7 Dar a doua zi, la răsăritul soarelui, Dumnezeu a adus un verme, care a înţepat curcubetele, şi curcubetele s'a uscat."},
	{8, "8 Cînd a răsărit soarele, Dumnezeu a făcut să sufle un vînt uscat dela răsărit, şi soarele a bătut peste capul lui Iona, şi Iona a leşinat. Atunci a dorit să moară, şi a zis: 'Mai bine să mor decît să trăiesc!'"},
	{9, "9 Dar Dumnezeu a zis lui Iona: 'Bine faci tu de te mînii din pricina curcubetelui?' El a răspuns: 'Da, bine fac că mă mînii pînă la moarte!'"},
	{10, "10 Atunci şi Domnul a zis: 'Ţie îţi este milă de curcubetele acesta, care nu te -a costat nici o trudă şi pe care nu tu l-ai făcut să crească, ci într'o noapte s'a născut şi într'o noapte a pierit."},
	{11, "11 Şi mie să nu-Mi fie milă de Ninive, cetatea cea mare, în care se află mai mult de o sută douăzeci de mii de oameni, cari nu ştiu să deosebească dreapta de stînga lor, afară de o mulţime... de vite!`"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};