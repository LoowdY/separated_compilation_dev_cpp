#include <iostream>
using namespace std;
class Dragao
{
	private:
		
		int vida;
		int defesa;
		int forca;
	
	public:
		void Atacar(int num);
		void Defender(int num1);
		void Ferimento(int num2);
		void Curar(int num3);
		Dragao(int v, int d, int f);
		Dragao();
	
};
