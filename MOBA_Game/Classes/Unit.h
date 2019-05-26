#ifndef __UNIT_H__
#define __UNIT_H__

#include "cocos2d.h"

USING_NS_CC;

class UnitLayer : public Layer {
public:
	static Layer* createLayer();
	virtual bool init();
	CREATE_FUNC(UnitLayer);

	Sprite* unit;

private:
	int team;
	//����
	float maxLifeValue;			//�������ֵ
	float curLifeValue;			//��ǰ����ֵ
	float moveSpeed;			//�ƶ��ٶ�
	float attackDamage;			//������
	float attackPower;			//��������
	float attackSpeed;			//�����ٶ�
	float attackRange;			//������Χ
	float armor;				//�������
	float magicResistance;		//��������

public:
	void move(Vec2 destination);
	void attack(UnitLayer* aim);

};

#endif // __UNIT_H__
