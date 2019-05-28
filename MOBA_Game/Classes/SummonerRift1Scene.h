#pragma once
#ifndef _GameScene_
#define _GameScene_
#include"cocos2d.h"
#include"HeroBase.h"
USING_NS_CC;
class SummonerRift1Scene :public cocos2d:: Layer{
private:
	TMXTiledMap* _tileMap;
	Sprite* _player;
	int _scWidth, _scHeight;
	int _count;//��Ϸ֡������
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	/*void update(float delta);//֡���º���*/
	CREATE_FUNC(SummonerRift1Scene);
	void setViewpointCenter(Vec2 position);
	void move(Vec2 destination);
	void onMouseDown(Event*event);
};
#endif // !_GameScene_

