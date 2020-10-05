// TP_Ordo.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "graphe.h"

int main()
{
	std::ifstream file("graph.txt");
	graphe_t graphe = { 0 };
	solution_t solution = { 0 };
	if (file) {
		std::string buffer;
		std::getline(file, buffer);
		// lecture du nombre de sommets
		int nbSommets;
		file >> nbSommets;
		std::getline(file, buffer);
		std::getline(file, buffer);
		// lecture des noms d'opérations
		for (int i = 1; i <= 12; i++) {
			std::getline(file, buffer);
			graphe.nomOperation[i] = buffer;
		}
		std::getline(file, buffer);
		// lecture des durées
		for (int i = 1; i <= 12; i++) {
			file >> graphe.duree[i];
		}
		std::getline(file, buffer);
		// lecture des contraintes de précédence
		for (int i = 1; i <= 12; i++) {
			int iPere;
			file >> iPere;
			while (iPere != -1) {
				graphe.s[iPere][] = i;
				file >> iPere
			}
		}
	}
	/* LECTURE DES CONTRAINTES DE TEMPS */
	/*for (int i = 1; i <= 12; i++) {
		int iPred;
		file >> iPred;
		while (iPred != -1) {
			int duree;
			file >> duree;
			int nsPred = ++graphe.ns[iPred];
			graphe.s[iPred][nsPred] = i;
			file >> iPred;
		}
	}*/
}
