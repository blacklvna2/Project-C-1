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

    Role(std::string name, int honor, int camp, int stars);
	std::string getName();
	int getHonor();
	int getCamp();
	int getStars();
	void setName(std::string name);
	void setHonor(int honor);
	void setCamp(int camp);
	void setStars(int stars);



};

#endif // ROLE_H