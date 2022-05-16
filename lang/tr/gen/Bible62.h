#include <map>
#include <string>
class Bible62
{
	struct tr1	{ int val; const char *msg; };
	struct tr2	{ int val; const char *msg; };
	struct tr3	{ int val; const char *msg; };
	struct tr4	{ int val; const char *msg; };
	struct tr5	{ int val; const char *msg; };
public:
static void view1() {
struct tr1 poems[] = {
	{1, "1 Yaşam Sözüyle ilgili olarak başlangıçtan beri var olanı, işittiğimizi, gözlerimizle gördüğümüzü, seyredip ellerimizle dokunduğumuzu duyuruyoruz."},
	{2, "2 Yaşam açıkça göründü, Onu gördük ve Ona tanıklık ediyoruz. Babayla birlikte olup bize görünmüş olan sonsuz Yaşamı size duyuruyoruz."},
	{3, "3 Evet, sizin de bizlerle paydaşlığınız olsun diye gördüğümüzü, işittiğimizi size duyuruyoruz. Bizim paydaşlığımız da Babayla ve Oğlu İsa Mesihledir."},
	{4, "4 Bunları size, sevincimiz tam olsun diye yazıyoruz."},
	{5, "5 Mesihten işittiğimiz ve şimdi size ilettiğimiz bildiri şudur: Tanrı ışıktır, Onda hiç karanlık yoktur."},
	{6, "6 Onunla paydaşlığımız var deyip de karanlıkta yürürsek, yalan söylemiş, gerçeğe uymamış oluruz."},
	{7, "7 Ama O ışıkta olduğu gibi biz de ışıkta yürürsek, birbirimizle paydaşlığımız olur ve Oğlu İsanın kanı bizi her günahtan arındırır."},
	{8, "8 Günahımız yok dersek, kendimizi aldatırız, içimizde gerçek olmaz."},
	{9, "9 Ama günahlarımızı itiraf edersek, güvenilir ve adil olan Tanrı günahlarımızı bağışlayıp bizi her kötülükten arındıracaktır."},
	{10, "10 Günah işlemedik dersek, O'nu yalancı durumuna düşürmüş oluruz; O'nun sözü içimizde olmaz."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct tr2 poems[] = {
	{1, "1 Yavrularım, bunları size günah işlemeyesiniz diye yazıyorum. Ama içimizden biri günah işlerse, adil olan İsa Mesih bizi Babanın önünde savunur."},
	{2, "2 O günahlarımızı, yalnız bizim günahlarımızı değil, bütün dünyanın günahlarını da bağışlatan kurbandır."},
	{3, "3 Buyruklarını yerine getirirsek, Onu tanıdığımızdan emin olabiliriz."},
	{4, "4 ‹‹Onu tanıyorum›› deyip de buyruklarını yerine getirmeyen yalancıdır, kendisinde gerçek yoktur."},
	{5, "5 Ama Onun sözüne uyan kişinin Tanrıya olan sevgisi gerçekten yetkinleşmiştir. Tanrıda olduğumuzu bununla anlarız."},
	{6, "6 ‹‹Tanrıda yaşıyorum›› diyen, Mesihin yürüdüğü yolda yürümelidir."},
	{7, "7 Sevgili kardeşlerim, size yeni bir buyruk değil, başlangıçtan beri kabul ettiğiniz eski buyruğu yazıyorum. Eski buyruk, işitmiş olduğunuz Tanrı sözüdür."},
	{8, "8 Yine de size yeni bir buyruk yazıyorum. Bunun gerçek olduğu, Mesihte ve sizde görülüyor. Çünkü karanlık geçiyor, gerçek ışık şimdiden parlıyor."},
	{9, "9 Işıkta olduğunu söyleyip de kardeşinden nefret eden hâlâ karanlıktadır."},
	{10, "10 Kardeşini seven ışıkta yaşar ve başkasının tökezlemesine neden olmaz."},
	{11, "11 Ama kardeşinden nefret eden karanlıktadır, karanlıkta yürür ve nereye gittiğini bilmez. Çünkü karanlık gözlerini kör etmiştir."},
	{12, "12 Yavrularım, size yazıyorum,  Çünkü Mesihin adı uğruna günahlarınız bağışlandı."},
	{13, "13 Babalar, size yazıyorum,  Çünkü başlangıçtan beri var Olanı tanıyorsunuz.  Gençler, size yazıyorum,  Çünkü kötü olanı yendiniz.  Çocuklar, size yazdım,  Çünkü Babayı tanıyorsunuz."},
	{14, "14 Babalar, size yazdım,  Çünkü başlangıçtan beri var Olanı tanıyorsunuz.  Gençler, size yazdım,  Çünkü güçlüsünüz,  Tanrının sözü içinizde yaşıyor,  Kötü olanı yendiniz."},
	{15, "15 Dünyayı da dünyaya ait şeyleri de sevmeyin. Dünyayı sevenin Babaya sevgisi yoktur."},
	{16, "16 Çünkü dünyaya ait olan her şey -benliğin tutkuları, gözün tutkuları, maddi yaşamın verdiği gurur- Babadan değil, dünyadandır."},
	{17, "17 Dünya da dünyasal tutkular da geçer, ama Tanrının isteğini yerine getiren sonsuza dek yaşar."},
	{18, "18 Çocuklar, bu son saattir. Mesih Karşıtının geleceğini duydunuz. Nitekim şimdiden çok sayıda Mesih karşıtı türemiş bulunuyor. Son saat olduğunu bundan biliyoruz."},
	{19, "19 Bunlar aramızdan çıktılar, ama bizden değildiler. Bizden olsalardı, bizimle kalırlardı. Ayrılmaları hiçbirinin bizden olmadığını ortaya çıkardı."},
	{20, "20 Sizlerse Kutsal Olan tarafından meshedildiniz; hepiniz bilgilisiniz."},
	{21, "21 Gerçeği bilmediğiniz için değil, gerçeği ve hiçbir yalanın gerçekle ilgisi olmadığını bildiğiniz için size yazıyorum."},
	{22, "22 İsanın Mesih olduğunu yadsıyan yalancı değilse, kim yalancıdır? Babayı ve Oğulu yadsıyan Mesih karşıtıdır."},
	{23, "23 Oğulu yadsıyanda Baba da yoktur; Oğulu açıkça kabul edende Baba da vardır."},
	{24, "24 Başlangıçtan beri işittiğiniz söz içinizde yaşasın. Başlangıçtan beri işittiğiniz söz içinizde yaşarsa, siz de Oğulda ve Babada yaşarsınız."},
	{25, "25 Mesihin bize vaat ettiği budur, yani sonsuz yaşamdır."},
	{26, "26 Bunları sizi saptırmak isteyenlerle ilgili olarak yazıyorum."},
	{27, "27 Size gelince, Ondan aldığınız mesh sizde kalır. Kimsenin size bir şey öğretmesine gerek yoktur. Onun size her şeyi öğreten meshi gerçektir, sahte değildir. Size öğrettiği gibi, Mesihte yaşayın."},
	{28, "28 Evet, yavrularım, şimdi Mesihte yaşayın ki, O göründüğünde cesaretimiz olsun, geldiğinde Onun önünde utanmayalım."},
	{29, "29 O'nun doğru olduğunu bilirseniz, doğru olanı yapan herkesin O'ndan doğduğunu da bilirsiniz."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct tr3 poems[] = {
	{1, "1 Bakın, Baba bizi o kadar çok seviyor ki, bize ‹‹Tanrının çocukları›› deniyor! Gerçekten de öyleyiz. Dünya Babayı tanımadığı için bizi de tanımıyor."},
	{2, "2 Sevgili kardeşlerim, daha şimdiden Tanrının çocuklarıyız, ama ne olacağımız henüz bize gösterilmedi. Ancak, Mesih göründüğü zaman Ona benzer olacağımızı biliyoruz. Çünkü Onu olduğu gibi göreceğiz."},
	{3, "3 Mesihte bu umuda sahip olan, Mesih pak olduğu gibi kendini pak kılar."},
	{4, "4 Günah işleyen, yasaya karşı gelmiş olur. Çünkü günah demek, yasaya karşı gelmek demektir."},
	{5, "5 Mesihin, günahları kaldırmak için ortaya çıktığını ve kendisinde günah olmadığını bilirsiniz."},
	{6, "6 Mesihte yaşayan, günah işlemez. Günah işleyen Onu ne görmüştür, ne de tanımıştır."},
	{7, "7 Yavrularım, kimse sizi aldatmasın. Mesih doğru olduğu gibi, doğru olanı yapan da doğru kişidir."},
	{8, "8 Günah işleyen, İblistendir. Çünkü İblis başlangıçtan beri günah işlemektedir. Tanrının Oğlu, İblisin yaptıklarına son vermek için ortaya çıktı."},
	{9, "9 Tanrıdan doğmuş olan, günah işlemez. Çünkü Tanrının tohumu onda yaşar. Tanrıdan doğmuş olduğu için günah işleyemez."},
	{10, "10 Doğru olanı yapmayan ve kardeşini sevmeyen kişi Tanrıdan değildir. İşte Tanrının çocuklarıyla İblisin çocukları böyle ayırt edilir."},
	{11, "11 Başlangıçtan beri işittiğiniz buyruk şudur: Birbirimizi sevelim."},
	{12, "12 Şeytana ait olup kardeşini öldüren Kayin gibi olmayalım. Kayin kardeşini neden öldürdü? Kendi yaptıkları kötü, kardeşinin yaptıkları doğru olduğu için öldürdü."},
	{13, "13 Kardeşler, dünya sizden nefret ederse şaşmayın."},
	{14, "14 Biz kardeşleri sevdiğimiz için ölümden yaşama geçtiğimizi biliyoruz. Sevmeyen ölümde kalır."},
	{15, "15 Kardeşinden nefret eden katildir. Hiçbir katilin sonsuz yaşama sahip olmadığını bilirsiniz."},
	{16, "16 Sevginin ne olduğunu Mesihin bizim için canını vermesinden anlıyoruz. Bizim de kardeşlerimiz için canımızı vermemiz gerekir."},
	{17, "17 Dünya malına sahip olup da kardeşini ihtiyaç içinde gördüğü halde ondan şefkatini esirgeyen kişide Tanrının sevgisi olabilir mi?"},
	{18, "18 Yavrularım, sözle ve dille değil, eylemle ve içtenlikle sevelim."},
	{19, "19-20 Böylelikle gerçeğe ait olduğumuzu bileceğiz ve yüreğimiz bizi ne zaman suçlarsa, Tanrının önünde onu yatıştıracağız. Çünkü Tanrı yüreğimizden daha büyüktür ve her şeyi bilir."},
	{20, "21-22 Sevgili kardeşlerim, yüreğimiz bizi suçlamazsa, Tanrının önünde cesaretimiz olur, Ondan ne dilersek alırız. Çünkü Onun buyruklarını yerine getiriyor, Onu hoşnut eden şeyleri yapıyoruz."},
	{21, "23 Onun buyruğu Oğlu İsa Mesihin adına inanmamız ve İsanın buyurduğu gibi birbirimizi sevmemizdir."},
	{22, "24 Tanrı'nın buyruklarını yerine getiren Tanrı'da yaşar, Tanrı da o kişide yaşar. İçimizde yaşadığını bize verdiği Ruh sayesinde biliriz."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct tr4 poems[] = {
	{1, "1 Sevgili kardeşlerim, her ruha inanmayın. Tanrıdan olup olmadıklarını anlamak için ruhları sınayın. Çünkü birçok sahte peygamber dünyanın her yanına yayılmış bulunuyor."},
	{2, "2 İsa Mesihin beden alıp dünyaya geldiğini kabul eden her ruh Tanrıdandır. Tanrının Ruhunu bununla tanıyacaksınız."},
	{3, "3 İsayı kabul etmeyen hiçbir ruh Tanrıdan değildir. Böylesi, Mesih Karşıtının ruhudur. Onun geleceğini duydunuz. Zaten o şimdiden dünyadadır."},
	{4, "4 Yavrularım, siz Tanrıdansınız ve sahte peygamberleri yendiniz. Çünkü sizde olan, dünyadakinden üstündür."},
	{5, "5 Sahte peygamberler dünyadandır. Bu nedenle söyledikleri sözler de dünyadandır ve dünya onları dinler."},
	{6, "6 Bizse Tanrıdanız; Tanrıyı tanıyan bizi dinler, Tanrıdan olmayan dinlemez. Gerçeğin Ruhuyla yalan ruhunu böyle ayırt ederiz."},
	{7, "7 Sevgili kardeşlerim, birbirimizi sevelim. Çünkü sevgi Tanrıdandır. Seven herkes Tanrıdan doğmuştur ve Tanrıyı tanır."},
	{8, "8 Sevmeyen kişi Tanrıyı tanımaz. Çünkü Tanrı sevgidir."},
	{9, "9 Tanrı biricik Oğlu aracılığıyla yaşayalım diye Onu dünyaya gönderdi, böylece bizi sevdiğini gösterdi."},
	{10, "10 Tanrıyı biz sevmiş değildik, ama O bizi sevdi ve Oğlunu günahlarımızı bağışlatan kurban olarak dünyaya gönderdi. İşte sevgi budur."},
	{11, "11 Sevgili kardeşlerim, Tanrı bizi bu kadar çok sevdiğine göre biz de birbirimizi sevmeye borçluyuz."},
	{12, "12 Hiç kimse hiçbir zaman Tanrıyı görmüş değildir. Ama birbirimizi seversek, Tanrı içimizde yaşar ve sevgisi içimizde yetkinleşmiş olur."},
	{13, "13 Tanrıda yaşadığımızı ve Onun bizde yaşadığını bize kendi Ruhundan vermiş olmasından anlıyoruz."},
	{14, "14 Babanın Oğlunu dünyanın Kurtarıcısı olarak gönderdiğini gördük, şimdi buna tanıklık ediyoruz."},
	{15, "15 Kim İsanın Tanrının Oğlu olduğunu açıkça kabul ederse, Tanrı onda yaşar, o da Tanrıda yaşar."},
	{16, "16 Tanrının bize olan sevgisini tanıdık ve buna inandık. Tanrı sevgidir. Sevgide yaşayan Tanrıda yaşar, Tanrı da onda yaşar."},
	{17, "17 Yargı gününde cesaretimiz olsun diye sevgi böylelikle içimizde yetkin kılınmıştır. Çünkü Mesih nasılsa, biz de bu dünyada öyleyiz."},
	{18, "18 Sevgide korku yoktur. Tersine, yetkin sevgi korkuyu siler atar. Çünkü korku işkencedir. Korkan kişi sevgide yetkin kılınmamıştır."},
	{19, "19 Bizse seviyoruz, çünkü önce O bizi sevdi."},
	{20, "20 ‹‹Tanrıyı seviyorum›› deyip de kardeşinden nefret eden yalancıdır. Çünkü gördüğü kardeşini sevmeyen, görmediği Tanrıyı sevemez."},
	{21, "21 ‹‹Tanrı'yı seven kardeşini de sevsin›› diyen buyruğu Mesih'ten aldık."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct tr5 poems[] = {
	{1, "1 İsanın Mesih olduğuna inanan herkes Tanrıdan doğmuştur. Babayı seven Ondan doğmuş olanı da sever."},
	{2, "2 Tanrıyı sevip buyruklarını yerine getirmekle, Tanrının çocuklarını sevdiğimizi anlarız."},
	{3, "3 Tanrıyı sevmek Onun buyruklarını yerine getirmek demektir. Onun buyrukları da ağır değildir."},
	{4, "4 Çünkü Tanrıdan doğmuş olan herkes dünyayı yener. Bize dünyaya karşı zafer kazandıran imanımızdır."},
	{5, "5 İsanın Tanrı Oğlu olduğuna iman edenden başka dünyayı yenen kim?"},
	{6, "6 Suyla ve kanla gelen İsa Mesihtir. O yalnız suyla değil, suyla ve kanla gelmiştir. Buna tanıklık eden Ruhtur. Çünkü Ruh gerçektir."},
	{7, "7-8 Şöyle ki, tanıklık edenler üçtür: Ruh, su ve kan. Bunların üçü de uyum içindedir."},
	{8, "9 İnsanların tanıklığını kabul ediyoruz, oysa Tanrının tanıklığı daha üstündür. Çünkü bu, Tanrının tanıklığıdır, kendi Oğluyla ilgili olarak yaptığı tanıklıktır."},
	{9, "10 Tanrının Oğluna inanan, yüreğinde Tanrının tanıklığına sahiptir. Tanrıya inanmayansa Onu yalancı durumuna düşürmüş olur. Çünkü Tanrının Oğluyla ilgili tanıklığına inanmamıştır."},
	{10, "11 Tanıklık da şudur: Tanrı bize sonsuz yaşam verdi, bu yaşam Onun Oğlundadır."},
	{11, "12 Kendisinde Tanrı Oğlu bulunanda yaşam vardır, kendisinde Tanrı Oğlu bulunmayanda yaşam yoktur."},
	{12, "13 Tanrı Oğlunun adına iman eden sizlere, sonsuz yaşama sahip olduğunuzu bilesiniz diye bunları yazdım."},
	{13, "14 Tanrının önünde güvenimiz şu ki, Onun isteğine uygun ne dilersek bizi işitir."},
	{14, "15 Her ne dilersek bizi işittiğini bildiğimize göre, Ondan dilediklerimizi aldığımızı da biliriz."},
	{15, "16 Kardeşinin ölümcül olmayan bir günah işlediğini gören, onun için dua etsin. Duasıyla kardeşine yaşam verecektir. Bu, ölümcül olmayan günah işleyenler için geçerlidir. Ölümcül günah da vardır, bunun için dua etsin demiyorum."},
	{16, "17 Her kötülük günahtır, ama ölümcül olmayan günah da vardır."},
	{17, "18 Tanrıdan doğmuş olanın günah işlemediğini biliriz. Tanrıdan doğmuş olan İsa Mesih onu korur ve kötü olan ona dokunamaz."},
	{18, "19 Biliyoruz ki, biz Tanrıdanız, bütün dünya ise kötü olanın denetimindedir."},
	{19, "20 Yine biliyoruz ki, Tanrının Oğlu gelmiş ve gerçek Olanı tanımamız için bize anlama gücü vermiştir. Biz gerçek Olandayız, Onun Oğlu İsa Mesihteyiz. O gerçek Tanrı ve sonsuz yaşamdır."},
	{20, "21 Yavrularım, kendinizi putlardan koruyun."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};