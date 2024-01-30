#pragma once
#include "Vector2.h"

class Player {

public:
	Player();

	void Initialize();
	void Update();
	void Draw();

	void RightMove();
	void LeftMove();
	void UpMove();
	void DownMove();


private:

	Vector2 Pos_;
	float speed_;

};
