#ifndef __UNIT_MANAGER_H__
#define __UNIT_MANAGER_H__

#include "cocos2d.h"
#include "Unit.h"
#include "Hero.h"

USING_NS_CC;

class UnitManager {
public:
	static UnitManager * getInstance();
	static void freeInstance(void);

public:
	static UnitManager * m_manager;
	UnitManager();
	bool init();

public:
	//��λ��������
	Vector<UnitLayer *> m_unitVector;
	Vector<UnitLayer *> & getUnitVector() { return m_unitVector; };

};

#endif // __UNIT_MANAGER_H__
