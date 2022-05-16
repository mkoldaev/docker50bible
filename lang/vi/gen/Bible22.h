#include <map>
#include <string>
class Bible22
{
	struct vi1	{ int val; const char *msg; };
	struct vi2	{ int val; const char *msg; };
	struct vi3	{ int val; const char *msg; };
	struct vi4	{ int val; const char *msg; };
	struct vi5	{ int val; const char *msg; };
	struct vi6	{ int val; const char *msg; };
	struct vi7	{ int val; const char *msg; };
	struct vi8	{ int val; const char *msg; };
public:
static void view1() {
struct vi1 poems[] = {
	{1, "1 Nhã ca trong các bài ca, mà Sa-lô-môn đã làm."},
	{2, "2 Nguyện người hôn tôi bằng cái hôn của miệng người. Vì ái tình chàng ngon hơn rượu."},
	{3, "3 Dầu chàng có mùi thơm tho; Danh chàng thơm như dầu đổ ra; Bởi cớ ấy các gái đồng trinh yêu mến chàng."},
	{4, "4 Hãy kéo tôi; chúng tôi sẽ chạy theo chàng, Vua đã dẫn tôi vào phòng Ngài. Chúng tôi sẽ vui mừng và khoái lạc nơi chàng; Chúng tôi sẽ nói đến ái tình chàng hơn rượu. Các gái đồng trinh yêu mến chàng cách chánh trực."},
	{5, "5 Hỡi các con gái Giê-ru-sa-lem, tôi đen, song xinh đẹp, Như các trại Kê-đa, như màn cháng của Sa-lô-môn."},
	{6, "6 Chớ dòm xem tôi, bởi vì tôi đen, Mặt trời đã giọi nám tôi. Các con trai của mẹ tôi giận tôi, Ðã đặt tôi coi giữ vườn nho; Còn vườn nho riêng của tôi, tôi không coi giữ."},
	{7, "7 Hỡi người mà lòng tôi yêu mến, hãy tỏ cho tôi biết. Chàng chăn bầy ở đâu, Ban trưa cho nó nằm nghỉ tại nơi nào; Vì cớ sao tôi phải như một người nữ che mặt Ở bên bầy của các bạn chàng?"},
	{8, "8 Hỡi người đẹp hơn hết trong các người nữ, Nếu ngươi chẳng biết, hãy ra theo dấu của bầy, Và chăn các dê con mình gần bên trại kẻ chăn chiên."},
	{9, "9 Hỡi bạn tình ta, ta sánh mình như ngựa cái của xe Pha-ra-ôn."},
	{10, "10 Ðôi má mình đẹp với đồ trang sức; Cổ mình xinh với hột trân châu."},
	{11, "11 Chúng tôi sẽ làm cho mình chuyền vàng có vảy bạc."},
	{12, "12 Trong khi vua ngự bàn ăn, Cam tòng hương tôi xông mùi thơm nó ra."},
	{13, "13 Lương nhơn tôi giống như bó hoa một dược cho tôi. Nằm ở giữa nương long tôi."},
	{14, "14 Lương nhơn tôi giống như một chùm hoa phụng tiên cho tôi. Trong vườn nho Eân-Ghê-đi."},
	{15, "15 Hỡi bạn tình ta, mình thanh lịch thay, mình thanh lịch thay! Con mắt mình như mắt của bò câu."},
	{16, "16 Hỡi lương nhơn tôi, chàng là xinh tốt; Thật, hợp ý thay! Lại giường của chúng ta xanh xanh."},
	{17, "17 Rường nhà chúng ta bằng gổ hương nam; Ván lá mái chúng ta bằng cây tòng."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct vi2 poems[] = {
	{1, "1 Ta là hoa tường vi của Sa-rôn, Bông huệ của trũng."},
	{2, "2 Bạn tình ta ở giữa đám con gái Như bông huệ ở giữa gai gốc."},
	{3, "3 Lương nhơn tôi ở giữa đám con trai Như cây bình bát ở giữa những cây rừng. Tôi vui lòng ngồi dưới bóng người; Trái người ngọt ngào cho ổ gà tôi."},
	{4, "4 Người đưa tôi vào phòng yến tiệc, Ngọn cờ người phất trên tôi ấy là ái tình."},
	{5, "5 Hãy lấy bánh nho nâng đỡ lòng tôi; Dùng trái bình bát bổ sức tôi lại; Vì tôi có bịnh bởi ái tình."},
	{6, "6 Tay tả người kê dưới đầu tôi, Còn tay hữu người ôm lấy tôi."},
	{7, "7 Hỡi các con gái Giê-ru-sa-lem, ta ép nài các ngươi Bởi những con hoàng dương hay là con nai đồng nội, Chớ kinh động, chớ làm tỉnh thức ái tình ta Cho đến khi nó muốn."},
	{8, "8 Ấy là tiếng của lương nhơn tôi! Kìa, người đến, nhảy qua các núi, Vượt qua các gò."},
	{9, "9 Lương nhơn tôi giống như con hoàng dương hay là con nai tơ. Kìa, người đứng sau tường chúng tôi, Xem ngang qua cửa sổ, Ngó ngang qua chấn song."},
	{10, "10 Lương nhơn tôi nói chuyện với tôi rằng: Hỡi bạn tình ta, người đẹp của ta ơi, hãy chổi dậy và đến."},
	{11, "11 Vì kìa, mùa đông đã qua, Mưa đã dứt hết rồi;"},
	{12, "12 Bóng hoa nở ra trên đất; Màu hát xướng đã đến nơi, Và tiếng chim cu nghe trong xứ;"},
	{13, "13 Cây vả đương chín trái xanh tươi của nó, Và nho trổ hoa nức mùi hương. Hỡi bạn tình ta, người đẹp của ta ơi, hãy chổi dậy và đến."},
	{14, "14 Hỡi chim bò câu ta trong hóc đá, Tại chốn đụt của nơi hê hẩm, Hãy tỏ cho ta xem mặt mũi mình, Cho ta nghe tiếng mình; Vì tiếng mình êm dịu. mặt mũi mình có duyên."},
	{15, "15 Hãy bắt cho chúng tôi những con chồn, Những con chồn nhỏ phá hại vườn nho; Vì vườn nho chúng tôi đương trổ bông."},
	{16, "16 Lương nhơn tôi thuộc về tôi, và tôi thuộc về người; Người chăn bầy mình giữa đám bông huệ,"},
	{17, "17 Cho đến hừng đông lố ra, Và bóng tối tan đi. Hỡi lương nhơn tôi, hãy trở về, Khá giống như con hoàng dương hay là con nai tơ Trên hòn núi Bê-thẹt."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct vi3 poems[] = {
	{1, "1 Ban đêm tại trên giường mình, tôi tình người mà lòng tôi yêu dấu, Tôi tìm kiếm người mà không gặp."},
	{2, "2 Tôi nói: Ta sẽ chổi dậy bây giờ, dạo quanh thành, Trải qua các đường phố, các ngã ba, Ðặng tìm người mà lòng tôi yêu dấu. Tôi Tìm kiếm người, nhưng không gặp."},
	{3, "3 những kẻ canh tuần vòng quanh thành có gặp tôi. Tôi hỏi rằng: Các ngươi có thấy người mà lòng ta yêu mến chăng!"},
	{4, "4 Tôi vừa đi khỏi chúng xa xa, Thì gặp người mà lòng tôi yêu mến; Bèn nắm lấy người, không khứng buông ra, Cho đến khi đưa người về nhà mẹ tôi, Vào phòng của người đã thai dựng tôi."},
	{5, "5 Hỡi các con gái Giê-ru-sa-lem, ta ép nài các ngươi bởi những hoàng dương hay là con nai đồng nội, Chớ kinh động, chớ làm tỉnh thức ái tình ta Cho đến khi nó muốn."},
	{6, "6 người kia là ai, ở từ đồng vắng đi lên, Giống như trụ khói, xông một dược và nhũ hương, với đủ thứ hương của con buôn?"},
	{7, "7 Kìa, kiệu của Sa-lô-môn, Có sáu mươi dõng sĩ trong bọn dõng sĩ Y-sơ-ra-ên Vây chung quanh nó;"},
	{8, "8 Thảy đều cầm gươm và thạo đánh giặc; Ai nấy đều có gươm ở nơi đùi mình, Vì sợ hãi ban đêm."},
	{9, "9 Vua Sa-lô-môn làm cho mình một cái kiệu bằng gỗ Li-ban."},
	{10, "10 Người làm các trụ nó bằng bạc, Nơi dựa lưng bằng vàng, Chỗ ngồi bằng vật màu điều, Còn ở giữa lót bằng ái tình của các con gái Giê-ru-sa-lem."},
	{11, "11 Hỡi các con gái Si-ôn, hãy ra xem vua Sa-lô-môn Ðội mão triều thiên mà mẹ người đã đội trên đầu người Trong ngày định thân, trong ngày lòng người vui vẻ."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct vi4 poems[] = {
	{1, "1 Hỡi bạn tình ta, nầy mình đẹp đẽ thay, mình đẹp đẽ thay! Mắt mình trong lúp giống như mắt bò câu; Tóc mình khác nào bầy dê nằm nơi triền núi Ga-la-át."},
	{2, "2 Răng mình như thể bầy chiên mới hớt lông, Từ ao tắm rửa đi lên, Thảy đều sanh đôi, không một con nào son sẻ."},
	{3, "3 Môi mình tợ sợi chỉ hồng, Miệng mình có duyên thay; Má mình trong lúp tợ như nửa quả lựu."},
	{4, "4 Cổ mình như tháp Ða-vít, xây cất để treo binh khí; Ngàn cái khiên của tay anh hùng."},
	{5, "5 Hai nương long mình như cặp con sanh đôi của hoàng dương, Thả ăn giữa đám hoa huệ."},
	{6, "6 Ta sẽ đi lên núi một dược, Ðến đồi nhũ hương, Ở cho đến khi hừng đông lố ra, Và bóng tối tan đi."},
	{7, "7 Hỡi bạn ta, mình vốn xinh đẹp mọi bề, Nơi mình chẳng có tì vít gì cả."},
	{8, "8 Hỡi tân phụ ta, hãy cùng ta đến từ Li-ban, Hãy cùng ta đến từ Li-ban; Khá nhìn xem từ chót A-ma-na, Từ đỉnh Sa-nia và Hẹt-môn, Từ hang sư tử, Từ núi con beo."},
	{9, "9 Hỡi em gái ta, tân phụ ta ơi, mình đã cướp lấy lòng ta, Vì một cái liếc mắt, vì một vòng trân châu nơi cổ mình, mình đã cướp lấy lòng ta."},
	{10, "10 Hỡi em gái ta, tân phụ ta ơi, ái tình mình đẹp là dường nào! ái tình mình ngon hơn rượu, Và mùi thơm của dầu mình tốt hơn các thức hương!"},
	{11, "11 Hỡi tân phụ ta, môi mình nhỏ mật ong xuống, Dưới lưỡi mình có mật ong và sữa; Hơi thơm của quần áo mình như hơi thơm của Li-ban."},
	{12, "12 Em gái ta, tân phụ ta là vườn đóng kín, Là nguồn nước khóa lại, là suối niêm phong."},
	{13, "13 Ðám cây mình là vườn địa đàng, Có thạch lựu và trái ngon, Hoa phụng tiên và cây Cam tòng."},
	{14, "14 Cam tòng và hồng hoa, xương bồ và nhục quế, Cùng mọi thức cây có mùi thơm, Một dược, lư hội với các hương liệu có danh."},
	{15, "15 Mình là mạch nước trong vườn, Là giếng nước sống, là dòng nước chảy từ Li-ban!"},
	{16, "16 Hỡi gió bắc, hãy nổi dậy, hỡi gió nam, hãy thổi đến; Hãy thổi trong vườn tôi, hầu cho các mùi thơm nó bay ra! Nguyện lương nhơn tôi vào trong vườn người, Và ăn trái ngon ngọt của người!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view5() {
struct vi5 poems[] = {
	{1, "1 Hỡi em gái ta, tân phụ ta ơi, ta đã vào trong vườn ta rồi! Ta có hái một dược và hương liệu ta, Aên tàng mật ong với mật ong ta, Uống rượu với sữa ta. Hỡi các bạn, hãy ăn: hỡi các ái hữu, khá uống cho nhiều!"},
	{2, "2 Tôi ngủ, nhưng lòng tôi tỉnh thức. Ấy là tiếng của lương nhơn tôi gõ cửa, mà rằng: Hỡi em gái ta, bạn tình ta, chim bò câu ta, kẻ toàn hảo của ta ơi, hãy mở cửa cho ta! Vì đầu ta đầy sương móc, Lọn tóc ta thấm giọt ban đêm."},
	{3, "3 Tôi đã cổi áo ngoài rồi, làm sao mặc nó lại? Tôi đã rửa chơn rồi, lẽ nào làm lấm lại?"},
	{4, "4 Lương nhơn tôi thò tay vào lỗ cửa, Lòng dạ tôi cảm động vì cớ người."},
	{5, "5 Tôi bèn chổi dậy đặng mở cửa cho lương nhơn tôi; Tay tôi nhỏ giọt một dược, Và ngón tay tôi chảy một dược ròng trên nạm chốt cửa."},
	{6, "6 Tôi mở cửa cho lương nhơn tôi, Nhưng người đã lánh đi khỏi rồi. Ðương khi người nói lòng tôi mất vía. Tôi tìm kiếm người, nhưng không có gặp; Tôi gọi người, song người chẳng đáp."},
	{7, "7 Kẻ canh tuần quanh thành gặp tôi, Ðánh tôi, và làm tôi bị thương; Các kẻ canh giữ vách thành cất lấy lúp khỏi tôi."},
	{8, "8 Hỡi các con gái Giê-ru-sa-lem, ta ép nài các ngươi, Nếu gặp lương nhơn ta, khá nói với người rằng Ta có bịnh vì ái tình."},
	{9, "9 Hỡi người xinh đẹp hơn hết trong các người nữ, lương nhơn của chị có gì hơn lương nhơn khác? Lương nhơn của chị có gì hơn lương nhơn khác? Mà chị ép nài chúng tôi dường ấy?"},
	{10, "10 Lương nhơn tôi trắng và đỏ, Ðệ nhứt trong muôn người."},
	{11, "11 Ðầu người bằng vàng thật ròng; Lọn tóc người quăn, và đen như quạ."},
	{12, "12 Mắt người như chim bò câu gần suối nước, Tắm sạch trong sửa, được nhận khảm kỹ càng."},
	{13, "13 Gò má người như vuông đất hương hoa, Tợ khóm cỏ thơm ngát; Môi người tỉ như hoa huệ ướm chảy một dược ròng."},
	{14, "14 Tay người như ống tròn vàng có nhận huỳnh ngọc: Thân mình người khác nào ngà bóng láng cẩn ngọc xanh."},
	{15, "15 Hai chơn người giống trụ cẩm thạch trắng, Ðể trên tánh vàng ròng; Tướng mạo người tợ như nói Li-ban, xinh tốt như cây hương nam,"},
	{16, "16 Miệng người rất êm dịu; Thật, toàn thể cách người đáng yêu đương. Hỡi các con gái Giê-ru-sa-lem, lương nhơn tôi như vậy, Bạn tình tôi dường ấy!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view6() {
struct vi6 poems[] = {
	{1, "1 Hỡi người xinh đẹp hơn hết trong các người nữ, lương nhơn của chị đi đâu? Lương nhơn của chị xây về hướng nào? Chúng tôi sẽ cùng đi tìm người với chị."},
	{2, "2 Lương nhơn tôi đi xuống vườn người, Nơi vuông đất hương hoa, Ðặng chăn trong vườn, Và bẻ hoa huệ."},
	{3, "3 Tôi thuộc về lương nhơn tôi, Và lương nhơn tôi thuộc về tôi; Người chăn bầy mình giữa đám hoa huệ."},
	{4, "4 Hỡi bạn tình ta, mình xinh đẹp thư Thiệt sa, Có duyên như Giê-ru-sa-lem, Ðáng sợ khác nào đạo quân giương cờ xí."},
	{5, "5 Hãy xây mắt mình khỏi ta, Vì nó làm cho ta bối rối. Tóc mình khác nào đoàn dê trên triền núi Ga-la-át;"},
	{6, "6 Răng mình như bầy chiên cái, Từ nơi tắm rửa mới lên; Thảy đều sanh đôi, Không một con nào son sẻ."},
	{7, "7 Má mình trong lúp tợ một nửa quả lựu."},
	{8, "8 Có sáu mươi hoàng hậu, tám mươi cung phi, Và nhiều vô số con đòi:"},
	{9, "9 Chim bò câu ta, người toàn hảo ta Vốn là có một, con một của mẹ mình. Kẻ kén chọn của người đã sanh đẻ mình. Các con gái đều thấy nàng, và xưng nàng có phước. Ðến đỗi những hoàng hậu và cung phi cũng đều khen ngợi nàng."},
	{10, "10 Người nữ nầy là ai, hiện ra như rạng đông, Ðẹp như mặt trăng, tinh sạch như mặt trời, Ðáng sợ khác nào đạo quân giương cờ xí?"},
	{11, "11 Tôi đi xuống vườn hạch đào, Ðặng xem cây cỏ xanh tươi của trũng, Ðặng thử coi vườn nho đã nứt đọt, thạch lựu vã nở hoa chưa."},
	{12, "12 Không ngờ, lòng tôi dẫn dắt tôi Trên các xe của dân sự tôi có tình nguyện."},
	{13, "13 Hỡi Su-la-mít, hãy trở về, hãy trở về! Khá trở về, trở về, hầu cho chúng tôi xem thấy người. Vì sao các ngươi muốn thấy người Su-la-mít, Như thấy sự nhảy múa của Ma-ha-na-im?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view7() {
struct vi7 poems[] = {
	{1, "1 Hỡi công chúa, chơn nàng mang giày, xinh đẹp biết bao! Vòng vế nàng khác nào một trân châu, Công việc của tay thợ khéo làm."},
	{2, "2 Rún nàng giống như cái ly tròn, Rượu thơm không có thiếu. Bụng nàng dường một đống lúa mạch, Có hoa huệ sắp đặt tứ vi."},
	{3, "3 Hai nương long nàng như hai con Sanh đôi của con hoàng dương."},
	{4, "4 Cổ nàng như một cái tháp ngà. Mắt nàng khác nào các ao tại Hết-bôn Ở bên cửa Bát-Ra-bim; Mũi nàng như ngọn tháp Li-ban Ngó về hướng Ða-mách."},
	{5, "5 Dầu ở trên mình nàng khác nào núi Cạt-mên, Và tóc đầu nàng như sắc tía; Một vì vua bị lọn tóc nàng vấn vít."},
	{6, "6 Hỡi ái tình ta, mình xinh đẹp thay, Hạp ý dường bao, khiến cho người ta được khoái chí!"},
	{7, "7 Hình dung mình giống như cây chà là, Và nương long mình tợ chùm nó."},
	{8, "8 Ta nói rằng: Ta sẽ trèo lên cây chà là, Vin lấy các tàu nó; Nguyên hai nương long mình như chùm nho, Mùi thơm mũi mình như trái bình bát,"},
	{9, "9 Và ổ gà mình như rượu ngon. Chảy vào dễ dàng cho lương nhơn tôi, Và tuôn nơi môi kẻ nào ngủ."},
	{10, "10 Tôi thuộc về lương nhơn tôi, Sự ước ao người hướng về tôi."},
	{11, "11 Hỡi lương nhơn tôi, hãy đến, chúng ta sẽ đi ra ngoài đồng, Ở đêm nơi hương thôn."},
	{12, "12 Vừa sớm mai, chúng ta sẽ thức dậy, Ði đến vườn nho, đặng xem thể nho có nứt đọt, Hoa có trổ, thạch lựu có nở bông chăng: Tại đó tôi sẽ tỏ ái tình tôi cho chàng."},
	{13, "13 Trái phong già xông mùi thơm nó; Và tại cửa chúng ta có những thứ trái ngon mới và cũ; Hỡi lương nhơn tôi, tôi đã để dành trái ấy cho chàng!"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view8() {
struct vi8 poems[] = {
	{1, "1 Ồ! chớ chi chàng làm anh em tôi, Kẻ đã bú mớm vú của mẹ tôi! Nếu tôi gặp chàng ngoài, Aét tôi sẽ hôn chàng, không ai khinh bỉ tôi được."},
	{2, "2 Tôi sẽ dẫn chàng vào nhà mẹ tôi; Tại đó chàng sẽ dạy dỗ tôi; Tôi sẽ cho chàng uống rượu thơm, Nước ngọt của trái thạch lựu tôi."},
	{3, "3 Tay tả người sẽ kẻ dưới đầu tôi, Còn tay hữu người ôm lấy tôi."},
	{4, "4 Hỡi các con gái Giê-ru-sa-lem, ta ép nài các ngươi, Chớ kinh động, chớ làm tỉnh thức ái tình ta Cho đến khi nó muốn."},
	{5, "5 Người nữ nầy là ai, từ đồng vắng đi lên, Nương dựa lương nhơn của nàng? Ta đã đánh thức mình tại dưới cây bình bát: Ở đó mẹ bị đau đớn mà sanh mình ra, Ở đó người mà đã sanh đẻ mình bị cơn lao khổ."},
	{6, "6 Hãy để tôi như một cái ấy nơi lòng chàng, Như một cái ấn trên cánh tay chàng; Vì ái tình mạnh như sự chết, Lòng ghen hung dữ như âm phủ; Sự nóng nó là sự nóng của lửa, Thật một ngọn lửa của Ðức Giê-hô-va."},
	{7, "7 Nước nhiều không tưới tắt được ái tình, Các sông chẳng nhận chìm nó được; Nếu người nào đem hết tài sản nhà mình, Ðặng mua lấy ái tình, Aét người ta sẽ khinh dể nó đến điều."},
	{8, "8 Chúng tôi có một em gái nhỏ, chưa có nương long. Phải làm gì cho em gái chúng tôi, Trong ngày người ta hỏi nó?"},
	{9, "9 Nếu nó là một vách thành, Chúng tôi sẽ xây tháp bạc trên nó; Nếu nó là một cái cửa, Chúng tôi sẽ đóng bít lại bằng ván hương nam."},
	{10, "10 Tôi là một tường thành, Hai nương long tôi như những ngọn tháp; Bấy giờ tôi ở trước mắt người như kẻ đã được bình an."},
	{11, "11 Sa-lô-môn có một vườn nho tại Ba-anh Ha-môn: Người giao vườn ấy cho kẻ canh giữ, Mỗi người ấy phải đem nộp một ngàn miếng bạc về hoa lợi nó."},
	{12, "12 Vườn nho của tôi trước mặt tôi. Hỡi Sa-lô-môn, một ngàn miếng bạc sẽ về phần ông, Còn hai trăm về những kẻ giữ hoa lợi nó."},
	{13, "13 Hỡi kẻ ở trong vườn, các bạn đều lắng tai nghe tiếng nàng! Xin hỡi cho ta nghe tiếng nàng!"},
	{14, "14 Hỡi lương nhơn tôi, hãy vội đến, Khá giống như con hoàng dương hay là như con nai con Ở trên các núi thuốc thơm."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};