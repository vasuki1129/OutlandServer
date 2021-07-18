#include "meshtester.h"
#include "mesh.h"
#include "objparser.h"


int main(int argc, char** argv)
{
	ObjParser p;
	Mesh m = p.parse("C:\\Models\\sphere.obj");
	m.DebugPrint();

}