#include <iostream>
#include <memory>
#include <fstream>

#include <SFML/Graphics.hpp>
#include "imgui.h"
#include "imgui-SFML.h"

#include "initializeConfigFile.h"



int main()
{
	sf::RenderWindow window(sf::VideoMode({1280, 720}), "A1");
	window.setFramerateLimit(60);

	if (!ImGui::SFML::Init(window)) return -1;


	//initializing a shape
	bool drawCircle = true;
	//setting speed values
	float circleSpeedX = 1.0f;
	float circleSpeedY = 0.5f;
	//radius and no. of segments
	float circleRadius = 50.0f;
	int circleSegments = 56;
	//actual circle initialization
	sf::CircleShape c1(circleRadius, circleSegments);
	c1.setFillColor(sf::Color(100, 100, 255));

	//setting up variable for color wheel
	float c[3] = {1.0f, 1.0f, 1.0f};
	

	//loading font
	sf::Font font;
	if (!font.openFromFile("../assets/fonts/VCR_OSD_MONO_1.001.ttf"))
	{
		std::cerr << "Error loading font \n";
		exit(-1);
	}


	//making a text object
	bool drawText = true;
	sf::Text text(font, "Hello, World", 12);
	text.setFillColor(sf::Color::White);


	sf::Clock deltaClock;
	while (window.isOpen())
	{

		while (const auto event = window.pollEvent())
		{

			ImGui::SFML::ProcessEvent(window, *event);

			if (event->is<sf::Event::Closed>())
				window.close();
			
		}

		ImGui::SFML::Update(window, deltaClock.restart());

		//draw ImGui window ui
		ImGui::Begin("A1 Shape Settings");
		ImGui::Text("Adjust shape settings here");
		
		ImGui::Checkbox("Draw circle", &drawCircle);
		ImGui::SameLine();
		ImGui::Checkbox("Draw text", &drawText);
		ImGui::SliderFloat("Circle radius", &circleRadius, 5.0f, 200.0f);
		ImGui::SliderInt("Circle segments", &circleSegments, 6, 64);
		ImGui::ColorPicker3("Circle Color", c);
		ImGui::End();


		c1.setRadius(circleRadius);
		c1.setPointCount(circleSegments);
		c1.setFillColor(sf::Color(c[0]*255, c[1]*255, c[2]*255));


		window.clear(sf::Color::Black);
		//WASD MOVEMENT
		/*
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
    		c1.move({-1.f, 0.f});
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			c1.move({1.f, 0.f});
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		{
			c1.move({0.f, -1.f});
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			c1.move({0.f, 1.f});
		}
		*/
		
		if (drawCircle)
		{
			window.draw(c1);
		}
		if (drawText)
		{
			window.draw(text);
		}
		
		ImGui::SFML::Render(window);
		window.display();

	}

	ImGui::SFML::Shutdown();

	return 0;
}
