#include "Rule_XuChu.h"

void Rule_XuChu::drawCardStage() const {
	//询问是否发动裸衣..........blablabla
	// TODO - implement Rule_XuChu::drawCardStage
	throw "Not yet implemented";
}

void Rule_XuChu::roundEndStage() const {
	//设置usingluoyi为false;
	// TODO - implement Rule_XuChu::roundEndStage
	throw "Not yet implemented";
}

void Rule_XuChu::beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const {
	//如果为伤害事件，扔给luoYi()
	// TODO - implement Rule_XuChu::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_XuChu::luoYi(const std::shared_ptr<Event_Hurt> & event) const {
	//if(const usingluoyi && 攻击者为许褚 &&（决斗||杀）)  伤害+1
	// TODO - implement Rule_XuChu::luoYi
	throw "Not yet implemented";
}
