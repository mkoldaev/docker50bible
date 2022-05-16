#include <map>
#include <string>
class Bible39
{
	struct pl1	{ int val; const char *msg; };
	struct pl2	{ int val; const char *msg; };
	struct pl3	{ int val; const char *msg; };
	struct pl4	{ int val; const char *msg; };
public:
static void view1() {
struct pl1 poems[] = {
	{1, "1 Brzemię słowa Pańskiego przeciwko Izraelowi, przez Malachyjasza."},
	{2, "2 Umiłowałem was, mówi Pan, a wy mówicie: W czemżeś nas umiłował? Izali Ezaw nie był bratem Jakóbowi? mówi Pan; wszakżem umiłował Jakóba,"},
	{3, "3 A Ezawa miałem w nienawiści, i podałem góry jego na spustoszenie, a dziedzictwo jego smokom na pustyni."},
	{4, "4 Jeźliby rzekła ziemia Edomska: Staliśmy się ubogimi, ale wrócimy się, i pobudujemy miejsca popustoszone, tedy tak mówi Pan zastępów: Niechaj oni budują, a Ja rozwalę; i nazwię ich granicą niepobożności i ludem, który sobie zbrzydził Pan aż na wiek i."},
	{5, "5 To oglądają oczy wasze, a wy rzeczecie: Niech będzie Pan uwielbiony w granicach Izraelskich."},
	{6, "6 Syn ma w uczciwości ojca, a sługa pana swego; jaźlim tedy Ja ojcem, gdzież jest cześć moja? i jeźliżem Ja panem, gdzież jest bojaźń moja? mówi Pan zastępów wam, o kapłani! którzy lekce poważacie imię moje, a wszakże mówicie: W czemże lekce poważamy imię twoje?"},
	{7, "7 Którzy przynosząc na ołtarz mój ofiarę splugawioną, mówicie: Czemżeśmy cię splugawili? Tem, że mówicie: Stół Pański splugawiony jest."},
	{8, "8 Bo gdy przywodzicie, co ślepego jest, na ofiarę, izali to nie zła rzecz? I gdy przywodzicie chrome i chore, izali to nie zła rzecz? Ofiaruj to jedno książęciu twemu, obaczysz, jeżeli mu się to podobać będzie, a przyjmieli twarz twoję, mówi Pan zas tępów."},
	{9, "9 Przetoż teraz błagajcie, proszę, oblicze Boże, aby się zmiłował nad nami; ale póki się to dzieje z ręki waszej, izali przyjmie oblicze którego z was? mówi Pan zastępów."},
	{10, "10 Owszem, kto jest między wami, aby zawarł drzwi, albo darmo zapalił na ołtarzu moim? Nie mam chęci do was, mówi Pan zastępów, i ofiary nie przyjmię z ręki waszej."},
	{11, "11 Albowiem od wschodu słońca aż do zachodu jego wielkie jest imię moje między narodami, a na wszelkiem miejscu przyniesione będzie kadzenie imieniowi memu i ofiara czysta; wielkie zaiste imię moje będzie między narodami, mówi Pan zastępów."},
	{12, "12 Lecz wy plugawicie je, gdy mówicie: Stół Pański splugawiony jest; a co nań kładą, jest wzgardzonym pokarmem."},
	{13, "13 Mówicie też: O jakaż to praca! choćbyście to zdmuchnąć mogli mówi Pan zastępów; bo przynosicie to, co jest wydartego, i chromego i schorzałego, a przynosicie to na ofiarę: izali to przyjmę z ręki waszej? mówi Pan."},
	{14, "14 I owszem przeklęty jest zdradliwy, który mając w trzodzie swej samca, a przecię czyniąc śluby ofiaruje Panu to, co jest ułomnego; bom Ja królem wielkim mówi Pan zastępów, a imię moje straszne jest między narody."},
	{15, "1 Brzemię słowa Pańskiego przeciwko Izraelowi, przez Malachyjasza."},
	{16, "2 Umiłowałem was, mówi Pan, a wy mówicie: W czemżeś nas umiłował? Izali Ezaw nie był bratem Jakóbowi? mówi Pan; wszakżem umiłował Jakóba,"},
	{17, "3 A Ezawa miałem w nienawiści, i podałem góry jego na spustoszenie, a dziedzictwo jego smokom na pustyni."},
	{18, "4 Jeźliby rzekła ziemia Edomska: Staliśmy się ubogimi, ale wrócimy się, i pobudujemy miejsca popustoszone, tedy tak mówi Pan zastępów: Niechaj oni budują, a Ja rozwalę; i nazwię ich granicą niepobożności i ludem, który sobie zbrzydził Pan aż na wiek i."},
	{19, "5 To oglądają oczy wasze, a wy rzeczecie: Niech będzie Pan uwielbiony w granicach Izraelskich."},
	{20, "6 Syn ma w uczciwości ojca, a sługa pana swego; jaźlim tedy Ja ojcem, gdzież jest cześć moja? i jeźliżem Ja panem, gdzież jest bojaźń moja? mówi Pan zastępów wam, o kapłani! którzy lekce poważacie imię moje, a wszakże mówicie: W czemże lekce poważamy imię twoje?"},
	{21, "7 Którzy przynosząc na ołtarz mój ofiarę splugawioną, mówicie: Czemżeśmy cię splugawili? Tem, że mówicie: Stół Pański splugawiony jest."},
	{22, "8 Bo gdy przywodzicie, co ślepego jest, na ofiarę, izali to nie zła rzecz? I gdy przywodzicie chrome i chore, izali to nie zła rzecz? Ofiaruj to jedno książęciu twemu, obaczysz, jeżeli mu się to podobać będzie, a przyjmieli twarz twoję, mówi Pan zas tępów."},
	{23, "9 Przetoż teraz błagajcie, proszę, oblicze Boże, aby się zmiłował nad nami; ale póki się to dzieje z ręki waszej, izali przyjmie oblicze którego z was? mówi Pan zastępów."},
	{24, "10 Owszem, kto jest między wami, aby zawarł drzwi, albo darmo zapalił na ołtarzu moim? Nie mam chęci do was, mówi Pan zastępów, i ofiary nie przyjmię z ręki waszej."},
	{25, "11 Albowiem od wschodu słońca aż do zachodu jego wielkie jest imię moje między narodami, a na wszelkiem miejscu przyniesione będzie kadzenie imieniowi memu i ofiara czysta; wielkie zaiste imię moje będzie między narodami, mówi Pan zastępów."},
	{26, "12 Lecz wy plugawicie je, gdy mówicie: Stół Pański splugawiony jest; a co nań kładą, jest wzgardzonym pokarmem."},
	{27, "13 Mówicie też: O jakaż to praca! choćbyście to zdmuchnąć mogli mówi Pan zastępów; bo przynosicie to, co jest wydartego, i chromego i schorzałego, a przynosicie to na ofiarę: izali to przyjmę z ręki waszej? mówi Pan."},
	{28, "14 I owszem przeklęty jest zdradliwy, który mając w trzodzie swej samca, a przecię czyniąc śluby ofiaruje Panu to, co jest ułomnego; bom Ja królem wielkim mówi Pan zastępów, a imię moje straszne jest między narody."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct pl2 poems[] = {
	{1, "1 A tak teraz do was mówię to rozkazanie, o kapłani!"},
	{2, "2 Jeźli nie usłuchacie, i jeźli nie złożycie do serca, abyście dali chwałę imieniowi memu, mówi Pan zastępów, tedy poślę na was przeklęstwo, a przeklinać będę błogosławieństwa wasze; owszem jużem je przeklął: boście tego nie złożyli do serca."},
	{3, "3 Oto, Ja wam popsuję siewy wasze, a wrzucę łajno na twarzy wasze, łajno, mówię, ofiar waszych, tak, że was przytargnie do siebie."},
	{4, "4 I dowiecie się, iżem posłał do was to rozkazanie, aby było przymierze moje z Lewim, mówi Pan zastępów."},
	{5, "5 Przymierze moje było z nim żywota i pokoju, a dałem mu je dla bojaźni; bo się mnie bał, i dla imienia mojego skruszony był."},
	{6, "6 Zakon prawdy był w ustach jego, a nieprawość nie była znaleziona w wargach jego; chodził zemną w pokoju i w prawości, i wielu odwrócił od nieprawości."},
	{7, "7 Bo wargi kapłańskie umiejętności strzedz mają, a pytać się będą na zakon z ust jego; Aniołem zaiste jest Pana zastępów."},
	{8, "8 Aleście wy zstąpili z drogi, i byliście zgorszeniem wielom w zakonie, zepsowaliście przymierze Lewiego, mówi Pan zastępów."},
	{9, "9 Przetoż i Jam was uczynił wzgardzone i poniżone u wszystkich ludzi, tak jakoście wy nie strzegli dróg moich, a mieliście wzgląd na osobę w zakonie."},
	{10, "10 Izali nie jeden ojciec jest nas wszystkich? Izali nie jaden Bóg stworzył nas? Czemuż tedy brat zdradza brata swego, gwałcąc przymierze ojców naszych?"},
	{11, "11 Zdradliwie się sprawuje Juda, a obrzydliwość się dzieje w Izraelu i w Jeruzalemie; bo Juda splugawił świętobliwość Pańską, w której się kochać miał, pojąwszy za żone córkę boga obcego."},
	{12, "12 Pan męża, który to czyni, wykorzeni z namiotów Jakóbowych, tak czującego, jako i odpowiadającego i ofiarującego dar Panu zastępów."},
	{13, "13 A toście drugi raz uczynili, okrywając łzami ołtarz Pański, płaczem i wołaniem, tak, że więcej nie patrzy na dar, i nie przyjmuje wdzięcznej ofiary z ręki waszej."},
	{14, "14 Wszakże mówicie: Dlaczegoż to? Dla tego, że Pan jest świadkiem między tobą i między żoną młodości twojej, przeciw którejś ty wystąpił, gdyż ona jest towarzyszką twoją, i żoną przymierza twego."},
	{15, "15 Bo azaż nie uczynił jednym, choć mu jeszcze ducha zbywało? A czemuż jednym? aby szukali nasienia Bożego; a tak strzeżcie ducha swego, a z żoną młodości swojej się zdradliwie nie obchodźcie;"},
	{16, "16 Bo on ma w nienawiści opuszczenie żony, mówi Pan, Bóg Izraelski, przto że taki okrywa okrucieństwo płaszczem jego, mówi Pan zastępów; a tak strzeżcie ducha waszego, a nie obchodźcie się zdradliwie."},
	{17, "17 Pracęście zadali Panu słowy swojemi, a przecię mówicie: W czemżeśmy mu pracę zadali? W tem, gdy mówicie: Wszelki, który złość czyni, podoba się Panu, i w tych ma kochanie; albo: Gdzież jest Bóg sądu?"},
	{18, "1 A tak teraz do was mówię to rozkazanie, o kapłani!"},
	{19, "2 Jeźli nie usłuchacie, i jeźli nie złożycie do serca, abyście dali chwałę imieniowi memu, mówi Pan zastępów, tedy poślę na was przeklęstwo, a przeklinać będę błogosławieństwa wasze; owszem jużem je przeklął: boście tego nie złożyli do serca."},
	{20, "3 Oto, Ja wam popsuję siewy wasze, a wrzucę łajno na twarzy wasze, łajno, mówię, ofiar waszych, tak, że was przytargnie do siebie."},
	{21, "4 I dowiecie się, iżem posłał do was to rozkazanie, aby było przymierze moje z Lewim, mówi Pan zastępów."},
	{22, "5 Przymierze moje było z nim żywota i pokoju, a dałem mu je dla bojaźni; bo się mnie bał, i dla imienia mojego skruszony był."},
	{23, "6 Zakon prawdy był w ustach jego, a nieprawość nie była znaleziona w wargach jego; chodził zemną w pokoju i w prawości, i wielu odwrócił od nieprawości."},
	{24, "7 Bo wargi kapłańskie umiejętności strzedz mają, a pytać się będą na zakon z ust jego; Aniołem zaiste jest Pana zastępów."},
	{25, "8 Aleście wy zstąpili z drogi, i byliście zgorszeniem wielom w zakonie, zepsowaliście przymierze Lewiego, mówi Pan zastępów."},
	{26, "9 Przetoż i Jam was uczynił wzgardzone i poniżone u wszystkich ludzi, tak jakoście wy nie strzegli dróg moich, a mieliście wzgląd na osobę w zakonie."},
	{27, "10 Izali nie jeden ojciec jest nas wszystkich? Izali nie jaden Bóg stworzył nas? Czemuż tedy brat zdradza brata swego, gwałcąc przymierze ojców naszych?"},
	{28, "11 Zdradliwie się sprawuje Juda, a obrzydliwość się dzieje w Izraelu i w Jeruzalemie; bo Juda splugawił świętobliwość Pańską, w której się kochać miał, pojąwszy za żone córkę boga obcego."},
	{29, "12 Pan męża, który to czyni, wykorzeni z namiotów Jakóbowych, tak czującego, jako i odpowiadającego i ofiarującego dar Panu zastępów."},
	{30, "13 A toście drugi raz uczynili, okrywając łzami ołtarz Pański, płaczem i wołaniem, tak, że więcej nie patrzy na dar, i nie przyjmuje wdzięcznej ofiary z ręki waszej."},
	{31, "14 Wszakże mówicie: Dlaczegoż to? Dla tego, że Pan jest świadkiem między tobą i między żoną młodości twojej, przeciw którejś ty wystąpił, gdyż ona jest towarzyszką twoją, i żoną przymierza twego."},
	{32, "15 Bo azaż nie uczynił jednym, choć mu jeszcze ducha zbywało? A czemuż jednym? aby szukali nasienia Bożego; a tak strzeżcie ducha swego, a z żoną młodości swojej się zdradliwie nie obchodźcie;"},
	{33, "16 Bo on ma w nienawiści opuszczenie żony, mówi Pan, Bóg Izraelski, przto że taki okrywa okrucieństwo płaszczem jego, mówi Pan zastępów; a tak strzeżcie ducha waszego, a nie obchodźcie się zdradliwie."},
	{34, "17 Pracęście zadali Panu słowy swojemi, a przecię mówicie: W czemżeśmy mu pracę zadali? W tem, gdy mówicie: Wszelki, który złość czyni, podoba się Panu, i w tych ma kochanie; albo: Gdzież jest Bóg sądu?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct pl3 poems[] = {
	{1, "1 Oto ja posyłam Anioła mego, który zgotuje drogę przed obliczem mojem; a zarazem przyjdzie do kościoła swego Panujący, którego wy szukacie, i Anioł przymierza, którego wy żądacie; oto, przyjdzie, mówi Pan zastępów."},
	{2, "2 Lecz któż będzie mógł znieść dzień przyjścia jego? I kto się ostoi, gdy on się okaże? Bo on jest jako ogień roztapiający, i jako mydło blecharzów."},
	{3, "3 I będzie siedział roztapiając i wyczyszczając srebro, i oczyści syny Lewiego, i przepławi je jako złoto i jako srebro, i będą ofiarować Panu dar w sprawiedliwości."},
	{4, "4 Tedy Panu będzie wdzięczna ofiara od Judy i od Jeruzalemu, jako za dni pierwszych i jako za lat starodawnych."},
	{5, "5 Ale się do was przybliżę z sądem, i będę świadkiem prędkim przeciwko czarownikom, i przeciwko cudzołożnikom, i przeciwko krzywoprzysiężcom, i przeciwko tym, którzy krzywdę czyniąc zatrzymywają zapłatę najemnikowi, wdowie i sierocie i cudzoziemcowi krzywdę czynią, a nie boją się mnie, mówi Pan zastępów."},
	{6, "6 Gdyż ja Pan nie odmieniam się, przetoż wy, synowie Jakóbowi! nie jesteście zniszczeni."},
	{7, "7 Zaraz ode dni ojców waszych odstąpiliście od ustaw moich, a nie strzegliście ich; nawróćcież się do mnie, a nawrócę się do was, mówi Pan zastępów. Ale mówicie: W czemże się nawrócimy?"},
	{8, "8 Izali człowiek ma Boga złupić, że wy mnie łupicie? Wszakże mówicie: W czemże cię łupimy? W dziesięcinach i w ofiarach."},
	{9, "9 Zgołaście przeklęci, iż mię tak łupicie, wy i wszystek naród wasz."},
	{10, "10 Znieście wszystkę dziesięcinę do szpichleża, aby była żywność w domu moim, a doświadczcie mię teraz w tem, mówi Pan zastępów; jeźli wam nie otworzę okien niebieskich, a nie wyleję na was błogosławieństwa, tak że go nie będziecie mieli gdzie podziać;"},
	{11, "11 I zgromię dla was pożerającego, a nie popsuję wam urodzaju ziemskiego, i nie pochybi winna macica na polu, mówi Pan zastępów."},
	{12, "12 I będą was błogosławić wszyscy narodowie; bo wy będziecie ziemią rozkoszną, mówi Pan zastępów."},
	{13, "13 Zmocniły się przeciwko mnie słowa wasze, mówi Pan; wszakże mówicie: Cóżeśmy mówili przeciwko tobie?"},
	{14, "14 Mówiliście: Próżna to Bogu służyć, a cóż za pożytek, choć będziemy strzedz rozkazania jego, i będziemy smętnie chodzić, bojąc się Pana zastępów?"},
	{15, "15 Owszem, pyszne mamy za błogosławione, ponieważ się ci budują, którzy czynią niezbożność, a którzy kuszą Boga, zachowani bywają."},
	{16, "16 Tedy rozmawiali o tem ci, którzy się boją Pana, każdy z bliźnim swoim. I obaczył Pan, a usłyszał, i napisano księgę pamiątki przed obliczem jego dla bojących się Pana i myślących o imieniu jego."},
	{17, "17 Cić mi będą, mówi Pan zastępów, w dzień, który Ja uczynię, własnością; i zmiłuję się nad nimi, jako się zmiłowywa ojciec nad synem swoim, który mu służy."},
	{18, "18 Tedy się nawrócicie, a obaczycie różność między sprawiedliwym i niezbożnym, między tym, który służy Bogu, i między tym, który mu nie służy."},
	{19, "1 Oto ja posyłam Anioła mego, który zgotuje drogę przed obliczem mojem; a zarazem przyjdzie do kościoła swego Panujący, którego wy szukacie, i Anioł przymierza, którego wy żądacie; oto, przyjdzie, mówi Pan zastępów."},
	{20, "2 Lecz któż będzie mógł znieść dzień przyjścia jego? I kto się ostoi, gdy on się okaże? Bo on jest jako ogień roztapiający, i jako mydło blecharzów."},
	{21, "3 I będzie siedział roztapiając i wyczyszczając srebro, i oczyści syny Lewiego, i przepławi je jako złoto i jako srebro, i będą ofiarować Panu dar w sprawiedliwości."},
	{22, "4 Tedy Panu będzie wdzięczna ofiara od Judy i od Jeruzalemu, jako za dni pierwszych i jako za lat starodawnych."},
	{23, "5 Ale się do was przybliżę z sądem, i będę świadkiem prędkim przeciwko czarownikom, i przeciwko cudzołożnikom, i przeciwko krzywoprzysiężcom, i przeciwko tym, którzy krzywdę czyniąc zatrzymywają zapłatę najemnikowi, wdowie i sierocie i cudzoziemcowi krzywdę czynią, a nie boją się mnie, mówi Pan zastępów."},
	{24, "6 Gdyż ja Pan nie odmieniam się, przetoż wy, synowie Jakóbowi! nie jesteście zniszczeni."},
	{25, "7 Zaraz ode dni ojców waszych odstąpiliście od ustaw moich, a nie strzegliście ich; nawróćcież się do mnie, a nawrócę się do was, mówi Pan zastępów. Ale mówicie: W czemże się nawrócimy?"},
	{26, "8 Izali człowiek ma Boga złupić, że wy mnie łupicie? Wszakże mówicie: W czemże cię łupimy? W dziesięcinach i w ofiarach."},
	{27, "9 Zgołaście przeklęci, iż mię tak łupicie, wy i wszystek naród wasz."},
	{28, "10 Znieście wszystkę dziesięcinę do szpichleża, aby była żywność w domu moim, a doświadczcie mię teraz w tem, mówi Pan zastępów; jeźli wam nie otworzę okien niebieskich, a nie wyleję na was błogosławieństwa, tak że go nie będziecie mieli gdzie podziać;"},
	{29, "11 I zgromię dla was pożerającego, a nie popsuję wam urodzaju ziemskiego, i nie pochybi winna macica na polu, mówi Pan zastępów."},
	{30, "12 I będą was błogosławić wszyscy narodowie; bo wy będziecie ziemią rozkoszną, mówi Pan zastępów."},
	{31, "13 Zmocniły się przeciwko mnie słowa wasze, mówi Pan; wszakże mówicie: Cóżeśmy mówili przeciwko tobie?"},
	{32, "14 Mówiliście: Próżna to Bogu służyć, a cóż za pożytek, choć będziemy strzedz rozkazania jego, i będziemy smętnie chodzić, bojąc się Pana zastępów?"},
	{33, "15 Owszem, pyszne mamy za błogosławione, ponieważ się ci budują, którzy czynią niezbożność, a którzy kuszą Boga, zachowani bywają."},
	{34, "16 Tedy rozmawiali o tem ci, którzy się boją Pana, każdy z bliźnim swoim. I obaczył Pan, a usłyszał, i napisano księgę pamiątki przed obliczem jego dla bojących się Pana i myślących o imieniu jego."},
	{35, "17 Cić mi będą, mówi Pan zastępów, w dzień, który Ja uczynię, własnością; i zmiłuję się nad nimi, jako się zmiłowywa ojciec nad synem swoim, który mu służy."},
	{36, "18 Tedy się nawrócicie, a obaczycie różność między sprawiedliwym i niezbożnym, między tym, który służy Bogu, i między tym, który mu nie służy."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct pl4 poems[] = {
	{1, "1 Bo oto, przychodzi dzień pałający jako piec, w który wszyscy pyszni, i wszyscy czyniący niezbożność będą jako ciernisko, a popali je ten dzień przyszły, mówi Pan zastępów, tak, że im nie zostawi ani korzenia ani gałązki."},
	{2, "2 Ale wam, którzy się boicie imienia mego, wznijdzie słońce sprawiedliwości, a zdrowie będzie na skrzydłach jego; tedy wychodzić będziecie, i porościecie jako cielęta karmne."},
	{3, "3 A podepczecie niezbożne, tak, że będą jako proch pod nogami waszemi w dzień, który Ja uczynię, mówi Pan zastępów."},
	{4, "4 Pamiętajcież na zakon Mojżesza, sługi mego, któremum rozkazał na Horebie, przedłożyć wszystkiemu Izraelowi ustawy i sądy."},
	{5, "5 Oto, Ja wam poślę Elijasza proroka, pierwej niż przyjdzie on wielki i straszny dzień Pański,"},
	{6, "6 Aby obrócił serca ojców ku synom, a serca synów ku ojcom ich, abym przyszedłszy ziemi przeklęstwem nie skarał."},
	{7, "1 Bo oto, przychodzi dzień pałający jako piec, w który wszyscy pyszni, i wszyscy czyniący niezbożność będą jako ciernisko, a popali je ten dzień przyszły, mówi Pan zastępów, tak, że im nie zostawi ani korzenia ani gałązki."},
	{8, "2 Ale wam, którzy się boicie imienia mego, wznijdzie słońce sprawiedliwości, a zdrowie będzie na skrzydłach jego; tedy wychodzić będziecie, i porościecie jako cielęta karmne."},
	{9, "3 A podepczecie niezbożne, tak, że będą jako proch pod nogami waszemi w dzień, który Ja uczynię, mówi Pan zastępów."},
	{10, "4 Pamiętajcież na zakon Mojżesza, sługi mego, któremum rozkazał na Horebie, przedłożyć wszystkiemu Izraelowi ustawy i sądy."},
	{11, "5 Oto, Ja wam poślę Elijasza proroka, pierwej niż przyjdzie on wielki i straszny dzień Pański,"},
	{12, "6 Aby obrócił serca ojców ku synom, a serca synów ku ojcom ich, abym przyszedłszy ziemi przeklęstwem nie skarał."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};