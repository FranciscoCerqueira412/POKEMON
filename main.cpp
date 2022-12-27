#include<iostream>
#include "windows.h"
#include"mmsystem.h"
#include<cmath>
#include<fstream>
#include<cstdlib>
#include<string>
#include<random>
#include<ctime>
using namespace std;

bool game_running = true;
int u = 1;
int j = 1;

char map[80][90] {
		
		"###################################################",
		"#@       |#####   #####   #####   #####   #####   #",
		"#        | ###     ###     ###     ###    __      #",
		"#<       |          ___              #   (  )    ##",
		"# <      >         <   >             #   ####   ###",
		"#  <      >       (  _  )            #   #  #    ##",
		"#   <      >      (_| |_)            #            #",
		"#    <      >                       ##            #",
		"#     <      >                                    #",
		"#      <      >                                   #",
		"#       <      |                                  #",
		"#        |     |                    ##            #",
		"#        |     |                     #    __      #",
		"#                                    #   (  )     #",
		"##                                   #   ####    ##",
		"###      |     |                     #   #  #   ###",
		"##       |     |                     #           ##",
		"#    ### |     |   ###     ###     ###     ###    #",
		"#   #####|     |  #####   #####   #####   #####   #",
		"###################################################",
		
		
};
bool stopgame =false;
int main()
{

PlaySound(TEXT("pokemon.wav"), NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE);
	int x,d,op,s,salvar,vida=100,b,chan,escolha,vidae=100,item;
	string n,a,s2,s3,bul,squ,cha,lo;
	//splash art
	SetConsoleTextAttribute(h, 14);
	ifstream mapa;
	mapa.open("art.txt");
	
	if(mapa.fail())
	{
		cout<<"fail";
	}
	else{
		string s;
		while(getline(mapa, s))
		{
			cout<<s<<endl;
		}
	}
	SetConsoleTextAttribute(h, 15);
	cout<<"  1-Novo Jogo"<<"  2-Carregar Jogo"<<endl<<"  3-sair"<<endl;
	SetConsoleTextAttribute(h, 11);
	cin>>x;
	
	if(x==2)
	{
	ifstream load ("Load.txt");
	if(!load && d!=1 && d!=2 && d!=3){cout << "Nao foi possivel carregar o jogo guardado." << endl;}
	load >> d;
	load >> vida;
cout<<d;

PlaySound(TEXT("ambient.wav"), NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
HANDLE m = GetStdHandle ( STD_OUTPUT_HANDLE);

	//Mapa
SetConsoleTextAttribute(h,7 );
 while(game_running == true){
        system("cls");
        for(int display=0; display<20; display++){
            cout << map[display] << endl;
        }
        if(d==1){cout<<"O teu pokemon:Bulbasaur"<<endl;
		}
		if(d==2){cout<<"O teu pokemon:Squirtle"<< endl;
		}
		if(d==3){cout<<"O teu pokemon:Charmander"<< endl;
		}
		cout<<"A vida do teu pokemon:" << vida<<endl;
  cout<<endl<<"Utilize a tecla Esc para mais opcoes e a tecla 'l' para aceder a loja"<<endl;

        system("pause>nul");

        if(GetAsyncKeyState(VK_DOWN)){
            int j2 = j+1;
            if(map[j2][u] == ' '){
                map[j][u] = ' ';
                j++;
                map[j][u] = '@';
            }
        }

        if(GetAsyncKeyState(VK_UP)){
            int j2 = j-1;
            if(map[j2][u] == ' '){
                map[j][u] = ' ';
                j--;
                map[j][u] = '@';
            }
        }

        if(GetAsyncKeyState(VK_RIGHT)){
            int u2 = u+1;
            if(map[j][u2] == ' '){
                map[j][u] = ' ';
                u++;
                map[j][u] = '@';
            }
        }

        if(GetAsyncKeyState(VK_LEFT)){
            int u2 = u-1;
            if(map[j][u2] == ' '){
                map[j][u] = ' ';
                u--;
                map[j][u] = '@';
            }
        }
        
        //random
		mt19937 randomGenerator(time(0)) ;
uniform_int_distribution<int> ran(1, 30000);
 
 


//batalha Bulba
	if (ran(randomGenerator)>=900 && ran(randomGenerator)<=920)
{
	system("cls");
	
	SetConsoleTextAttribute(h, 2);
	ifstream batalhabul;
	batalhabul.open("Menu de batalha bulba.txt");
	
	if(batalhabul.fail())
	{
		cout<<"fail";
	}
	else{
		string s4;
		while(getline(batalhabul, s4))
		{
			cout<<s4<<endl;
			
		
		}
	}
		
		{
    PlaySound(NULL, NULL, 0);
}

PlaySound(TEXT("batalha.wav"), NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
HANDLE m = GetStdHandle ( STD_OUTPUT_HANDLE);



	{
	
	while((vidae>0) && (vida>0)){
	
	cout<<endl<<"1-ATACAR"<<endl;
    
		cin>>op;
	
		
	
			if(d==2){
				
				
			system("cls");
			cout<<"1-PISTOLA DE AGUA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
			if(escolha==1){
			
			vidae-=40;
			vida-=35;
			cout<<"Atingiu o bulbasaur inimigo tirando-lhe 40 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 35 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
				}
			
		
		else if(escolha==2){
			vidae-=30;
			vida-=30;
			cout<<"Atingiu o bulbasaur inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 30 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==1){
			system("cls");
			cout<<"1-CHICOTE DE ERVA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
						system("cls");

			if(escolha==1){
			
			vidae-=30;
			vida-=25;
			cout<<"Atingiu o bulbasaur inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=20;
			cout<<"Atingiu o bulbasaur inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 20 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==3){
			system("cls");
			cout<<"1-BOLA DE FOGO"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");

			if(escolha==1){
			
			vidae-=60;
			vida-=30;
			cout<<"Atingiu o bulbasaur inimigo tirando-lhe 60 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 30 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o bulbasaur inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 20 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
	
  
  	if(vidae<=0){
  				SetConsoleTextAttribute(h, 7);

		cout<<endl<<"VITORIA"<<endl;
	
		
	}
	else if(vida<=0){
				SetConsoleTextAttribute(h, 7);

		cout<<endl<<"DERROTA"<<endl;
		
	}	
}  

		if(vidae<=80){
		vidae=100;
		}
	
	}
		
		system("pause>nel");
	
	}
	//batalha squ
		
		if (ran(randomGenerator)>920 && ran(randomGenerator)<=940)
{
	system("cls");
	SetConsoleTextAttribute(h, 1);
		ifstream batalhasqu;
	batalhasqu.open("Menu de batalha squ.txt");
	
	if(batalhasqu.fail())
	{
		cout<<"fail";
	}
	else{
		string s5;
		while(getline(batalhasqu, s5))
		{
			cout<<s5<<endl;
			
		
		}
	}
		
		{
    PlaySound(NULL, NULL, 0);
}



PlaySound(TEXT("batalha.wav"), NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
HANDLE m = GetStdHandle ( STD_OUTPUT_HANDLE);

	{
	while((vidae>0) && (vida>0)){
	cout<<"1-ATACAR"<<endl;
   
		cin>>op;
		
		
	
			if(d==2){
			system("cls");
			cout<<"1-PISTOLA DE AGUA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");

			if(escolha==1){
			
			vidae-=30;
			vida-=25;
			cout<<"Atingiu o squirtle inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o squirtle inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==1){
			system("cls");
			cout<<"1-CHICOTE DE ERVA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");

			if(escolha==1){
			
			vidae-=40;
			vida-=35;
			cout<<"Atingiu o squirtle inimigo tirando-lhe 40 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 35 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=30;
			vida-=35;
			cout<<"Atingiu o squirtle inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 35 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==3){
			system("cls");
			cout<<"1-BOLA DE FOGO"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
	
			if(escolha==1){
			
			vidae-=60;
			vida-=30;
			cout<<"Atingiu o squirtle inimigo tirando-lhe 60 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 30 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o squirtle inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 20 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			
		
		if(vidae<=0){
					SetConsoleTextAttribute(h, 7);

		cout<<endl<<"VITORIA"<<endl;
		
		
	}
	else if(vida<=0){
				SetConsoleTextAttribute(h, 7);

		cout<<endl<<"DERROTA"<<endl;
	

	}	

	
		
	}
	if(vidae<=80){
		vidae=100;
		}
		
		
		
		
		system("pause>nel");
	}
	}

	

//batalha cha

		if (ran(randomGenerator)>940 && ran(randomGenerator)<=920)
{
	system("cls");
	SetConsoleTextAttribute(h, 4);
		ifstream batalhacha;
	batalhacha.open("Menu de batalha cha.txt");
	
	if(batalhacha.fail())
	{
		cout<<"fail";
	}
	else{
		string s6;
		while(getline(batalhacha, s6))
		{
			cout<<s6<<endl;
			
		
		}
	}
		
		{
    PlaySound(NULL, NULL, 0);
}



PlaySound(TEXT("batalha.wav"), NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
HANDLE m = GetStdHandle ( STD_OUTPUT_HANDLE);

	{
	while((vida>0) && (vidae>0)){
	cout<<"1-ATACAR"<<endl;
    
		cin>>op;
		system("cls");
		
		
	
	
			if(d==2){
			system("cls");
			cout<<"1-PISTOLA DE AGUA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");

			if(escolha==1){
			
			vidae-=40;
			vida-=35;
			cout<<"Atingiu o charmander inimigo tirando-lhe 40 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 35 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=30;
			vida-=30;
			cout<<"Atingiu o charmander inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 30 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==1){
			system("cls");
			cout<<"1-CHICOTE DE ERVA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
			if(escolha==1){
			
			vidae-=60;
			vida-=30;
			cout<<"Atingiu o charmander inimigo tirando-lhe 60 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 30 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o charmander inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 30 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==3){
			system("cls");
			cout<<"1-BOLA DE FOGO"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
			if(escolha==1){
			
			vidae-=30;
			vida-=40;
			cout<<"Atingiu o charmander inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=40;
			vida-=25;
			cout<<"Atingiu o charmander inimigo tirando-lhe 40 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			
		
		
			if(vidae<=0){
						SetConsoleTextAttribute(h, 7);

		cout<<endl<<"VITORIA"<<endl;
	
		
	}
	else if(vida<=0){
				SetConsoleTextAttribute(h, 7);

		cout<<endl<<"DERROTA"<<endl;
		

	}	
		
		}
		if(vidae<=80){
		vidae=100;
		}
	
		
		system("pause>nel");
	}
	}
//batalha pica
if (ran(randomGenerator)>990 && ran(randomGenerator)<=1000)
{
	system("cls");
	SetConsoleTextAttribute(h, 14);
		ifstream batalhapica;
	batalhapica.open("Menu de batalha pica.txt");
	
	if(batalhapica.fail())
	{
		cout<<"fail";
	}
	else{
		string s7;
		while(getline(batalhapica, s7))
		{
			cout<<s7<<endl;
			
		
		}
	}
		
		{
    PlaySound(NULL, NULL, 0);
}



PlaySound(TEXT("batalha.wav"), NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
HANDLE m = GetStdHandle ( STD_OUTPUT_HANDLE);

	{
	while((vidae>0) && (vida>0)){
	cout<<"1-ATACAR"<<endl;
    
		cin>>op;
		system("cls");
		


	
			if(d==2){
			system("cls");
			cout<<"1-PISTOLA DE AGUA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
			if(escolha==1){
			
			vidae-=30;
			vida-=25;
			cout<<"Atingiu o pikachu inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o pikachu inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 20 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==1){
			system("cls");
			cout<<"1-CHICOTE DE ERVA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
			if(escolha==1){
			
			vidae-=30;
			vida-=25;
			cout<<"Atingiu o pikachu inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o pikachu inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 20 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==3){
			system("cls");
			cout<<"1-BOLA DE FOGO"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
			if(escolha==1){
			
			vidae-=30;
			vida-=25;
			cout<<"Atingiu o pikachu inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o pikachu inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 20 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			
		
			if(vidae<=0){
		cout<<endl<<"VITORIA"<<endl;
		SetConsoleTextAttribute(h, 7);
		
	}
	else if(vida<=0){
		cout<<endl<<"DERROTA"<<endl;
		SetConsoleTextAttribute(h, 7);

	}	
		
		}
		if(vidae<=80){
		vidae=100;
		}
		
		
		system("pause>nel");
	
	}


}
	if(GetAsyncKeyState(0x4C)){
				system("cls");
				ifstream loj;
				loj.open("loja.txt");
				if(loj.fail())
	{
		cout<<"fail";
	}
	else{
		
		while(getline(loj, lo))
		{
			cout<<lo<<endl;
		}
		}
				
				cout<<endl<<"1-Biscoito regenerativo"<<endl;
				cout<<"2-Pedra da ressurreicao"<<endl;
				cout<<"---------------------------"<<endl;
				cout<<"Qual item deseja comprar?";
				cin>>item;
				if(item==1){
					if(vida>=0 &&vida<=30){
					vida=100;
					}
					else if(vida>=70 && vida<100){
					vida+=20;
					}
					else if(vida>=100){
					vida+=0;
					}
					else if(vida>30 && vida<70){
					vida+=30;
					}
						else if(vida<0){
					vida+=0;
					}
					
					
				}
				if(item==2){
					if(vida<0){
						vida=1;
					}
				
				
				}
				
			}

else if(GetAsyncKeyState(VK_ESCAPE)){
        	system("cls");
            cout<<"(1)Salvar (2)Sair (3)Menu de Batotas"<<endl;
			cin>>salvar;
			
            
            if(salvar==1)
            {
            	ofstream save ("Load.txt");
	save << d << " ";
	save << vida<< " ";
	
		save.close();
		cout<<"Jogo salvo com sucesso"<<endl;
		system("pause");
		}
		else if(salvar==2)
		{
			return 0;
		}
		else if(salvar==3)
		{
			 cout<<"(1)Dar mais 100 de vida ao seu pokemon"<<endl;
			 cout<<"(2)Dar mais 1000 de vida ao seu pokemon"<<endl;
			cin>>b;
		}
		
		if(b==1)
		{

		 vida +=100;
		 cout<<"100 pontos foram adicionados a vida do seu pokemon"<<endl;

		}
		if(b==2)
		{
		vida +=1000;
		 cout<<"1000 pontos foram adicionados a vida do seu pokemon"<<endl;
		 

		}
		}
		if(GetAsyncKeyState(0x4C)){
				system("cls");
				ifstream loj;
				loj.open("loja.txt");
				if(loj.fail())
	{
		cout<<"fail";
	}
	else{
		
		while(getline(loj, lo))
		{
			cout<<lo<<endl;
		}
		}
				
				cout<<endl<<"1-Biscoito regenerativo"<<endl;
				cout<<"2-Pedra da ressurreicao"<<endl;
				cout<<"---------------------------"<<endl;
				cout<<"Qual item deseja comprar?";
				cin>>item;
				if(item==1){
					if(vida>=0 &&vida<=30){
					vida=100;
					}
					else if(vida>=70 && vida<100){
					vida+=20;
					}
					else if(vida>=100){
					vida+=0;
					}
					else if(vida>30 && vida<70){
					vida+=30;
					}
						else if(vida<0){
					vida+=0;
					}
					
					
				}
				if(item==2){
					if(vida<0){
						vida=1;
					}
				
				
				}
				
			}
		
		
		
	load.close();	
	}
}	
  else if(x==3){
	 
	return 0;
	
}
	else if(x==1){
	system("cls");
	SetConsoleTextAttribute(h, 11);
	cout<<"Qual o teu nome?"<<endl;
	SetConsoleTextAttribute(h, 11);
	cin>>a;
	system("cls");
}

else{
	SetConsoleTextAttribute(h, 13);
	cout<<"Apenas existem 3 opcoes"<<endl;
	SetConsoleTextAttribute(h, 14);
	return 0;
}
	SetConsoleTextAttribute(h, 14);
	//apresenta��o
	ifstream apre;
	apre.open("apresenta�ao.txt");
	
	if(apre.fail())
	{
		cout<<"fail";
	}
	else{
		
		while(getline(apre, s2))
		{
			cout<<s2<<endl;
		}
	}
		SetConsoleTextAttribute(h, 11);
	cout<<a<<" escolhe agora o teu pokemon!"<<endl;
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY );
	cout<<"(1)Bulbasaur-relva"<<endl;
	SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY );
	cout<<"(2)Squirtle-agua"<<endl;
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY );
	cout<<"(3)Charmander-fogo"<<endl;
		SetConsoleTextAttribute(h, 11);
	cin>>d;
 system("cls");
 	switch(d)
 	{
 		case 1:
 		SetConsoleTextAttribute(h, 11);
 			cout<<"Parabens adquiriste um Bulbasaur,agora vai em busca de uma aventura!"<<endl;
	 		break;
	 
 		case 2:
 		SetConsoleTextAttribute(h, 11);
			 cout<<"Parabens adquiriste um Squirtle,agora vai em busca de uma aventura!"<<endl;
	 		
			 break;

 		case 3:
 		SetConsoleTextAttribute(h, 11);
 			cout<<"Parabens adquiriste um Charmander,agora vai em busca de uma aventura!"<<endl;
	 		break;
	default:
		SetConsoleTextAttribute(h, 6);
		cout<<"Nao escolheste nenhum pokemon!";
		return 0;
	}
	//Imagem dos pokemons
		
		if(d==2)
		{
			SetConsoleTextAttribute(h, 1);
			ifstream squr;
	squr.open("Squirtle.txt");
	
	if(squr.fail())
	{
		cout<<"fail";
	}
	else{
		
		while(getline(squr, squ))
		{
			cout<<squ<<endl;
		}
		}
	
}

		else if(d==1)
		{
		SetConsoleTextAttribute(h, 2);	
		ifstream bulba;
bulba.open("Bulbasaur.txt");
	
	if(bulba.fail())
	{
		cout<<"fail";
	}
	else{
		
		while(getline(bulba, bul))
		{
			cout<<bul<<endl;
		}
		}
	
}

else if(d==3)
		{
			SetConsoleTextAttribute(h,4 );
			ifstream charm;
charm.open("Charmander.txt");
	
	if(charm.fail())
	{
		cout<<"fail";
	}
	else{
		
		while(getline(charm, cha))
		{
			cout<<cha<<endl;
		}
		}
	
}

system("pause");


//batalha
	{
    PlaySound(NULL, NULL, 0);
}
PlaySound(TEXT("ambient.wav"), NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
HANDLE m = GetStdHandle ( STD_OUTPUT_HANDLE);

//Mapa
	SetConsoleTextAttribute(h, 7);
 while(game_running == true){
        system("cls");
        
        for(int display=0; display<20; display++){
            cout << map[display] << endl;
            
        }
        if(d==1){cout<<"O teu pokemon:Bulbasaur"<<endl;
		}
		if(d==2){cout<<"O teu pokemon:Squirtle"<< endl;
		}
		if(d==3){cout<<"O teu pokemon:Charmander"<< endl;
		}

cout<<"A vida do teu pokemon:" << vida <<endl;
        
        cout<<endl<<"Utilize a tecla Esc para mais opcoes e a tecla 'l' para aceder a loja"<<endl;
system("pause>nul");
        if(GetAsyncKeyState(VK_DOWN)){
            int j2 = j+1;
            if(map[j2][u] == ' '){
                map[j][u] = ' ';
                j++;
                map[j][u] = '@';
            }
        }

        if(GetAsyncKeyState(VK_UP)){
            int j2 = j-1;
            if(map[j2][u] == ' '){
                map[j][u] = ' ';
                j--;
                map[j][u] = '@';
            }
        }

        if(GetAsyncKeyState(VK_RIGHT)){
            int u2 = u+1;
            if(map[j][u2] == ' '){
                map[j][u] = ' ';
                u++;
                map[j][u] = '@';
            }
        }

        if(GetAsyncKeyState(VK_LEFT)){
            int u2 = u-1;
            if(map[j][u2] == ' '){
                map[j][u] = ' ';
                u--;
                map[j][u] = '@';
            }
        }
        
        
        //random
		mt19937 randomGenerator(time(0)) ;
uniform_int_distribution<int> ran(1, 30000);




//batalha Bulba
	if (ran(randomGenerator)>=900 && ran(randomGenerator)<=920)
{
	system("cls");
	
	SetConsoleTextAttribute(h, 2);
	ifstream batalhabul;
	batalhabul.open("Menu de batalha bulba.txt");
	
	if(batalhabul.fail())
	{
		cout<<"fail";
	}
	else{
		string s4;
		while(getline(batalhabul, s4))
		{
			cout<<s4<<endl;
			
		
		}
	}
		
		{
    PlaySound(NULL, NULL, 0);
}

PlaySound(TEXT("batalha.wav"), NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
HANDLE m = GetStdHandle ( STD_OUTPUT_HANDLE);



	{
	
	while((vidae>0) && (vida>0)){
	
	cout<<endl<<"1-ATACAR"<<endl;
    
		cin>>op;
	
		
	
			if(d==2){
				
				
			system("cls");
			cout<<"1-PISTOLA DE AGUA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
			if(escolha==1){
			
			vidae-=40;
			vida-=35;
			cout<<"Atingiu o bulbasaur inimigo tirando-lhe 40 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 35 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
				}
			
		
		else if(escolha==2){
			vidae-=30;
			vida-=30;
			cout<<"Atingiu o bulbasaur inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 30 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==1){
			system("cls");
			cout<<"1-CHICOTE DE ERVA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
						system("cls");

			if(escolha==1){
			
			vidae-=30;
			vida-=25;
			cout<<"Atingiu o bulbasaur inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=20;
			cout<<"Atingiu o bulbasaur inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 20 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==3){
			system("cls");
			cout<<"1-BOLA DE FOGO"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");

			if(escolha==1){
			
			vidae-=60;
			vida-=30;
			cout<<"Atingiu o bulbasaur inimigo tirando-lhe 60 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 30 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o bulbasaur inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 20 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
	
  
  	if(vidae<=0){
  				SetConsoleTextAttribute(h, 7);

		cout<<endl<<"VITORIA"<<endl;
	
		
	}
	else if(vida<=0){
				SetConsoleTextAttribute(h, 7);

		cout<<endl<<"DERROTA"<<endl;
		
	}	
}  

		if(vidae<=80){
		vidae=100;
		}
	
	}
		
		system("pause>nel");
	
	}
	//batalha squ
		
		if (ran(randomGenerator)>920 && ran(randomGenerator)<=940)
{
	system("cls");
	SetConsoleTextAttribute(h, 1);
		ifstream batalhasqu;
	batalhasqu.open("Menu de batalha squ.txt");
	
	if(batalhasqu.fail())
	{
		cout<<"fail";
	}
	else{
		string s5;
		while(getline(batalhasqu, s5))
		{
			cout<<s5<<endl;
			
		
		}
	}
		
		{
    PlaySound(NULL, NULL, 0);
}



PlaySound(TEXT("batalha.wav"), NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
HANDLE m = GetStdHandle ( STD_OUTPUT_HANDLE);

	{
	while((vidae>0) && (vida>0)){
	cout<<"1-ATACAR"<<endl;
   
		cin>>op;
		
		
	
			if(d==2){
			system("cls");
			cout<<"1-PISTOLA DE AGUA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");

			if(escolha==1){
			
			vidae-=30;
			vida-=25;
			cout<<"Atingiu o squirtle inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o squirtle inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==1){
			system("cls");
			cout<<"1-CHICOTE DE ERVA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");

			if(escolha==1){
			
			vidae-=40;
			vida-=35;
			cout<<"Atingiu o squirtle inimigo tirando-lhe 40 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 35 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=30;
			vida-=35;
			cout<<"Atingiu o squirtle inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 35 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==3){
			system("cls");
			cout<<"1-BOLA DE FOGO"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
	
			if(escolha==1){
			
			vidae-=60;
			vida-=30;
			cout<<"Atingiu o squirtle inimigo tirando-lhe 60 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 30 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o squirtle inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 20 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			
		
		if(vidae<=0){
					SetConsoleTextAttribute(h, 7);

		cout<<endl<<"VITORIA"<<endl;
		
		
	}
	else if(vida<=0){
				SetConsoleTextAttribute(h, 7);

		cout<<endl<<"DERROTA"<<endl;
	

	}	

	
		
	}
	if(vidae<=80){
		vidae=100;
		}
		
		
		
		
		system("pause>nel");
	}
	}

	

//batalha cha

		if (ran(randomGenerator)>940 && ran(randomGenerator)<=920)
{
	system("cls");
	SetConsoleTextAttribute(h, 4);
		ifstream batalhacha;
	batalhacha.open("Menu de batalha cha.txt");
	
	if(batalhacha.fail())
	{
		cout<<"fail";
	}
	else{
		string s6;
		while(getline(batalhacha, s6))
		{
			cout<<s6<<endl;
			
		
		}
	}
		
		{
    PlaySound(NULL, NULL, 0);
}



PlaySound(TEXT("batalha.wav"), NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
HANDLE m = GetStdHandle ( STD_OUTPUT_HANDLE);

	{
	while((vida>0) && (vidae>0)){
	cout<<"1-ATACAR"<<endl;
    
		cin>>op;
		system("cls");
		
		
	
	
			if(d==2){
			system("cls");
			cout<<"1-PISTOLA DE AGUA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");

			if(escolha==1){
			
			vidae-=40;
			vida-=35;
			cout<<"Atingiu o charmander inimigo tirando-lhe 40 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 35 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=30;
			vida-=30;
			cout<<"Atingiu o charmander inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 30 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==1){
			system("cls");
			cout<<"1-CHICOTE DE ERVA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
			if(escolha==1){
			
			vidae-=60;
			vida-=30;
			cout<<"Atingiu o charmander inimigo tirando-lhe 60 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 30 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o charmander inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 30 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==3){
			system("cls");
			cout<<"1-BOLA DE FOGO"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
			if(escolha==1){
			
			vidae-=30;
			vida-=40;
			cout<<"Atingiu o charmander inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=40;
			vida-=25;
			cout<<"Atingiu o charmander inimigo tirando-lhe 40 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			
		
		
			if(vidae<=0){
						SetConsoleTextAttribute(h, 7);

		cout<<endl<<"VITORIA"<<endl;
	
		
	}
	else if(vida<=0){
				SetConsoleTextAttribute(h, 7);

		cout<<endl<<"DERROTA"<<endl;
		

	}	
		
		}
		if(vidae<=80){
		vidae=100;
		}
	
		
		system("pause>nel");
	}
	}
//batalha pica
if (ran(randomGenerator)>990 && ran(randomGenerator)<=1000)
{
	system("cls");
	SetConsoleTextAttribute(h, 14);
		ifstream batalhapica;
	batalhapica.open("Menu de batalha pica.txt");
	
	if(batalhapica.fail())
	{
		cout<<"fail";
	}
	else{
		string s7;
		while(getline(batalhapica, s7))
		{
			cout<<s7<<endl;
			
		
		}
	}
		
		{
    PlaySound(NULL, NULL, 0);
}



PlaySound(TEXT("batalha.wav"), NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
HANDLE m = GetStdHandle ( STD_OUTPUT_HANDLE);

	{
	while((vidae>0) && (vida>0)){
	cout<<"1-ATACAR"<<endl;
    
		cin>>op;
		system("cls");
		


	
			if(d==2){
			system("cls");
			cout<<"1-PISTOLA DE AGUA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
			if(escolha==1){
			
			vidae-=30;
			vida-=25;
			cout<<"Atingiu o pikachu inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o pikachu inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 20 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==1){
			system("cls");
			cout<<"1-CHICOTE DE ERVA"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
			if(escolha==1){
			
			vidae-=30;
			vida-=25;
			cout<<"Atingiu o pikachu inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o pikachu inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 20 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			if(d==3){
			system("cls");
			cout<<"1-BOLA DE FOGO"<<endl;
			cout<<"2-Tackle"<<endl;	
			cin>>escolha;
			system("cls");
			if(escolha==1){
			
			vidae-=30;
			vida-=25;
			cout<<"Atingiu o pikachu inimigo tirando-lhe 30 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 25 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
		else if(escolha==2){
			vidae-=20;
			vida-=25;
			cout<<"Atingiu o pikachu inimigo tirando-lhe 20 pontos de vida!"<<"Vida do inimigo="<<vidae<<endl;
			cout<<"O inimigo atingiu o seu pokemon causando-lhe 20 de dano!"<<"Vida do seu pokemon="<<vida<<endl;
			
		}
   }
			
		
			if(vidae<=0){
		cout<<endl<<"VITORIA"<<endl;
		SetConsoleTextAttribute(h, 7);
		
	}
	else if(vida<=0){
		cout<<endl<<"DERROTA"<<endl;
		SetConsoleTextAttribute(h, 7);

	}	
		
		}
		if(vidae<=80){
		vidae=100;
		}
		
		
		system("pause>nel");
	
	}


}



			if(GetAsyncKeyState(0x4C)){
				system("cls");
				ifstream loj;
				loj.open("loja.txt");
				if(loj.fail())
	{
		cout<<"fail";
	}
	else{
		
		while(getline(loj, lo))
		{
			cout<<lo<<endl;
		}
		}
				
				cout<<endl<<"1-Biscoito regenerativo"<<endl;
				cout<<"2-Pedra da ressurreicao"<<endl;
				cout<<"---------------------------"<<endl;
				cout<<"Qual item deseja comprar?";
				cin>>item;
				if(item==1){
					if(vida>=0 &&vida<=30){
					vida=100;
					}
					else if(vida>=70 && vida<100){
					vida+=20;
					}
					else if(vida>=100){
					vida+=0;
					}
					else if(vida>30 && vida<70){
					vida+=30;
					}
						else if(vida<0){
					vida+=0;
					}
					
					
				}
				if(item==2){
					if(vida<0){
						vida=1;
					}
				
				
				}
				
			}

        else if(GetAsyncKeyState(VK_ESCAPE)){
        	system("cls");
            cout<<"(1)Salvar (2)Sair (3)Menu de Batotas"<<endl;
			cin>>salvar;
			
            
            if(salvar==1)
            {
            	ofstream save ("Load.txt");
	save << d << " ";
	save << vida<< " ";
	
		save.close();
		cout<<"Jogo salvo com sucesso"<<endl;
		system("pause");
		}
		else if(salvar==2)
		{
			return 0;
		}
		else if(salvar==3)
		{
			system("cls");
			 cout<<"(1)Dar mais 100 de vida ao seu pokemon"<<endl;
			 cout<<"(2)Dar mais 1000 de vida ao seu pokemon"<<endl;
			cin>>b;
			
		}
		
		if(b==1)
		{

		 vida +=100;
		 cout<<"100 pontos foram adicionados a vida do seu pokemon"<<endl;

		}
		if(b==2)
		{
		vida +=1000;
		 cout<<"1000 pontos foram adicionados a vida do seu pokemon"<<endl;
		 

		}
		}
		

			}
         
			        }
    
    
    
 
	
	



