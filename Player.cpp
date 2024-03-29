#include "Player.h"
#include "Novice.h"


Player::Player() { Initialize();}

void Player::Initialize()
{ 
	Pos_ = {50.0f, 200.0f};
	speed_ = 3.0f;
}


void Player::Update(){}

void Player::Draw()
{
	Novice::DrawEllipse((int)Pos_.x, (int)Pos_.y, 16, 16, 0.0f, WHITE, kFillModeSolid);

}

void Player::RightMove() 
{
	Pos_.x += speed_;
}

void Player::LeftMove() 
{ 
	Pos_.x -= speed_;
}

void Player::UpMove() 
{ 
	Pos_.y -= speed_;

}

void Player::DownMove()
{ 
	Pos_.y += speed_;
}
