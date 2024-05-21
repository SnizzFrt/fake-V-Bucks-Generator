#include <iostream>
#include <random>
#include <string>
#include "Vcolor.h"

int generateVBucks() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 10000);
    return dis(gen);
}

int main() {
    
    setConsoleUTF8();

    setColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Bienvenue sur le générateur de V-Bucks !" << std::endl;

    setColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::string username;
    std::cout << "Entrez votre pseudo : ";
    std::getline(std::cin, username);

    setColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Bonjour, " << username << "! Appuyez sur Entrée pour générer vos V-Bucks..." << std::endl;
    std::cin.ignore();

    int vbucks = generateVBucks();

    setColor(FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Félicitations, " << username << "! Vous avez généré " << vbucks << " V-Bucks fictifs." << std::endl;
    setColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    std::cout << "Amusez-vous bien dans Fortnite !" << std::endl;

    return 0;
}
