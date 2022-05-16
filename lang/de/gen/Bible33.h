#include <map>
#include <string>
class Bible33
{
	struct de1	{ int val; const char *msg; };
	struct de2	{ int val; const char *msg; };
	struct de3	{ int val; const char *msg; };
	struct de4	{ int val; const char *msg; };
	struct de5	{ int val; const char *msg; };
	struct de6	{ int val; const char *msg; };
	struct de7	{ int val; const char *msg; };
public:
static void view1() {
struct de1 poems[] = {
	{1, "1 Dies ist das Wort des HERRN, welches an Micha, den Moraschiten, erging in den Tagen Jotams, Ahas' und Hiskias, der Könige von Juda, was er geschaut hat über Samaria und Jerusalem:"},
	{2, "2 Höret zu, ihr Völker alle, merke auf, du Erde und alles, was sie erfüllt! Und Gott, der Herr, sei Zeuge wider euch, der Herr von seinem heiligen Tempel aus!"},
	{3, "3 Denn siehe, der HERR wird ausgehen von seiner Stätte und wird herabkommen und auf die Höhen der Erde treten,"},
	{4, "4 daß die Berge unter ihm zergehen wie Wachs vor dem Feuer und die Täler sich spalten sollen wie Wasser, das den Abhang hinunterstürzt."},
	{5, "5 Das alles wegen der Übertretungen Jakobs und wegen der Sünden des Hauses Israel. Was ist aber die Übertretung Jakobs? Ist es nicht Samaria? Und welches sind die Höhen Judas? Ist es nicht Jerusalem?"},
	{6, "6 Darum will ich Samaria zu einem Steinhaufen im Felde und zu einer Pflanzstätte für Weinberge machen und will seine Steine ins Tal hinunterwerfen und seine Grundfesten bloßlegen;"},
	{7, "7 und alle ihre Götzenbilder sollen zerschlagen und alle ihre Weihgeschenke mit Feuer verbrannt werden; und ich will alle ihre geschnitzten Bilder der Verwüstung preisgeben; denn durch Hurenlohn sind sie zusammengebracht worden, und zu Hurenlohn sollen sie wieder werden!"},
	{8, "8 Darob will ich klagen und heulen, ausgezogen und bloß einhergehen; ich klage wie die Schakale und jammere wie die Strauße."},
	{9, "9 Denn ihre Wunde ist unheilbar; sie erstreckt sich bis nach Juda und reicht bis zu den Toren meines Volkes, bis nach Jerusalem."},
	{10, "10 In Gat erzählt es nicht, in Akko weinet nicht! In Beth-Leaphra wälzt euch im Staube!"},
	{11, "11 Geh nicht hinüber, du Einwohnerschaft von Schaphir, in schimpflicher Blöße! Die Bewohner von Zaanan ziehen nicht aus; die Wehklage von Beth-Ezel nimmt euch die Lust zum Aufenthalt daselbst!"},
	{12, "12 Denn die Einwohnerschaft von Marot wartet auf Gutes, weil Böses herabgekommen ist vom HERRN zum Tore Jerusalems."},
	{13, "13 Spanne die Rosse an den Wagen, du Einwohnerschaft von Lachis! Sie hat der Tochter Zion den Anstoß zur Sünde gegeben: ja, in dir sind die Übertretungen Israels gefunden worden."},
	{14, "14 Darum mußt du Verzicht leisten auf Moreschet-Gat. Die Häuser von Achsib werden den Königen Israels zur Täuschung."},
	{15, "15 Einen neuen Besitzer will ich dir zuführen, Einwohnerschaft von Marescha; bis nach Adullam wird die Herrlichkeit Israels kommen."},
	{16, "16 Mache dich kahl und schere dein Haar wegen der Kinder deiner Wonne! Mache deine Glatze so breit wie diejenige eines Geiers! Denn sie müssen von dir weg in die Gefangenschaft wandern."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct de2 poems[] = {
	{1, "1 Wehe denen, die Schlechtigkeiten ersinnen und Böses vorbereiten auf ihren Lagern! Am Morgen, wenn es licht wird, vollführen sie es, weil es in ihrer Macht steht."},
	{2, "2 Gefällt ihnen ein Feld, so rauben sie es, und wollen sie ein Haus haben, so nehmen sie es weg; sie vergewaltigen den Besitzer samt seinem Hause, den Mann samt seinem Erbteil."},
	{3, "3 Darum spricht der HERR also: Siehe, ich nehme mir Böses vor wider dieses Geschlecht, daraus ihr eure Hälse nicht ziehen könnt, und ihr werdet nicht mehr so hoch erhaben einhergehen; denn die Zeit wird böse sein."},
	{4, "4 An jenem Tage wird man über euch einen Spruch anheben und ein Klagelied anstimmen; man wird klagen und sagen: Wir sind gänzlich verwüstet worden; das Erbteil meines Volkes wechselt den Besitzer! Wie entzieht er es mir! Dem Abtrünnigen verteilt er unser Feld!"},
	{5, "5 Darum wirst du niemand haben, der die Meßschnur wirft bei der Acker-Verlosung, in der Gemeinde des HERRN."},
	{6, "6 \"Träufelt nicht!\" träufeln sie. \"Sie sollen diesen nicht träufeln, sonst hören die Schmähungen nicht auf!\""},
	{7, "7 Du, Haus Jakob, wie du genannt wirst, ist denn der Geist des HERRN verkürzt? Sind seine Handlungen darnach? Sind seine Worte nicht freundlich gegen den, welcher aufrichtig wandelt?"},
	{8, "8 Gestern ist mein Volk als Feind aufgestanden; vom Kleide weg reißen sie den Mantel denen, die sorglos vorüberziehen, dem Kriege abgeneigt."},
	{9, "9 Ihr vertreibet die Frauen meines Volkes aus den Häusern ihrer Wonne; von ihren Kindlein nehmt ihr meinen Schmuck für immer weg."},
	{10, "10 Auf, macht euch davon! Hier ist kein Ruheort mehr; denn die Unreinigkeit richtet Verderben an, und zwar ein gewaltiges Verderben."},
	{11, "11 Wenn einer käme, der dem Wind nachliefe und ein Lügengewebe vortrüge und euch sagte: \"Ich will euch träufeln zum Wein und starkem Getränk!\" das wäre ein Prediger für dieses Volk!"},
	{12, "12 Ich will dich, Jakob, gänzlich sammeln, ich will den Rest Israels zusammenbringen, will sie machen wie die Schafe in der Hürde, wie eine Herde auf ihrer Trift, daß es von Menschen wimmeln soll."},
	{13, "13 Der Durchbrecher wird vor ihnen hinaufziehen; sie werden durchbrechen und zum Tore ein und ausziehen; ihr König wird vor ihnen hergehen und der HERR an ihrer Spitze."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct de3 poems[] = {
	{1, "1 Und ich sprach: Höret doch, ihr Häupter von Jakob und ihr Fürsten des Hauses Israel! Ist es nicht an euch, das Recht zu kennen?"},
	{2, "2 Und doch hasset ihr das Gute und liebet das Böse; zieht ihnen die Haut ab und das Fleisch von den Knochen!"},
	{3, "3 Und wenn sie dann das Fleisch meines Volkes gefressen und ihnen die Haut abgezogen, ihnen die Knochen zerbrochen und sie in Stücke zerschnitten haben, wie man sie in einen Topf tut, und wie Fleisch, das man in den Kessel legt,"},
	{4, "4 dann schreien sie zum HERRN; aber er antwortet ihnen nicht, sondern verbirgt sein Angesicht vor ihnen zu jener Zeit, weil sie so übelgetan haben."},
	{5, "5 So spricht der HERR wider die Propheten, die mein Volk irreführen, die \"Friede\" rufen, wenn ihre Zähne etwas zu beißen haben, aber dem den heiligen Krieg erklären, der ihnen nichts ins Maul gibt."},
	{6, "6 Darum wird Nacht über euch kommen, ohne Gesichte, und Finsternis, daß ihr nicht wahrsagen könnt; und die Sonne wird über den Propheten untergehen und der Tag über ihnen dunkel werden;"},
	{7, "7 daß die Seher zuschanden werden und die Wahrsager schamrot dastehen; sie werden alle ihren Bart verhüllen, weil sie ohne göttliche Antwort sind."},
	{8, "8 Ich aber bin erfüllt mit Kraft, mit dem Geiste des HERRN, mit Recht und Mut, um Jakob sein Übertreten und Israel seine Sünde anzuzeigen."},
	{9, "9 Höret doch dieses, ihr Häupter des Hauses Jakob und ihr Fürsten des Hauses Israel, die ihr das Gericht verabscheut und jede gerechte Sache verkehrt;"},
	{10, "10 die ihr Zion mit Blutschulden bauet und Jerusalem mit Frevel!"},
	{11, "11 Ihre Häupter sprechen Recht um Geschenke, ihre Priester lehren um Lohn, und ihre Propheten wahrsagen um Geld; und dabei stützen sie sich auf den HERRN und sagen: \"Ist nicht der HERR unter uns? Es kann uns kein Übel begegnen!\""},
	{12, "12 Darum soll um euretwillen Zion wie ein Feld gepflügt und Jerusalem zu einem Steinhaufen werden und der Tempelberg zu einem bewaldeten Hügel!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct de4 poems[] = {
	{1, "1 Es wird aber in den letzten Tagen geschehen, daß der Berg des Hauses des HERRN festgegründet an der Spitze der Berge stehen und über alle Höhen erhaben sein wird."},
	{2, "2 Und Völker werden ihm zuströmen, und viele Nationen werden hingehen und sagen: \"Kommt, laßt uns wallen zum Berge des HERRN, zum Hause des Gottes Jakobs, daß er uns über seine Wege belehre und wir auf seinen Pfaden wandeln!\" Denn von Zion wird die Lehre ausgehen und des HERRN Wort von Jerusalem."},
	{3, "3 Und er wird Schiedsrichter sein zwischen großen Völkern und zurechtweisen starke Nationen, die weit weg wohnen, also daß sie ihre Schwerter zu Pflugscharen und ihre Spieße zu Rebmessern verschmieden; kein Volk wird wider das andere ein Schwert erheben, und sie werden nicht mehr den Krieg erlernen;"},
	{4, "4 sondern jedermann wird unter seinem Weinstock und unter seinem Feigenbaum sitzen, und niemand wird ihn stören; denn der Mund des HERRN hat es geredet!"},
	{5, "5 Denn alle Völker mögen wandeln, ein jedes im Namen seines Gottes; wir aber wollen wandeln im Namen des HERRN, unsres Gottes, immer und ewiglich!"},
	{6, "6 An jenem Tage, spricht der HERR, will ich das Hinkende sammeln, und das Verstoßene zusammenbringen und die, denen ich Unheil zugefügt habe;"},
	{7, "7 und will aus dem Hinkenden einen Überrest machen und aus dem, was weit entfernt war, ein starkes Volk; und der HERR wird über sie herrschen auf dem Berge Zion von nun an bis in Ewigkeit."},
	{8, "8 Und du, Herdenturm, Hügel der Tochter Zion, bis zu dir wird reichen und zu dir wird zurückkehren die frühere Herrschaft, das Königtum der Tochter Jerusalem!"},
	{9, "9 Was schreist du aber jetzt so laut? Ist kein König bei dir? Sind deine Ratsherren umgekommen, daß dich Wehen ergriffen haben wie eine Gebärende?"},
	{10, "10 Zittere und stöhne, du Tochter Zion, wie eine Gebärende; denn nun mußt du zur Stadt hinaus und auf dem Felde wohnen und nach Babel ziehen! Dort sollst du gerettet werden, dort wird dich der HERR erlösen aus der Hand deiner Feinde."},
	{11, "11 Denn jetzt haben sich viele Völker wider dich versammelt, welche sagen: \"Sie soll entweiht werden, damit unser Auge seine Lust an Zion sehe!\""},
	{12, "12 Sie wissen aber nicht, was der HERR im Sinne hat, und merken seinen Ratschluß nicht, daß er sie zusammengebracht hat wie Garben auf der Tenne."},
	{13, "13 Mache dich auf und drisch, du Tochter Zion! Denn ich mache dir eiserne Hörner und eherne Hufe, daß du große Völker zermalmest und ihren Raub dem HERRN weihest und ihren Reichtum dem Beherrscher der ganzen Erde."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct de5 poems[] = {
	{1, "1 (4-14) Nun schließe deine Reihen, du Schar! Man errichtet Bollwerke gegen uns; mit der Rute wollen sie den Richter Israels auf den Backen schlagen."},
	{2, "2 (5-1) Und du, Bethlehem-Ephrata, du bist zwar klein, um unter den Hauptorten Judas zu sein; aber aus dir soll mir hervorgehen, der Herrscher über Israel werden soll, dessen Ursprung von Anfang, von Ewigkeit her gewesen ist."},
	{3, "3 (5-2) Darum gibt er sie hin bis zu der Zeit, da die, so gebären soll, wird geboren haben und der Überrest seiner Brüder zu den Kindern Israel zurückkehren wird."},
	{4, "4 (5-3) Und er wird auftreten und sie weiden in der Kraft des HERRN und in der Hoheit des Namens des HERRN, seines Gottes; und sie werden sicher wohnen; denn er wird groß sein bis an die Enden der Erde."},
	{5, "5 (5-4) Und dieser wird der Friede sein! Wenn Assur in unser Land kommt und unsere Paläste betritt, so werden wir sieben Hirten und acht Menschenfürsten gegen ihn aufstellen;"},
	{6, "6 (5-5) die werden das Land Assur mit dem Schwerte abweiden und das Land Nimrod mit ihren bloßen Waffen; und so wird er uns von dem Assyrer erretten, wenn dieser in unser Land kommt und unser Gebiet betritt."},
	{7, "7 (5-6) Und es wird der Überrest Jakobs inmitten vieler Völker sein wie ein Tau vom HERRN, wie Regenschauer auf das Gras, das auf niemand wartet und nicht auf Menschenkinder hofft."},
	{8, "8 (5-7) Und der Überrest Jakobs wird unter den Nationen inmitten vieler Völker sein wie ein Löwe unter den Tieren des Waldes, wie ein junger Leu unter den Schafherden, der, wenn er hindurchgeht, niedertritt und zerreißt, daß niemand retten kann."},
	{9, "9 (5-8) Deine Hand wird siegen über deine Widersacher, und alle deine Feinde sollen ausgerottet werden!"},
	{10, "10 (5-9) An jenem Tage soll es geschehen, spricht der HERR, daß ich deine Rosse aus deiner Mitte ausrotten und deine Wagen abschaffen werde;"},
	{11, "11 (5-10) und ich will die Städte deines Landes ausrotten und alle deine Festungen schleifen."},
	{12, "12 (5-11) Ich will auch die Zauberdinge aus deiner Hand ausrotten, und du sollst keine Wolkendeuter mehr haben."},
	{13, "13 (5-12) Auch deine Bilder und deine geschnitzten Bildsäulen will ich aus deiner Mitte vertilgen, daß du das Werk deiner Hände nicht mehr anbeten sollst."},
	{14, "14 (5-13) Dazu will ich die Ascheren in deiner Mitte ausreißen und deine Götzen vernichten."},
	{15, "15 (5-14) Also will ich mit Zorn und Grimm Rache üben an den Nationen, die nicht hören wollten."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct de6 poems[] = {
	{1, "1 Höret doch, was der HERR spricht: Mache dich auf und rechte vor den Bergen und laß die Hügel deine Stimme hören!"},
	{2, "2 Höret doch, ihr Berge, den Rechtsstreit des HERRN und merket auf, ihr dauerhaften Grundfesten der Erde! Denn der HERR hat einen Rechtsstreit mit seinem Volk, und mit Israel will er sich auseinandersetzen."},
	{3, "3 Mein Volk, was habe ich dir getan, und womit habe ich dich beleidigt? Lege Zeugnis ab wider mich!"},
	{4, "4 Habe ich dich doch aus Ägyptenland heraufgeführt und dich aus dem Diensthause erlöst und Mose, Aaron und Mirjam vor dir her gesandt!"},
	{5, "5 Mein Volk, bedenke doch, was Balak, der Moabiterkönig, vorhatte, und was Bileam, der Sohn Beors, ihm antwortete, und was geschah von Sittim bis Gilgal, damit du erkennest die Wohltaten des HERRN!"},
	{6, "6 Womit soll ich vor den HERRN treten, mich beugen vor dem hohen Gott? Soll ich mit Brandopfern, mit einjährigen Kälbern vor ihn treten?"},
	{7, "7 Hat der HERR Wohlgefallen an Tausenden von Widdern oder an unzähligen Strömen Öl? Soll ich meinen Erstgeborenen geben für meine Übertretung, die Frucht meines Leibes für die Sünde meiner Seele?"},
	{8, "8 Es ist dir gesagt, Mensch, was gut ist und was der HERR von dir fordert: was anders als Recht tun, Liebe üben und demütig wandeln mit deinem Gott?"},
	{9, "9 Die Stimme des HERRN ruft der Stadt zu, und weise ist, wer deinen Namen fürchtet. Höret die Strafe und wer sie festgesetzt hat!"},
	{10, "10 Bleibt noch unrecht Gut in des Gottlosen Haus und das verfluchte, magere Epha?"},
	{11, "11 Kann ich lauter sein bei unrechter Waage und wenn falsche Gewichtsteine im Beutel sind?"},
	{12, "12 Weil denn ihre Reichen so gewalttätig sind und ihre Einwohner Lügen reden und falsche Zungen in ihrem Munde haben,"},
	{13, "13 so will auch ich dich krank schlagen, dich verwüsten um deiner Sünden willen:"},
	{14, "14 Du wirst essen und doch nicht satt werden, sondern dein Hunger bleibt in deinem Innern. Schaffst du etwas beiseite, so kannst du es doch nicht retten, und was du rettest, will ich dem Schwerte preisgeben."},
	{15, "15 Du wirst säen, aber nicht ernten; du wirst Oliven pressen, aber dich nicht mit Öl salben, Most keltern, aber keinen Wein trinken!"},
	{16, "16 Denn man beobachtet die Satzungen Omris und handelt genau so wie das Haus Ahabs und wandelt nach ihrem Rat, so daß ich dich zum Entsetzen mache und deine Bewohner zum Gespött und ihr die Schmach der Völker tragen sollt."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct de7 poems[] = {
	{1, "1 Wehe mir, denn es geht mir wie denen, welche Obst einsammeln, welche im Herbst Nachlese halten: Keine Traube mehr gibt es zu essen, keine Frühfeige, nach welcher doch meine Seele verlangt!"},
	{2, "2 Der Fromme ist aus dem Lande verschwunden, und es ist kein Redlicher mehr unter den Menschen. Sie lauern alle auf Blut, einer legt dem andern Schlingen."},
	{3, "3 Zum Bösen brauchen sie beide Hände, um es ja recht gut zu machen; der Fürst fordert, und dem Richter ist es um den Lohn zu tun; der Große sagt, wie er es haben will, und darnach drehen sie's!"},
	{4, "4 Der Beste von ihnen ist wie ein Dorn, der Redlichste schlimmer als eine Dornhecke. Der Tag deiner Wächter, deiner Heimsuchung, ist da; jetzt wird ihre Bestürzung kommen!"},
	{5, "5 Verlasset euch nicht auf den Nächsten, vertrauet dem Verwandten nicht, bewahre die Pforte deines Mundes vor der, die in deinen Armen liegt!"},
	{6, "6 Denn der Sohn verachtet den Vater, die Tochter erhebt sich wider die Mutter, die Sohnsfrau wider ihre Schwieger; des Menschen Feinde sind seine Hausgenossen!"},
	{7, "7 Ich aber will nach dem HERRN ausschauen, will harren auf den Gott meines Heils; mein Gott wird mich hören."},
	{8, "8 Freue dich nicht über mich, meine Feindin, denn ob ich auch gefallen bin, so stehe ich wieder auf; ob ich auch in der Finsternis sitze, so ist doch der HERR mein Licht!"},
	{9, "9 Des HERRN Zorn will ich tragen (denn ich habe wider ihn gesündigt), bis er meine Sache ausführt und mir Recht schafft; er wird mich ans Licht herausführen, daß ich mit Lust seine Gerechtigkeit schaue."},
	{10, "10 Wenn meine Feindin das sieht, wird Schamröte sie bedecken, sie, die zu mir sagt: \"Wo ist der HERR, dein Gott?\" Meine Augen werden es mitansehen, nun wird sie zertreten werden wie Kot auf der Gasse."},
	{11, "11 Am Tage, da man deine Mauern baut, an dem Tage wird deine Grenze weit werden."},
	{12, "12 An jenem Tage wird man zu dir kommen von Assur und von den Städten Ägyptens und von Ägypten bis zum Euphratstrom, von Meer zu Meer und von Berg zu Berg."},
	{13, "13 Aber die Erde wird zur Wüste werden um ihrer Bewohner willen, infolge ihrer Übeltaten."},
	{14, "14 Weide dein Volk mit deinem Stabe, die Schafe deines Erbteils, welche abgesondert wohnen im Walde, mitten auf dem Karmel; laß sie in Basan und Gilead weiden wie in uralter Zeit!"},
	{15, "15 Ich will sie Wunder sehen lassen wie zu der Zeit, als du aus Ägypten zogst!"},
	{16, "16 Die Heiden werden es sehen und zuschanden werden trotz aller ihrer Macht; sie werden ihre Hand auf den Mund legen, und ihre Ohren werden taub sein."},
	{17, "17 Sie werden Staub lecken wie die Schlangen, wie Erdenwürmer zitternd aus ihren Löchern hervorkriechen; angstvoll werden sie zu dem HERRN, unserm Gott, nahen und sich fürchten vor dir."},
	{18, "18 Wer ist, o Gott, wie du, der die Sünde vergibt und dem Rest seines Erbteils die Übertretung erläßt, der seinen Zorn nicht allzeit festhält, sondern Lust an der Gnade hat?"},
	{19, "19 Er wird sich unser wieder erbarmen, unsere Bosheit bezwingen. Und du wirst alle ihre Sünden in die Tiefe des Meeres werfen!"},
	{20, "20 Du wirst Jakob treulich geben und Abraham gnädig halten, was du unsern Vätern vorlängst geschworen hast. "},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};