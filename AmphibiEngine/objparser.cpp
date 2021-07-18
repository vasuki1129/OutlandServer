#include "objparser.h"
#include <fstream>
#include <iostream>
#include "mesh.h"
#include <vector>


#define _CRT_SECURE_NO_WARNINGS 1

using namespace std;
Mesh ObjParser::parse(string path)
{
	fstream file;
	file.open(path, ios::in);

	if (file.is_open())
	{
		Mesh m;
		string line = "";
		
		while (getline(file, line))
		{

			if (line[0] == '#') {
				//ignore commented lines
			}
			else 
			{
				char dl[] = " ";
				vector<char*> tk = tokenize(line, dl);

				if (tk[0] == "o")
				{
					m.name = tk[1];
				}
				else
				if (tk[0] == "v")
				{
					m.AddVertex(stof(tk[1]),stof(tk[2]),stof(tk[3]));
				}
				else
				{
					//if we dont recognize the instruction, just skip it
				}



			}
			
			

		}


		return m;
	}
	else
	{
		Mesh m;

		return m;
	}

}

vector<char*> tokenize(string str, char* delim)
{
	char* l;
	strcpy(l, str.c_str());
	vector<char*> tokens;

	char *token = strtok(l, delim);
	while (token != NULL)
	{
		tokens.push_back(token);

		token = strtok(NULL, delim);
	}

	return tokens;
}



