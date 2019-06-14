#ifndef __HERO_H__
#define __HERO_H__

#include "cocos2d.h"
#include "Unit.h"

USING_NS_CC;

enum SkillType {instant, aim, direction, state, passive, ban};

struct skillInfo{
	SkillType skillType;
	float coldDown;
	float timer;
	float duration;
	float range;
};

class HeroLayer : public UnitLayer {

public:
	//����
	float level;
	float experience;
	float maxManaValue;			//�����ֵ
	float curManaValue;			//��ǰ����ֵ
	float criticalChance;		//��������
	float criticalDamage;		//����Ч��
	float CDReduction;			//��ȴ����
	float lifeValueRegen;		//ÿ5���Ѫ
	float manaValueRegen;		//ÿ5�����
	float armorPenetration;		//����͸
	float MRpenetration;		//������͸
	float lifeSteal;			//������Ѫ
	float spellVamp;			//������Ѫ
	float tenacity;				//����


public:
	virtual void Qskill();
	virtual void Wskill();
	virtual void Eskill();
	virtual void Rskill();
	virtual void deQskill();
	virtual void deWskill();
	virtual void deEskill();
	virtual void deRskill();

	skillInfo Qinfo;
	skillInfo Winfo;
	skillInfo Einfo;
	skillInfo Rinfo;

};

#endif // __HERO_H__