#include "mesh.h"
#include <iostream>


using namespace std;

Mesh::Mesh()
{
	

}

void Mesh::AddVertex(float x, float y, float z)
{
	vertices.push_back({x,y,z});
	this->DebugPrint();



}




void Mesh::DebugPrint()
{

	cout << name << "\n";
	cout << "[\n";

	for (int iVert = 0; iVert < this->vertices.size(); iVert++)
	{
		for (int iCoord = 0; iCoord < this->vertices[iVert].size(); iCoord++)
		{
			cout << this->vertices[iVert][iCoord] << ", ";
		}
		cout << "\n";
	}
	cout << "]\n\n";
}