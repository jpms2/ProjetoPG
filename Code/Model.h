#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

struct Vector
{
	float x;
	float y;
	float z;
};

struct Face
{
	vector < int > vertices;
	vector < int > texturas;
	vector < int > normais;
};

struct Texture
{
	float x;
	float y;
};

class Model
{
public:
	string nome;
	bool hasTexture;
	bool hasNormal;
	vector<Vector> vertices;
	vector<Face> faces;
	vector<Vector> normais;
	vector<Texture> textura;
	Model( const char* path);
	void LoadObj(const char* path);
	void LoadNurb(const char* path);
	void DrawModel();
};