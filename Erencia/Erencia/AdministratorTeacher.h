#pragma once
#include"Teacher.h"
#include"Administrator.h"

class AdministratorTeacher : public Administrator, public Teacher {
	void DosClases() {
		Teach();
		Administrator();
		Administrator::update();
		Teacher::update();
	}



};