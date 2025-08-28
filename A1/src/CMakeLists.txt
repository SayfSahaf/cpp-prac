add_executable(
    sfmlgame_exe
    main.cpp
)

target_compile_features(sfmlgame_exe PRIVATE cxx_std_17)

target_link_libraries(
	sfmlgame_exe 
    PRIVATE 
    sfml-graphics 
    sfml-window 
    sfml-system
    ImGui-SFML::ImGui-SFML
)