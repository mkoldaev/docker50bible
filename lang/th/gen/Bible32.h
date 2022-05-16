#include <map>
#include <string>
class Bible32
{
	struct th1	{ int val; const char *msg; };
	struct th2	{ int val; const char *msg; };
	struct th3	{ int val; const char *msg; };
	struct th4	{ int val; const char *msg; };
public:
static void view1() {
struct th1 poems[] = {
	{1, "1 พระวจนะของพระเยโฮวาห์มาถึงโยนาห์บุตรชายของอามิททัยว่า"},
	{2, "2 จงลุกขึ้นไปยังนีนะเวห์นครใหญ่ และร้องกล่าวโทษชาวเมืองนั้น เหตุความชั่วของเขาทั้งหลายได้ขึ้นมาเบื้องหน้าเราแล้ว"},
	{3, "3 แต่โยนาห์ได้ลุกขึ้นหนีไปยังเมืองทารชิชจากพระพักตร์พระเยโฮวาห์ ท่านได้ลงไปยังเมืองยัฟฟา และพบกำปั่นลำหนึ่งกำลังไปเมืองทารชิช ดังนั้นท่านจึงชำระค่าโดยสาร และขึ้นเรือเดินทางร่วมกับเขาทั้งหลายไปยังเมืองทารชิชให้พ้นจากพระพักตร์พระเยโฮวาห์"},
	{4, "4 แต่พระเยโฮวาห์ทรงขับกระแสลมใหญ่ขึ้นเหนือทะเล จึงเกิดพายุใหญ่ในทะเลนั้น จนน่ากลัวกำปั่นจะอับปาง"},
	{5, "5 แล้วบรรดาลูกเรือก็กลัว ต่างก็ร้องขอต่อพระของตน และเขาโยนสินค้าในกำปั่นลงในทะเลเพื่อให้กำปั่นเบาขึ้น แต่โยนาห์เข้าไปข้างในเรือ นอนลงและหลับสนิท"},
	{6, "6 นายเรือจึงมาหาท่านและกล่าวแก่ท่านว่า เจ้าคนขี้เซาเอ๋ย อย่างไรกันนี่ ลุกขึ้นซิ จงร้องขอต่อพระเจ้าของเจ้า ชะรอยพระเจ้านั้นจะทรงระลึกถึงพวกเราบ้าง เราจะได้ไม่พินาศ"},
	{7, "7 เขาทั้งหลายก็ชักชวนกันว่า มาเถอะ ให้เราจับสลากกัน เพื่อเราจะทราบว่า ใครเป็นต้นเหตุแห่งภัยซึ่งเกิดขึ้นแก่เรานี้ ดังนั้นเขาก็จับสลาก สลากนั้นก็ตกแก่โยนาห์"},
	{8, "8 เขาจึงพูดกับท่านว่า จงบอกเรามาเถิดว่า ภัยซึ่งเกิดขึ้นแก่เรานี้ ใครเป็นต้นเหตุ เจ้าหากินทางไหน และเจ้ามาจากไหน ประเทศของเจ้าชื่ออะไร เจ้าเป็นคนชาติไหน"},
	{9, "9 และท่านจึงตอบเขาว่า ข้าพเจ้าเป็นคนฮีบรู และข้าพเจ้ายำเกรงพระเยโฮวาห์พระเจ้าแห่งฟ้าสวรรค์ ผู้ทรงสร้างทะเลและแผ่นดินแห้ง"},
	{10, "10 คนทั้งปวงก็กลัวยิ่งนัก จึงถามท่านว่า ท่านกระทำอะไรเช่นนี้หนอ เพราะคนเหล่านั้นทราบแล้วว่า ท่านหลบหนีจากพระพักตร์พระเยโฮวาห์ เพราะท่านบอกแก่เขาเช่นนั้น"},
	{11, "11 เขาทั้งหลายจึงกล่าวแก่ท่านว่า เราควรจะทำอย่างไรแก่ท่าน เพื่อทะเลจะได้สงบลงเพื่อเรา เพราะทะเลยิ่งกำเริบมากขึ้นทุกที"},
	{12, "12 ท่านจึงตอบเขาทั้งหลายว่า จงจับตัวข้าพเจ้าโยนลงไปในทะเลก็แล้วกัน ทะเลก็จะสงบลงเพื่อท่าน เพราะข้าพเจ้าทราบอยู่ว่า ที่พายุใหญ่เกิดขึ้นแก่ท่านเช่นนี้ ก็เนื่องจากตัวข้าพเจ้าเอง"},
	{13, "13 ถึงกระนั้นก็ดีพวกลูกเรือก็ช่วยกันตีกรรเชียงอย่างแข็งแรงเพื่อจะนำเรือกลับเข้าฝั่งแต่ไม่ได้ เพราะว่าทะเลยิ่งกำเริบมากขึ้นต้านเขาไว้"},
	{14, "14 เพราะฉะนั้นเขาจึงร้องทูลต่อพระเยโฮวาห์ว่า ข้าแต่พระเยโฮวาห์ ข้าพระองค์ทั้งหลายขอวิงวอนต่อพระองค์ ขออย่าให้พวกข้าพระองค์พินาศเพราะชีวิตของชายผู้นี้เลย ขออย่าให้โทษของการทำให้โลหิตที่ไร้ความผิดตกมาเหนือข้าพระองค์ ข้าแต่พระเยโฮวาห์ เพราะว่าพระองค์ได้ทรงกระทำสิ่งที่พระองค์ทรงพอพระทัย"},
	{15, "15 เขาจึงจับโยนาห์ทิ้งลงไปในทะเล ความปั่นป่วนในทะเลก็สงบลง"},
	{16, "16 คนเหล่านั้นก็ยำเกรงพระเยโฮวาห์ยิ่งนัก เขาทั้งหลายก็ถวายสัตวบูชาแด่พระเยโฮวาห์และปฏิญาณตัวไว้"},
	{17, "17 และพระเยโฮวาห์ทรงกำหนดให้ปลามหึมาตัวหนึ่งกลืนโยนาห์เข้าไป โยนาห์ก็อยู่ในท้องปลานั้นสามวันสามคืน"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct th2 poems[] = {
	{1, "1 แล้วโยนาห์ก็อธิษฐานต่อพระเยโฮวาห์พระเจ้าของท่านจากภายในท้องปลานั้น"},
	{2, "2 ว่า ในคราวที่ข้าพระองค์ตกทุกข์ได้ยาก ข้าพระองค์ร้องทุกข์ต่อพระเยโฮวาห์ และพระองค์ทรงสดับข้าพระองค์ ข้าพระองค์ร้องทูลจากท้องของนรก และพระองค์ทรงฟังเสียงข้าพระองค์"},
	{3, "3 เพราะพระองค์ทรงเหวี่ยงข้าพระองค์ลงไปในที่ลึกในท้องทะเล และน้ำก็ท่วมล้อมรอบข้าพระองค์ไว้ บรรดาคลื่นและระลอกของพระองค์ท่วมข้าพระองค์แล้ว"},
	{4, "4 ข้าพระองค์จึงทูลว่า `ข้าพระองค์ถูกเหวี่ยงให้พ้นจากสายพระเนตรของพระองค์ แต่ข้าพระองค์จะเงยหน้าดูพระวิหารบริสุทธิ์ของพระองค์ได้อีก'"},
	{5, "5 น้ำก็ท่วมมิดข้าพระองค์ คือถึงจิตใจข้าพระองค์ ที่ลึกก็อยู่รอบตัวข้าพระองค์ สาหร่ายทะเลก็พันศีรษะข้าพระองค์อยู่"},
	{6, "6 ข้าพระองค์ลงไปยังที่รากแห่งภูเขาทั้งหลาย แผ่นดินกับดาลประตูปิดกั้นข้าพระองค์ไว้เป็นนิตย์ แต่กระนั้นก็ดี ข้าแต่พระเยโฮวาห์พระเจ้าของข้าพระองค์ พระองค์ยังทรงนำชีวิตของข้าพระองค์ขึ้นมาจากความเปื่อยเน่า"},
	{7, "7 เมื่อจิตใจอ่อนเพลียไปในตัวของข้าพระองค์ ข้าพระองค์ระลึกถึงพระเยโฮวาห์ และคำอธิษฐานของข้าพระองค์มาถึงพระองค์ เข้าสู่พระวิหารบริสุทธิ์ของพระองค์"},
	{8, "8 บรรดาผู้ที่แสดงความนับถือต่อพระเทียมเท็จ ย่อมสละทิ้งพระเมตตาเสีย"},
	{9, "9 แต่ข้าพระองค์จะถวายสัตวบูชาแด่พระองค์ พร้อมด้วยเสียงโมทนาพระคุณ ข้าพระองค์ปฏิญาณไว้อย่างไร ข้าพระองค์จะทำตามคำปฏิญาณอย่างนั้น การที่ช่วยให้รอดนั้นเป็นของพระเยโฮวาห์"},
	{10, "10 และพระเยโฮวาห์ตรัสสั่งปลานั้น มันก็สำรอกโยนาห์ออกไว้บนแผ่นดินแห้ง"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct th3 poems[] = {
	{1, "1 แล้วพระวจนะของพระเยโฮวาห์มาถึงโยนาห์เป็นคำรบสองว่า"},
	{2, "2 จงลุกขึ้นไปยังนีนะเวห์นครใหญ่ และประกาศข่าวแก่เมืองนั้นตามที่เราบอกเจ้า"},
	{3, "3 ดังนั้นโยนาห์จึงลุกขึ้นไปยังนีนะเวห์ ตามพระวจนะของพระเยโฮวาห์ ฝ่ายนีนะเวห์เป็นนครใหญ่โตมากทีเดียว ถ้าจะเดินข้ามเมืองก็กินเวลาสามวัน"},
	{4, "4 โยนาห์ตั้งต้นเดินเข้าไปในเมืองได้ระยะทางเดินวันหนึ่ง และท่านก็ร้องประกาศว่า อีกสี่สิบวัน นีนะเวห์จะถูกคว่ำ"},
	{5, "5 ฝ่ายประชาชนนครนีนะเวห์ได้เชื่อพระเจ้า เขาประกาศให้อดอาหาร และสวมผ้ากระสอบ ตั้งแต่ผู้ใหญ่ที่สุดถึงผู้น้อยที่สุด"},
	{6, "6 กิตติศัพท์นี้ลือไปถึงกษัตริย์นครนีนะเวห์ พระองค์ทรงลุกขึ้นจากพระที่นั่ง ทรงเปลื้องฉลองพระองค์ออกเสีย ทรงสวมผ้ากระสอบแทน และประทับบนกองขี้เถ้า"},
	{7, "7 พระองค์ทรงออกพระราชกฤษฎีกา ประกาศไปทั่วนครนีนะเวห์ โดยอำนาจกษัตริย์และบรรดาขุนนางทั้งหลายว่า คนหรือสัตว์ ไม่ว่าฝูงสัตว์ใหญ่หรือฝูงสัตว์เล็ก ห้ามลิ้มรสสิ่งใดๆ อย่าให้กินอาหาร อย่าให้ดื่มน้ำ"},
	{8, "8 ให้ทั้งคนและสัตว์นุ่งห่มผ้ากระสอบ ให้ตั้งจิตตั้งใจร้องทูลต่อพระเจ้า เออ ให้ทุกคนหันกลับเสียจากการประพฤติชั่ว และเลิกการทารุณซึ่งมือเขากระทำ"},
	{9, "9 ใครจะรู้ได้พระเจ้าอาจจะทรงกลับและเปลี่ยนพระทัย คลายจากพระพิโรธอันรุนแรงเพื่อว่าเราจะมิได้พินาศ"},
	{10, "10 เมื่อพระเจ้าทอดพระเนตรการกระทำของเขาแล้วว่า เขากลับไม่ประพฤติชั่วต่อไป พระเจ้าก็ทรงกลับพระทัยไม่ลงโทษตามที่พระองค์ตรัสไว้ และพระองค์ก็มิได้ทรงลงโทษเขา"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view4() {
struct th4 poems[] = {
	{1, "1 เหตุการณ์นี้ไม่เป็นที่พอใจโยนาห์อย่างยิ่ง และท่านโกรธ"},
	{2, "2 ท่านจึงอธิษฐานต่อพระเยโฮวาห์ว่า ข้าแต่พระเยโฮวาห์ เมื่อข้าพระองค์ยังอยู่ในประเทศของข้าพระองค์ ข้าพระองค์พูดแล้วว่า จะเป็นไปเช่นนี้มิใช่หรือ นี่แหละเป็นเหตุให้ข้าพระองค์ได้รีบหนีไปยังเมืองทารชิช เพราะข้าพระองค์ทราบว่า พระองค์ทรงเป็นพระเจ้าผู้ทรงกอปรด้วยพระคุณ และทรงพระกรุณา ทรงกริ้วช้า และบริบูรณ์ด้วยความเมตตา และทรงกลับพระทัยไม่ลงโทษ"},
	{3, "3 ข้าแต่พระเยโฮวาห์ เพราะฉะนั้นบัดนี้ ขอพระองค์ทรงเอาชีวิตของข้าพระองค์ไปเสีย เพราะว่าข้าพระองค์ตายเสียก็ดีกว่าอยู่"},
	{4, "4 และพระเยโฮวาห์ตรัสว่า การที่เจ้าโกรธเช่นนี้ดีอยู่หรือ"},
	{5, "5 แล้วโยนาห์ก็ออกไปนอกนคร นั่งอยู่ทางทิศตะวันออกของเมืองนั้น และท่านทำเพิงไว้เป็นที่ท่านอาศัย ท่านนั่งอยู่ใต้ร่มเพิงคอยดูเหตุการณ์อันจะเกิดขึ้นกับนครนั้น"},
	{6, "6 และพระเยโฮวาห์พระเจ้าทรงกำหนดให้ต้นละหุ่งต้นหนึ่งงอกขึ้นมาเหนือโยนาห์ ให้เป็นที่กำบังศีรษะของท่าน เพื่อให้บรรเทาความร้อนรุ่มกลุ้มใจในเรื่องนี้ เพราะเหตุต้นละหุ่งต้นนี้โยนาห์จึงมีความยินดียิ่งนัก"},
	{7, "7 แต่ในเวลาเช้าวันรุ่งขึ้น พระเจ้าทรงกำหนดให้หนอนตัวหนึ่งมากัดกินต้นละหุ่งต้นนั้นจนมันเหี่ยวไป"},
	{8, "8 ต่อมาเมื่อดวงอาทิตย์ขึ้นแล้ว พระเจ้าทรงกำหนดให้ลมตะวันออกที่ร้อนผากพัดมา และแสงแดดก็แผดลงบนศีรษะของโยนาห์จนท่านอ่อนเพลียไป และท่านนึกปรารถนาในใจที่จะตายเสีย จึงทูลขอว่า ให้ข้าพระองค์ตายเสียก็ดีกว่าอยู่"},
	{9, "9 แต่พระเจ้าตรัสกับโยนาห์ว่า ที่เจ้าโกรธเพราะต้นละหุ่งนั้นดีอยู่แล้วหรือ ท่านทูลว่า ที่ข้าพระองค์โกรธถึงอยากตายนี้ดีแล้ว พระเจ้าข้า"},
	{10, "10 และพระเยโฮวาห์ตรัสว่า เจ้าสงสารต้นละหุ่งนั้น ซึ่งเจ้ามิได้ลงแรงปลูก หรือมิได้กระทำให้มันเจริญ มันงอกเจริญขึ้นในคืนเดียว แล้วก็ตายไปในคืนเดียวดุจกัน"},
	{11, "11 ไม่สมควรหรือที่เราจะไว้ชีวิตเมืองนีนะเวห์นครใหญ่นั้น ซึ่งมีพลเมืองมากกว่าหนึ่งแสนสองหมื่นคน ผู้ไม่ทราบว่าข้างไหนมือขวาข้างไหนมือซ้าย และมีสัตว์เลี้ยงเป็นอันมากด้วย"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};