#include <map>
#include <string>
class Bible8
{
	struct vi1	{ int val; const char *msg; };
	struct vi2	{ int val; const char *msg; };
	struct vi3	{ int val; const char *msg; };
	struct vi4	{ int val; const char *msg; };
public:
static void view1() {
struct vi1 poems[] = {
	{1, "1 Trong đời các quan xét, một cơn đói kém xảy đến trong xứ, có một người từ Bết-lê-hem xứ Giu-đa, đi với vợ và hai con trai mình đến kiều ngụ trong xứ Mô-áp."},
	{2, "2 Người tên là Ê-li-mê-léc, vợ tên là Na-ô-mi, hai con trai tên là Mạc-lôn và Ki-li-ôn, đều là dân Ê-phơ-rát về Bết-lê-hem trong xứ Giu-đa. Ðến xứ Mô-áp, chúng bèn ở tại đó."},
	{3, "3 Ê-li-mê-léc, chồng của Na-ô-mi, qua đời, để nàng lại với hai con trai mình."},
	{4, "4 Chúng nó cưới vợ trong người nữ Mô-áp, người nầy tên là Oït-ba, người kia tên là Ru-tơ; họ ở tại đó độ mười năm."},
	{5, "5 Kế sau, Mạc-lôn và Ki-li-ôn cũng thác, để Na-ô-mi ở lại, không chồng không con."},
	{6, "6 Bấy giờ, Na-ô-mi có nghe nói rằng Ðức Giê-hô-va đã đoái xem dân sự Ngài, và ban lương thực cho, bèn đứng dậy cùng hai dâu mình, đặng từ xứ Mô-áp trở về."},
	{7, "7 Vậy, người lìa bỏ chỗ mình đã ở, cùng hai dâu mình lên đường đặng trở về xứ Giu-đa."},
	{8, "8 Nhưng Na-ô-mi nói cùng hai dâu mình rằng: Mỗi con hãy trở về nhà mẹ mình đi. Cầu Ðức Giê-hô-va lấy ơn đãi hai con như hai con đã đãi các người thác của chúng ta, và đã đãi chính mình ta!"},
	{9, "9 Nguyện Ðức Giê-hô-va ban cho hai con được bình yên ở nơi nhà chồng mới! Rồi người ôm hôn hai nàng, còn hai nàng cất tiếng lên khóc,"},
	{10, "10 và nói rằng: Chúng tôi sẽ đi với mẹ đến quê hương của mẹ."},
	{11, "11 Ma-ô-mi đáp: Hỡi con gái ta, hãy trở về, đi với mẹ làm chi? Mẹ há còn những con trai trong lòng có thế làm chồng chúng con sao?"},
	{12, "12 Hỡi hai con gái ta, hãy trở về đi đi; mẹ già quá mà lấy chồng nữa. Lại dầu bây giờ mẹ nói chiều nay ta sẽ có chồng, dẫu ta sanh đẻ con trai đi nữa,"},
	{13, "13 chúng con há lại muốn đợi cho đến chúng nó khôn lớn, và không lấy chồng khác hay sao? Không, hỡi chúng con, nỗi sầu thảm của mẹ cay đắng muôn phần hơn của chúng con, vì tay của Ðức Giê-hô-va đã giơ ra hại mẹ."},
	{14, "14 Hai nàng lại cất tiếng lên khóc. Ðoạn, Oït-ba hôn và từ biệt bà gia mình; còn Ru-tơ không chịu phân rẽ người."},
	{15, "15 Na-ô-mi nói cùng Ru-tơ rằng: Nầy, chị con đã trở về quê hương và thần của nó; con hãy trở về theo nó đi."},
	{16, "16 Ru-tơ thưa rằng: Xin chớ nài tôi phân rẽ mẹ; vì mẹ đi đâu, tôi sẽ đi đó; mẹ ở nơi nào, tôi sẽ ở nơi đó. Dân sự của mẹ, tức là dân sự của tôi; Ðức Chúa Trời của mẹ, tức là Ðức Chúa Trời của tôi;"},
	{17, "17 mẹ thác nơi nào, tôi muốn thác và được chôn nơi đó. Ví bằng có sự chi khác hơn sự chết phân cách tôi khỏi mẹ, nguyện Ðức Giê-hô-va giáng họa cho tôi!"},
	{18, "18 Na-ô-mi thấy nàng quyết định theo mình, nên không nói nữa."},
	{19, "19 Vậy, hai người đi đến Bết-lê-hem. Khi hai người đến, cả thành đều cảm động. Các người nữ hỏi rằng: Ấy có phải Na-ô-mi chăng?"},
	{20, "20 Người đáp: Chớ gọi tôi là Na-ô-mi, hãy gọi là Ma-ra, vì Ðấng Toàn năng đã đãi tôi cách cay đắng lắm."},
	{21, "21 Tôi đi ra được đầy dẫy, nhưng Ðức Giê-hô-va dắt tôi về tay không. Ðức Giê-hô-va đã giáng họa cho tôi, và Ðấng Toàn năng khiến tôi bị khốn khổ, vậy còn gọi tôi là Na-ô-mi làm chi?"},
	{22, "22 Na-ô-mi và Ru-tơ, người Mô-áp, dâu của Na-ô-mi, từ ở xứ Mô-áp trở về là như vậy. Hai người đến Bết-lê-hem nhằm đầu mùa gặt lúa mạch."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct vi2 poems[] = {
	{1, "1 Na-ô-mi có một người bà con bên chồng, người có quyền thế và giàu, về họ hàng Ê-li-mê-léc; tên người là Bô-ô."},
	{2, "2 Ru-tơ, người Mô-áp, thưa cùng Na-ô-mi rằng: Xin để cho con đi ra ngoài ruộng, đặng mót gié lúa theo sau kẻ sẵn lòng cho con mót. Na-ô-mi đáp: Hỡi con, hãy đi đi."},
	{3, "3 Vậy, Ru-tơ đi theo sau các con gặt mà mót trong một ruộng kia. Té ra may cho nàng gặp sở đất của Bô-ô, về họ hàng Ê-li-mê-léc."},
	{4, "4 Vả, nầy Bô-ô ở Bết-lê-hem đến, nói cùng các con gặt rằng: Nguyện Ðức Giê-hô-va ở cùng các ngươi! Chúng đáp: Nguyện Ðức Giê-hô-va ban phước cho ông!"},
	{5, "5 Ðoạn, Bô-ô nói cùng đầy tớ coi sóc các con gặt rằng: Người gái trẻ này là con của ai?"},
	{6, "6 Người đầy tớ coi sóc các con gặt đáp rằng: Ấy là người gái trẻ Mô-áp ở từ xứ Mô-áp trở về cùng Na-ô-mi;"},
	{7, "7 nàng có nói cùng chúng tôi rằng: Xin cho phép tôi đi sau các con gặt mà mót và lượm nơi giữa các bó lúa. Nàng đã đến từ sáng, đứng mót cho đến bây giờ, trừ ra có nghỉ dưới chòi một chút."},
	{8, "8 Bô-ô nói cùng Ru-tơ rằng: Hỡi con gái ta, hãy nghe, chớ đi mót trong ruộng khác và cũng đừng xa khỏi chỗ này. Hãy ở cùng các tớ gái ta;"},
	{9, "9 Xem người ta gặt trong ruộng ở nơi nào, thì hãy đi theo đó. Ta đã cấm các đầy tớ ta đụng đến nàng. Nếu có khát, hãy đi uống nước nơi bình của chúng sẽ múc cho."},
	{10, "10 Ru-tơ bèn sấp mình xuống dưới chơn người, cúi đầu đến đất, mà thưa rằng: Vì duyên cớ nào tôi được ơn trước mặt ông, đến đỗi ông đoái xem tôi, vốn là một người ngoại bang?"},
	{11, "11 Bô-ô đáp: Người ta có thuật cho ta nghe mọi điều nàng đã làm cho mẹ chồng nàng, từ khi chồng nàng chết, và cách nào nàng đã lìa cha mẹ, xứ sở sanh của nàng, đặng đi đến một dân tộc mà nàng không biết trước."},
	{12, "12 Nguyện Ðức Giê-hô-va báo đáp điều nàng đã làm; nàng đã đến núp dưới cánh Giê-hô-va Ðức Chúa Trời của Y-sơ-ra-ên; cầu xin Ngài thưởng cho nàng cách trọn vẹn."},
	{13, "13 Nàng thưa rằng: Hỡi chúa! chúa đã an ủi và giục lòng kẻ tôi tớ chúa, cầu chúa lấy lòng ân huệ đãi tôi, dẫu rằng tôi không đồng bực cùng các tớ gái chúa!"},
	{14, "14 Trong bữa ăn, Bô-ô lại nói cùng nàng rằng: Hãy lại gần, ăn bánh này và nhúng miếng nàng trong giấm. Vậy, nàng ngồi gần bên các con gặt. Người đưa cho nàng hột mạch rang, nàng ăn cho đến no nê, rồi để dành phần dư lại."},
	{15, "15 Ðoạn, nàng đứng dậy đặng mót. Bô-ô truyền lịnh cho các đầy tớ mình rằng: Hãy để cho nàng mót, dẫu ở giữa các bó lúa, chớ làm xấu hổ nàng."},
	{16, "16 Cũng hãy rút vài gié trong bó lúa, bỏ rớt cho nàng lượm lấy, và chớ trách móc nàng chút nào."},
	{17, "17 Vậy, Ru-tơ mót trong ruộng cho đến chiều tối, đập lúa mình đã mót, hứng được chừng một ê-pha lúa mạch."},
	{18, "18 Nàng vác đem trở vào trong thành; bà gia nàng thấy lúa nàng đã mót. Ðoạn, Ru-tơ trút phần bữa ăn dư ra mà trao cho người."},
	{19, "19 Bà gia nói: Ngày nay, con có mót ở đâu? Con có làm việc ở đâu? Phước cho người đã nhận tiếp con! Nàng nói cho bà gia mình hay mình có làm việc nơi chủ nào. Nàng nói: Người chủ của nơi tôi có làm việc ngày nay, tên là Bô-ô."},
	{20, "20 Na-ô-mi đáp dùng dâu mình rằng: Nguyện Ðức Giê-hô-va ban phước cho người, vì Ngài không dứt làm ơn cho kẻ sống và kẻ chết! Tiếp rằng: Người đó là bà con của chúng ta, vốn là trong những kẻ có quyền chuộc sản nghiệp ta lại"},
	{21, "21 Ru-tơ, người Mô-áp, tiếp rằng: Người cũng có nói cùng tôi rằng: hãy ở cùng các đầy tớ ta cho đến chừng làm xong hết mùa gặt."},
	{22, "22 Na-ô-mi nói cùng Ru-tơ, dâu mình, rằng: Hỡi con gái ta, lấy làm phải cho con đi với các tớ gái người, chớ cho người ta gặp con trong một ruộng khác."},
	{23, "23 Vậy, nàng ở cùng các tớ gái của Bô-ô, đặng mót cho đến hết mùa gặt lúa mạch và mùa gặt lúa mì; nàng ở nhà của bà gia mình."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct vi3 poems[] = {
	{1, "1 Na-ô-mi, bà gia Ru-tơ, nói cùng nàng rằng: Hỡi con gái ta, mẹ phải lo cho con một chỗ an thân, làm cho con được phước hạnh."},
	{2, "2 Vả, con đã theo các tớ gái của Bô-ô, mà người ấy vốn là bà con của chúng ta. Chính đêm nay, người phải đi sảy lúa mạch nơi sân đạp lúa người."},
	{3, "3 Hãy tắm rửa, xức dầu và mặc quần áo, rồi đi xuống sân đạp lúa; nhưng trước khi người chưa ăn uống xong, con chớ làm cho người nhận biết mình."},
	{4, "4 Khi người nằm ngủ, hãy để ý xem người nằm nơi nào; rồi đi dở mềm dưới chơn người và nằm xuống; chính người sẽ nói điều gì con phải làm."},
	{5, "5 Nàng thưa rằng: Mọi điều mẹ đã nói với con, con sẽ làm."},
	{6, "6 Nàng bèn đi xuống sân đạp lúa, và làm theo mọi điều mẹ chồng mình đã dặn."},
	{7, "7 Khi Bô-ô đã ăn uống xong, lòng đương mừng rỡ, đi nằm ở bên một đống lúa mạch kia, nàng bèn đi đến nhẹ nhẹ, dở mền dưới chân người, rồi nằm xuống."},
	{8, "8 Nửa đêm, Bô-ô sợ hãi, nghiêng mình qua, kìa thấy một người nữ nằm tại dưới chơn mình."},
	{9, "9 Bô-ô hỏi: ngươi là ai? Nàng đáp: Tôi là Ru-tơ, kẻ tớ gái ông; xin đắp mền ông trên kẻ tớ gái ông, vì ông có quyền chuộc sản nghiệp tôi."},
	{10, "10 Người nói: Hỡi con gái ta, nguyện Ðức Giê-hô-va ban phước cho con! Việc nhơn từ con làm lần sau này, lại còn trọng hơn lần trước; vì con chẳng có theo những gã trai trẻ, vô luận nghèo hay giàu."},
	{11, "11 Vậy bây giờ, hỡi con gái ta, chớ sợ chi: ta sẽ làm cho nàng mọi điều nàng sẽ nói; vì cả dân sự trong thành ta đều biết rằng nàng là một người đờn bà hiền đức."},
	{12, "12 Bây giờ, điều đó quả thật, ta có quyền chuộc sản nghiệp nàng lại; song có một người khác lại là bà con gần hơn ta."},
	{13, "13 Hãy ở đêm lại đây. Ðến sáng, nếu người kia muốn chuộc sản nghiệp nàng lại, thì người buộc phải làm; còn nếu như người không đẹp lòng chuộc sản nghiệp nàng lại, thì ta chỉ Ðức Giê-hô-va hằng sống thề rằng chắc sẽ chuộc sản nghiệp nàng lại! Hãy ở lại ngủ nơi chơn người cho đến sáng."},
	{14, "14 Vậy, nàng ở ngủ nơi chơn người cho đến sáng, rồi dậy sớm, trước khi hai người có thế nhìn biết nhau; vì Bô-ô nói rằng: Chớ cho người ta biết rằng có một người nữ vào sân đạp lúa."},
	{15, "15 Người lại nói: Hãy giơ ra áo tơi của nàng mặc, rồi nắm nó cho chắc. Nàng bèn giơ ra; người trút cho sáu đấu lúa mạch, biểu nàng đem đi; đoạn người trở vào thành."},
	{16, "16 Ru-tơ trở về nhà bà gia mình; người hỏi: Có phải con gái ta chăng? Ru-tơ thuật cho người mọi điều Bô-ô đã làm cho mình,"},
	{17, "17 rồi tiếp rằng: Người có cho tôi sáu đấu lúa mạch này, mà rằng: Nàng chớ trở về cùng bà gia hai tay không."},
	{18, "18 Na-ô-mi nói rằng: Hỡi con gái ta, hãy ở đây, để đợi xem cho biết công việc xoay thế nào vì nếu ngày nay việc này chưa rồi, thì người ấy chẳng nghỉ đâu."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct vi4 poems[] = {
	{1, "1 Bô-ô đi đến cửa thành và ngồi đó. Bấy giờ, người có quyền chuộc sản nghiệp, mà Bô-ô đã nói đến, vừa đi qua; Bô-ô bèn nói rằng: Hỡi anh, hãy lại gần và ngồi."},
	{2, "2 Bô-ô bèn chọn mười người trong các trưởng lão của thành, mà rằng: Các ông hãy ngồi đây. Các trưởng lão bèn ngồi."},
	{3, "3 Ðoạn, Bô-ô nói cùng người có quyền chuộc sản nghiệp rằng: Na-ô-mi ở Mô-áp trở về, rao bán miếng đất của Ê-li-mê-léc, anh chúng ta."},
	{4, "4 Tôi muốn báo cáo cho anh hay và nói rằng: Tại trước mặt những người ngồi đây và trước mặt các trưởng lão của dân sự tôi, xin hãy mua sản nghiệp đó. Nếu anh muốn chuộc sản nghiệp đó lại, thì hãy làm đi; bằng không, thì hãy tỏ ra cho tôi biết. Vì trước anh chẳng ai có quyền chuộc lại, và sau anh, quyền này trở về tôi. Người đáp: Tôi sẽ chuộc."},
	{5, "5 Bô-ô lại nói: Khi mua ruộng bởi tay Na-ô-mi, anh cũng phải mua luôn bởi Ru-tơ, người Mô-áp, vợ của kẻ chết, để nối danh của kẻ chết cho sản nghiệp người."},
	{6, "6 Người có quyền chuộc lại đáp rằng: Nếu vậy, tôi không chuộc lại được, e phải hủy hoại sản nghiệp của mình; xin hãy lấy về cho anh quyền chuộc lại của tôi, vì tôi không thế chuộc được."},
	{7, "7 Vả, xưa trong Y-sơ-ra-ên khi chuộc lại hay là đổi nhau, muốn làm cho chắc lời giao kết, thì người này phải cổi giầy mình mà trao cho người kia. Nơi Y-sơ-ra-ên, ấy là cách ưng chịu một tờ giao ước."},
	{8, "8 Vậy, người có quyền chuộc lại nói cùng Bô-ô rằng: Anh hãy chuộc sản nghiệp đó. Rồi người cổi giầy mình ra."},
	{9, "9 Bấy giờ, Bô-ô nói cùng các trưởng lão và cả dân sự rằng: Ngày nay, các ông chứng kiến rằng tôi mua nơi tay Na-ô-mi mọi tài sản thuộc về Ê-li-mê-léc, về Ki-lôn, và về Mạc-lôn,"},
	{10, "10 và cũng lấy Ru-tơ, người Mô-áp, vợ của Mạc-lôn, làm vợ tôi, đặng nối danh kẻ chết cho sản nghiệp người; hầu cho danh kẻ chết không mất khỏi giữa anh em mình và khỏi dân sự của thành người; ngày nay các ông làm chứng về điều đó."},
	{11, "11 Cả dân sự hiện ở nơi cửa, và các trưởng lão, đều đáp rằng: Chúng tôi làm chứng điều đó. Nguyện Ðức Giê-hô-va làm cho người nữ vào nhà ngươi giống như Ra-chên và Lê-a, là hai người đã dựng nên nhà Y-sơ-ra-ên! Hãy trở nên cường thạnh nơi Ép-ra-ta và làm cho nổi danh ngươi trong Bết-lê-hem!"},
	{12, "12 Nguyện con cháu ngươi mà Ðức Giê-hô-va sẽ ban cho ngươi bởi người gái trẻ này, làm cho nhà ngươi giống như nhà của Pha-rết, mà Tha-ma đã sanh cho Giu-đa!"},
	{13, "13 Như vậy, Bô-ô lấy Ru-tơ làm vợ, người đi lại cùng nàng; Ðức Giê-hô-va làm cho nàng được thọ thai và sanh một con trai."},
	{14, "14 Các người đờn bà nói cùng Na-ô-mi rằng: Ðáng ngợi khen Ðức Giê-hô-va chẳng từ chối cho bà một người có quyền chuộc lại; nguyện danh của người trở nên sang trọng nơi Y-sơ-ra-ên!"},
	{15, "15 Nó sẽ an ủi lòng bà, dưỡng già bà; vì ấy là dân bà vẫn thương bà, đã sanh nó cho bà; nàng quí cho bà hơn bảy con trai."},
	{16, "16 Na-ô-mi bồng đứa trẻ, để vào lòng mình, và nuôi nó."},
	{17, "17 Những người nữ lân cận đặt tên cho nó là Ô-bết, mà rằng: Một đứa trai đã sanh cho Na-ô-mi. Ô-bết là cha của Y-sai, ông của Ða-vít."},
	{18, "18 Nầy là dòng dõi của Pha-rết: Pha-rết sanh Hết-rôn."},
	{19, "19 Hết-rôn sanh Ram; Ram sanh A-mi-na-đáp;"},
	{20, "20 A-mi-na-đáp sanh Na-ha-sôn; Na-ha-sôn sanh Sanh-môn;"},
	{21, "21 Sanh-môn sanh Bô-ô; Bô-ô sanh Ô-bết;"},
	{22, "22 Ô-bết sanh Y-sai, và Y-sai sanh Ða-vít."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};