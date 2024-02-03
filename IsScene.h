#pragma once

enum Scene 
{

	Title,
	Stage,
	Clear,
	Scene

};

class IsScene
{

protected:

	static int sceneNo;
	const char* keys_;
	const char* prekeys_;

public:

	virtual void Initialize();
	virtual void Update();
	virtual void Draw();

	virtual ~IsScene();

	int GetSceneNo();

	void Setkeys(char* keys, char* prekeys);

};
