#pragma once
#include <vector>
#include <string>
class Mesh 
{
	std::vector<std::vector<float>> vertices;

public:

	std::string name;



	void AddVertex(float x,float y,float z);
	void DebugPrint();


	Mesh();
};