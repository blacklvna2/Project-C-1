#include "initgame.h"
#include <vector>
#include "role.h"
#include "perso.h"
#include <string>


using namespace std;

vector<Role> InitialisationRole(int nbjoueur)
{
	switch (nbjoueur)
	{
	case 3:
	{
		//todo liste shuffule 1 a 3 for ninja 
		// make me a vectore of role
		Role SHOGUN("Shogun", RoleType::SHOGUN, 6, 1, 100);
		Role Ninja1("Ninja", NINJA, 3, 3, 3);
		Role Ninja2("Ninja", NINJA, 3, 3, 3);// fonction random qui genere 1,2,3 pour les etoiles
		// add role to vector
		vector<Role> roles;
		roles.push_back(SHOGUN);
		roles.push_back(Ninja1);
		roles.push_back(Ninja2);



		return roles;



	}
	break;
	case 4:
	{
		// make me a vectore of role
		Role SHOGUN("Shogun", RoleType::SHOGUN, 5, 1, 100);
		Role Ninja1("Ninja", NINJA, 3, 3, 3);
		Role Ninja2("Ninja", NINJA, 3, 3, 3);
		Role Samourai("Samourai", SAMOURAI, 3, 1, 100);

		// add role to vector
		vector<Role> roles;
		roles.push_back(SHOGUN);
		roles.push_back(Ninja1);
		roles.push_back(Ninja2);
		roles.push_back(Samourai);

		// affiche mois cette vectore

		return roles;
		break;
	}

	case 5:
	{// make me a vectore of role
		Role SHOGUN("Shogun", RoleType::SHOGUN, 5, 1, 100);
		Role Ninja1("Ninja", NINJA, 3, 3, 3);
		Role Ninja2("Ninja", NINJA, 3, 3, 3);
		Role Samourai("Samourai", SAMOURAI, 3, 1, 100);
		Role Ronin("Ronin", RONIN, 3, 2, 100);

		// add role to vector
		vector<Role> roles;
		roles.push_back(SHOGUN);
		roles.push_back(Ninja1);
		roles.push_back(Ninja2);
		roles.push_back(Samourai);
		roles.push_back(Ronin);



	}
	break;
	case 6:
	{
		// make me a vectore of role
		Role SHOGUN("Shogun", RoleType::SHOGUN, 5, 1, 100);
		Role Ninja1("Ninja", NINJA, 4, 3, 3);
		Role Ninja2("Ninja", NINJA, 4, 3, 3);
		Role Ninja3("Ninja", NINJA, 4, 3, 3);
		Role Samourai("Samourai", SAMOURAI, 4, 1, 100);
		Role Ronin("Ronin", RONIN, 4, 2, 100);

		// add role to vector
		vector<Role> roles;
		roles.push_back(SHOGUN);
		roles.push_back(Ninja1);
		roles.push_back(Ninja2);
		roles.push_back(Ninja3);
		roles.push_back(Samourai);
		roles.push_back(Ronin);



		return roles;
	}
	break;
	case 7:
	{
		// make me a vectore of role
		Role SHOGUN("Shogun", RoleType::SHOGUN, 5, 1, 100);
		Role Ninja1("Ninja", NINJA, 4, 3, 3);
		Role Ninja2("Ninja", NINJA, 4, 3, 3);
		Role Ninja3("Ninja", NINJA, 4, 3, 3);
		Role Samourai("Samourai", SAMOURAI, 4, 1, 100);
		Role Samourai2("Samourai", SAMOURAI, 4, 1, 100);
		Role Ronin("Ronin", RONIN, 4, 2, 100);

		// add role to vector
		vector<Role> roles;
		roles.push_back(SHOGUN);
		roles.push_back(Ninja1);
		roles.push_back(Ninja2);
		roles.push_back(Ninja3);
		roles.push_back(Samourai);
		roles.push_back(Samourai2);
		roles.push_back(Ronin);
		return roles;
	}
	break;
	default:
		break;
	}
}

