#ifndef __HERO_H__
#define __HERO_H__

#include "cocos2d.h"
#include "Unit.h"

USING_NS_CC;

class HeroLayer : public UnitLayer {
private:
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
	bool Qskill();
	bool Wskill();
	bool Eskill();
	bool Rskill();

};

#endif // __HERO_H__