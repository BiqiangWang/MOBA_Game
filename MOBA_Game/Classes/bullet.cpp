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

void Bullet::bulletMove() {
	if (ccpDistance(this->getPosition(), aim->getPosition()) <= aim->collisionSize) {
		
		//����˺���Ч��

		this->cleanup();
	}
	else {
		Vec2 selfPos = this->getPosition();
		Vec2 aimPos = aim->getPosition();
		this->setPosition(selfPos + (aimPos - selfPos) / ccpDistance(selfPos, aimPos) * bulletSpeed / 60);
	}
}