vector<Carte> InitialisationDeck()
{
	//vectore of arme
	// add bonne valeur
	vector<Carte> cartes;
	CArme nodachie("Nodachi", NODACHI, 3, 3);
	
	CArme Naginata("Naginata", NAGINATA, 1, 4);
	CArme Naginata2("Naginata", NAGINATA, 1, 4);

	CArme Nagayari("Nagayari", NAGAYARI, 2, 4);
	
	CArme Tanegashima("Tanegashima", TANEGASHIMA, 1, 5);

	CArme Daikyu("Daikyu", DAIKYU, 2, 5);
	
	CArme Bo("Bo", BO, 1, 2);
	CArme Bo2("Bo", BO, 1, 2);
	CArme Bo3("Bo", BO, 1, 2);
	CArme Bo4("Bo", BO, 1, 2);
	CArme Bo5("Bo", BO, 1, 2);

	CArme Kusarigama("Kusarigama", KUSARIGAMA, 2, 2);
	CArme Kusarigama2("Kusarigama", KUSARIGAMA, 2, 2);
	CArme Kusarigama3("Kusarigama", KUSARIGAMA, 2, 2);
	CArme Kusarigama4("Kusarigama", KUSARIGAMA, 2, 2);

	CArme Katana("Katana", KATANA, 3, 2);


	CArme Shuriken("Shuriken", SHURIKEN, 1, 3);
	CArme Shuriken2("Shuriken", SHURIKEN, 1, 3);
	CArme Shuriken3("Shuriken", SHURIKEN, 1, 3);

	CArme Kanabo("Kanabo", KANABO, 2, 3);

	CArme Bokken("Bokken", BOKKEN, 1, 1);
	CArme Bokken2("Bokken", BOKKEN, 1, 1);
	CArme Bokken3("Bokken", BOKKEN, 1, 1);
	CArme Bokken4("Bokken", BOKKEN, 1, 1);
	CArme Bokken5("Bokken", BOKKEN, 1, 1);
	CArme Bokken6("Bokken", BOKKEN, 1, 1);
	
	CArme Kiseru("Kiseru", KISERU, 2, 1);
	CArme Kiseru2("Kiseru", KISERU, 2, 1);
	CArme Kiseru3("Kiseru", KISERU, 2, 1);
	CArme Kiseru4("Kiseru", KISERU, 2, 1);
	CArme Kiseru5("Kiseru", KISERU, 2, 1);

	CArme Wakizashi("Wakizashi", WAKIZASHI, 3, 1);


	// add arme to vector
	cartes.push_back(nodachie);
	
	cartes.push_back(Naginata);
	cartes.push_back(Naginata2);

	cartes.push_back(Nagayari);

	cartes.push_back(Tanegashima);

	cartes.push_back(Daikyu);

	cartes.push_back(Bo);
	cartes.push_back(Bo2);
	cartes.push_back(Bo3);
	cartes.push_back(Bo4);
	cartes.push_back(Bo5);

	cartes.push_back(Kusarigama);
	cartes.push_back(Kusarigama2);
	cartes.push_back(Kusarigama3);
	cartes.push_back(Kusarigama4);

	cartes.push_back(Katana);

	cartes.push_back(Shuriken);
	cartes.push_back(Shuriken2);
	cartes.push_back(Shuriken3);
	
	cartes.push_back(Kanabo);

	cartes.push_back(Bokken);
	cartes.push_back(Bokken2);
	cartes.push_back(Bokken3);
	cartes.push_back(Bokken4);
	cartes.push_back(Bokken5);
	cartes.push_back(Bokken6);

	cartes.push_back(Kiseru);
	cartes.push_back(Kiseru2);
	cartes.push_back(Kiseru3);
	cartes.push_back(Kiseru4);
	cartes.push_back(Kiseru5);

	
	cartes.push_back(Wakizashi);


	//vectore of CAction
	CAction CrieDeGuerre("CrieDeGuerre", CRIEDEGUERRE, 10, 10, true, true, 10, 10, true);
	CAction CrieDeGuerre2("CrieDeGuerre", CRIEDEGUERRE, 10, 10, true, true, 10, 10, true);
	CAction CrieDeGuerre3("CrieDeGuerre", CRIEDEGUERRE, 10, 10, true, true, 10, 10, true);
	CAction CrieDeGuerre4("CrieDeGuerre", CRIEDEGUERRE, 10, 10, true, true, 10, 10, true);

	CAction Daimyo("Daimyo", DAIMYO, 10, 10, true, true, 10, 10, true);
	CAction Daimyo2("Daimyo", DAIMYO, 10, 10, true, true, 10, 10, true);
	CAction Daimyo3("Daimyo", DAIMYO, 10, 10, true, true, 10, 10, true);

	CAction Diversion("Diversion", DIVERSION, 10, 10, true, true, 10, 10, true);
	CAction Diversion2("Diversion", DIVERSION, 10, 10, true, true, 10, 10, true);
	CAction Diversion3("Diversion", DIVERSION, 10, 10, true, true, 10, 10, true);
	CAction Diversion4("Diversion", DIVERSION, 10, 10, true, true, 10, 10, true);
	CAction Diversion5("Diversion", DIVERSION, 10, 10, true, true, 10, 10, true);

	CAction Geisha("Geisha", GEISHA, 10, 10, true, true, 10, 10, true);
	CAction Geisha2("Geisha", GEISHA, 10, 10, true, true, 10, 10, true);
	CAction Geisha3("Geisha", GEISHA, 10, 10, true, true, 10, 10, true);
	CAction Geisha4("Geisha", GEISHA, 10, 10, true, true, 10, 10, true);
	CAction Geisha5("Geisha", GEISHA, 10, 10, true, true, 10, 10, true);
	CAction Geisha6("Geisha", GEISHA, 10, 10, true, true, 10, 10, true);

	CAction Meditation("Meditation", MEDITATION, 10, 10, true, true, 10, 10, true);
	CAction Meditation2("Meditation", MEDITATION, 10, 10, true, true, 10, 10, true);//stat a modifier
	CAction Meditation3("Meditation", MEDITATION, 10, 10, true, true, 10, 10, true);

	// add carte to vector carte
	cartes.push_back(CrieDeGuerre);
	cartes.push_back(CrieDeGuerre2);
	cartes.push_back(CrieDeGuerre3);
	cartes.push_back(CrieDeGuerre4);

	cartes.push_back(Daimyo);
	cartes.push_back(Daimyo2);
	cartes.push_back(Daimyo3);

	cartes.push_back(Diversion);
	cartes.push_back(Diversion2);
	cartes.push_back(Diversion3);
	cartes.push_back(Diversion4);
	cartes.push_back(Diversion5);

	cartes.push_back(Geisha);
	cartes.push_back(Geisha2);
	cartes.push_back(Geisha3);
	cartes.push_back(Geisha4);
	cartes.push_back(Geisha5);
	cartes.push_back(Geisha6);

	cartes.push_back(Meditation);
	cartes.push_back(Meditation2);
	cartes.push_back(Meditation3);

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

	return cartes;
}

