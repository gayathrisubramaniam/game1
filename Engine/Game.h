/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawFace(int x, int y);
	void DrawStar(int x, int y);
	int ClampScreenX(int x, int width);
	int ClampScreenY(int y, int height);
	bool IsColliding(int x0, int y0, int width0, int height0,
		int x1, int y1, int width1, int height1);
	void GameOver(int x, int y);
	
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	int dudeX=400;
	int dudeY=300;
	int dudeWidth = 20;
	int dudeHeight = 20;
	int star0X=300;
	int star0Y=150;
	int star0vx = 1;
	int star0vy = 1;
	bool star0IsEaten = false;
	int star1X=100;
	int star1Y=100;
	int star1vx = -1;
	int star1vy = 1;
	bool star1IsEaten = false;
	int star2X=600;
	int star2Y=400;
	int star2vx = 1;
	int star2vy = -1;
	int starwidth = 24;
	int starheight = 24;
	bool star2IsEaten = false;
	int x = 400;
	int y = 300;
	bool isStarted = false;
	

	/********************************/
};