#include <map>
#include <string>
class Bible64
{
	struct hu1	{ int val; const char *msg; };
public:
static void view1() {
struct hu1 poems[] = {
	{1, "1 A presbiter a szeretett Gájusnak, a kit én igazán szeretek."},
	{2, "2 Szeretett [barátom,] kívánom, hogy mindenben jól legyen dolgod, és légy egészséges, a mint jó dolga van a lelkednek."},
	{3, "3 Mert felettébb örültem, a mikor atyafiak jöttek és bizonyságot tettek a te igazságodról, úgy, a mint te az igazságban jársz."},
	{4, "4 Nincs annál nagyobb örömem, mintha hallom, hogy az én gyermekeim az igazságban járnak."},
	{5, "5 Szeretett [barátom,] híven cselekszel mindenben, a mit az atyafiakért, és pedig az idegenekért teszel,"},
	{6, "6 A kik bizonyságot tettek a te szeretetedrõl a gyülekezet elõtt; a kiket jól teszed, ha Istenhez méltóan bocsátasz útjokra."},
	{7, "7 Mert az õ nevéért mentek ki, semmit sem fogadván el a pogányoktól;"},
	{8, "8 Nékünk azért be kell fogadnunk az ilyeneket, hogy munkatársaikká lehessünk az igazságban."},
	{9, "9 Írtam a gyülekezetnek; de Diotrefesz, a ki elsõséget kíván közöttük, nem fogad el minket."},
	{10, "10 Ezért, ha odamegyek, felemlítem az õ dolgait, a melyeket cselekszik, gonosz szavakkal csácsogván ellenünk; sõt nem elégedvén meg ezzel, maga sem fogadja be az atyafiakat, és a kik ezt akarnák, azokat is akadályozza, és az egyházból kiveti."},
	{11, "11 Szeretett [barátom,] ne a rosszat kövesd, hanem a jót. A ki jót cselekszik, az Istentõl van; a ki pedig rosszat cselekszik, nem látta az Istent."},
	{12, "12 Demeter mellett mindenki bizonyságot tett, maga az igazság is; de mi is bizonyságot teszünk, és tudjátok, hogy a mi bizonyságtételünk igaz."},
	{13, "13 Sok írni valóm volna, de nem akarok tintával és tollal írni néked:"},
	{14, "14 Hanem reménylem, hogy csakhamar meglátlak téged és szemtõl szembe beszélhetünk. [ (III John 1:15) Békesség néked! Köszöntenek téged a te barátaid. Köszöntsd a barátainkat név szerint. ]"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};