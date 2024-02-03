#include "Player.h"
#include "Novice.h"


Player::~Player() 
{

	for (PlayerBullet* bullet : playerbullets_)
	{
		delete bullet;
	}

}

void Player::Initialize(const char* keys, const char* preKeys) { 

	Pos_ = {300.0f, 200.0f};
	radius_ = {40.0f, 40.0f};

	keys_ = keys;
	preKeys_ = preKeys;
	speed_ = 3.0f;
}


void Player::Update()
{
	if (keys_[DIK_D])
	{
		Pos_.x += speed_;
	} 
	if (keys_[DIK_A])
	{
		Pos_.x -= speed_;
	}
	if (keys_[DIK_S])
	{
		Pos_.y -= speed_;
	}

     if (keys_[DIK_W])
     {
     	Pos_.y += speed_;
     }

}

void Player::Draw()
{
	Novice::DrawEllipse((int)Pos_.x, (int)Pos_.y, 16, 16, 0.0f, WHITE, kFillModeSolid);
	 for (PlayerBullet* bullet : playerbullets_) {
		bullet->Draw();
	 }
}


Vector2 Player::GetPosition() 
{
	 Vector2 pos;

	 pos.x = Pos_.x;
	 pos.y = Pos_.y;
	 return pos;
}

void Player::Attack()
{

	if (keys_[DIK_SPACE] && !preKeys_[DIK_SPACE])
	{

		const float BulletSpeed = 5.0f;
		PlayerBullet* newBullet = new PlayerBullet();
		newBullet->Initialize(BulletSpeed, Pos_, keys_, preKeys_);

		playerbullets_.push_back(newBullet);
	}


}
