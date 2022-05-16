#include <map>
#include <string>
class Bible36
{
	struct th1	{ int val; const char *msg; };
	struct th2	{ int val; const char *msg; };
	struct th3	{ int val; const char *msg; };
public:
static void view1() {
struct th1 poems[] = {
	{1, "1 พระวจนะของพระเยโฮวาห์ซึ่งมาถึงเศฟันยาห์บุตรชายคูชี ผู้เป็นบุตรชายเกดาลิยาห์ ผู้เป็นบุตรชายอามาริยาห์ ผู้เป็นราชโอรสของเฮเซคียาห์ ในรัชกาลโยสิยาห์ราชโอรสของอาโมน กษัตริย์ของยูดาห์"},
	{2, "2 พระเยโฮวาห์ตรัสว่า เราจะกวาดทุกสิ่งทุกอย่างให้เกลี้ยงจากพื้นแผ่นดิน"},
	{3, "3 พระเยโฮวาห์ตรัสว่า เราจะกวาดมนุษย์และสัตว์เดียรัจฉานไปเสีย เราจะกวาดนกในอากาศไปเสียทั้งปลาในทะเลด้วย เราจะกวาดล้างสิ่งที่ทำให้สะดุดพร้อมกับคนชั่ว เราจะขจัดมนุษยชาติออกจากพื้นแผ่นดิน"},
	{4, "4 เราจะเหยียดมือของเราออกต่อสู้ยูดาห์ และต่อชาวเยรูซาเล็มทั้งมวล เราจะขจัดกากเดนของพระบาอัลเสียจากสถานที่นี้ และกำจัดชื่อบรรดาเคมาริมพร้อมกับพวกปุโรหิตเสีย"},
	{5, "5 กำจัดคนเหล่านั้นที่กราบลงบนดาดฟ้าหลังคาตึกเพื่อไหว้บริวารแห่งฟ้าสวรรค์ คนเหล่านั้นที่กราบลงปฏิญาณต่อพระเยโฮวาห์ และปฏิญาณต่อพระมิลโคม"},
	{6, "6 คนเหล่านั้นที่หันกลับจากการติดตามพระเยโฮวาห์ ผู้มิได้แสวงหาพระเยโฮวาห์หรือทูลถามพระองค์"},
	{7, "7 จงนิ่งสงบอยู่ต่อเบื้องพระพักตร์องค์พระผู้เป็นเจ้าพระเจ้า เพราะว่าวันแห่งพระเยโฮวาห์มาใกล้แล้ว พระเยโฮวาห์ทรงเตรียมเครื่องบูชา และทรงกระทำแขกของพระองค์ให้บริสุทธิ์"},
	{8, "8 และต่อมาในวันที่พระเยโฮวาห์ทรงฆ่าบูชานั้น พระองค์ตรัสว่า เราจะลงโทษบรรดาเจ้านายและโอรสของกษัตริย์ และบรรดาผู้ที่ตกแต่งตัวด้วยเครื่องแต่งกายต่างด้าว"},
	{9, "9 ในวันนั้น เราจะลงโทษทุกคนที่กระโดดข้ามธรณีประตู คือผู้ที่กระทำให้เรือนของนายเต็มไปด้วยความทารุณและการคดโกง"},
	{10, "10 พระเยโฮวาห์ตรัสว่า ต่อมาในวันนั้น จะได้ยินเสียงร้องจากประตูปลา และเสียงร่ำไห้จากแขวงสอง และเสียงโครมครามจากเนินเขา"},
	{11, "11 โอ ชาวตำบลมักเทช จงร่ำไห้เถิด เพราะพ่อค้าทั้งปวงก็ถูกโค่นลงเสียแล้ว บรรดาผู้ที่ค้าขายกับเงินก็ถูกขจัดเสียแล้ว"},
	{12, "12 ต่อมาคราวนั้นเราจะเอาตะเกียงส่องดูเยรูซาเล็ม และเราจะลงโทษคนที่ตกตะกอน ผู้ที่กล่าวในใจของตนว่า `พระเยโฮวาห์จะไม่ทรงกระทำการดี และพระองค์ก็จะไม่ทรงกระทำการชั่ว'"},
	{13, "13 ฉะนั้นทรัพย์สิ่งของของเขาจะถูกปล้น และเรือนของเขาจะรกร้าง ถึงเขาจะสร้างเรือน เขาก็จะไม่ได้อยู่ในเรือนนั้น ถึงเขาจะปลูกสวนองุ่น เขาจะไม่ได้ดื่มน้ำองุ่นจากสวนนั้น"},
	{14, "14 วันสำคัญแห่งพระเยโฮวาห์ใกล้เข้ามา ใกล้เข้ามาและเร่งมาก ทั้งเสียงของวันแห่งพระเยโฮวาห์ ผู้แกล้วกล้าจะร้องเสียงดังที่นั่น"},
	{15, "15 วันนั้นเป็นวันแห่งพระพิโรธ เป็นวันแห่งความทุกข์ใจและความซึมเศร้า เป็นวันแห่งการทิ้งให้เสียเปล่าและการทิ้งให้รกร้าง เป็นวันแห่งความมืดและความอึมครึม เป็นวันแห่งเมฆหมอกและความมืดทึบ"},
	{16, "16 เป็นวันที่มีเสียงแตรและวันโห่ร้องต่อเมืองทั้งหลายที่มีสันปราการและต่อป้อมสูง"},
	{17, "17 เราจะนำทุกข์ภัยมาสู่มนุษย์ เขาจะได้เดินไปเหมือนคนตาบอด เพราะเขาได้กระทำบาปต่อพระเยโฮวาห์ โลหิตของเขาจะถูกเทออกเหมือนฝุ่น และเนื้อของเขาจะถูกเทออกเหมือนมูลสัตว์"},
	{18, "18 เงินหรือทองคำของเขาก็ดีจะไม่สามารถช่วยเขาให้พ้นได้ในวันแห่งพระพิโรธของพระเยโฮวาห์ แผ่นดินทั้งสิ้นจะถูกเผาผลาญในไฟแห่งความหวงแหนของพระองค์ เพราะพระองค์จะทรงกำจัดคนทั้งปวงที่อาศัยอยู่ในแผ่นดินอย่างรวดเร็ว"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view2() {
struct th2 poems[] = {
	{1, "1 โอ ประชาชาติที่ผู้อื่นไม่ปรารถนาเอ๋ย จงมาชุมนุมกัน เออ มาชุมนุมกัน"},
	{2, "2 ก่อนที่พระบัญชาสำเร็จ ก่อนที่วันนั้นผ่านไปดั่งแกลบที่ปลิว ก่อนที่พระพิโรธอันร้ายแรงแห่งพระเยโฮวาห์จะลงมาเหนือเจ้า ก่อนที่วันแห่งพระพิโรธของพระเยโฮวาห์จะลงมาเหนือเจ้า"},
	{3, "3 ทุกคนที่ใจถ่อมในแผ่นดินนี้ คือผู้ที่กระทำตามคำตัดสินของพระองค์ จงแสวงหาพระเยโฮวาห์ จงแสวงหาความชอบธรรม แสวงหาความถ่อมใจ ชะรอยเจ้าจะได้รับการกำบังในวันแห่งพระพิโรธของพระเยโฮวาห์"},
	{4, "4 เพราะว่าเมืองกาซาจะถูกทอดทิ้ง และเมืองอัชเคโลนจะเป็นที่รกร้าง ชาวเมืองอัชโดดจะถูกขับไล่ในเวลาเที่ยงวัน และเมืองเอโครนจะถูกถอนรากถอนโคน"},
	{5, "5 วิบัติแก่เจ้า ชาวเมืองชายทะเล เจ้าผู้เป็นประชาชาติเคเรธี พระวจนะของพระเยโฮวาห์มีมากล่าวโทษเจ้า โอ คานาอัน แผ่นดินของคนฟีลิสเตีย เราจะทำลายเจ้า จนไม่มีชาวเมืองเหลือ"},
	{6, "6 ชายทะเลนั้นจะเป็นที่อยู่อาศัยและเป็นกระท่อมสำหรับผู้เลี้ยงแกะ และเป็นคอกสำหรับฝูงแพะแกะ"},
	{7, "7 ชายทะเลนั้นจะเป็นกรรมสิทธิ์ของวงศ์วานยูดาห์ที่เหลืออยู่นั้น เขาจะหากินที่นั่น ครั้นถึงเวลาเย็น เขาจะนอนลงที่ในเหย้าเรือนทั้งหลายของอัชเคโลน เพราะว่าพระเยโฮวาห์พระเจ้าของเขาจะเอาพระทัยใส่เขา และให้เขากลับสู่สภาพเดิม"},
	{8, "8 เราได้ยินคำด่าของโมอับ และคำครหาของคนอัมโมนแล้ว ซึ่งเขาด่าประชาชนของเรา และอวดอ้างเรื่องเขตแดนของเขาทั้งหลาย"},
	{9, "9 พระเยโฮวาห์จอมโยธา พระเจ้าของอิสราเอลตรัสว่า เหตุฉะนี้ เรามีชีวิตอยู่ฉันใด แน่ทีเดียว โมอับจะกลายเป็นเหมือนเมืองโสโดม และคนอัมโมนจะเหมือนเมืองโกโมราห์ คือเป็นที่ขยายพันธุ์ต้นตำแยและบ่อเกลือ และเป็นที่รกร้างอยู่เนืองนิตย์ ชนชาติของเราส่วนที่เหลือจะปล้นเขา และชนชาติของเราที่เหลืออยู่จะยึดเขาเป็นกรรมสิทธิ์"},
	{10, "10 นี่จะเป็นผลตอบแทนความจองหองของเขา เพราะเขาด่าและโอ้อวดต่อประชาชนของพระเยโฮวาห์จอมโยธา"},
	{11, "11 พระเยโฮวาห์จะทรงเป็นที่เกรงกลัวของเขาทั้งหลาย พระองค์จะทรงกระทำให้พระทั้งหลายของโลกผ่ายผอม และมนุษย์ทั้งปวงจะนมัสการพระองค์ ต่างตามถิ่นฐานของตน ร่วมทั้งเกาะแห่งประชาชาติทั้งสิ้น"},
	{12, "12 โอ คนเอธิโอเปียเอ๋ย เจ้าด้วยเหมือนกัน จะต้องถูกประหารเสียด้วยดาบของเรา"},
	{13, "13 แล้วพระองค์จะเหยียดพระหัตถ์ของพระองค์ต่อแผ่นดินทางทิศเหนือ และทำลายอัสซีเรีย และจะกระทำให้เมืองนีนะเวห์เป็นที่รกร้าง เป็นที่แห้งแล้งเหมือนถิ่นทุรกันดาร"},
	{14, "14 ฝูงสัตว์ทั้งหลายจะนอนอยู่ท่ามกลางที่นั้น สัตว์ป่าในประชาชาติทั้งสิ้น ทั้งนกกระทุงและอีกาบ้านจะอาศัยอยู่ที่หัวเสาทั้งหลายของเมืองนั้น เสียงของพวกมันจะร้องอยู่ที่หน้าต่าง ความรกร้างจะอยู่ที่ธรณีประตู เพราะพระองค์จะทรงกระทำให้งานที่ทำด้วยไม้สนสีดาร์เปิดโล่งออก"},
	{15, "15 นี่เป็นเมืองที่สนุกสนานที่อยู่ได้อย่างไร้กังวล เป็นเมืองที่คิดในใจของตนว่า ข้านี่แหละ และไม่มีเมืองอื่นใดนอกเหนือจากข้าอีก มันกลายเป็นเมืองรกร้างเสียจริงๆ เป็นที่อาศัยนอนของสัตว์ป่า ทุกคนที่ผ่านเมืองนี้ไปจะเย้ยหยันและส่ายมือของเขา"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
static void view3() {
struct th3 poems[] = {
	{1, "1 วิบัติแก่เมืองนี้ที่โสโครกและเป็นมลทิน เป็นเมืองที่บีบบังคับเขา"},
	{2, "2 เธอไม่ยอมเชื่อฟังเสียงใดๆ และไม่ยอมรับการตีสอนใดๆ เธอไม่วางใจในพระเยโฮวาห์ และเธอไม่เข้ามาใกล้พระเจ้าของเธอ"},
	{3, "3 เจ้านายของเธอก็เหมือนสิงโตที่คำราม ผู้พิพากษาของเธอก็เหมือนหมาป่ายามเย็น ซึ่งไม่แทะกระดูกจนกระทั่งถึงรุ่งเช้า"},
	{4, "4 ผู้พยากรณ์ของเธอเป็นคนเบาปัญญา เป็นคนทรยศ พวกปุโรหิตของเธอก็กระทำสถานบริสุทธิ์ให้มัวหมอง เขาฝ่าฝืนต่อพระราชบัญญัติ"},
	{5, "5 พระเยโฮวาห์ผู้ทรงดำรงอยู่ในเมืองนั้นชอบธรรม พระองค์จะมิได้ทรงกระทำความชั่วช้าเลย ทุกเช้าพระองค์สำแดงคำตัดสินของพระองค์ พระองค์มิได้ทรงขาดเลย แต่คนอธรรมไม่รู้จักอาย"},
	{6, "6 เราได้ขจัดประชาชาติทั้งหลายออกเสียแล้ว หอคอยของเขาก็รกร้าง เรากระทำให้ถนนของเมืองนั้นเสียไปเปล่าๆ ไม่มีใครผ่านไปมา หัวเมืองของเขาถูกทำลาย เพื่อจะไม่มีคน ไม่มีชาวเมืองอยู่เลย"},
	{7, "7 เรากล่าวว่า `แท้จริง เมืองนั้นจะยำเกรงเรา เธอจะยอมรับคำสั่งสอน' เพื่อที่อาศัยของเขาจะไม่ถูกตัดออก เราลงโทษเขาอย่างไรก็ตาม แต่เขาทั้งหลายยิ่งกลับร้อนใจที่จะให้การกระทำของเขาเสื่อมทราม"},
	{8, "8 พระเยโฮวาห์จึงตรัสว่า เพราะฉะนั้นจงคอยเรา คอยวันที่เราลุกขึ้นเพื่อทำการปล้น เพราะการตกลงใจของเราก็คือจะรวมประชาชาติ ให้ราชอาณาจักรชุมนุมกัน เพื่อเทความกริ้วของเราบนเขาทั้งหลาย คือความร้อนแรงแห่งความโกรธของเรา เพราะว่าพิภพทั้งสิ้นจะถูกเผาผลาญในไฟแห่งความหวงแหนของเรา"},
	{9, "9 ในคราวนั้น เราจะให้ประชาชนนั้นหันไปใช้ภาษาบริสุทธิ์ เพื่อว่าทุกคนจะร้องทูลออกพระนามพระเยโฮวาห์ และปรนนิบัตพระองค์เป็นใจเดียวกัน"},
	{10, "10 บุคคลที่ทูลขอต่อเรา คือบุตรสาวแห่งคนของเราที่ถูกกระจัดกระจายไป จะนำเอาเครื่องบูชาของเรามาจากฟากข้างโน้นของแม่น้ำแห่งเอธิโอเปีย"},
	{11, "11 ในวันนั้น เจ้าจะไม่ถูกกระทำให้อับอายด้วยการกระทำทั้งสิ้นซึ่งเจ้าได้ละเมิดต่อเรา เพราะในเวลานั้นเราจะคัดผู้โอ้อวดเห่อเหิมนั้นออกเสียจากท่ามกลางเจ้า เจ้าจึงจะไม่เย่อหยิ่งจองหองเพราะเหตุภูเขาบริสุทธิ์ของเราอีกต่อไป"},
	{12, "12 เพราะเราจะเหลือแต่คนที่ทุกข์ยากและขัดสนไว้ในท่ามกลางเจ้า เขาจะวางใจในพระนามแห่งพระเยโฮวาห์"},
	{13, "13 บรรดาคนที่เหลืออยู่ในอิสราเอล เขาจะไม่กระทำความชั่วช้า และไม่กล่าวคำมุสา และในปากของเขานั้นจะหาลิ้นที่ล่อลวงก็ไม่มี เพราะเขาทั้งหลายจะเที่ยวหากินและนอนลง และไม่มีผู้ใดกระทำให้เขากลัวเกรง"},
	{14, "14 โอ บุตรสาวแห่งศิโยนเอ๋ย จงร้องเพลงเสียงดัง โอ อิสราเอลเอ๋ย จงโห่ร้องเถิด จงเปรมปรีดิ์และลิงโลดด้วยเต็มใจของเจ้าเถิด โอ บุตรสาวแห่งเยรูซาเล็ม"},
	{15, "15 พระเยโฮวาห์ทรงล้มเลิกการพิพากษาลงโทษเจ้าแล้ว พระองค์ทรงขับไล่ศัตรูของเจ้าออกไปแล้ว กษัตริย์แห่งอิสราเอลคือพระเยโฮวาห์ทรงอยู่ท่ามกลางเจ้า เจ้าจะไม่พบความชั่วร้ายอีกต่อไป"},
	{16, "16 ในวันนั้น เขาจะพูดกับเยรูซาเล็มว่า `อย่ากลัวเลย' และพูดกับศิโยนว่า `อย่าให้มือของเจ้าอ่อนเพลียไป'"},
	{17, "17 พระเยโฮวาห์พระเจ้าของเจ้าซึ่งอยู่ท่ามกลางเจ้าทรงมหิทธิฤทธิ์ พระองค์จะทรงช่วยให้รอด พระองค์จะทรงเปรมปรีดิ์เพราะเจ้าด้วยความยินดี พระองค์จะทรงพำนักในความรักของพระองค์ พระองค์จะทรงเริงโลดเพราะเจ้าด้วยร้องเพลงเสียงดัง"},
	{18, "18 เราจะรวบรวมคนที่เศร้าโศกให้มายังประชุมอันศักดิ์สิทธิ์ คือคนในพวกเจ้าซึ่งต้องทนต่อการเยาะเย้ย"},
	{19, "19 ดูเถิด ในคราวนั้นเราจะกวาดล้างผู้ที่บีบบังคับเจ้าทุกคน เราจะช่วยคนขาพิการให้รอดพ้น และรวบรวมคนที่กระจัดกระจายไป และเราจะเปลี่ยนความอับอายของเขาให้เป็นความน่าสรรเสริญ และให้เป็นเสียงลือไปทั่วโลก"},
	{20, "20 ในคราวนั้นเราจะนำเจ้ากลับเข้ามา คือในคราวที่เรารวบรวมพวกเจ้าเข้าด้วยกัน เออ เราจะกระทำให้เจ้ามีชื่อเสียงและเป็นที่สรรเสริญในท่ามกลางบรรดาชนชาติทั้งหลายของโลก คือเมื่อเราให้เจ้ากลับสู่สภาพเดิมต่อหน้าต่อตาเจ้า พระเยโฮวาห์ตรัสดังนี้แหละ"},
};
size_t npoems = sizeof poems / sizeof poems[0];size_t i;for (i=0; i < npoems; ++i) {printf("%s\n", poems[i].msg);}
}
};