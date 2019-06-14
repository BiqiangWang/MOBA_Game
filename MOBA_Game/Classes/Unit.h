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

	std::string unitType;

public:
	int team;
	//����
	float maxLifeValue;			//�������ֵ
	float curLifeValue;			//��ǰ����ֵ
	float moveSpeed;			//�ƶ��ٶ�
	float attackDamage;			//������
	float attackPower;			//��������
	float attackInterval;		//�����ٶ�
	float attackRange;			//������Χ
	float armor;				//�������
	float magicResistance;		//��������

	float silence;
	float stun;
	std::pair<float, float> slowDown;

public:
	bool isMelee;				//�Ƿ�Ϊ��ս
	float collisionSize;		//��ײ���

	float attackColdDown;

public:
	void move(Vec2 destination);
	virtual void attack(UnitLayer* aim);
	void setAction(UnitLayer* aim, char c);
	void getInjured(float damage, char type);

public:
	ActionState actionState;

};

#endif // __UNIT_H__