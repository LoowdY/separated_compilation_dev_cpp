#include <iostream>
#include "class_dragao.hpp"
using namespace std;

	void Dragao::Atacar(int num)
		{
		
			forca = forca + num;
			cout << "Voce foi atacado\n voce recebeu {" << forca <<"} de dano!\n";
		}
		void Dragao:: Defender(int num1)
		{
			defesa = defesa + num1 - forca;
			cout << "Voce defendeu!\n Voce possui " << defesa << " de defesa";
		}
		void Dragao::Ferimento(int num2)
		{
			vida = vida - num2;
		}
		void Dragao:: Curar(int num3)
		{
			vida = vida + num3;
		}
	 	Dragao::Dragao(int v, int d, int f)
		{
			vida = v;
			defesa = d;
			forca= f;
		}
		Dragao::Dragao()
		{
			vida = 0;
			defesa = 0;
			forca = 0;
		}
