#ifndef ROLE_H
#define ROLE_H

#include <string>

class Role {
private:
    std::string name;
    int honor;
    int camp;
    int stars;


public:

	Role();
    Role(std::string name, int honor, int camp, int stars);
	std::string getRoleName();
	int getHonor();
	int getCamp();
	int getStars();
	void setRoleName(std::string name);
	void setHonor(int honor);
	void setCamp(int camp);
	void setStars(int stars);



};

#endif // ROLE_H