#include <map>
#include <string>
class Bible8
{
	struct it1	{ int val; const char *msg; };
	struct it2	{ int val; const char *msg; };
	struct it3	{ int val; const char *msg; };
	struct it4	{ int val; const char *msg; };
public:
static void view1() {
struct it1 poems[] = {
	{1, "1 Al tempo dei giudici ci fu nel paese una carestia, e un uomo di Bethlehem di Giuda andò a stare nelle campagne di Moab con la moglie e i suoi due figliuoli."},
	{2, "2 Quest’uomo si chiamava Elimelec; sua moglie, Naomi; e suoi due figliuoli, Mahlon e Kilion; erano Efratei, di Bethlehem di Giuda. Giunti nelle campagne di Moab, vi fissarono la loro dimora."},
	{3, "3 Elimelec, marito di Naomi, morì, ed ella rimase coi suoi due figliuoli."},
	{4, "4 Questi sposarono delle Moabite, delle quali una si chiamava Orpa, e l’altra Ruth; e dimoraron quivi per circa dieci anni."},
	{5, "5 Poi Mahlon e Kilion morirono anch’essi tutti e due, e la donna restò priva de’ suoi due figliuoli e del marito."},
	{6, "6 Allora si levò con le sue nuore per tornarsene dalle campagne di Moab perché nelle campagne di Moab avea sentito dire che l’Eterno avea visitato il suo popolo, dandogli del pane."},
	{7, "7 Ella partì dunque con le sue due nuore dal luogo dov’era stata, e si mise in cammino per tornare nel paese di Giuda."},
	{8, "8 E Naomi disse alle sue due nuore: \"Andate, tornatevene ciascuna a casa di sua madre; l’Eterno sia buono con voi, come voi siete state con quelli che son morti, e con me!"},
	{9, "9 L’Eterno dia a ciascuna di voi di trovare riposo in casa d’un marito!\" Essa le baciò, e quelle si misero a piangere ad alta voce, e le dissero:"},
	{10, "10 \"No noi torneremo con te al tuo popolo\"."},
	{11, "11 E Naomi rispose: \"Ritornatevene, figliuole mie! Perché verreste con me? Ho io ancora de’ figliuoli in seno che possano diventare vostri mariti?"},
	{12, "12 Ritornatevene, figliuole mie, andate! Io son troppo vecchia per rimaritarmi; e anche se dicessi: Ne ho speranza, e andassi a marito stasera, e partorissi de’ figliuoli,"},
	{13, "13 aspettereste voi finché fossero grandi? Vi asterreste voi per questo dal maritarvi? No, figliuole mie; l’afflizione mia e più amara della vostra poiché la mano dell’Eterno si è stesa contro di me\"."},
	{14, "14 Allora esse alzarono la voce e piansero di nuovo; e Orpa baciò la suocera, ma Ruth non si staccò da lei."},
	{15, "15 Naomi disse a Ruth: \"Ecco, la tua cognata se n’è tornata al suo popolo e ai suoi dèi; ritornatene anche tu come la tua cognata!\""},
	{16, "16 Ma Ruth rispose: \"Non insistere perch’io ti lasci, e me ne torni lungi da te; perché dove andrai tu, andrò anch’io; e dove starai tu, io pure starò; il tuo popolo sarà il mio popolo, e il tuo Dio sarà il mio Dio;"},
	{17, "17 dove morrai tu morrò anch’io, e quivi sarò sepolta. L’Eterno mi tratti col massimo rigore se altra cosa che la morte mi separerà da te!\""},
	{18, "18 Quando Naomi la vide fermamente decisa ad andar con lei, non gliene parlò più."},
	{19, "19 Così fecero il viaggio assieme fino al loro arrivo a Bethlehem. E quando giunsero a Bethlehem, tutta la città fu sossopra a motivo di loro. Le donne dicevano: \"E’ proprio Naomi?\""},
	{20, "20 Ed ella rispondeva: \"Non mi chiamate Naomi; chiamatemi Mara, poiché l’Onnipotente m’ha ricolma d’amarezza."},
	{21, "21 Io partii nell’abbondanza, e l’Eterno mi riconduce spoglia di tutto. Perché chiamarmi Naomi, quando l’Eterno ha attestato contro di me, e l’Onnipotente m’ha resa infelice?\""},
	{22, "22 Così Naomi se ne tornò con Ruth, la Moabita, sua nuora, venuta dalle campagne di Moab. Esse giunsero a Bethlehem quando si cominciava a mietere l’orzo."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct it2 poems[] = {
	{1, "1 Or Naomi aveva un parente di suo marito, uomo potente e ricco, della famiglia di Elimelec, che si chiamava Boaz."},
	{2, "2 Ruth, la Moabita, disse a Naomi: \"Lasciami andare nei campi a spigolare dietro a colui agli occhi del quale avrò trovato grazia\". Ed ella le rispose: \"Va’ figliuola mia\"."},
	{3, "3 Ruth andò dunque e si mise a spigolare in un campo dietro ai mietitori; e per caso le avvenne di trovarsi nella parte di terra appartenente a Boaz, ch’era della famiglia di Elimelec."},
	{4, "4 Ed ecco che Boaz giunse da Bethlehem, e disse ai mietitori: \"L’Eterno sia con voi!\" E quelli gli risposero: \"L’Eterno ti benedica!\""},
	{5, "5 Poi Boaz disse al suo servo incaricato di sorvegliare i mietitori: \"Di chi è questa fanciulla?\""},
	{6, "6 Il servo incaricato di sorvegliare i mietitori rispose: \"E’ una fanciulla Moabita; quella ch’è tornata con Naomi dalle campagne di Moab."},
	{7, "7 Ella ci ha detto: Vi prego, lasciatemi spigolare e raccogliere le spighe tra le mannelle, dietro ai mietitori. E da stamattina ch’è venuta, è rimasta in piè fino ad ora; e s’è ritirata un momento solo per riposarsi\"."},
	{8, "8 Allora Boaz disse a Ruth: \"Ascolta, figliuola mia; non andare a spigolare in altro campo; e non t’allontanare di qui, ma rimani con le mie serve;"},
	{9, "9 guarda qual è il campo che si miete, e va’ dietro a loro. Ho ordinato ai miei servi che non ti tocchino; e quando avrai sete andrai ai vasi a bere l’acqua che i servi avranno attinta\"."},
	{10, "10 Allora Ruth si gettò giù, prostrandosi con la faccia a terra, e gli disse: \"Come mai ho io trovato grazia agli occhi tuoi che tu faccia caso di me che sono una straniera?\""},
	{11, "11 Boaz le rispose: \"M’è stato riferito tutto quello che hai fatto per la tua suocera dopo la morte di tuo marito, e come hai abbandonato tuo padre, tua madre e il tuo paese natìo, per venire a un popolo che prima non conoscevi."},
	{12, "12 L’Eterno ti rimuneri di quel che hai fatto, e la tua ricompensa sia piena da parte dell’Eterno, dell’Iddio d’Israele, sotto le ali del quale sei venuta a rifugiarti!\""},
	{13, "13 Ella gli disse: \"Possa io trovar grazia agli occhi tuoi, o mio signore! Poiché tu m’hai consolata, e hai parlato al cuore della tua serva, quantunque io non sia neppure come una delle tue serve\"."},
	{14, "14 Poi, al momento del pasto, Boaz le disse: \"Vieni qua, mangia del pane, e intingi il tuo boccone nell’aceto\". Ed ella si pose a sedere accanto ai mietitori. Boaz le porse del grano arrostito, ed ella ne mangiò, si satollò, e ne mise a parte gli avanzi"},
	{15, "15 Poi si levò per tornare a spigolare, e Boaz diede quest’ordine ai suoi servi: \"Lasciatela spigolare anche fra le mannelle, e non le fate affronto!"},
	{16, "16 E cavate anche, per lei, delle spighe dai manipoli; e lasciatele lì perch’essa le raccatti, e non la sgridate!\""},
	{17, "17 Così ella spigolò nel campo fino alla sera; batté quello che avea raccolto, e n’ebbe circa un efa d’orzo."},
	{18, "18 Se lo caricò addosso, entrò in città, e la sua suocera vide ciò ch’essa avea spigolato; e Ruth trasse fuori quello che le era rimasto del cibo dopo essersi saziata, e glielo diede."},
	{19, "19 La suocera le chiese: \"Dove hai spigolato oggi? Dove hai lavorato? Benedetto colui che t’ha fatto così buona accoglienza!\" E Ruth disse alla suocera presso di chi avea lavorato, e aggiunse: \"L’uomo presso il quale ho lavorato oggi, si chiama Boaz\"."},
	{20, "20 E Naomi disse alla sua nuora: \"Sia egli benedetto dall’Eterno, poiché non ha rinunziato a mostrare ai vivi la bontà ch’ebbe verso i morti!\" E aggiunse: \"Quest’uomo e nostro parente stretto; è di quelli che hanno su noi il diritto di riscatto\"."},
	{21, "21 E Ruth, la Moabita: \"M’ha anche detto: Rimani coi miei servi, finché abbian finita tutta la mia mèsse\"."},
	{22, "22 E Naomi disse a Ruth sua nuora: \"E’ bene, figliuola mia, che tu vada con le sue serve e non ti si trovi in un altro campo\"."},
	{23, "23 Ella rimase dunque con le serve di Boaz, a spigolare, sino alla fine della mèsse degli orzi e del frumento. E stava di casa con la sua suocera."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct it3 poems[] = {
	{1, "1 Naomi, sua suocera, le disse: \"Figliuola mia, io vorrei assicurare il tuo riposo perché tu fossi felice."},
	{2, "2 Ora Boaz, con le serve del quale tu sei stata, non è egli nostro parente? Ecco, stasera deve ventolar l’orzo nell’aia."},
	{3, "3 Làvati dunque, ungiti, vèstiti, e scendi all’aia, ma non ti far riconoscere da lui, prima ch’egli abbia finito di mangiare e di bere."},
	{4, "4 E quando se n’andrà a dormire, osserva il luogo dov’egli dorme; poi va’, alzagli la coperta dalla parte de’ piedi, e mettiti lì a giacere; ed egli ti dirà quello che tu debba fare\"."},
	{5, "5 Ruth le rispose: \"Farò tutto quello che dici\"."},
	{6, "6 E scese all’aia, e fece tutto quello che la suocera le aveva ordinato."},
	{7, "7 Boaz mangiò e bevve e, col cuor allegro, se n’andò a dormire presso al monte delle mannelle. Allora ella venne pian piano, gli alzò la coperta dalla parte de’ piedi, e si mise a giacere."},
	{8, "8 Verso mezzanotte, quell’uomo si svegliò di soprassalto, si voltò, ed ecco che una donna gli giaceva ai piedi."},
	{9, "9 \"Chi sei tu?\" le disse. Ed ella rispose: \"Sono Ruth tua serva; stendi il lembo del tuo mantello sulla tua serva, perché tu hai il diritto di riscatto\"."},
	{10, "10 Ed egli a lei: \"Sii benedetta dall’Eterno, figliuola mia! La tua bontà d’adesso supera quella di prima, giacché non sei andata dietro a de’ giovani, poveri o ricchi."},
	{11, "11 Ora dunque, non temere, figliuola mia; io farò per te tutto quello che dici, poiché tutti qui sanno che sei una donna virtuosa."},
	{12, "12 Or e vero ch’io ho il diritto di riscatto; ma ve n’è un altro che t’è parente più prossimo di me."},
	{13, "13 Passa qui la notte; e domattina, se quello vorrà far valere il suo diritto su di te, va bene, lo faccia pure; ma se non gli piacerà di far valere il suo diritto, io farò valere il mio, com’è vero che l’Eterno vive! Sta’ coricata fino al mattino\"."},
	{14, "14 Ed ella rimase coricata ai suoi piedi fino alla mattina; poi si alzò, prima che due si potessero riconoscere l’un l’altro; giacché Boaz avea detto: \"Nessuno sappia che questa donna e venuta nell’aia!\""},
	{15, "15 Poi aggiunse: \"Porta qua il mantello che hai addosso, e tienlo con ambe le mani\". Ella lo tenne su, ed egli vi misuro dentro sei misure d’orzo, e glielo mise in ispalla; poi se ne venne in città."},
	{16, "16 Ruth tornò dalla sua suocera, che le disse: \"Sei tu, figliuola mia?\" Ed ella le raccontò tutto quanto quell’uomo avea fatto per lei,"},
	{17, "17 e aggiunse: \"M’ha anche dato queste sei misure d’orzo; perché m’ha detto: \"Non devi tornare dalla tua suocera con le mani vuote\"."},
	{18, "18 E Naomi disse: \"Rimani qui, figliuola mia, finché tu vegga come la cosa riuscirà; poiché quest’uomo non si darà posa, finché non abbia oggi stesso terminato quest’affare\"."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct it4 poems[] = {
	{1, "1 Or Boaz salì alla porta della città e quivi si pose a sedere. Ed ecco passare colui che aveva il diritto di riscatto e del quale Boaz avea parlato. E Boaz gli disse: \"O tu, tal de’ tali, vieni un po’ qua, e mettiti qui a sedere!\" Quello s’avvicinò e si mise a sedere."},
	{2, "2 Boaz allora prese dieci uomini fra gli anziani della città, e disse loro: \"Sedete qui\". E quelli si misero a sedere."},
	{3, "3 Poi Boaz disse a colui che avea il diritto di riscatto: \"Naomi, ch’è tornata dalle campagne di Moab, mette in vendita la parte di terra che apparteneva ad Elimelec nostro fratello."},
	{4, "4 Ho creduto bene d’informartene, e di dirti: Fanne acquisto in presenza degli abitanti del luogo e degli anziani del mio popolo. Se vuoi far valere il tuo diritto di riscatto, fallo; ma se non lo vuoi far valere, dimmelo, ond’io lo sappia; perché non c’è nessuno, fuori di te, che abbia il diritto di riscatto; e, dopo di te, vengo io\". Quegli rispose: \"Farò valere il mio diritto\"."},
	{5, "5 Allora Boaz disse: \"Il giorno che acquisterai il campo dalla mano di Naomi, tu lo acquisterai anche da Ruth la Moabita, moglie del defunto, per far rivivere il nome del defunto nella sua eredità\"."},
	{6, "6 Colui che aveva il diritto di riscatto rispose: \"Io non posso far valere il mio diritto, perché rovinerei la mia propria eredità; subentra tu nel mio diritto di riscatto, giacché io non posso valermene\"."},
	{7, "7 Or v’era in Israele quest’antica usanza, per render valido un contratto di riscatto o di cessione di proprietà; uno si cavava la scarpa e la dava all’altro; era il modo di attestazione in Israele."},
	{8, "8 Così, colui che aveva il diritto di riscatto disse a Boaz: \"Fa’ l’acquisto per conto tuo\", si cavò la scarpa."},
	{9, "9 Allora Boaz disse agli anziani e a tutto il popolo: \"Voi siete oggi testimoni che io ho acquistato dalle mani di Naomi tutto quello che apparteneva a Elimelec, a Kilion ed a Mahlon,"},
	{10, "10 e che ho pure acquistato Ruth, la Moabita, moglie di Mahlon, perché sia mia moglie, affin di far rivivere il nome del defunto nella sua eredità, onde il nome del defunto non si estingua tra i suoi fratelli e alla porta della sua città. Voi ne siete oggi testimoni\"."},
	{11, "11 E tutto il popolo che si trovava alla porta della città e gli anziani risposero: \"Ne siamo testimoni. L’Eterno faccia che la donna ch’entra in casa tua sia come Rachele e come Lea, le due donne che fondarono la casa d’Israele. Spiega la tua forza in Efrata, e fatti un nome in Bethlehem!"},
	{12, "12 Possa la progenie che l’Eterno ti darà da questa giovine, render la tua casa simile alla casa di Perets, che Tamar partorì a Giuda!\""},
	{13, "13 Così Boaz prese Ruth, che divenne sua moglie. Egli entrò da lei, e l’Eterno le diè la grazia di concepire, ed ella partorì un figliuolo."},
	{14, "14 E le donne dicevano a Naomi: \"Benedetto l’Eterno, il quale non ha permesso che oggi ti mancasse un continuatore della tua famiglia! Il nome di lui sia celebrato in Israele!"},
	{15, "15 Egli consolerà l’anima tua e sarà il sostegno della tua vecchiaia; l’ha partorito la tua nuora che t’ama, e che vale per te più di sette figliuoli\"."},
	{16, "16 E Naomi prese il bambino, se lo strinse al seno, e gli fece da nutrice."},
	{17, "17 Le vicine gli dettero il nome, e dicevano: \"E’ nato un figliuolo a Naomi!\" Lo chiamarono Obed. Egli fu padre d’Isai, padre di Davide."},
	{18, "18 Ecco la posterità di Perets: Perets generò Hetsron;"},
	{19, "19 Hetsron generò Ram; Ram generò Amminadab;"},
	{20, "20 Amminadab generò Nahshon; Nahshon generò Salmon;"},
	{21, "21 Salmon generò Boaz; Boaz generò Obed;"},
	{22, "22 Obed generò Isai, e Isai generò Davide."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};