vector<Perso> initialisationPersonnage()
{
	// make me a vectore of perso
	Perso Hanzo("Hanz", HANZO, 100, 3);
	Perso Ushiwaka("Ushiwaka", USHIWAKA, 100, 3);
	Perso Chyome("Chyome", CHYOME, 100, 3);
	Perso Hideyoshi("Hideyoshi", HIDEYOSHI, 100, 3);
	Perso Ginchyo("Ginchyo", GINCHIYO, 100, 3);
	Perso Goemon("Goemon", GOEMON, 100, 3);
	Perso Nobunaga("Nobunaga", NOBUNAGA, 100, 3);
	Perso Tomoe("Tomoe", TOMOE, 100, 3);
	Perso Ieyasu("Ieyasu", IEYASU, 100, 3);
	Perso Benkei("Benkei", BENKEI, 100, 3);
	Perso Musashi("Musashi", MUSASHI, 100, 3);
	Perso Kojiro("Kojiro", KOJIRO, 100, 3);

	// add perso to vector
	vector<Perso> personnages;
	personnages.push_back(Hanzo);
	personnages.push_back(Ushiwaka);
	personnages.push_back(Chyome);
	personnages.push_back(Hideyoshi);
	personnages.push_back(Ginchyo);
	personnages.push_back(Goemon);
	personnages.push_back(Nobunaga);
	personnages.push_back(Tomoe);
	personnages.push_back(Ieyasu);
	personnages.push_back(Benkei);
	personnages.push_back(Musashi);
	personnages.push_back(Kojiro);

	// randomise le vectore
	random_shuffle(personnages.begin(), personnages.end());

	return personnages;
}

vector<Carte> deckPlayerSubset(vector<Carte>::iterator start, vector<Carte>::iterator end)
{
	vector<Carte> subset(start, end);
	return subset;
}

void InitialisationDeckPlayer(std::vector<Carte>& deck, const std::string role, int id, Playeur& playeur)
{
    std::vector<Carte> deckJoueur;
    if (role == "Shogun")
    {
        //si le joueur et shogune prend les 4 premier carte du deck est est les supprime
        for (int i = 0; i < 4; i++)
        {
            deckJoueur.push_back(deck[i]);
        }
        deck.erase(deck.begin(), deck.begin() + 4);
        playeur.setDeckPlayer(deckJoueur);
    }

    else
    {
        switch (id)
        {
        case 0:
        case 1:
        case 2:
        {
            //si le joueur et ninja prend les 5 premier carte du deck est est les supprime
            for (int i = 0; i < 5; i++)
            {
                deckJoueur.push_back(deck[i]);
            }
            deck.erase(deck.begin(), deck.begin() + 5);
            playeur.setDeckPlayer(deckJoueur);
        }
        break;
        case 3:
        case 4:
        {
            //si le joueur et samourai prend les 6 premier carte du deck est est les supprime
            for (int i = 0; i < 6; i++)
            {
                deckJoueur.push_back(deck[i]);
            }
            deck.erase(deck.begin(), deck.begin() + 6);
            playeur.setDeckPlayer(deckJoueur);
        }
        break;
        case 5:
        case 6:
        {
            for (int i = 0; i < 7; i++)
            {
                deckJoueur.push_back(deck[i]);
            }
            deck.erase(deck.begin(), deck.begin() + 7);
            playeur.setDeckPlayer(deckJoueur);
        }
        break;
        default:
            break;
        }
    }
}
