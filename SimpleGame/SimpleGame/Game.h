#pragma once
#include <iostream>
#include <vector>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

using namespace sf;
using namespace std;

class Game
{
private:
	/*
	* Window
	*/
	RenderWindow* Window;
    Event e;

	// Window 포인터 변수 초기화
	void InitWindowPointer();

	// Window 동적 생성
	void InitWindow(); \

	// 동적 생성된 Window 삭제
	void DeleteWindow();

	/*
	* Enemy
	*/
	RectangleShape RectEnemy;
	vector<RectangleShape> RectEnemies;

	// Spawn Value
	float EnemySpawnTime;
	float EnemySpawnTimeMax;
	int EnemyMaxNumber;

	// Init RectEnemy
	void InitRectEnemy();

	/*
	* Player
	*/
	CircleShape Player;

	// Init Player
	void InitPlayer();

	// Set Spawn Value
	void SetSpawnValue();



public:
	/*
	* 생성자 & 소멸자
	*/
	Game();
	~Game();

	/*
	* Enemy
	*/
	
	// Spawn Enemy
	void SpawnEnemy();

	void UpdateEnemy();

	/*
	* Player
	*/

	void UpdatePlayer();

	/*
	* Collision
	*/

	void UpdateCollision();

	void GameOver();


	/*
	* Game Loop
	*/
	// Game Loop
    // 앞 const : 반환값이 변경되지 않음
	// 뒤 const : 매개변수, 함수 내부 값이 변경되지 않음

	const bool Running() const;

	void EventHandler();

	void Update();

	void Render(); 
};

