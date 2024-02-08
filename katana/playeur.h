#pragma once
class playeur
{
	public:
	playeur();
	~playeur();
	std::string getRole();
	std::string getName();
	int getHonor();
	int getPV();
	int getPlayeurCapaciterSpeciale();
	void setRole(std::string role);
	void setPerso(std::string perso);
	void setName(std::string name);
	void setHonor(int honor);
	void setPlayerPV(int pv);
	void setCapaciterSpeciale(int capaciterSpeciale);

private:
	std::string name;
	std::string status;
	Role role;
	Perso perso;
public:
	playeur(const std::string& name, const std::string& status, const Role& role, const Perso& perso)
		: name(name), status(status), role(role), perso(perso)
};

