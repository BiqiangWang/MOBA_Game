#ifndef __HERO_H__
#define __HERO_H__

#include "cocos2d.h"
#include "Unit.h"

USING_NS_CC;

class HeroLayer : public UnitLayer {
private:
	int team;
	//属性
	float maxManaValue;			//最大法力值
	float curManaValue;			//当前法力值
	float criticalChance;		//暴击几率
	float criticalDamage;		//暴击效果
	float CDReduction;			//冷却缩减
	float lifeValueRegen;		//每5秒回血
	float manaValueRegen;		//每5秒回蓝
	float armorPenetration;		//物理穿透
	float MRpenetration;		//法术穿透
	float lifeSteal;			//物理吸血
	float spellVamp;			//法术吸血
	float tenacity;				//韧性

public:
	void onKeyPressed(EventKeyboard::KeyCode keycode, cocos2d::Event *event);
	void onKeyReleased(EventKeyboard::KeyCode keycode, cocos2d::Event *event);

};

#endif // __HERO_H__