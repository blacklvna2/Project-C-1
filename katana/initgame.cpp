#include "initgame.h"

void InitialisationPlayeur(int nbjoueur)
{
	switch (nbjoueur)
	{
		case 3:
		{
			// make me a liste of role
			Role SHOGUN("Shogun", SHOGUN, 5, 1, 3);
			Role Ninja1("Ninja", NINJA, 4, 1, 3);
			Role Ninja2("Ninja", NINJA, 3, 1, 3);
			// add role to list
			std::list<Role> roles;
			roles.push_back(SHOGUN);
			roles.push_back(Ninja1);
			roles.push_back(Ninja2);

			// affiche mois cette liste
			std::list<Role>::iterator it;
			for (it = roles.begin(); it != roles.end(); it++)
			{
				std::cout << it->getRoleName() << std::endl;
			}

			// make me a liste of perso
			Perso perso1("Kenshin", HANZO, 100, 3);
			Perso perso2("Kaito", HANZO, 100, 3);
			Perso perso3("Kaita", HANZO, 100, 3);

			// add perso to list
			std::list<Perso> personnages;
			personnages.push_back(perso1);
			personnages.push_back(perso2);
			personnages.push_back(perso3);

			// affiche mois cette liste
			std::list<Perso>::iterator it2;
			for (it2 = personnages.begin(); it2 != personnages.end(); it2++)
			{
				std::cout << it2->getName() << std::endl;
			}

		}
			break;
		case 4:
			
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
	default:
		break;
	}
}

void InitialisationDeck()
{
	//liste of arme
	std::vector<Carte> cartes;
	CArme nodachie("Nodachi", NODACHI, 10, 1);
	CArme Naginata("Naginata", NAGINATA, 15, 1);
	CArme Nagayari("Nagayari", NAGAYARI, 25, 1);
	CArme Tanegashima("Tanegashima", TANEGASHIMA, 30, 1);
	CArme Daikyu("Daikyu", DAIKYU, 35, 1);
	CArme Bo("Bo", BO, 40, 1);
	CArme Kusarigama("Kusarigama", KUSARIGAMA, 20, 1);
	CArme Katana("Katana", KATANA, 10, 1);
	CArme Shuriken("Shuriken", SHURIKEN, 5, 1);
	CArme Kanabo("Kanabo", KANABO, 45, 1);
	CArme Bokken("Bokken", BOKKEN, 50, 1);
	CArme Kiseru("Kiseru", KISERU, 55, 1);
	CArme Wakizashi("Wakizashi", WAKIZASHI, 60, 1);


	// add arme to vector
	cartes.push_back(nodachie);
	cartes.push_back(Naginata);
	cartes.push_back(Nagayari);
	cartes.push_back(Tanegashima);
	cartes.push_back(Daikyu);
	cartes.push_back(Bo);
	cartes.push_back(Kusarigama);
	cartes.push_back(Katana);
	cartes.push_back(Shuriken);
	cartes.push_back(Kanabo);
	cartes.push_back(Bokken);
	cartes.push_back(Kiseru);
	cartes.push_back(Wakizashi);

	//vectore of CAction
	CAction CrieDeGuerre("CrieDeGuerre", CRIEDEGUERRE, 10, 10, true, true, 10, 10, true);
	CAction Daimyo("Daimyo", DAIMYO, 10, 10, true, true, 10, 10, true);
	CAction Diversion("Diversion", DIVERSION, 10, 10, true, true, 10, 10, true);
	CAction Geisha("Geisha", GEISHA, 10, 10, true, true, 10, 10, true);
	CAction Meditation("Meditation", MEDITATION, 10, 10, true, true, 10, 10, true);

	// add carte to vector carte
	cartes.push_back(CrieDeGuerre);
	cartes.push_back(Daimyo);
	cartes.push_back(Diversion);
	cartes.push_back(Geisha);
	cartes.push_back(Meditation);

	//vectore of CPerma
	CPerma Armure("Armure", ARMURE, 0, 10, 0, 0, false);
	CPerma CodeDuBushido("CodeDuBushido", CODEDUBUSHIDO, 0, 0, 0, 1, true);
	CPerma AttaqueRapide("AttaqueRapide", ATTAQUERAPIDE, 10, 0, 0, 0, false);
	CPerma Consentration("Consentration", CONSENTRATION, 0, 0, 10, 0, false);

	// add carte to vector carte
	cartes.push_back(Armure);
	cartes.push_back(CodeDuBushido);
	cartes.push_back(AttaqueRapide);
	cartes.push_back(Consentration);

	// shuffle vector
	random_shuffle(cartes.begin(), cartes.end());


	//show vectore carte
	std::vector<Carte>::iterator it5;
	for (it5 = cartes.begin(); it5 != cartes.end(); it5++)
	{
		std::cout << it5->getName() << std::endl;
	}
}
