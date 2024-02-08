#include "role.h"

Role::Role()
{
}

Role::Role(std::string name, int honor, int camp, int stars) {
	this->name = name;
	this->honor = honor;
	this->camp = camp;
	this->stars = stars;
}

std::string Role::getRoleName() {
	return name;
}

int Role::getHonor() {
	return honor;
}

int Role::getCamp() {
	return camp;
}

int Role::getStars() {
	return stars;
}

void Role::setRoleName(std::string name) {
	this->name = name;
}

void Role::setHonor(int honor) {
	this->honor = honor;
}

void Role::setCamp(int camp) {
	this->camp = camp;			// or char camp
}

void Role::setStars(int stars) {
	this->stars = stars;
}
