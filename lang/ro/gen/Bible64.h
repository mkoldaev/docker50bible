#include <map>
#include <string>
class Bible64
{
	struct ro1	{ int val; const char *msg; };
public:
static void view1() {
struct ro1 poems[] = {
	{1, "1 Presbiterul (Sau: bătrînul.) către prea iubitul Gaiu, pe care -l iubesc în adevăr."},
	{2, "2 Prea iubitule, doresc ca toate lucrurile tale să-ţi meargă bine, şi sănătatea ta să sporească tot aşa cum sporeşte sufletul tău."},
	{3, "3 A fost o mare bucurie pentru mine, cînd au venit fraţii şi au mărturisit că eşti credincios adevărului şi că umbli în adevăr."},
	{4, "4 Eu n'am bucurie mai mare decît să aud despre copiii mei că umblă în adevăr."},
	{5, "5 Prea iubitule, tu lucrezi cu credincioşie în tot ce faci pentru fraţi; şi pentru străini totodată."},
	{6, "6 Ei au mărturisit despre dragostea ta înaintea Bisericii. Vei face bine să îngrijeşti de călătoria lor, într'un chip vrednic de Dumnezeu;"},
	{7, "7 căci au plecat pentru dragostea Numelui Lui, fără să primească ceva dela Neamuri."},
	{8, "8 Este datoria noastră dar, să primim bine pe astfel de oameni, ca să lucrăm împreună cu adevărul."},
	{9, "9 Am scris ceva Bisericii, dar Diotref, căruia îi place să aibă întîietatea între ei, nu vrea să ştie de noi."},
	{10, "10 De aceea, cînd voi veni, îi voi aduce aminte de faptele pe cari le face, căci ne cleveteşte cu vorbe rele. Nu se mulţămeşte cu atît; dar nici el nu primeşte pe fraţi, şi împiedecă şi pe cei ce voiesc să -i primească, şi -i dă afară din Biserică."},
	{11, "11 Prea iubitule, nu urma răul, ci binele. Cine face binele, este din Dumnezeu: cine face răul, n'a văzut pe Dumnezeu."},
	{12, "12 Toţi, chiar şi Adevărul, mărturisesc bine despre Dimitrie; şi noi mărturisim despre el: şi ştii că mărturisirea noastră este adevărată."},
	{13, "13 Aş avea să-ţi spun multe lucruri, dar nu voiesc să ţi le scriu cu cerneală şi condei."},
	{14, "14 Nădăjduiesc să te văd în curînd, şi atunci vom vorbi gură către gură. Pacea să fie cu tine. Prietenii îţi trimet sănătate. Spune sănătate prietenilor, fiecăruia pe nume. Amin"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};