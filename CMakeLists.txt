cmake_minimum_required(VERSION 3.16)
project(wirtualny_swiat_JPO)

set(CMAKE_CXX_STANDARD 20)

add_executable(wirtualny_swiat_JPO main.cpp src/Swiat.cpp include/Swiat.h include/organizmy/Organizm.h src/organizmy/Organizm.cpp include/organizmy/Zwierze.h src/organizmy/Zwierze.cpp src/organizmy/Roslina.cpp include/organizmy/Roslina.h include/organizmy/zwierzeta/Wilk.h include/organizmy/zwierzeta/Owca.h src/organizmy/zwierzeta/Wilk.cpp src/organizmy/zwierzeta/Owca.cpp include/organizmy/rosliny/Trawa.h src/organizmy/rosliny/Trawa.cpp include/Wyswietlanie.h src/Wyswietlanie.cpp)