#pragma once
#include "IsScene.h"
#include "Player.h"
#include "Enemy.h"
#include <memory>


class StageScene : public IsScene
{
public:
	void Initialize() override;

	void Update() override;

	void Draw() override;

	void CheckOnCollision();

private:
	std::unique_ptr<Player> player_;

	std::unique_ptr<Enemy> enemy_;




};
