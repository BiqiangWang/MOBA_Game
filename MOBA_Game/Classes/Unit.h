#ifndef __UNIT_H__
#define __UNIT_H__

#include "cocos2d.h"

USING_NS_CC;

struct ActionState {
	UnitLayer* aim;
	char c;
};

class UnitLayer : public Layer {
public:
	static Layer* createLayer();
	virtual bool init();
	CREATE_FUNC(UnitLayer);

	Sprite* unit;

public:
	bool revival;
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

	bool isStunned;

public:
	bool isMelee;				//�Ƿ�Ϊ��ս
	float collisionSize;		//��ײ���

public:
	void move(Vec2 destination);
	void attack(UnitLayer* aim);
	void setAction(UnitLayer* aim, char c);

public:
	ActionState actionState;

};

#endif // __UNIT_H__
