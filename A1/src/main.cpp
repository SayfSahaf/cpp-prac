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

	sf::CircleShape shape(100.0f);
	shape.setFillColor(sf::Color::Green);

	sf::Clock deltaClock;

	//loading font
	sf::Font font;
	if (!font.openFromFile("../assets/fonts/VCR_OSD_MONO_1.001.ttf"))
	{
		std::cerr << "Error loading font \n";
		exit(-1);
	}

	//making a text object
	sf::Text text(font);
	text.setString("Hello, World");
	text.setCharacterSize(12);
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
		window.draw(shape);
		window.draw(text);
		ImGui::SFML::Render(window);
		window.display();

	}

	ImGui::SFML::Shutdown();

	return 0;
}
