#pragma once
#include <string>
#include <vector>
class Mesh;

std::vector<char*> tokenize(std::string str, char* delim);



class ObjParser
{
	
public:
	static Mesh parse(std::string path);
};