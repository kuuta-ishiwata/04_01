#include "CleaeScene.h"
#include "Novice.h"


void CleaeScene::Initialize()
{


}

void CleaeScene::Update()
{
	if (keys_[DIK_SPACE] && !prekeys_[DIK_SPACE]) 
	{
		sceneNo = Title;
	}

	Novice::ScreenPrintf(640, 360, "GameClear");


}

void CleaeScene::Draw() 

{
	
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, RED, kFillModeSolid);

}
