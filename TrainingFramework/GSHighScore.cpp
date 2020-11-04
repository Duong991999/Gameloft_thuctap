#include "GSHighScore.h"


extern int screenWidth; //need get on Graphic engine
extern int screenHeight; //need get on Graphic engine

GSHighScore ::GSHighScore()
{
}


GSHighScore::~GSHighScore()
{
}

void GSHighScore::Exit()
{
}


void GSHighScore::Pause()
{

}

void GSHighScore::Resume()
{

}


void GSHighScore::HandleEvents()
{

}
void GSHighScore::HandleKeyEvents(int key, bool bIsPressed)
{

}

void GSHighScore::HandleTouchEvents(int x, int y, bool bIsPressed)
{
	for (auto it : m_listButton)
	{
		(it)->HandleTouchEvents(x, y, bIsPressed);
		if ((it)->IsHandle()) break;
	}
}

void GSHighScore::Update(float deltaTime)
{
	m_BackGround->Update(deltaTime);
	for (auto it : m_listButton)
	{
		it->Update(deltaTime);
	}
}

void GSHighScore::Draw()
{
	m_BackGround->Draw();
	for (auto it : m_listButton)
	{
		it->Draw();
	}
	m_Text_gameName->Draw();
}

