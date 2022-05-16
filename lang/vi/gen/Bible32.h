#include <map>
#include <string>
class Bible32
{
	struct vi1	{ int val; const char *msg; };
	struct vi2	{ int val; const char *msg; };
	struct vi3	{ int val; const char *msg; };
	struct vi4	{ int val; const char *msg; };
public:
static void view1() {
struct vi1 poems[] = {
	{1, "1 Có lời Ðức Giê-hô-va phán cho Giô-na con trai A-mi-tai như vầy:"},
	{2, "2 Ngươi khá chổi dậy! Hãy đi đến thành lớn Ni-ni-ve, và kêu la nghịch cùng nó; vì tội ác chúng nó đã lên thấu trước mặt ta."},
	{3, "3 Nhưng Giô-na chổi dậy đặng trốn qua Ta-rê-si, để lánh khỏi mặt Ðức Giê-hô-va. Người xuống đến Gia-phô, gặp một chiếc tàu đi qua Ta-rê-si. Người trả tiền quá giang, và xuống tàu đặng đi Ta-rê-si với họ, để khỏi mặt Ðức Giê-hô-va."},
	{4, "4 Nhưng Ðức Giê-hô-va khiến gió lớn thổi trên biển; trên biển có trận bão lớn, chiếc tàu hầu vỡ."},
	{5, "5 Những thủy thủ đều sợ hãi, ai nầy kêu cầu thần của mình. Ðoạn, họ quăng những đồ đạc trong tàu xuống biển, để cho nhẹ tàu. Giô-na đã xuống dưới lòng tàu, nằm và ngủ mê."},
	{6, "6 Chủ tàu bèn đến gần người và bảo rằng: Hỡi người ngủ kia, làm sao vậy? Khá chờ dậy! Hãy kêu cầu Ðức Chúa Trời ngươi. Có lẽ Ðức Chúa Trời sẽ tưởng đến chúng ta, thì chúng ta khỏi chết."},
	{7, "7 Kế đó, chúng nói cùng nhau rằng: Hãy đến, chúng ta hãy bắt thăm, để cho biết tai vạ nầy đến cho chúng ta là vì cớ ai. Vậy họ bắt thăm, và thăm trúng nhằm Giô-na."},
	{8, "8 Bấy giờ họ nói cùng người rằng: Khá cho chúng ta biết vì điều chi mà tai vạ nầy đến trên chúng ta. Ngươi làm nghề gì, và từ đâu đến? Xứ ngươi ở đâu, ngươi thuộc về dân nào?"},
	{9, "9 Người trả lời rằng: Ta là người Hê-bơ-rơ, và ta kính sợ, Ðức Giê-hô-va, là Ðức Chúa Trời trên trời, Ngài đã làm nên biển và đất khô."},
	{10, "10 Những người ấy cả sợ, và bảo người rằng: Ngươi đã làm việc gì đó? Bấy giờ họ đã biết rằng người trốn khỏi mặt Ðức Giê-hô-va; vì người đã khai ra cho họ."},
	{11, "11 Vậy họ nói rằng: Chúng ta sẽ làm gì về ngươi, hầu cho biển yên lặng cho chúng ta? Vì biển càng động thêm mãi."},
	{12, "12 Người trả lời rằng: Hãy bắt lấy ta; hãy ném ta xuống biển, thì biển yên lặng cho các anh; vì ta biết rằng ấy là vì cớ ta mà các anh đã gặp phải trận bão lớn nầy."},
	{13, "13 Những người ấy bắt tay chèo vào bờ; song không được, vì biển càng nổi lên nghịch cùng họ mãi."},
	{14, "14 Họ bèn kêu cầu Ðức Giê-hô-va mà rằng: Hỡi Ðức Giê-hô-va, chúng tôi nài xin Ngài, chúng tôi nài xin Ngài chớ làm cho chúng tôi chết vì cớ mạng sống của người nầy, và chớ khiến máu vô tội đổ lại trên chúng tôi! Hỡi Ðức Giê-hô-va, vì chính Ngài là Ðấng đã làm điều mình muốn."},
	{15, "15 Ðoạn họ bắt Giô-na, quăng xuống biển, thì sự giận dữ của biển yên lặng."},
	{16, "16 Vì vậy mà những người ấy rất kính sợ Ðức Giê-hô-va. Họ dâng của lễ cho Ðức Giê-hô-va, và hứa nguyện cùng Ngài."},
	{17, "17 (2:1) Ðức Giê-hô-va sắm sửa một con cá lớn đặng nuốt Giô-na; Giô-na ở trong bụng cá ba ngày ba đêm."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct vi2 poems[] = {
	{1, "1 (2:2) Giô-na từ trong bụng cá cầu nguyện Giê-hô-va Ðức Chúa Trời mình,"},
	{2, "2 (2:3) mà rằng: Tôi gặp hoạn nạn, kêu cầu Ðức Giê-hô-va, Thì Ngài đã trả lời cho tôi. Từ trong bụng âm phủ, tôi kêu la, Thì Ngài đã nghe tiếng tôi."},
	{3, "3 (2:4) Ngài đã quăng tôi trong vực sâu, nơi đáy biển, Và dòng nước lớn bao bọc lấy tôi. Hết thảy những sóng lượn và những ba đào của Ngài đều trải qua trên tôi."},
	{4, "4 (2:5) Tôi đã nói rằng: Tôi đã bị ném khỏi trước mắt Ngài; Dầu vậy, tôi còn nhìn lên đền thánh của Ngài."},
	{5, "5 (2:6) Nước bao phủ lấy tôi, cho đến linh hồn tôi; Vực sâu vây lấy tôi tư bề; Rong rêu vấn vít đầu tôi."},
	{6, "6 (2:7) Tôi đã xuống đến chơn nền các núi; Ðất đã đóng then nó trên tôi đời đời. Hỡi Giê-hô-va Ðức Chúa Trời tôi, nhưng Ngài đã đem mạng sống tôi lên khỏi hầm hố!"},
	{7, "7 (2:8) Khi linh hồn tôi mòn mỏi trong tôi, thì tôi nhớ đến Ðức Giê-hô-va, Và lời cầu nguyện của tôi đạt đến Ngài, vào đền thánh Ngài."},
	{8, "8 (2:9) Những kẻ chăm sự hư không giả dối, Thì lìa bỏ sự thương xót của mình."},
	{9, "9 (2:10) Nhưng tôi, tôi sẽ dùng tiếng cảm tạ mà dâng của lễ cho Ngài; Tôi sẽ trả sự tôi đã hứa nguyện. Sự cứu đến từ Ðức Giê-hô-va!"},
	{10, "10 (2:11) Ðức Giê-hô-va bèn phán cùng con cá, và nó mửa Giô-na ra trên đất khô."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct vi3 poems[] = {
	{1, "1 Lại có lời Ðức Giê-hô-va phán cùng Giô-na lần thứ hai mà rằng:"},
	{2, "2 Ngươi khá chờ dậy! Hãy đi đến thành lớn Ni-ni-ve, và rao cho nó lời ta đã dạy cho ngươi."},
	{3, "3 Vậy Giô-na chờ dậy và đi đến Ni-ni-ve, theo lịnh của Ðức Giê-hô-va. Vả, Ni-ni-ve là một thành rất lớn, đi mất ba ngày đường."},
	{4, "4 Giô-na khởi đầu vào trong thành đi một ngày, thì rao giảng và nói rằng: Còn bốn mươi ngày nữa, Ni-ni-ve sẽ bị đổ xuống!"},
	{5, "5 Dân thành Ni-ni-ve tin Ðức Chúa Trời. Họ rao ra sự kiêng ăn và mặc bao gai, từ những người rất lớn trong đám họ cho đến những kẻ rất nhỏ."},
	{6, "6 Tin ấy đồn đến vua Ni-ni-ve, vua đứng dậy khỏi ngai, lột áo bào mình ra, quấn bao gai và ngồi trong tro."},
	{7, "7 Ðoạn vua truyền lịnh nầy ra trong thành Ni-ni-ve, như là lời dụ của vua cùng của các kẻ tôn trưởng: Không luận người ta hay là thú vật, không luận bầy bò hay bầy chiên, đều chớ nếm chi hết. Không được để cho nó ăn, cũng không uống nước;"},
	{8, "8 nhưng người ta và thú vật đều phải quấn bao gai. Mọi người khá ra sức kêu cùng Ðức Chúa Trời; phải, ai nấy khá bỏ đường lối xấu mình và việc hung dữ của tay mình."},
	{9, "9 Ai biết rằng hoặc Ðức Chúa Trời sẽ không xây lại và ăn năn, xây khỏi cơn nóng giận mình, hầu cho chúng ta khỏi chết, hay sao?"},
	{10, "10 Bấy giờ Ðức Chúa Trời thấy việc họ làm đều đã xây bỏ đường lối xấu của mình; Ðức Chúa Trời bèn ăn năn sự họa mà Ngài đã phán sẽ làm cho họ, và Ngài không làm sự đó."},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct vi4 poems[] = {
	{1, "1 Bấy giờ Giô-na rất không đẹp lòng, và giận dữ."},
	{2, "2 Người cầu nguyện Ðức Giê-hô-va rằng: Hãy Ðức Giê-hô-va, tôi cầu xin Ngài, ấy há chẳng phải là điều tôi đã nói khi tôi còn ở trong xứ tôi sao? Vì đó nên tôi lật đật trốn qua Ta-rê-si vậy. Bởi tôi biết rằng Ngài là Ðức Chúa Trời nhơn từ, thương xót, chậm giận, giàu ơn, và đổi ý không xuống tai vạ."},
	{3, "3 Hỡi Ðức Giê-hô-va, vậy bây giờ, tôi nài xin Ngài hãy cất lấy sự sống tôi; vì về phần tôi, chết còn hơn sống!"},
	{4, "4 Ðức Giê-hô-va trả lời cùng người rằng: Ngươi giận có nên không?"},
	{5, "5 Bấy giờ Giô-na ra khỏi thành Ni-ni-ve, ngồi phía đông thành ấy. Tại đó, người làm một cái chòi, ngồi dưới bóng chòi ấy mà đợi xem điều sẽ xảy đến cho thành ấy."},
	{6, "6 Vả, Ðức Giê-hô-va sắm sẵn một dây giưa cao lên bên trên Giô-na, đặng phủ bóng trên đầu người, và cứu người khỏi sự khổ cực. Giô-na rất vui vì cớ dây ấy."},
	{7, "7 Nhưng bữa sau, vừa lúc hừng đông, Ðức Chúa Trời sắm một con sâu, sâu chích dây ấy đến nỗi héo."},
	{8, "8 Ðoạn, đến khi mặt trời mọc, Ðức Chúa Trời sắm gió cháy thổi từ phương đông, và mặt trời giọi xuống trên đầu Giô-na, đến nỗi ngất đi, và cầu chết mà rằng: Về phần tôi, chết còn hơn sống!"},
	{9, "9 Ðức Chúa Trời bèn phán cùng Giô-na rằng: Ngươi nổi giận vì cớ dây nầy có nên không? Người thưa rằng: Tôi giận cho đến chết cũng phải lắm."},
	{10, "10 Ðức Giê-hô-va lại phán: Ngươi đoái tiếc một dây mà ngươi chưa hề khó nhọc vì nó, ngươi không làm cho nó mọc, một đêm thấy nó sanh ra và một đêm thấy nó chết."},
	{11, "11 Còn ta, há không đoái tiếc thành lớn Ni-ni-ve, trong đó có hơn mười hai vạn người không biết phân biệt tay hữu và tay tả, lại với một số thú vật rất nhiều hay sao?"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};