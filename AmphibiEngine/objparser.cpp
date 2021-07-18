#include "objparser.h"
#include <fstream>
#include <iostream>
#include "mesh.h"
#include <vector>

using namespace std;
Mesh ObjParser::parse(string path)
{
	fstream file;
	file.open(path, ios::in);

	if (file.is_open())
	{
		Mesh m;
		string line = "";
		char dl[] = " ";
		vector<char*> tk;
		while (getline(file, line))
		{
				
				tk = tokenize(line, dl);

				for (int iTokens = 0; iTokens < tk.size(); iTokens++)
				{
					cout << tk[iTokens] << ", ";
				}
				cout << "\n";

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
	
	char l[128] = "";
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



