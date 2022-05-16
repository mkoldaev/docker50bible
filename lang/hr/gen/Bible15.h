#include <map>
#include <string>
class Bible15
{
	struct hr1	{ int val; const char *msg; };
	struct hr2	{ int val; const char *msg; };
	struct hr3	{ int val; const char *msg; };
	struct hr4	{ int val; const char *msg; };
	struct hr5	{ int val; const char *msg; };
	struct hr6	{ int val; const char *msg; };
	struct hr7	{ int val; const char *msg; };
	struct hr8	{ int val; const char *msg; };
	struct hr9	{ int val; const char *msg; };
	struct hr10	{ int val; const char *msg; };
public:
static void view1() {
struct hr1 poems[] = {
	{1, "1 Prve godine perzijskoga kralja Kira, da bi se ispunila riječ  Jahvina objavljena na Jeremijina usta, nadahnu Jahve perzijskoga  kralja Kira te on objavi po svemu svojem kraljevstvu, usmeno  i pismeno: "},
	{2, "2 Ovako veli perzijski kralj Kir: 'Sva zemaljska  kraljevstva dade mi Jahve, Bog nebeski. On mi naloži da mu sagradim  Dom u Jeruzalemu, u Judeji. "},
	{3, "3 Tko je god među vama od svega  njegova naroda, Bog njegov bio s njim! Neka ide u Jeruzalem u  Judeji i neka gradi Dom Jahvi, Bogu Izraelovu, Bogu koji stoluje  u Jeruzalemu. "},
	{4, "4 I gdje god se još zadržao ostatak toga naroda, neka ga stanovništvo mjesta u kojima boravi podupre srebrom  i zlatom, imanjem i stokom i dragovoljnim prinosima za Dom Božji  u Jeruzalemu.'"},
	{5, "5 Tada ustadoše glavari obitelji Jude i Benjamina, svećenici  i leviti, i svi kojima je Bog potaknuo duh i krenuše graditi  Dom Jahvin u Jeruzalemu. "},
	{6, "6 I svi su im susjedi pomagali: srebrom, zlatom, darovima u naravi, stokom, dragocjenostima mnogim, osim  svega što su dragovoljno prilagali."},
	{7, "7 Kralj Kir iznese posuđe Jahvina Doma koje Nabukodonozor  bijaše odnio iz Jeruzalema i stavio u hram svoga boga. "},
	{8, "8 Kir, kralj perzijski, uruči ga Mitredatu, rizničaru, koji ga izbroji  judejskom knezu Šešbasaru. "},
	{9, "9 Evo njegova popisa. Zlatnih zdjela:  trideset; srebrnih zdjela: tisuću i dvadeset devet; "},
	{10, "10 zlatnih  čaša: trideset; srebrnih čaša: četiri stotine i deset; ostalog  posuđa: tisuću. "},
	{11, "11 Svega zlatnog i srebrnog posuđa: pet tisuća  i četiri stotine. Sve je to odnio Šešbasar kada se sužnji vraćahu  iz Babilona u Jeruzalem."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct hr2 poems[] = {
	{1, "1 Ovo su ljudi one pokrajine koji su se vratili iz sužanjstva  u Babilonu, kamo ih bijaše odveo babilonski kralj Nabukodonozor.  Vratili su se u Jeruzalem i Judeju, svaki u svoj grad. "},
	{2, "2 Stigli  su oni i s njima Zerubabel, Ješua, Nehemija, Seraja, Reelaja, Nahamani, Mordokaj, Bilšan, Mispar, Bigvaj, Rehum i Baana. Evo popisa ljudi od naroda Izraelova: "},
	{3, "3 sinovi Paroševi:  dvije tisuće stotinu sedamdeset i dva; "},
	{4, "4 sinovi Šefatjini: tri  stotine sedamdeset i dva; "},
	{5, "5 Arahovi sinovi: sedam stotina sedamdeset  i pet; "},
	{6, "6 sinovi Pahat-Moabovi, to jest sinovi Ješuini i Joabovi  sinovi: dvije tisuće osam stotina i dvanaest; "},
	{7, "7 Elamovi sinovi:  tisuću dvije stotine pedeset i četiri; "},
	{8, "8 sinovi Zatuovi: devet  stotina četrdeset i pet; "},
	{9, "9 Zakajevi sinovi: sedam stotina i  šezdeset; "},
	{10, "10 Banijevi sinovi: šest stotina četrdeset i dva; "},
	{11, "11 Bebajevi sinovi: šest stotina dvadeset i tri; "},
	{12, "12 sinovi  Azgadovi: tisuću dvije stotine dvadeset i dva; "},
	{13, "13 Adonikamovi  sinovi: šest stotina šezdeset i šest; "},
	{14, "14 sinovi Bigvajevi: dvije  tisuće pedeset i šest; "},
	{15, "15 Adinovi sinovi: četiri stotine pedeset  i četiri; "},
	{16, "16 sinovi Aterovi, od Ezekije: devedeset i osam; "},
	{17, "17 Besajevi  sinovi: tri stotine dvadeset i tri; "},
	{18, "18 sinovi Jorini: stotinu  i dvanaest; "},
	{19, "19 Hašumovi sinovi: dvije stotine dvadeset i tri; "},
	{20, "20 sinovi Gibarovi: devedeset i pet; "},
	{21, "21 ljudi iz Betlehema:  stotinu dvadeset i tri; "},
	{22, "22 ljudi iz Netofe: pedeset i šest; "},
	{23, "23 ljudi iz Anatota: stotinu dvadeset i osam; "},
	{24, "24 ljudi iz Bet  Azmaveta: četrdeset i dva; "},
	{25, "25 ljudi iz Kirjat Jearima, Kefire  i Beerota: sedam stotina četrdeset i tri; "},
	{26, "26 ljudi iz Rame i  Gebe: šest stotina dvadeset i jedan; "},
	{27, "27 ljudi iz Mikmasa: stotinu  dvadeset i dva; "},
	{28, "28 ljudi iz Betela i Aja: dvije stotine dvadeset  i tri; "},
	{29, "29 nebonski sinovi: pedeset i dva; "},
	{30, "30 sinovi Magbiša:  stotinu pedeset i šest; "},
	{31, "31 sinovi jednoga drugog Elama: tisuću  dvije stotine pedeset i četiri; "},
	{32, "32 Harimovi sinovi: tri stotine  i dvadeset; "},
	{33, "33 sinovi Loda, Hadida i Onona: sedam stotina dvadeset  i pet; "},
	{34, "34 sinovi Jerihona: tri stotine četrdeset i pet; "},
	{35, "35 sinovi  Senajini: tri tisuće šest stotina trideset."},
	{36, "36 Svećenici: Jedajini sinovi, to jest iz kuće Ješuine:  devet stotina sedamdeset i tri; "},
	{37, "37 sinovi Imerovi: tisuću pedeset  i dva; "},
	{38, "38 Pašhurovi sinovi: tisuću dvije stotine četrdeset i  sedam; "},
	{39, "39 sinovi Harimovi: tisuću i sedamnaest."},
	{40, "40 Leviti: sinovi Ješuini i Kadmielovi od Hodavjinovaca:  sedamdeset i četiri."},
	{41, "41 Pjevači: sinovi Asafovi: stotinu dvadeset i osam."},
	{42, "42 Vratari: sinovi Šalumovi, sinovi Aterovi, sinovi Talmonovi, sinovi Akubovi, sinovi Hatitini i sinovi Šobajevi: u svemu stotinu  trideset i devet."},
	{43, "43 Netinci - sluge hramske: Sihini sinovi, sinovi Hasufini, sinovi Tabaotovi, "},
	{44, "44 Kerosovi sinovi, Siahini sinovi, Fadonovi  sinovi, "},
	{45, "45 sinovi Lebanovi, sinovi Hagabini, sinovi Akubovi,"},
	{46, "46 Hagabovi sinovi, Šamlajevi sinovi, Hananovi sinovi, "},
	{47, "47 sinovi  Gidelovi, sinovi Gaharovi, sinovi Reajini, "},
	{48, "48 Resinovi sinovi, Nekodini sinovi, Gazamovi sinovi, "},
	{49, "49 sinovi Uzini, sinovi Faseahini, sinovi Besajevi, "},
	{50, "50 Asnanini sinovi, Meunimovi sinovi, Nefusimovi  sinovi, "},
	{51, "51 sinovi Bakbukovi, sinovi Hakufini, sinovi Harhurovi,"},
	{52, "52 Baslutovi sinovi, Mehidini sinovi, Haršini sinovi, "},
	{53, "53 sinovi  Barkosovi, sinovi Sisrini, sinovi Tamahovi, "},
	{54, "54 Nesiahovi sinovi, Hatifini sinovi."},
	{55, "55 Sinovi slugu Salomonovih: sinovi Sotajevi, sinovi Hasoferetovi, sinovi Farudini, "},
	{56, "56 Jalini sinovi, Darkonovi sinovi, Gidelovi  sinovi, "},
	{57, "57 sinovi Šefatjini, sinovi Hatilovi, sinovi Pokeret-Hasebajimovi, sinovi Amijevi."},
	{58, "58 Svega netinaca i sinova slugu Salomonovih: tri stotine  dvadeset i dva."},
	{59, "59 Oni koji su pošli iz Tel Melaha, Tel Harše, Keruba, Adana, Imera, a nisu mogli dokazati da li je njihov dom i njihovo sjeme  izraelskog podrijetla: "},
	{60, "60 sinovi Dalajini, sinovi Tobijini,  sinovi Nekodini - njih šest stotina pedeset i dva."},
	{61, "61 A od svećeničkih sinova: Hobajini sinovi, Hakosovi sinovi, sinovi Barzilaja - onoga koji je uzeo za ženu jednu kćer Barzilaja  Gileađanina te se prozvao tim imenom. "},
	{62, "62 Oni su tražili svoje  rodoslovne popise, ali ih nisu našli. Bili su izlučeni iz svećeništva. "},
	{63, "63 I namjesnik im zabrani jesti od svetinja sve dok se ne pojavi  svećenik za Urim i Tumim."},
	{64, "64 Sav je zbor brojio četrdeset i dvije tisuće tri stotine  i šezdeset duša, "},
	{65, "65 ne računajući njihove sluge i sluškinje, kojih bijaše sedam tisuća tri stotine i sedam. Bijaše i dvije  stotine pjevača i pjevačica. "},
	{66, "66 Njihovih je konja bilo sedam  stotina trideset i šest, njihovih mazga dvije stotine četrdeset  i pet, "},
	{67, "67 deva je bilo četiri stotine trideset i pet, a njihovih  magaraca ukupno šest tisuća sedam stotina i dvadeset."},
	{68, "68 Stanovit broj obiteljskih glavara kad su stigli u Dom  Jahvin, koji je u Jeruzalemu, dragovoljno su priložili darove  za Dom Božji da bi se podigao na svome mjestu. "},
	{69, "69 Dali su prema  svojim mogućnostima u riznicu šezdeset tisuća drahmi zlata, pet  tisuća mina srebra i stotinu svećeničkih haljina. "},
	{70, "70 Svećenici, leviti i dio naroda nastaniše se u Jeruzalemu; a vratari, pjevači, netinci i svi ostali Izraelci u svojim gradovima."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct hr3 poems[] = {
	{1, "1 Kad je došao sedmi mjesec - sinovi su Izraelovi bili već u  svojim gradovima - sabrao se sav narod kao jedan čovjek u Jeruzalemu. "},
	{2, "2 Tada Ješua, sin Josadakov, sa svojom braćom svećenicima, i  Zerubabel, sin Šealtielov, sa svojom braćom, počeše graditi žrtvenik  Bogu Izraelovu da bi prinosili paljenice, kako je pisano u Zakonu  Mojsija, čovjeka Božjeg. "},
	{3, "3 I podigoše žrtvenik na starome mjestu  - iako su bili u strahu od naroda u zemlji - i prinosili su paljenice  Jahvi, paljenice jutarnje i večernje; "},
	{4, "4 i slavili su Blagdan  sjenica, kako je pisano: prinosili su svakodnevno broj paljenica  propisan za svaki dan. "},
	{5, "5 Osim toga prinosili su svakidašnje  paljenice, zatim žrtve određene za mlađak i za sve blagdane Jahvine  i za sve one koji su htjeli dragovoljno žrtvovati Jahvi. "},
	{6, "6 Od  prvoga dana u sedmom mjesecu počeli su prinositi Jahvi žrtve  paljenice, premda još nisu bili položeni temelji svetišta Jahvina."},
	{7, "7 I dadoše novac kamenarima i drvodjelcima; Sidoncima i  Tircima poslaše hranu i piće i ulje da dovezu drva cedrova s  Libanona do Jafe po dopuštenju perzijskoga kralja Kira."},
	{8, "8 A druge godine poslije njihova dolaska k Domu Božjemu  u Jeruzalemu, drugoga mjeseca kako su Zerubabel, sin Šealtielov, i Ješua, sin Josadakov, s ostalom svojom braćom svećenicima, levitima i sa svim narodom koji se iz ropstva vratio u Jeruzalem  počeli graditi, postavili su levite od dvadeset godina naviše  da upravljaju poslovima oko Doma Jahvina. "},
	{9, "9 Ješua, njegovi sinovi  i braća njegova Kadmiel, Binuj i Hodavja bijahu postavljeni da  kao jedan upravljaju poslenicima na gradnji Doma Božjega."},
	{10, "10 Kad su zidari bili postavili temelje Svetišta Jahvina, postavili su se svećenici u svečanim odjećama, s trubama, a  tako i leviti, sinovi Asafovi, s cimbalima da slave Jahvu prema  odredbama Davida, kralja Izraelova. "},
	{11, "11 I pjevahu Jahvi hvalu  i slavu: Jer je dobar, jer je vječna njegova ljubav prema Izraelu.  I sav je narod klicao hvaleći Jahvu, jer je Dom Jahvin bio postavljen  na svoje temelje. "},
	{12, "12 Zaista, mnogi svećenici, mnogi leviti i  glavari obiteljski i starješine, koji su svojim očima vidjeli  temelje prijašnjega Hrama, plakahu iza glasa, a mnogi opet snažno  klicahu od radosti. "},
	{13, "13 I tako nitko nije mogao razlikovati radosno  klicanje od plača u narodu; jer je narod glasno klicao i vika  se čula vrlo daleko."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct hr4 poems[] = {
	{1, "1 Ali kada su čuli Judini i Benjaminovi neprijatelji da povratnici  iz sužanjstva grade svetište Jahvi, Bogu Izraelovu, "},
	{2, "2 potražiše  Zerubabela, Ješuu i glavare obiteljske i rekoše im: Mi želimo  s vama graditi, jer, kao i vi, tražimo Boga vašega i njemu prinosimo  žrtve od vremena Esar Hadona, asirskoga kralja, koji nas je ovamo  doveo. "},
	{3, "3 Zerubabel, Ješua i glavari izraelskih obitelji odgovoriše  im: Nije na vama da s nama gradite Dom našemu Bogu: gradit ćemo  mi sami Jahvi, Bogu Izraelovu, kako nam je naredio Kir, kralj  perzijski. "},
	{4, "4 Tada je narod one zemlje plašio ljude Judeje i  smetao im u gradnji. "},
	{5, "5 Podmitili su savjetnike da im ometaju  naum: tako je bilo za vrijeme perzijskoga kralja Kira sve do  perzijskoga kralja Darija. Samarijanske smetnje za Kserksove i Artakserksove vladavine"},
	{6, "6 Za Kserksova kraljevanja, na početku njegove vladavine, sastaviše tužbu protiv stanovnika Judeje i Jeruzalema. "},
	{7, "7 I  za vremena Artakserksova pisali su Bišlam, Mitredat, Tabel i  ostali njihovi drugovi protiv Jeruzalema perzijskom kralju Artakserksu.  Podnesak je bio pisan aramejskim pismom i jezikom. "},
	{8, "8 Zatim su  upravitelj Rehum i tajnik Šimšaj napisali kralju Artakserksu  slijedeće pismo protiv Jeruzalema - "},
	{9, "9 upravitelj Rehum, tajnik  Šimšaj i ostali drugovi njihovi: perzijski suci, poslanici, činovnici;  Arkevajci, Babilonci, Suzanci - to jest Elamci - "},
	{10, "10 i ostali  narodi koje je veliki i slavni Asurbanipal bio odveo u sužanjstvo  i naselio ih u gradove Samarije i druge krajeve s onu stranu  Rijeke. "},
	{11, "11 Evo prijepisa pisma koje su mu poslali: Kralju Artakserksu, tvoje sluge, ljudi s onu stranu Rijeke. Sada, dakle, "},
	{12, "12 neka  zna kralj da su Judejci stigli k nama od tebe; došavši u Jeruzalem, žele ponovo sagraditi odmetnički i opaki grad; podižu zidine, a temelje su već postavili. "},
	{13, "13 Neka zna kralj: ako ovaj grad  bude sagrađen i zidovi podignuti, neće se više plaćati porez, ni danak, ni carina, i ovaj će grad biti na štetu kraljevske  riznice. "},
	{14, "14 Budući da jedemo dvorsku sol, ne čini nam se doličnim  gledati ovu sramotu nanesenu kralju. Zato, dakle, obavještavamo  kralja: "},
	{15, "15 neka se poduzmu istraživanja u ljetopisima tvojih  očeva: u tim ćeš ljetopisima naći i utvrditi da je ovaj grad  odmetnički grad, nesretan za kraljeve i pokrajine i da su se  u njemu od davnine dizale bune. Zato je ovaj grad bio razoren. "},
	{16, "16 Obavješćujemo kralja da neće biti više tvoje područje preko  Rijeke ako ovaj grad bude ponovo sagrađen i zidovi podignuti!"},
	{17, "17 Kralj je poslao ovaj odgovor: Rehumu, upravitelju, Šimšaju, tajniku, i ostalim drugovima njihovim koji borave u Samariji  i drugdje, s onu stranu Rijeke - mir! Evo, "},
	{18, "18 podnesak koji  ste mi poslali bio je preda mnom pričitan u njegovu prijevodu. "},
	{19, "19 Po mojoj su naredbi poduzeli istraživanja i utvrdili da se  taj grad dizao od davnine protiv kraljeva i da su u njemu bivali  ustanci i bune. "},
	{20, "20 I moćni su kraljevi kraljevali u Jeruzalemu, koji su gospodarili svime s onu stranu Rijeke: njima se plaćao  danak, porez i carina. "},
	{21, "21 Zapovjedite, dakle, da se prekine  pothvat onih ljudi: taj se grad neće zidati dok ja o tome ne  odlučim. "},
	{22, "22 Čuvajte se svakog propusta u postupku, da ne bi  zlo poraslo na štetu kraljeva."},
	{23, "23 Pošto je prijepis otpisa kralja Artakserksa pročitan  pred Rehumom, upraviteljem, Šimšajem, tajnikom, i pred njihovim  drugovima, oni brzo odoše u Jeruzalem k Judejcima te im oružanom  snagom zabraniše radove. "},
	{24, "24 Tako su obustavljeni poslovi oko  gradnje Doma Božjega u Jeruzalemu. Bili su prekinuti sve do druge  godine kraljevanja Darija, perzijskoga kralja."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct hr5 poems[] = {
	{1, "1 Tada su proroci Hagaj i Zaharija, sin Adonov, počeli prorokovati  Judejcima u Judeji i Jeruzalemu, u ime Boga Izraelova, koji je  bio nad njima; "},
	{2, "2 na to ustadoše Zerubabel, sin Šealtielov, i  Ješua, sin Josadakov, i počeše zidati Dom Božji u Jeruzalemu:  proroci su Božji bili s ljudima i bodrili ih. "},
	{3, "3 U to vrijeme  dođoše k njima Tatnaj, satrap s onu stranu Rijeke, Šetar Boznaj  i drugovi njihovi poslanici i upitaše ih: Tko vam je dopustio  da gradite ovaj hram i da podižete ove zidove? "},
	{4, "4 Kako se zovu  ljudi koji su sagradili ovu zgradu?"},
	{5, "5 Ali je oko Božje bdjelo nad starješinama judejskim, te  im nisu zabranili da rade dok obavijest nije otišla Dariju i  stigao o tom pismeni odgovor. "},
	{6, "6 Ovo je prijepis pisma koje su  kralju Dariju poslali Tatnaj, satrap s one strane Rijeke, Šetar  Boznaj i njihovi drugovi poslanici s one strane Eufrata. "},
	{7, "7 Oni  su mu uputili izvješće ovog sadržaja: Kralju Dariju svaki mir! "},
	{8, "8 Neka znade kralj da smo došli  u pokrajinu Judeju k Domu Boga velikoga: grade ga od krupnog  kamenja, drvetom oblažu zidove; posao se brižljivo izvodi i napreduje  u njihovim rukama. "},
	{9, "9 Zapitali smo njihove starješine i rekli  smo im: 'Tko vam je dopustio da gradite ovaj hram i da podignete  njegove zidove?' "},
	{10, "10 Pitali smo ih i za njihova imena da bismo  ti javili. Tako smo i zapisali imena onih koji zapovijedaju ljudstvu. "},
	{11, "11 A oni nam ovako odgovoriše: 'Mi smo sluge Boga neba i zemlje; gradimo Hram koji je bio  sagrađen prije mnogo godina i koji je bio sagradio i podigao  veliki kralj Izraela. "},
	{12, "12 Ali kad su naši oci rasrdili Boga neba, on ih je predao u ruke Nabukodonozora Kaldejca, babilonskog  kralja, koji je razorio ovaj Hram i odveo narod u sužanjstvo  u Babilon. "},
	{13, "13 Ali prve godine Kira, kralja babilonskog, zapovjedio  je kralj Kir da se ponovo sazida ovaj Dom Božji. "},
	{14, "14 Još i zlatno  i srebrno posuđe Doma Božjega, koje Nabukodonozor bijaše odnio  iz svetišta u Jeruzalemu i prenio ga u svetište babilonsko, uzeo  je kralj Kir iz svetišta u Babilonu i predao čovjeku po imenu  Šešbasaru, koga je postavio upraviteljem, "},
	{15, "15 i rekao mu je:  'Uzmi ovo posuđe, pođi i metni ga u svetište jeruzalemsko, i  neka se Dom Božji zida na svome starom mjestu.' "},
	{16, "16 Taj je Šešbasar  došao, dakle, i postavio temelje Doma Božjega u Jeruzalemu. I  od tada pa do danas gradi se, i još nije dovršen.'"},
	{17, "17 Sada, dakle, ako kralj želi, neka se istraži u pismohrani  kraljevoj u Babilonu je li zaista kralj Kir izdao zapovijed da  se sagradi Dom Božji u Jeruzalemu. A kraljeva odluka o tome neka  nam se saopći."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct hr6 poems[] = {
	{1, "1 Tada, po naredbi kralja Darija, uzeše tražiti u Babilonu, u  spremištu gdje je bila pismohrana, "},
	{2, "2 i nađoše u Ekbatani, tvrđavi  u medijskoj pokrajini, svitak s ovom poveljom: Na spomen."},
	{3, "3 Prve godine kraljevanja Kira proglasio je kralj Kir: Dom Božji u Jeruzalemu. Dom neka se sagradi kao mjesto gdje  će se prinositi žrtve i gdje će se donositi prinosi za paljenje.  Neka bude visok šezdeset lakata i širok šezdeset lakata. "},
	{4, "4 Tri  reda neka budu od velikog kamenja, a jedan od drveta. Trošak  će se podmiriti iz kraljevskog dvora. "},
	{5, "5 Povrh toga, posuđe zlatno  i srebrno iz Doma Božjeg koje Nabukodonozor bijaše uzeo iz svetišta  u Jeruzalemu i prenio u Babilon neka se vrati i bude na svome  mjestu u svetištu jeruzalemskom i neka se postavi u Domu Božjem."},
	{6, "6 Sada, dakle, Tatnaju, satrape s onu stranu Rijeke, Šetar  Boznaju i drugovi vaši poslanici s onu stranu Rijeke, udaljite  se odatle! "},
	{7, "7 Pustite neka taj Dom Božji grade upravitelji i  starješine židovske. Dom Božji treba sagraditi na njegovu prvotnom  mjestu. "},
	{8, "8 Evo mojih naredaba o vašem držanju prema starješinama  judejskim kako bi se ponovo sagradio taj Dom Božji: od kraljevskog  blaga - to jest od danka s onu stranu Rijeke - neka se plaća  onim ljudima brižljivo, bez prijekida, "},
	{9, "9 i što im bude trebalo  za žrtve paljenice Bogu neba: junaca, ovnova i jaganjaca, i pšenice, soli, vina i ulja, neka im se redovito daje svakoga dana, prema  uputama svećenika u Jeruzalemu. "},
	{10, "10 Neka prinose žrtve na ugodan  miris Bogu neba, neka mole za život kralja i njegovih sinova."},
	{11, "11 Naređujem osim toga: tko god prekrši ovu naredbu, neka  mu se izvadi greda iz kuće pa neka na njoj bude pogubljen, a  kuća da mu zato postane bunište. "},
	{12, "12 I Bog, koji je ondje nastanio  svoje Ime, neka obori svakog kralja i narod koji bi se drznuo  da prekrši moju naredbu i sruši Dom Božji u Jeruzalemu! Ja, Darije, izdao sam ovu zapovijed. Neka se točno vrši!"},
	{13, "13 Tada Tatnaj, satrap s onu stranu Rijeke, Šetar Boznaj  i njihovi drugovi učiniše onako kako je zapovjedio kralj Darije. "},
	{14, "14 A židovske su starješine nastavile uspješno graditi po nadahnuću  proroka Hagaja i Zaharije, sina Adonova. Dovršili su gradnju  po naredbi Boga Izraelova i po naredbi Kira i Darija i Artakserksa, kralja perzijskoga. "},
	{15, "15 Hram je zavšen dvadeset i trećeg dana  mjeseca Adara. Bilo je to šeste godine vladavine kralja Darija."},
	{16, "16 Izraelci - svećenici, leviti i ostatak povratnika iz  sužanjstva - radosno posvetiše taj Dom Božji. "},
	{17, "17 Žrtvovaše za  posvećenje Doma Božjega stotinu junaca, dvije stotine ovnova, četiri stotine janjaca i, kao žrtvu za grijehe svega Izraela, dvanaest jaraca - prema broju plemena Izraelovih. "},
	{18, "18 Zatim  postaviše svećenike po njihovim redovima i levite po njihovim  razredima za službu Domu Božjem u Jeruzalemu, kako je propisano  u knjizi Mojsijevoj."},
	{19, "19 Povratnici iz sužanjstva slavili su Pashu četrnaestog  dana prvoga mjeseca. "},
	{20, "20 Svi su se leviti, kao jedan čovjek,  očistili: svi su bili čisti; žrtvovali su pashu za sve povratnike  iz ropstva, za svoju braću svećenike i za sebe. "},
	{21, "21 Blagovali  su pashu Izraelci koji su se vratili iz ropstva i svi oni koji  su im se, prekinuvši s nečistoćom naroda zemlje, pridružili da  traže Jahvu, Boga Izraelova. "},
	{22, "22 I svetkovahu radosno Blagdan  beskvasnih hljebova sedam dana: jer ih je Jahve ispunio radošću  i obratio prema njima srce asirskog kralja da ojača njihove ruke  u radovima oko Doma Boga, Boga Izraelova."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct hr7 poems[] = {
	{1, "1 Poslije tih događaja, za kraljevanja Artakserksa, kralja perzijskoga, Ezra - sin Seraje, sina Azarje, sina Hilkije, "},
	{2, "2 sina Šaluma, sina Sadoka, sina Ahituba, "},
	{3, "3 sina Amarje, sina Azarje, sina  Merajota, "},
	{4, "4 sina Zerahje, sina Uzije, sina Bukija, "},
	{5, "5 sina Abišue, sina Pinhasa, sina Eleazara, sina vrhovnog svećenika Arona - "},
	{6, "6 taj Ezra vrati se iz Babilona. Bio je književnik vješt Mojsijevu  Zakonu, koji je dao Jahve, Bog Izraelov. Kako je ruka Jahve,  Boga njegova, bila nad njim, kralj mu je dao sve što je tražio. "},
	{7, "7 Stanovit broj Izraelaca, svećenika, levita, pjevača, vratara  i sluga krenuše u Jeruzalem sedme godine kralja Artakserksa. "},
	{8, "8 A Ezra je došao u Jeruzalem petoga mjeseca: bilo je to sedme  godine kraljeve. "},
	{9, "9 Pošao je iz Babilona prvoga dana prvoga mjeseca, a stigao je u Jeruzalem prvoga dana petoga mjeseca: nad njim  je bila blaga ruka Boga njegova! "},
	{10, "10 Jer je Ezra nastojao svim  srcem proniknuti Zakon Jahvin, vršiti ga i poučavati Izraela  u zakonima i običajima."},
	{11, "11 Evo prijepisa isprave koju je kralj Artakserkso dao svećeniku  Ezri, književniku vještu naredbama i zakonima što ih je Jahve  dao Izraelu:"},
	{12, "12 Artakserkso, kralj kraljeva, svećeniku Ezri, pisaru  Zakona Boga nebeskoga, potpuni mir."},
	{13, "13 Evo mojih zapovijedi: Tko god u mome kraljevstvu od naroda  izraelskog, njegovih svećenika ili od njegovih levita želi poći  u Jeruzalem, može ići s tobom. "},
	{14, "14 Osim toga, šalje te kralj  i njegovih sedam savjetnika da pregledaš Judeju i Jeruzalem prema  Zakonu Boga tvoga, koji ti je u ruci, "},
	{15, "15 i da odneseš srebro  i zlato koje kralj i njegovih sedam savjetnika dragovoljno prinose  Bogu Izraelovu, koji prebiva u Jeruzalemu, "},
	{16, "16 i sve srebro i  zlato koje skupiš po svoj pokrajini babilonskoj s dragovoljnim  prinosima koje narod i svećenici prinesu za Dom svoga Boga u  Jeruzalemu. "},
	{17, "17 I pobrini se da tim novcem kupiš junaca, ovnova i jaganjaca, a tako i darova i naljeva koji uz to idu: to prinesi na žrtvenik  Doma Boga vašega u Jeruzalemu. "},
	{18, "18 Sa srebrom i zlatom što preostane  učinite ti i tvoja braća kako vam se bude najviše svidjelo, vršeći  volju Boga vašega. "},
	{19, "19 Posuđe koje si primio za službu Domu Boga  tvoga ostavi pred Bogom tvojim, u Jeruzalemu. "},
	{20, "20 I što bi još  trebalo za Dom Boga tvoga i što bi trebalo nabaviti primit ćeš  iz kraljevskih riznica."},
	{21, "21 Ja, kralj Artakserkso, još zapovijedam svim rizničarima  s one strane Rijeke: sve što od vas zatraži svećenik Ezra, pisar  Zakona Boga nebeskoga, podajte odmah najtočnije, "},
	{22, "22 do stotinu  talenata srebra, stotinu kora pšenice, do stotinu bata vina,  do stotinu bata ulja, a soli po želji. "},
	{23, "23 Sve što naredi Bog  nebeski, neka se odmah izvrši u svoj gorljivosti za Dom Boga  nebeskog, da gnjev njegov ne dođe na kraljevstvo kraljevo i na  djecu njegovu. "},
	{24, "24 I još vam javljamo da se ne smije udariti  danak, ni porez, ni carina ni na jednoga od svećenika, levita, pjevača, netinaca i drugih službenika toga Doma Božjega."},
	{25, "25 A ti, Ezra, po mudrosti Boga svoga koju imaš u rukama, postavi činovnike i suce koji će suditi svemu narodu s onu stranu  Rijeke, to jest svima koji poznaju Zakon Boga tvoga. Tko ne zna, vi ga poučite. "},
	{26, "26 Tko ne bude držao Zakona Boga tvojega - koji  je i kraljev zakon - neka se oštro osudi: na smrt, na progonstvo, na novčanu globu ili na tamnicu. "},
	{27, "27 Blagoslovljen neka je Jahve, Bog otaca naših, koji je  nadahnuo srce kraljevo da proslavi Dom Jahvin u Jeruzalemu "},
	{28, "28 i  koji je okrenuo prema meni naklonost kralja, njegovih savjetnika  i svih najmoćnijih kraljevskih činovnika. A ja se osmjelih jer  ruka Jahve, Boga mojega, bijaše nada mnom i sabrah glavare Izraela  da pođu sa mnom."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct hr8 poems[] = {
	{1, "1 Evo glavara obitelji s rodoslovljem koji su sa mnom pošli iz  Babilona za vladavine kralja Artakserksa:"},
	{2, "2 Od Pinhasovih sinova: Geršom; od Itamarovih sinova: Daniel;  od Davidovih sinova: Hatuš, "},
	{3, "3 Šekanijini sinovi; od sinova Paroševih:  Zaharija i s njim upisanih muškaraca stotinu i pedeset; "},
	{4, "4 od  Pahat-Moabovih sinova: Elijoenaj, sin Zerahjin, i s njim dvije  stotine muškaraca; "},
	{5, "5 od Zatuovih sinova: Šekanija, sin Jahazielov, i s njim tri stotine muškaraca; "},
	{6, "6 od sinova Adinovih: Ebed, sin Jonatanov, i s njim pedeset muškaraca; "},
	{7, "7 od Elamovih sinova:  Izaija, sin Atalijin, i s njim sedamdeset muškaraca; "},
	{8, "8 od Šefatjinih  sinova: Zebadja, sin Mihaelov, i s njim osamdeset muškaraca; "},
	{9, "9 od Joabovih sinova: Obadja, sin Jehielov, i s njim dvije stotine  i osamnaest muškaraca; "},
	{10, "10 od sinova Banijevih: Šelomit, sin  Josifjin, i s njim stotinu i šezdeset muškaraca; "},
	{11, "11 od Bebajevih  sinova: Zaharija, sin Bebajev, i s njim dvadeset i osam muškaraca; "},
	{12, "12 od Azgadovih sinova: Johanan, sin Hakatanov, i s njim stotinu  i deset muškaraca; "},
	{13, "13 od posljednjih Adonikamovih sinova poimence:  Elifelet, Jeiel i Šemaja, i s njima šezdeset muškaraca; "},
	{14, "14 i  od sinova Bigvajevih: Utaj, sin Zabudov, i s njim sedamdeset  muškaraca. "},
	{15, "15 Sabrao sam ih kod rijeke koja teče prema Ahavi. Utaborili  smo se za tri dana ondje. Pregledao sam svjetovnjake i svećenike, ali nisam ondje našao ni jednog levita. "},
	{16, "16 Tada sam poslao  glavare Eliezera, Ariela, Šemaju, Elnatana, Jariba, Elnatana, Natana, Zahariju, Mešulama i učitelje Jojariba i Elnatana "},
	{17, "17 i  uputio sam ih Idonu, poglavaru mjesta Kasifje. Stavio sam u njihova  usta riječi koje će reći Idonu i njegovoj braći koja su se nalazila  u mjestu Kasifji da nam pribave sluge za Dom Boga našega."},
	{18, "18 Milostiva ruka Boga našega bijaše nad nama i oni nam  dovedoše razumna čovjeka između sinova Mahlija, sina Levijeva, sina Izraelova: Šerebju s njegovim sinovima i braćom - njih  osamnaest. "},
	{19, "19 Još Hašabju i s njim njegova brata Izaiju, sina  Merarijeva, i njihove sinove: njih dvadeset. "},
	{20, "20 A od poslužitelja  koje su David i glavari postavili levitima da im služe: dvije  stotine i dvadeset poslužitelja. Svi su bili poimence zabilježeni."},
	{21, "21 Ja sam ondje, kraj rijeke Ahave, proglasio post: da bismo  se ponizili pred Bogom svojim i od njega izmolili sretan put  sebi, svojoj djeci i svemu blagu svojem. "},
	{22, "22 Jer bih se stidio  moliti od kralja vojske i konjanika da nas štite putem od neprijatelja;  izjavili smo, naprotiv, kralju: Ruka je Boga našega ispružena  da blagoslovi sve one koji ga traže; njegova snaga i gnjev njegov  nad onima su koji ga ostavljaju."},
	{23, "23 I tako smo postili i molili Boga svoga na ovu nakanu, i on nas usliša."},
	{24, "24 Izabrao sam dvanaest glavara svećeničkih, Šerebju i Hašabju, i s njima desetoricu njihove braće; "},
	{25, "25 izmjerih im srebro,  zlato i posuđe, darove koje su kralj, njegovi savjetnici, velikaši  i svi Izraelci darovali za Dom Boga našega. "},
	{26, "26 Izmjerih i stavih  u njihove ruke šest stotina i pedeset talenata srebra, stotinu  srebrnih posuda od po dva talenta, stotinu talenata zlata, "},
	{27, "27 dvadeset  zlatnih čaša od tisuću darika i dva vrča od dobre pozlaćene mjedi, skupocjene kao zlato. "},
	{28, "28 I rekoh im: Vi ste Jahvi posvećeni;  ovo je posuđe posvećeno, ovo srebro i zlato dragovoljno je darovano  Jahvi, Bogu otaca vaših. "},
	{29, "29 Pazite i čuvajte ovo sve dok ne  izmjerite pred glavarima svećeničkim i pred levitima i glavarima  obitelji Izraelovih u Jeruzalemu, u dvoranama Doma Jahvina."},
	{30, "30 Svećenici i leviti primiše, dakle, izmjereno srebro,  zlato i posuđe da ga odnesu u Jeruzalem, u Dom Boga našega."},
	{31, "31 Dvanaestog dana prvoga mjeseca krenusmo od rijeke Ahave  da pođemo u Jeruzalem: ruka Boga našega bijaše nad nama; on nas  je na putu štitio od napada neprijatelja i od pljačkaša. "},
	{32, "32 Stigli  smo u Jeruzalem i ondje smo se tri dana odmarali. "},
	{33, "33 Četvrtoga  dana izmjereno je srebro, zlato i posuđe u Domu Boga našega i  predano je u ruke Merimotu, sinu Urijinu, s kojim je bio Eleazar, sin Pinhasov; a pred njima bijahu leviti: Jozabad, sin Ješuin, i Noadja, sin Binujev. "},
	{34, "34 Sve je bilo na broju i težini. Zabilježena  je tada sveukupna težina. U to vrijeme "},
	{35, "35 oni koji su se vratili iz sužanjstva, povratnici, priniješe žrtvu paljenicu Bogu Izraelovu: dvanaest junaca za  sav Izrael, devedeset i šest ovnova, sedamdeset i sedam janjaca, dvanaest jaraca za grijehe - sve to kao paljenicu Jahvi. "},
	{36, "36 Zatim  predaše kraljeve naredbe kraljevskim satrapima i upraviteljima  s one strane Rijeke i oni pomogoše narod i Dom Božji."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view9() {
struct hr9 poems[] = {
	{1, "1 Pošto je sve to uređeno, dođoše mi glavari govoreći: Izraelski  narod, svećenici i leviti nisu se odvojili od naroda zemlje,  okorjelih u njihovim gnusobama: nisu se odijelili od Kanaanaca, Hetita, Perižana, Jebusejaca, Amonaca, Moabaca, Egipćana i Amorejaca,"},
	{2, "2 nego su za sebe i za sinove svoje uzimali za žene njihove  kćeri: sveti rod pomiješao se s narodima zemlje; glavari i savjetnici  prvi su počinili tu nevjernost. "},
	{3, "3 Na tu vijest razderah svoju  odjeću i svoj ogrtač, čupao sam kosu i bradu svoju i sjedoh utučen. "},
	{4, "4 Svi koji su strahovali od riječi Božje sakupili se oko mene  zbog nevjernosti onih povratnika. A ja sam sveudilj sjedio utučen, sve do večernje žrtve. "},
	{5, "5 A o večernjoj žrtvi trgnuh se iz svoga  jada i, razderane odjeće i ogrtača, padoh na koljena, raširih  ruke prema Jahvi, Bogu svome, "},
	{6, "6 i rekoh: Bože moj! Stid me i bojim se podići svoje lice k tebi, Bože  moj! Jer su se umnožila zlodjela naša preko glave i grijesi su  se naši nagomilali do neba. "},
	{7, "7 Od vremena otaca svojih pa do  danas u krivnji smo velikoj i zbog zlodjela svojih bijasmo predani  u ruke zemaljskih kraljeva: mi, kraljevi naši i svećenici naši  - pod mač, u sužanjstvo, u plijen i na sramotu, kao što je to  i danas. "},
	{8, "8 Ali sada, za kratko vrijeme, učinio nam je Jahve, Bog naš, milost i ostavi nam Ostatak i dade nam utočište u svome  svetom mjestu: tako nam je Bog naš prosvijetlio oči i dao nam  malo života u robovanju našem. "},
	{9, "9 Jer mi smo robovi, ali nas  u ropstvu našem nije nikada ostavio Bog naš: nego nam dade te  nađosmo milost u perzijskih kraljeva, dade nam snage da podignemo  Dom Boga našega i da obnovimo njegove ruševine i pribavi nam  utočište u Judeji i Jeruzalemu."},
	{10, "10 Ali sada, što možemo reći, Bože moj, kad smo poslije  svega toga odnemarili zapovijedi tvoje "},
	{11, "11 koje si zapovjedio  preko svojih slugu proroka ovim riječima: 'Zemlja u koju ulazite  da je zaposjednete nečista je zemlja od nečistoće naroda zemlje, od gnusoba njihovih kojima su se napunili od jednoga kraja do  drugoga. "},
	{12, "12 Stoga ne dajite kćeri svojih za njihove sinove i  ne uzimajte njihovih kćeri za svoje sinove, ne želite nikakav  njihov mir i sreću njihovu, da biste postali snažni i jeli najbolje  plodove zemlje i ostavili je zauvijek u nasljedstvo sinovima  svojim.' "},
	{13, "13 I poslije svega što nas je stiglo zbog zlih djela naših  i zbog naše velike krivice, dobro je, o Bože naš, što si naša  zlodjela smatrao manjima nego što je zloća njihova i što si nam  ostavio ovaj Ostatak! "},
	{14, "14 Zar možemo i dalje kršiti naredbe tvoje  i vezivati se s ovim gnusnim narodima? Ne bi li se ti razgnjevio  i satro nas da ni Ostatka ni ikoga spašena više ne bi bilo? "},
	{15, "15 Jahve, Bože Izraelov, po pravednosti tvojoj mi ostadosmo Ostatak, kao  što smo danas: evo nas pred tobom s grijehom svojim! Zaista ne  bismo zbog njega smjeli stajati pred tobom!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view10() {
struct hr10 poems[] = {
	{1, "1 Dok je Ezra molio i priznavao grijehe, plačući i ležeći pred  Domom Božjim, skupilo se oko njega mnoštvo Izraelaca, ljudi,  žena i djece: i taj je narod gorko plakao. "},
	{2, "2 Tada Šekanija,  sin Jehielov, jedan od sinova Elamovih, uzimajući riječ reče  Ezri: Mi smo izdali Boga svoga ženeći se tuđinkama iz naroda  zemlje. Ali još ima nade Izraelu. "},
	{3, "3 Obnovimo sada Savez s Bogom  svojim: obećajmo da ćemo, prema savjetu moga gospodara i onih  koji osjećaju strahopočitanje prema zapovijedi Boga našega, otpustiti  svoje žene tuđinke i djecu koju su rodile. Učinimo dakle po Zakonu! "},
	{4, "4 Ustani, jer to je tvoja dužnost, a mi ćemo biti uza te. Budi  hrabar i na djelo!"},
	{5, "5 Tada ustade Ezra i zakle glavare svećeničke, i levite, i sve Izraelce da će učiniti kako im bijaše rekao. I zakleše  se. "},
	{6, "6 Ezra se udalji ispred Doma Božjega i uđe u dvoranu Johanana, sina Elijašibova. Ondje provede noć i nije jeo ni kruha niti  je pio vode jer tugovaše zbog nevjernosti povratnika."},
	{7, "7 Zatim je objavljeno u Judeji i Jeruzalemu svima povratnicima  da se skupe u Jeruzalemu: "},
	{8, "8 a tko ne bude došao u Jeruzalem  za tri dana, toga će pozvati glavari i starješine, bit će mu  zaplijenjeno imanje i isključit će ga iz zbora povratnika. "},
	{9, "9 Svi  su se ljudi od Jude i Benjamina sakupili tako za tri dana u Jeruzalemu.  Bilo je to devetoga mjeseca, dvadesetoga dana u mjesecu. Sav  se narod smjestio na trgu pred Domom Božjim, dršćući zbog svega  toga i zbog jake kiše."},
	{10, "10 Tada, ustavši, svećenik Ezra reče im: Vi ste se iznevjerili  kad ste se oženili tuđinkama. Tako ste povećali grijeh Izraelov! "},
	{11, "11 Ali podajte sada hvalu Jahvi, Bogu otaca svojih, i izvršite  volju njegovu te se rastavite od naroda zemlje i od žena tuđinki."},
	{12, "12 Sav je zbor odgovorio snažnim glasom: Jest, dužnost  nam je učiniti po tvome savjetu! "},
	{13, "13 Ali naroda ima mnogo i dažd  nahodi: vani se ne može stajati. Osim toga, nije to posao od  dan-dva, jer nas je mnogo koji smo u tome sagriješili. "},
	{14, "14 Mogu  nas na zajedničkom zboru zastupati naši glavari: svi koji su  po našim gradovima oženjeni tuđinkama mogu doći u određeno vrijeme  u pratnji starješina i sudaca svakoga grada, sve dok ne budemo  odvratili gnjev Boga svojega zbog ovoga."},
	{15, "15 Samo Jonatan, sin Asahelov, i Jahzija, sin Tikvin, bijahu  se usprotivili; a podupirahu ih Mešulam i levit Šabetaj. "},
	{16, "16 Povratnici  učiniše tako: rastaše se. Svećenik Ezra izabra za pomoćnike glavare  obitelji, prema njihovim domovima, i svi su bili poimence određeni.  Počeli su zasjedati prvoga dana desetoga mjeseca da bi sve ispitali. "},
	{17, "17 I prvoga dana prvoga mjeseca završiše sa svima koji se bijahu  oženili tuđinkama."},
	{18, "18 Među pripadnicima svećenstva evo koji bijahu oženjeni  tuđinkama: između sinova Ješue, sina Josadakova, i među njegovom  braćom: Maaseja, Eliezer, Jarib i Gedalija; "},
	{19, "19 oni dadoše svoju  ruku da će otpustiti svoje žene i da će za svoj grijeh prinijeti  ovna kao naknadnicu."},
	{20, "20 Od sinova Imerovih: Hanani i Zebadja; "},
	{21, "21 od Harimovih  sinova: Maaseja, Ilija, Šemaja, Jehiel i Uzija; "},
	{22, "22 od Pašhurovih  sinova: Elijoenaj, Maaseja, Jišmael, Netanel, Jozabad i Elasa."},
	{23, "23 Od levita: Jozabad, Šimej, Kelaja - nazvan Kelita - Petahja, Juda i Eliezer."},
	{24, "24 Od pjevača: Elijašib i Zakur. Od vratara: Šalum, Telem  i Uri."},
	{25, "25 A između Izraelaca: od sinova Paroševih: Ramja, Jizija, Malkija, Mijamin, Eleazar, Malkija i Benaja; "},
	{26, "26 od sinova Elamovih:  Matanija, Zaharija, Jehiel, Abdi, Jeremot i Ilija; "},
	{27, "27 od sinova  Zatuovih: Elijoenaj, Elijašib, Matanija, Jeremot, Zabad i Aziza; "},
	{28, "28 od sinova Bebajevih: Johanan, Hananija, Zabaj i Atlaj; "},
	{29, "29 od  Banijevih sinova: Mešulam, Maluk, Adaja, Jašub, Šeal i Ramot; "},
	{30, "30 od Pahat-Moabovih sinova: Adna, Kelal, Benaja, Maaseja, Matanija, Besalel, Binuj i Manaše; "},
	{31, "31 od sinova Harimovih: Eliezer, Jišija, Malkija, Šemaja, Šimun, "},
	{32, "32 Benjamin, Maluk, Semarja; "},
	{33, "33 od  sinova Hašumovih: Matnaj, Matata, Zabad, Elifelet, Jeremaj, Manaše, Šimej; "},
	{34, "34 od sinova Banijevih: Maadaj, Amram, Joel, "},
	{35, "35 Benaja, Bedja, Kelu, "},
	{36, "36 Vanija, Meremot, Elijašib, "},
	{37, "37 Matanija, Matnaj  i Jaasaj; "},
	{38, "38 od sinova Binujevih: Šimej, "},
	{39, "39 Šelemja, Natan  i Adaja; "},
	{40, "40 od Zakajevih sinova: Šašaj, Šaraj, "},
	{41, "41 Azareel,  Šelemja, Šemarja, "},
	{42, "42 Šalum, Amarja, Josip; "},
	{43, "43 od Nebovih sinova:  Jeiel, Matitja, Zabad, Zebina, Jadaj, Joel, Benaja. "},
	{44, "44 Svi su  ovi bili oženjeni tuđinkama, ali su ih otpustili, žene i djecu. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};