#include <iostream>
#include <memory>
#include <fstream>

#include <SFML/Graphics.hpp>
#include "imgui.h"
#include "imgui-SFML.h"



int main()
{
	sf::RenderWindow window(sf::VideoMode({1280, 720}), "A1");
	window.setFramerateLimit(60);

	if (!ImGui::SFML::Init(window)) return -1;

	//initializing a shape
	sf::CircleShape c1(50.0f);
	c1.setFillColor(sf::Color(100, 100, 255));
	//setting speed values
	float circleSpeedX = 1.0f;
	float circleSpeedY = 0.5f;

	sf::Clock deltaClock;

	//loading font
	sf::Font font;
	if (!font.openFromFile("../assets/fonts/VCR_OSD_MONO_1.001.ttf"))
	{
		std::cerr << "Error loading font \n";
		exit(-1);
	}

	//making a text object
	sf::Text text(font, "Hello, World", 12);
	text.setFillColor(sf::Color::White);


	while (window.isOpen())
	{

		while (const auto event = window.pollEvent())
		{

			ImGui::SFML::ProcessEvent(window, *event);

			if (event->is<sf::Event::Closed>())
				window.close();
			
		}

		ImGui::SFML::Update(window, deltaClock.restart());
		ImGui::ShowDemoWindow();
		ImGui::Begin("Hello, World!");
		ImGui::Button("Look at this pretty button");
		ImGui::End();


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
		window.draw(c1);
		window.draw(text);
		ImGui::SFML::Render(window);
		window.display();

	}

	ImGui::SFML::Shutdown();

	return 0;
}
