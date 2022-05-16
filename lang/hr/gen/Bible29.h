#include <map>
#include <string>
class Bible29
{
	struct hr1	{ int val; const char *msg; };
	struct hr2	{ int val; const char *msg; };
	struct hr3	{ int val; const char *msg; };
	struct hr4	{ int val; const char *msg; };
public:
static void view1() {
struct hr1 poems[] = {
	{1, "1 Riječ Jahvina koja dođe Joelu, sinu Petuelovu."},
	{2, "2 Čujte ovo, starci, počujte, svi žitelji zemlje! Je li ovakvo što ikad bilo u vaše dane il' u dane vaših otaca?"},
	{3, "3 Recite ovo svojim sinovima, vaši sinovi svojim sinovima, a njihovi sinovi potonjem koljenu."},
	{4, "4 Što ostavi šaška, proždrije skakavac, što ostavi skakavac, proždrije gusjenica, što ostavi gusjenica, proždrije ljupilac."},
	{5, "5 Probudite se, pijanice, i plačite! Sve vinopije, tužite za novim vinom: iz usta vam je oteto."},
	{6, "6 Jer prekri moju zemlju narod moćan i bezbrojan; zubi su mu kao zubi lavlji, očnjaci mu kao u lavice."},
	{7, "7 Opustoši mi lozu vinovu i polomi smokve moje; oguli ih i razbaca, grane su im pobijeljele."},
	{8, "8 Plačite k'o djevica odjevena u kostrijet za zaručnikom svojim."},
	{9, "9 Nestade prinosnice i ljevanice iz Doma Jahvina. Tuže svećenici, sluge Jahvine."},
	{10, "10 Opustošeno polje, zemlja poharana. Poharano žito, vino propade, presahnu ulje."},
	{11, "11 Tugujte, težaci, kukajte, vinogradari, za pšenicom i za ječmom, jer propade žetva poljska."},
	{12, "12 Loza usahnu, uvenu smokva, mogranj, palma i jabuka: svako se drvo poljsko sasuši. Da, nestade radosti između sinova ljudskih."},
	{13, "13 Svećenici, opašite kostrijet i tužite! Službenici žrtvenika, naričite! Dođite, prenoćite u kostrijeti, službenici Boga mojeg! Jer iz Doma Boga našeg nesta prinosnice i ljevanice!"},
	{14, "14 Naredite sveti post, proglasite zbor svečani; starješine, saberite sve stanovnike zemlje u kuću Jahve, Boga svojeg. Zavapijte Jahvi:"},
	{15, "15 Jao dana! Jer Jahvin dan je blizu i dolazi k'o pohara od Svevišnjeg."},
	{16, "16 Ne iščeznu li hrana pred našim očima? Nije li nestalo radosti i sreće iz Doma Boga našega?"},
	{17, "17 Istrunu zrnje pod grudama; puste su žitnice, porušene spreme jer žita nesta."},
	{18, "18 Kako li stoka uzdiše! Krda goveda podivljala lutaju jer im nema paše. Čak i stada ovaca kaznu podnose."},
	{19, "19 Tebi, Jahve, vapijem: oganj popali pašnjake pustinjske, plamen sažga sva stabla poljska."},
	{20, "20 Čak i zvijeri čeznu za tobom, jer presušiše potoci, oganj popali pašnjake pustinjske."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct hr2 poems[] = {
	{1, "1 Trubite u trubu na Sionu! Dižite uzbunu na svetoj mi gori! Neka svi stanovnici zemlje dršću, jer dolazi Jahvin dan. Da, on je blizu."},
	{2, "2 Dan pun mraka i tmine, dan oblačan i crn. K'o zora po gorama se prostire narod jak i mnogobrojan, kakva ne bje nikad prije, niti će ga igda biti do vremena najdaljih."},
	{3, "3 Pred njim oganj proždire, za njim plamen guta. Zemlja je k'o vrt rajski pred njim, a za njim pustinja tužna. Ništa mu ne umiče."},
	{4, "4 Nalik su na konje, jure poput konjanika."},
	{5, "5 Buče kao bojna kola, po gorskim vrhuncima skaču, pucketaju k'o plamen ognjeni kad strnjiku proždire, kao vojska jaka u bojnome redu."},
	{6, "6 Pred njima narodi dršću i svako lice problijedi."},
	{7, "7 Skaču k'o junaci, k'o ratnici se na zidove penju. Svaki ide pravo naprijed, ne odstupa od svog puta."},
	{8, "8 Ne tiskaju jedan drugog, već svak' ide svojom stazom. Padaju od strijela ne kidajuć' redova."},
	{9, "9 Na grad navaljuju, na zidine skaču, penju se na kuće i kroz okna ulaze poput lupeža."},
	{10, "10 Pred njima se zemlja trese, nebo podrhtava, sunce, mjesec mrčaju, zvijezdama se trne sjaj."},
	{11, "11 I Jahve glas svoj šalje pred vojsku svoju. I odista, tabor mu je silno velik, zapovijedi njegove moćan izvršitelj. Da, velik je Jahvin dan i vrlo strašan. Tko će ga podnijeti?"},
	{12, "12 Al' i sada - riječ je Jahvina - vratite se k meni svim srcem svojim posteć', plačuć' i kukajuć'."},
	{13, "13 Razderite srca, a ne halje svoje! Vratite se Jahvi, Bogu svome, jer on je nježnost sama i milosrđe, spor na ljutnju, a bogat dobrotom, on se nad zlom ražali."},
	{14, "14 Tko zna neće li se opet ražaliti, neće li blagoslov ostaviti za sobom! Prinose i ljevanice Jahvi, Bogu našemu!"},
	{15, "15 Trubite u trubu na Sionu! Sveti post naredite, oglasite zbor svečani,"},
	{16, "16 narod saberite, posvetite zbor. Saberite starce, sakupite djecu, čak i nejač na prsima. Neka ženik iziđe iz svadbene sobe a nevjesta iz odaje."},
	{17, "17 Između trijema i žrtvenika neka tuže svećenici, sluge Jahvine. Neka mole: Smiluj se, Jahve, svojem narodu! Ne prepusti baštine svoje sramoti, poruzi naroda. Zašto da se kaže među narodima: Gdje im je Bog?"},
	{18, "18 Tad Jahve, ljubomoran na zemlju svoju, smilova se svom narodu."},
	{19, "19 Odgovori Jahve svojem narodu: Šaljem vam, evo, žita, vina i ulja da se njime nasitite. Nikad više neću pustiti da budete na sramotu narodima."},
	{20, "20 Protjerat ću Sjevernjaka od vas daleko, odagnat ga u zemlju suhu i pustu, prethodnicu u Istočno more, zalaznicu u Zapadno more. Dići će se njegov smrad, dizat će se trulež njegova. (Jer učini stvari velike.)"},
	{21, "21 O zemljo, ne boj se! Budi sretna, raduj se, jer Jahve učini djela velika."},
	{22, "22 Zvijeri poljske, ne bojte se; pašnjaci u pustinji opet se zelene, voćke daju rod, smokva i loza nose izobila."},
	{23, "23 Sinovi sionski, radujte se, u Jahvi se veselite, svojem Bogu; jer vam daje kišu jesensku u pravoj mjeri, izli na vas kišu, jesensku i proljetnu kišu kao nekoć."},
	{24, "24 Gumna će biti puna žita, kace će se prelijevati od vina i ulja."},
	{25, "25 Nadoknadit ću vam godine koje izjedoše skakavac, gusjenica, ljupilac i šaška, silna vojska moja što je poslah na vas."},
	{26, "26 Jest ćete izobila, jest ćete do sita, slavit ćete ime Jahve, svojeg Boga, koji je s vama čudesno postupao. (Moj se narod neće postidjeti nikad više.)"},
	{27, "27 Znat ćete da sam posred Izraela, da sam ja Jahve, vaš Bog, i nitko više. Moj se narod neće postidjeti nikad više."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct hr3 poems[] = {
	{1, "1 Poslije ovoga izlit ću Duha svoga na svako tijelo, i proricat će vaši sinovi i kćeri, vaši će starci sanjati sne, a vaši mladići gledati viđenja."},
	{2, "2 Čak ću i na sluge i sluškinje izliti Duha svojeg u dane one."},
	{3, "3 Pokazat ću znamenja na nebu i zemlji, krv i oganj i stupove dima."},
	{4, "4 Sunce će se prometnut' u tminu a mjesec u krv, prije nego svane Jahvin dan, velik i strašan."},
	{5, "5 Svi što prizivaju ime Jahvino spašeni će biti, jer će na brdu Sionu i u Jeruzalemu biti spasenje, kao što Jahve reče, a među preživjelima oni koje Jahve pozove."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct hr4 poems[] = {
	{1, "1 Jer, gle, u one dane i u ono vrijeme, kad okrenem udes Judeji i Jeruzalemu,"},
	{2, "2 sakupit ću sve narode i povesti ih u dolinu Jošafat. Ondje ću im suditi zbog Izraela, naroda mog i moje baštine, koju rastjeraše među narode i razdijeliše moju zemlju među se."},
	{3, "3 Baciše ždrijeb za moj narod; davali su dječake za bludnice, djevojke prodavali za vino i pili."},
	{4, "4 I vi, Tire i Sidone, što hoćete od mene? I vi, filistejski kraljevi? Želite li mi se osvetiti? Ako se budete svetili meni, osveta će brzo na vaše glave."},
	{5, "5 Na vas što mi oteste srebro i zlato, što odnesoste bogate mi riznice u svoje hramove,"},
	{6, "6 na vas koji prodavaste Grcima sinove Jude i Jeruzalema da biste ih otjerali od domovine njihove."},
	{7, "7 Gle, ja ih kanim dići s mjesta gdje god ih prodaste, i učinit ću da vam zločin vaš padne na glave."},
	{8, "8 Prodat ću vaše sinove i kćeri sinovima Judinim, a oni će ih prodat' Sabejcima, daleku narodu. Jer Jahve reče!"},
	{9, "9 Razglasite ovo među narodima! Posvetite se za rat! Dižite junake! Naprijed, navalite, svi ratnici!"},
	{10, "10 Prekujte raonike u mačeve, kosire u koplja, nek' slabić kaže: Junak sam!"},
	{11, "11 Pohitajte i dođite, svi okolni narodi, i ondje se saberite! (Jahve, onamo pošalji svoje junake!)"},
	{12, "12 Budite se, narodi, stupajte u Dolinu Jošafat, jer ću ondje sjesti da sudim svim okolnim narodima."},
	{13, "13 Hvatajte se srpa: ljetina je zrela. Ustanite, siđite: tijesak je pun, prelijevaju se kace, jer je velika zloća njihova."},
	{14, "14 Mnoštvo, mnoštvo u Dolini Odluke! Da, blizu je dan Jahvin u Dolini Odluke!"},
	{15, "15 Sunce i mjesec pomrčaše, zvijezde potamnješe."},
	{16, "16 Jahve grmi sa Siona, glas diže iz Jeruzalema; nebo se i zemlja tresu. Ali je Jahve utočište svome narodu i zaštita sinovima Izraela."},
	{17, "17 Znat ćete tada da sam ja Jahve vaš Bog što stoluje na Sionu, svetoj gori svojoj. Jeruzalem će biti svetište, tuđinac više neće kroza nj proći."},
	{18, "18 Kad dođe taj dan, kapat će gore moštom, iz bregova će brizgati mlijeko, kroza sva korita riječna u Judeji voda će proteći. Vrelo će šiknuti iz kuće Jahvine da natopi Dolinu sitimsku."},
	{19, "19 Egipat će opustjeti, Edom će postati beživotna pustinja zbog nasilja učinjena sinovima Judinim, jer proliše krv nevinu u njihovoj zemlji."},
	{20, "20 Judeja će dovijek biti naseljena i Jeruzalem u sva koljena."},
	{21, "21 Osvetit ću krv njihovu za koju se nisam još osvetio. Jahve će dići Dom svoj na Sionu."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};