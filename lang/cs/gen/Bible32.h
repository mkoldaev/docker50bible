#include <map>
#include <string>
class Bible32
{
	struct cs1	{ int val; const char *msg; };
	struct cs2	{ int val; const char *msg; };
	struct cs3	{ int val; const char *msg; };
	struct cs4	{ int val; const char *msg; };
public:
static void view1() {
struct cs1 poems[] = {
	{1, "1 I stalo se slovo Hospodinovo k Jonášovi synu Amaty, řkoucí:"},
	{2, "2 Vstaň, jdi do Ninive města toho velikého, a volej proti němu; neboť jest vstoupila nešlechetnost jejich před oblíčej můj."},
	{3, "3 Ale Jonáš vstal, aby utekl do Tarsu od tváři Hospodinovy. A přišed do Joppe, našel lodí, ana jde do Tarsu, a zaplativ od ní, vstoupil na ni, aby se plavil s nimi do Tarsu od tváři Hospodinovy."},
	{4, "4 Ale Hospodin vzbudil vítr veliký na moři. I stala se bouře veliká na moři, až se domnívali, že se lodí ztroskoce."},
	{5, "5 A bojíce se plavci, volali jeden každý k bohu svému, a vyhazovali to, což měli na lodí, do moře, aby sobě tím polehčili. Jonáš pak byl sešel k bokům lodí, a položiv se, spal tvrdě."},
	{6, "6 Tedy přišed k němu správce lodí, řekl jemu: Což ty děláš, ospalče? Vstaň, volej k Bohu svému. Snad ten Bůh rozpomene se na nás, abychom nezahynuli."},
	{7, "7 I řekli jeden druhému: Poďte, vrzme losy, abychom zvěděli, pro koho to zlé přišlo na nás. Tedy metali losy, a padl los na Jonáše."},
	{8, "8 I řekli jemu: Pověz nám medle, pro koho toto zlé na nás? Jaký jest obchod tvůj, a odkud jdeš? Z které jsi země a z kterého národu?"},
	{9, "9 I řekl jim: Hebrejský jsem, a Hospodina Boha nebes, kterýž učinil moře i zemi, já ctím."},
	{10, "10 Pročež báli se ti muži bázní velikou,a dověděvše se muži ti, že od tváři Hospodinovy utíká, (nebo jim byl oznámil), řekli jemu: Což jsi to učinil?"},
	{11, "11 Řekli ještě k němu: Což máme učiniti s tebou, aby se moře spokojilo? (Nebo moře vždy více a více bouřilo se.)"},
	{12, "12 Jimžto řekl: Vezměte mne, a uvrzte mne do moře, a utichne moře před vámi; nebo já vím, že příčinou mou bouře tato veliká jest proti vám."},
	{13, "13 Ale muži ti statečně táhli, chtíce k břehu přistati, však nemohli; nebo moře vždy více a více se bouřilo proti nim."},
	{14, "14 I zvolali k Hospodinu, řkouce: Prosímeť, ó Hospodine, abychom nezahynuli pro smrt člověka tohoto, aniž na nás vyhledávej krve nevinné; nebo ty, ó Hospodine, jakž chceš, tak činíš."},
	{15, "15 Tedy vzavše Jonáše, uvrhli ho do moře. I přestalo moře bouřiti se."},
	{16, "16 Pročež báli se muži ti bázní velikou Hospodina, a obětovali obět Hospodinu, a sliby činili."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct cs2 poems[] = {
	{1, "1 Nastrojil pak byl Hospodin rybu velikou, aby požřela Jonáše. I byl Jonáš v střevách té ryby tři dni a tři noci."},
	{2, "2 I modlil se Jonáš Hospodinu Bohu svému v střevách té ryby,"},
	{3, "3 A řekl: Z ssoužení svého volal jsem k Hospodinu, a ozval se mi; z břicha hrobu křičel jsem, a vyslyšel jsi hlas můj."},
	{4, "4 Nebo jsi mne uvrhl do hlubiny, do prostřed moře, a řeka obklíčila mne; všecka vlnobití tvá i rozvodnění tvá na mne se svalila."},
	{5, "5 Bylť jsem již řekl: Vyhnán jsem od očí tvých, ale ještěť pohledím na tvůj svatý chrám."},
	{6, "6 Obklíčily mne vody až k duši, propast obklíčila mne, lekno otočilo se okolo hlavy mé."},
	{7, "7 Až k spodkům hor dostal jsem se, země závorami svými zalehla mi na věčnost, ty jsi však vysvobodil od porušení život můj, ó Hospodine Bože můj."},
	{8, "8 Když se svírala ve mně duše má, na Hospodina jsem se rozpomínal, i přišla k tobě modlitba má do chrámu svatého tvého."},
	{9, "9 Kteříž ostříhají marností pouhých, dobroty Boží se zbavují."},
	{10, "10 Já pak s hlasem díkčinění obětovati budu tobě; což jsem slíbil, splním. Hojné vysvobození jest u Hospodina. [ (Jonah 2:11) Rozkázal pak byl Hospodin rybě té, i vyvrátila Jonáše na břeh. ]"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct cs3 poems[] = {
	{1, "1 I stalo se slovo Hospodinovo k Jonášovi podruhé, řkoucí:"},
	{2, "2 Vstaň, jdi do Ninive města toho velikého, a kaž proti němu to, což já poroučím tobě."},
	{3, "3 Tedy vstav Jonáš, šel do Ninive podlé slova Hospodinova. (Bylo pak Ninive město velmi veliké, cesty tří dnů.)"},
	{4, "4 A jakž počal byl Jonáš jíti po městě cestou dne jednoho a volati, pravě: Po čtyřidcíti dnech Ninive vyvráceno bude,"},
	{5, "5 Tedy uvěřili Ninivitští Bohu, a vyhlásivše půst, oblékli se v žíně, od největšího z nich až do nejmenšího z nich."},
	{6, "6 Nebo jakž došla ta řeč krále Ninivitského, vstav s trůnu svého, složil s sebe oděv svůj, a přioděv se žíní, seděl v popele."},
	{7, "7 A dal provolati a oznámiti v Ninive z usouzení královského i knížat svých, takto řka: Lidé i hovada, volové i ovce, neokoušejte ničeho, nepaste se, ani vody nepíte."},
	{8, "8 Ale přiodějte se žíněmi lidé i hovada, a volejte k Bohu horlivě, a odvrať se jeden každý od cesty své zlé, i loupeže, kteráž jest v rukou jeho."},
	{9, "9 Kdo ví, neobrátí-li se a nebude-li želeti toho Bůh; neodvrátí-li se, pravím, od prchlivosti hněvu svého, abychom nezahynuli."},
	{10, "10 I viděl Bůh skutky jejich, že se odvrátili od cesty své zlé, a lítost měl Bůh nad tím zlým, kteréž řekl učiniti jim. A neučinil."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct cs4 poems[] = {
	{1, "1 I mrzelo to Jonáše velmi, a rozpálen byl hněv jeho."},
	{2, "2 Pročež modlil se Hospodinu a řekl: Prosím, Hospodine, zdaliž jsem toho neřekl, když jsem ještě byl v zemi své? Protož jsem pospíšil uteci do Tarsu; nebo jsem věděl, že jsi ty Bůh milostivý a lítostivý, dlouhočekající a hojný v milosrdenství, a kterýž lituješ zlého."},
	{3, "3 Nyní tedy, ó Hospodine, vezmi, prosím, duši mou ode mne; nebo lépe jest mi umříti nežli živu býti."},
	{4, "4 I řekl Hospodin: Jest-liž to dobře, že tak horlíš?"},
	{5, "5 Nebo vyšel byl Jonáš z města, a seděl na východ proti městu, a udělav sobě tu boudu, seděl pod ní v stínu, ažby viděl, co se bude díti s tím městem."},
	{6, "6 Přistrojil pak byl Hospodin Bůh břečtan, kterýž vyrostl nad Jonáše, aby zastěňoval hlavu jeho, a chránil ho před horkem. I radoval se Jonáš z toho břečtanu radostí velikou."},
	{7, "7 V tom nazejtří v svitání nastrojil Bůh červa, kterýž ranil ten břečtan, tak že uschl."},
	{8, "8 I stalo se, že když vzešlo slunce, nastrojil Bůh vítr východní žhoucí, a bilo slunce na hlavu Jonášovu, tak že umdléval, a žádal sobě, aby umřel, řka: Lépeť mi jest umříti nežli živu býti."},
	{9, "9 I řekl Bůh Jonášovi: Jest-liž to dobře, že se tak hněváš pro ten břečtan? Kterýžto řekl: An dobře jest, že se hněvám až na smrt."},
	{10, "10 Jemuž řekl Hospodin: Ty lituješ toho břečtanu, o němž jsi nepracoval, aniž jsi ho k zrostu přivedl, kterýž za jednu noc zrostl, a jedné noci zahynul,"},
	{11, "11 A já abych nelitoval Ninive města tak velikého, v němž jest více nežli sto a dvadceti tisíc lidí, kteříž neznají rozdílu mezi pravicí svou a levicí svou, a dobytka mnoho?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};