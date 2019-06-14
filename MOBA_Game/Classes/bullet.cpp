#include "Bullet.h"

USING_NS_CC;

bool Bullet::init()
{
	if (!Sprite::init())
		return false;

	return true;
}

//���ݴ����������������ʼ���ӵ���
void Bullet::initBullet(std::string name)
{
	//this->initWithSpriteFrameName(name);
	this->initWithFile(name);
}

bool Bullet::bulletMove() {
	if (aim->curLifeValue == 0) {
		this->cleanup();
		return false;
	}
	if (ccpDistance(this->getPosition(), aim->getPosition()) <= aim->collisionSize) {
		aim->getInjured(attacker->attackDamage, 'a');
		return false;
	}
	else {
		Vec2 selfPos = this->getPosition();
		Vec2 aimPos = aim->getPosition();
		this->setPosition(selfPos + (aimPos - selfPos) / ccpDistance(selfPos, aimPos) * bulletSpeed / 60);
		return true;
	}
}