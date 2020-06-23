#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int i, j, k, a, x, savestate, cela, guardakarma, codigo, livro, tpalavra, bilhete, frank, frankkarma, lutasujeito, lutaguarda, luta, escolhai, noix;
int dano, bloqueio, bloqueioi, hp, hpi, raiva, vistoria, bonus, dir1, dir2, dir3, dir4, dir5, fio, dia;
char nome[20], pais[20], njogo, jogom, idade[30], escolha, sobrenome[50], altura[30], peso[30], jogos;

int pontinhos(){
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
}

int serpego(){
	system("cls");
	Beep(400,200);
	printf("*Você foi pego! Os guardas te mandaram para a solitária e você não vai sair de \nlá logo!*\n*E como se não bastasse, ainda acabaram com qualquer plano de fuga*");
	pontinhos();
	getch(NULL);
	getch();
	creditofim();
}

int cortafio(){
	system("cls");
	printf("*Você se depara com 4 fios dentro do gerador*\n");
	printf("\nOpções:\n1 - Cortar o fio Branco.\n2 - Cortar o fio Amarelo.\n3 - Cortar o fio Vermelho.\n4 - Cortar o fio Azul");
	srand(time(NULL));
	fio=rand()%4;
	i=0;
	while(i==0){
	escolha=getch();
	switch(escolha){
		case '1':
			x=0;
			system("cls");
			system(" 70");
			Beep(400,300);
			Sleep(1000);
			system("color 17");
			if (fio==x){
			system("cls");
			system("color 60");
			Sleep(300);
			system("color 17");
			Sleep(300);
			system("color 60");
			Sleep(300);
			system("color 17");
			Sleep(300);
			system("color 60");
			Sleep(300);
			system("color 17");
			Sleep(300);
			for(j=0;j<30;j++){
			Beep(70,35);
			}
			pontinhos();
			getch();
			printf("\n*Você foi morto eletrocutado...*");
			getch();
			system("cls");
			i=1;
			creditofim();
			break;	
			}
			i=1;
			break;
			
		case '2':
			x=1;
			system("cls");
			system("color e0");
			Beep(400,300);
			Sleep(1000);
			system("color 17");
			if (fio==x){
			system("cls");
			system("color 60");
			Sleep(300);
			system("color 17");
			Sleep(300);
			system("color 60");
			Sleep(300);
			system("color 17");
			Sleep(300);
			system("color 60");
			Sleep(300);
			system("color 17");
			Sleep(300);
			for(j=0;j<30;j++){
			Beep(70,35);
			}
			pontinhos();
			getch();
			printf("\n*Você foi morto eletrocutado...*");
			getch();
			system("cls");
			i=1;
			creditofim();
			break;	
			}
			i=1;
			break;
			
			
		case '3':
			x=2;
			system("cls");
			system("color 40");
			Beep(400,300);
			Sleep(1000);
			system("color 17");
			if (fio==x){
			system("cls");
			system("color 60");
			Sleep(300);
			system("color 17");
			Sleep(300);
			system("color 60");
			Sleep(300);
			system("color 17");
			Sleep(300);
			system("color 60");
			Sleep(300);
			system("color 17");
			Sleep(300);
			for(j=0;j<30;j++){
			Beep(70,35);
			}
			pontinhos();
			getch();
			printf("\n*Você foi morto eletrocutado...*");
			getch();
			system("cls");
			i=1;
			creditofim();
			break;	
			}
			i=1;
			break;
			
		case '4':
			x=3;
			system("cls");
			system("color 10");
			Beep(400,300);
			Sleep(1000);
			system("color 17");
			if (fio==x){
			system("cls");
			system("color 60");
			Sleep(300);
			system("color 17");
			Sleep(300);
			system("color 60");
			Sleep(300);
			system("color 17");
			Sleep(300);
			system("color 60");
			Sleep(300);
			system("color 17");
			Sleep(300);
			for(j=0;j<30;j++){
			Beep(70,35);
			}
			pontinhos();
			getch();
			printf("\n*Você foi morto eletrocutado...*");
			getch();
			system("cls");
			i=1;
			creditofim();
			break;	
			}
			i=1;
			break;
			
		default:
			Beep(200,400);
			printf("Comando Inválido, escolha apenas entre 1, 2, 3 ou 4.");
			break;
	}
}
system("cls");
printf("Você conseguiu cortar o fio certo!\n");
pontinhos();
getch();
system("cls");
}

int lanterna(){
	int tecla;
	system("cls");
	printf("Lembre-se! A lanterna tem apenas 5 segundos de bateria, preste MUITA atenção!\n");
	printf("Pressione 'Enter' para ver o mapa e decorar as direções.");
	i=0;
	while (i==0){
    tecla = getchar();
    if (tecla = 13){
        i=1;
        }
    }
    system("cls");
    system("color 70");
    printf("\n\n\n\n\n");
	srand(time(NULL));
    dir1=rand()%4;
    if (dir1==0){
    	printf("\n\n				     CIMA\n\n");
	}
	if (dir1==1){
    	printf("\n\n		   		    ESQUERDA\n\n");
	}
	if (dir1==2){
    	printf("\n\n				    DIREITA\n\n");
	}
	if (dir1==3){
    	printf("\n\n				    BAIXO\n\n");
	}
	
	
	dir2=rand()%4;
    if (dir2==0){
    	printf("				    CIMA\n\n");
	}
	if (dir2==1){
    	printf("		   		    ESQUERDA\n\n");
	}
	if (dir2==2){
    	printf("				    DIREITA\n\n");
	}
	if (dir2==3){
    	printf("				    BAIXO\n\n");
	}
	
	dir3=rand()%4;
    if (dir3==0){
    	printf("				    CIMA\n\n");
	}
	if (dir3==1){
    	printf("		   		    ESQUERDA\n\n");
	}
	if (dir3==2){
    	printf("				    DIREITA\n\n");
	}
	if (dir3==3){
    	printf("				    BAIXO\n\n");
	}
	
	dir4=rand()%4;
    if (dir4==0){
    	printf("				    CIMA\n\n");
	}
	if (dir4==1){
    	printf("		   		    ESQUERDA\n\n");
	}
	if (dir4==2){
    	printf("				    DIREITA\n\n");
	}
	if (dir4==3){
    	printf("				    BAIXO\n\n");
	}
	
	dir5=rand()%4;
    if (dir5==0){
    	printf("				    CIMA\n\n");
	}
	if (dir5==1){
    	printf("		   		    ESQUERDA\n\n");
	}
	if (dir5==2){
    	printf("				    DIREITA\n\n");
	}
	if (dir5==3){
    	printf("				    BAIXO\n\n");
	}
	
	Sleep(5000);
	system("cls");
	system("color 17");
	j=0;
	while(j==0){
	system("cls");
	printf("Escolha os caminhos corretos:\n");
	printf("1 - Cima.\n2 - Esquerda.\n3 - Direita.\n4 - Baixo.");
	escolha=getch();
	switch(escolha){
		case '1':
			x=0;
			if (dir1==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir1!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '2':
			x=1;
			if (dir1==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir1!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '3':
			x=2;
			if (dir1==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			
			if (dir1!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '4':
			x=3;
			if (dir1==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir1!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		default:
			Beep(200,400);
			printf("Comando Inválido, escolha apenas entre 1, 2, 3 ou 4.");
			break;
	}
	}
	
	j=0;
	while(j==0){
	system("cls");
	printf("Escolha os caminhos corretos:\n");
	printf("1 - Cima.\n2 - Esquerda.\n3 - Direita.\n4 - Baixo.");
	escolha=getch();
	switch(escolha){
		case '1':
			x=0;
			if (dir2==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir2!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '2':
			x=1;
			if (dir2==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir2!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '3':
			x=2;
			if (dir2==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			
			if (dir2!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '4':
			x=3;
			if (dir2==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir2!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		default:
			Beep(200,400);
			printf("Comando Inválido, escolha apenas entre 1, 2, 3 ou 4.");
			break;
	}
	}
	
	j=0;
	while(j==0){
	system("cls");
	printf("Escolha os caminhos corretos:\n");
	printf("1 - Cima.\n2 - Esquerda.\n3 - Direita.\n4 - Baixo.");
	escolha=getch();
	switch(escolha){
		case '1':
			x=0;
			if (dir3==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir3!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '2':
			x=1;
			if (dir3==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir3!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '3':
			x=2;
			if (dir3==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			
			if (dir3!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '4':
			x=3;
			if (dir3==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir3!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		default:
			Beep(200,400);
			printf("Comando Inválido, escolha apenas entre 1, 2, 3 ou 4.");
			break;
	}
	}
	
	j=0;
	while(j==0){
	system("cls");
	printf("Escolha os caminhos corretos:\n");
	printf("1 - Cima.\n2 - Esquerda.\n3 - Direita.\n4 - Baixo.");
	escolha=getch();
	switch(escolha){
		case '1':
			x=0;
			if (dir4==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir4!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '2':
			x=1;
			if (dir4==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir4!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '3':
			x=2;
			if (dir4==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			
			if (dir4!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '4':
			x=3;
			if (dir4==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir4!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		default:
			Beep(200,400);
			printf("Comando Inválido, escolha apenas entre 1, 2, 3 ou 4.");
			break;
	}
	}
	
	j=0;
	while(j==0){
	system("cls");
	printf("Escolha os caminhos corretos:\n");
	printf("1 - Cima.\n2 - Esquerda.\n3 - Direita.\n4 - Baixo.");
	escolha=getch();
	switch(escolha){
		case '1':
			x=0;
			if (dir5==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir5!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '2':
			x=1;
			if (dir5==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir5!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '3':
			x=2;
			if (dir5==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			
			if (dir5!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		case '4':
			x=3;
			if (dir5==x){
				system("cls");
				Beep(100,200);
				printf("Caminho correto!.");
				Sleep(500);
				j=1;	
			}
			
			if (dir5!=x){
				system("cls");
				Beep(500,400);
				j=1;
				serpego();
			}
			break;
			
		default:
			Beep(200,400);
			printf("Comando Inválido, escolha apenas entre 1, 2, 3 ou 4.");
			break;
	}
	}
	printf("*Você conseguiu chegar no teto do presídio!");
	pontinhos();
	getch();
	Beep(400,200);
}

int cavar(){
	system("cls");
	i=0;
	vistoria=1;
	dia=0;
	while(dia<20){
	system("cls");
 	printf("*Pressione 'W' para cavar. Quando a tela piscar rapidamente, significa que a \nvistoria está vindo\nEla acontece a cada dois dias.\nTampe o buraco todos os dias com a tecla 'S' para que o guarda não te veja \ncavando.\n");
 	printf("Dia: %d\n", dia);
 	while(vistoria!=0){
 		escolha=getch();
 		switch(escolha){
 		case 'w':
 		case 'W':
 			Beep(100, 100);
 			srand(time(NULL));
 			vistoria=rand()%4;
 			break;
 		
 		case 's':
 		case 'S':
 			Beep(200,200);
 			printf("\nNão é necessário tampar o buraco agora!");
 			break;
 			
 		default:
 			Beep(200,200);
 			printf("\nComando Inválido, escolha entre 'W' ou 'S'");
 			break;
		}
	 }
	 
	 system ("color c2");
	 Sleep (600);
	 system ("color 17");
	 
	while (vistoria==0){
		escolha=getch();
 		switch(escolha){
		case 'w':
		case 'W':
			Beep(400,800);
			Sleep(500);
			vistoria=1;
			serpego();
			break;
			
		case 's':
		case 'S':
			Beep (100,100);	
			vistoria=1;
			dia=dia+2;
			break;
			
		default:
			Beep(200,200);
 			printf("\nComando Inválido, escolha entre 'W' ou 'S'");
 			break;
	}
	}
	}
	system("cls");
	printf("Finalmente se passaram os 20 dias! Você consegue ver o outro lado!\n");
	pontinhos();
	getch(NULL);
	getch();
}

int lutabonus1(){
	lutasujeito=1;
	hp=50;
	hpi=80;
	raiva=0;
	while (hp>=0 && hpi>=0){
	dano=0;
	
	system("cls");
	printf("Seu HP: %d.  ||  Raiva: %d!\nHP do sujeito: %d.", hp, raiva, hpi);
	printf("\nComo você reage?");
	printf("\n1 - Com um soco (Causa de 5 a 10 de dano e carrega 1 ponto de raiva).\n2 - Defender. (Bloqueia de 2 a 3 de dano e carrega 2 pontos de raiva).\n3 - Golpe forte. (Requer 10 de Raiva e causa de 20 a 30 de dano).\n");
	j=0;
	while(j==0){
	escolha=getch();
	switch(escolha){
		case '1':
			srand(time(NULL));
			raiva=raiva+1;
			dano=rand()%6+5-bloqueioi;
			if (dano<=0){
			dano=0;
			}
			printf("Você deu um soco e causou %d de dano!\n", dano);
			Beep(400,200);
			system("color 72");
			Beep(400,200);
			system("color 17");
			Beep(400,200);
			system("color 72");
			Beep(200,200);
			system("color 17");
			hpi=hpi-dano;
			pontinhos();
			getch();
			bloqueioi=0;
			j=1;
			break;
			
			
		case '2':
			srand(time(NULL));
			raiva=raiva+2;
			bloqueio=rand()%1+2;
			printf("Você se defende! E com isso se protege de %d de dano no proximo ataque que \nreceber!", bloqueio);
			Beep(400,200);
			system("color 72");
			Beep(200,200);
			system("color 17");
			Beep(400,200);
			system("color 72");
			Beep(500,900);
			system("color 17");
			pontinhos();
			getch();
			j=1;
			break;
			
		case '3':
			if (raiva<10){
				printf("Raiva insuficiente. Bata ou defenda para conseguir mais pontos!\n");
				pontinhos();
				getch();
				break;
			}
			if (raiva>=10){
				raiva=0;
				srand(time(NULL));
				dano=rand()%11+20-bloqueioi;
				printf("Você bate com toda sua fúria! Você causou %d de dano!!!", dano);
				Beep(400,200);
				system("color 72");
				Beep(200,200);
				system("color 17");
				Beep(400,200);
				system("color 72");
				Beep(200,200);
				system("color 17");
				Beep(200,1500);
				pontinhos();
				getch();
				hpi=hpi-dano;
				j=1;
				break;
			}
			break;
			
		default:
			Beep (200,200);
			printf("\nComando Inválido, escolha entre 1, 2, ou 3.\n");
			break;
		}
		}
	srand(time(NULL));
	escolhai=rand()%2;
	if(escolhai==1){
		srand(time(NULL));
		dano=rand()%6+2-bloqueio;
		if (dano<=0){
			dano=0;
		}
		printf("\n\nEle te deu um soco e causou %d de dano!\n", dano);
		Beep(200,200);
		system("color c2");
		Beep(200,200);
		system("color 17");
		Beep(200,200);
		system("color c2");
		Beep(400,200);
		system("color 17");
		hp=hp-dano;
		pontinhos();
		bloqueio=0;
		getch();
	}
	if(escolhai!=1){
		srand(time(NULL));
		bloqueioi=rand()%4+2;
		printf("\n\nEle se defende! E com isso se protege de %d de dano no proximo ataque que \nreceber!\n", bloqueioi);
		Beep(200,200);
		system("color c2");
		Beep(400,200);
		system("color 17");
		Beep(200,200);
		system("color c2");
		Beep(300,900);
		system("color 17");
		pontinhos();
		getch();
	}
	}
	if(hp<=0){
		system("cls");
		printf("*O sujeito era muito forte para você... Sem demonstrar misericórdia ele te mata a sangue frio...*\n");
		pontinhos();
		getch();
		creditofim();
	}
	
	if(hp>0){
		system("cls");
		printf("*Você foi mais forte que o seu oponente! Parabéns!*\n");
		pontinhos();
		getch();
		system("cls");
		main();
	}
}

int luta1(){
	lutasujeito=1;
	hp=50;
	hpi=80;
	raiva=0;
	while (hp>=0 && hpi>=0){
	dano=0;
	
	system("cls");
	printf("Seu HP: %d.  ||  Raiva: %d!\nHP do sujeito: %d.", hp, raiva, hpi);
	printf("\nComo você reage?");
	printf("\n1 - Com um soco (Causa de 5 a 10 de dano e carrega 1 ponto de raiva).\n2 - Defender. (Bloqueia de 2 a 3 de dano e carrega 2 pontos de raiva).\n3 - Golpe forte. (Requer 10 de Raiva e causa de 20 a 30 de dano).\n");
	j=0;
	while(j==0){
	escolha=getch();
	switch(escolha){
		case '1':
			srand(time(NULL));
			raiva=raiva+1;
			dano=rand()%6+5-bloqueioi;
			if (dano<=0){
			dano=0;
			}
			system("cls");
			printf("Você deu um soco e causou %d de dano!\n", dano);
			Beep(400,200);
			system("color 72");
			Beep(400,200);
			system("color 17");
			Beep(400,200);
			system("color 72");
			Beep(200,200);
			system("color 17");
			hpi=hpi-dano;
			pontinhos();
			getch();
			bloqueioi=0;
			j=1;
			break;
			
			
		case '2':
			srand(time(NULL));
			raiva=raiva+2;
			bloqueio=rand()%1+2;
			system("cls");
			printf("Você se defende! E com isso se protege de %d de dano no proximo ataque que \nreceber!", bloqueio);
			Beep(400,200);
			system("color 72");
			Beep(200,200);
			system("color 17");
			Beep(400,200);
			system("color 72");
			Beep(500,900);
			system("color 17");
			pontinhos();
			getch();
			j=1;
			break;
			
		case '3':
			if (raiva<10){
				printf("Raiva insuficiente. Bata ou defenda para conseguir mais pontos!\n");
				pontinhos();
				getch();
				break;
			}
			if (raiva>=10){
				raiva=raiva-10;
				srand(time(NULL));
				dano=rand()%11+20-bloqueioi;
				system("cls");
				printf("Você bate com toda sua fúria! Você causou %d de dano!!!", dano);
				Beep(400,200);
				system("color 72");
				Beep(200,200);
				system("color 17");
				Beep(400,200);
				system("color 72");
				Beep(200,200);
				system("color 17");
				Beep(200,1500);
				pontinhos();
				getch();
				hpi=hpi-dano;
				j=1;
				break;
			}
			break;
			
		default:
			Beep (200,200);
			printf("\nComando Inválido, escolha entre 1, 2, ou 3.\n");
			break;
		}
		}
	srand(time(NULL));
	escolhai=rand()%2;
	if(escolhai==1){
		srand(time(NULL));
		dano=rand()%6+2-bloqueio;
		if (dano<=0){
			dano=0;
		}
		printf("\n\nEle te deu um soco e causou %d de dano!\n", dano);
		Beep(200,200);
		system("color c2");
		Beep(200,200);
		system("color 17");
		Beep(200,200);
		system("color c2");
		Beep(400,200);
		system("color 17");
		hp=hp-dano;
		pontinhos();
		bloqueio=0;
		getch();
	}
	if(escolhai!=1){
		srand(time(NULL));
		bloqueioi=rand()%4+2;
		printf("\n\nEle se defende! E com isso se protege de %d de dano no proximo ataque que \nreceber!\n", bloqueioi);
		Beep(200,200);
		system("color c2");
		Beep(400,200);
		system("color 17");
		Beep(200,200);
		system("color c2");
		Beep(300,900);
		system("color 17");
		pontinhos();
		getch();
	}
	}
	if(hp<=0){
		system("cls");
		printf("*O sujeito era muito forte para você...* \nSem demonstrar misericórdia ele te mata a sangue frio...*\n");
		pontinhos();
		getch();
		creditofim();
	}
	
	if(hp>0){
		system("cls");
		printf("*Você foi mais forte que o seu oponente!*\nMas isso atraiu a atenção dos guardas...*\n");
		pontinhos();
		getch();
		system("cls");
	}
}

int creditofimbom(){
	bonus=1;
	Beep (600,200);
	system("cls");
	Beep (400,200);
	Beep (400,200);
	printf("Jogo criado por: Felipe Goes\n");
	Beep (400,200);
	Beep (400,200);
	printf("                 Rodrigo Zeferino\n");
	Beep (400,200);
	Beep (400,200);
	printf("                 Yugo Toshio\n");
	Beep (400,200);
	Beep (400,200);
	printf("Fatec Carapicuíba - Jogos Digitais - Segundo Semestre - Manhã\n");
	Beep (300,1000);
	for(i=0; i<22; i++){
		Beep(i*25,100);
		Sleep(150);
		printf("\n");
	}
	printf("\nobrigado por jogar!\n");
	pontinhos();
	printf(" - Pressione qualquer botão para voltar ao menu!");
	getch();
	main();
}

int printcela(){
	if(cela==0){
	printf("\n		            \\_________________________________/");
	printf("\n		            |            _________            |");
	printf("\n		            |           |   ___   |           |");
	printf("\n		            |           I  |___|  |           |");
	printf("\n		            |           |         |           |");
	printf("\n		            |           |        _|           |");
	printf("\n		            |           |       |#|           |  ");
	printf("\n		    -- ___  |           |         |           |   ");
	printf("\n		    H*/   ` |           |         |      _____|    ");
	printf("\n		    */     )|           I         |     \\_____\\     ");
	printf("\n		    /___.,';|           |         |     \\      \\     ");
	printf("\n		    |     ; |___________|_________|______\\      \\      ");
	printf("\n		    | ._,'  /                             \\      \\      ");
	printf("\n		    |,'    /                               \\      \\ ");
	printf("\n		   ||    /                                  \\_____ \\ ");
	printf("\n		    ||   /                                   \\_____| ");
	printf("\n		   ||  /              ____________                \\ ");
	printf("\n		    || /              /           |                \\ ");
	printf("\n		    ||/              /            |                 \\ ");
	printf("\n		    //              /             |                  \\ ");
	printf("\n		  //               /              |      \\            \\ ");
	printf("\n		 //               /               |  0    \\            \\ ");
	printf("\n		//               /                |________\\            \\ ");
	printf("\n		/               /                 |     |  |             \\ \n");
	}

	if(cela==1){
		printf("\n		            \\_________________________________/");
		printf("\n		            |            _________            |");
		printf("\n		            |           |   ___   |           |");
		printf("\n		            |           I  |___|  |           |");
		printf("\n		            |           |         |           |");
		printf("\n		            |           |        _|           |");
		printf("\n		            |           |       |#|           |  ");
		printf("\n		    -- ___  |           |         |           |   ");
		printf("\n		    H*/   ` |           |         |      _____|    ");
		printf("\n		    */     )|           I         |     \\_____\\     ");
		printf("\n	    	/___.,';|           |         |     \\      \\     ");
		printf("\n		    |     ; |___________|_________|______\\      \\      ");
		printf("\n		    | ._,'  /                             \\      \\      ");
		printf("\n		    |,'    /                               \\      \\ ");
		printf("\n		   ||    /                                  \\_____ \\ ");
		printf("\n		    ||   /                                   \\_____| ");
		printf("\n		   ||  /              ____________                \\ ");
		printf("\n		    || /              / =====o    |                \\ ");
		printf("\n		    ||/              /  |   /-\\   |                 \\ ");
		printf("\n		    //              /   |   ____  |                  \\ ");
		printf("\n		  //               /   (O) |    | |      \\            \\ ");
		printf("\n		 //               /        |____| |  0    \\            \\ ");
		printf("\n		//               /         o----  |________\\            \\ ");
		printf("\n		/               /                 |     |  |             \\ \n");
	}
}

int printlivro(){
	system("cls");
	if(livro==0){
		printf("\n		   ||  /              ____________                \\ ");
		printf("\n		    || /              /           |                \\ ");
		printf("\n		    ||/              /            |                 \\ ");
		printf("\n		    //              /             |                  \\ ");
		printf("\n		  //               /              |      \\            \\ ");
		printf("\n		 //               /               |  0    \\            \\ ");
		printf("\n		//               /                |________\\            \\ ");
		printf("\n		/               /                 |     |  |             \\ \n");
		Beep(200,200);
		Sleep(1000);
		system("cls");
	}

	if(livro==1){
		printf("\n		   ||  /              ____________                \\ ");
		printf("\n		    || /              / =====o    |                \\ ");
		printf("\n		    ||/              /  |   /-\\   |                 \\ ");
		printf("\n		    //              /   |   ____  |                  \\ ");
		printf("\n		  //               /   (O) |    | |      \\            \\ ");
		printf("\n		 //               /        |____| |  0    \\            \\ ");
		printf("\n		//               /         o----  |________\\            \\ ");
		printf("\n		/               /                 |     |  |             \\ \n");
		Beep(500,200);
		Sleep(1000);
		system("cls");
	}
}

void capitulo3(){
	char a = 177;
	system("cls");
	Beep (700,500);
	Beep (500,500);
	Beep (200,1000);
	Beep (100,1000);
	Beep (100,200);
	Beep (100,100);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("\n         ||||    ||    ||||  || |||||| ||  || ||    ||||||   |||||\n");
    printf("         ||     ||||   ||_|| ||   ||   ||  || ||    ||  ||     __||\n");
    printf("         ||    ||__||  ||    ||   ||   ||  || ||    ||  ||       ||\n");
    printf("         |||| ||    || ||    ||   ||   |||||| ||||| ||||||   |||||\n");
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("\n");
    pontinhos();
    getch();
    system("cls");
    Beep (200,200);
    printf("*Você se deita para dormir, e se lembra do que Morris tinha dito.*");
    Sleep(700);
    Beep (200,200);
    printf("\n*De repente você ouve o mesmo barulho na parede de mais cedo.*");
    Sleep(500);
    Beep(200,200);
	Beep(220,200);
	Beep(200,700);
    printf("\n*Um pequeno buraco se abre... E se torna grande em pouco tempo. Era Morris e uma espécie de pá improvisada.*\n");
    pontinhos();
    getch();
    Beep(200,200);
    system("cls");
	printf("DESENHO COM BURACO\n");
	Sleep(3000);
	pontinhos();
	getch();
	printf("\nOpções:\n1 - Pedir para Morris ir embora.\n2 - O que está fazendo aqui?! Vou chamar os guardas!\n3 - Como fez essa pá?!");
	i=0;
	while(i==0){
		escolha=getch();
		switch(escolha){
			case '1':
				frankkarma=frankkarma-1;
				Beep(400,200);
				system("cls");
				printf("Morris: Espere, escute o que tenho a dizer.\n");
				Sleep(700);
				Beep(300,200);
				printf("Você quer sair daqui? Não quer?\n");
				Sleep(700);
				Beep(300,200);
				printf("Finalmente tenho o primeiro plano de fuga eferivo desde lugar!\n");
				Sleep(700);
				Beep(300,200);
				i=1;
				break;
				
			case '2':
				Beep(400,200);
				system("cls");
				frankkarma=frankkarma-2;
				printf("Morris: Se você continuar com essa boca aberta, eu te mato... Antes que me matem.\n");
				Sleep(700);
				Beep(300,200);
				printf("Agora escute o que tenho a dizer.\n");
				Sleep(700);
				Beep(300,200);
				printf("Você quer sair daqui? Não quer?\n");
				Sleep(700);
				Beep(300,200);
				printf("Finalmente tenho o primeiro plano de fuga efetivo deste lugar!\n");
				Sleep(700);
				Beep(300,200);
				i=1;
				break;
				
			case '3':
				frankkarma=frankkarma+1;
				Beep(400,200);
				system("cls");
				printf("Morris: Em cada refeição eu sumia com alhum talher sem que ninguém percebesse...\n");
				Sleep(700);
				Beep(300,200);
				printf("Mas enfim, segure-a, enquanto te mostro meu plano para fugirmos");
				Sleep(700);
				Beep(300,200);
				printf("\n\nE tem como fugir daqui?!");
				Sleep(700);
				Beep(300,200);
				printf("\n\nMorris: Apenas escute.\n");
				Sleep(700);
				Beep(300,200);
				i=1;
				break;
				
			default:
				Beep(200,200);
				printf("\nComando Inválido, escolha entre 1, 2 ou 3.");
				break;
		}
	}
 pontinhos();
 getch();
 system("cls");
 Beep(300,200);
 printf("Morris: Não sei se já observou, mas o seu quarto, assim como todos, existem uma pequena saída de ar.\n");
 Sleep(700);
 Beep(300,200);
 printf("Lógicamente esse ar, vem de alguma área externa da cadeia.\n");
 Sleep(700);
 Beep(300,200);
 printf("Coma a minha pá, conseguimos expandir essa pequena saída... Assim conseguiremos sair!\n");
 Sleep(700);
 Beep(300,200);
 printf("Tente cavar um pouco todos os dias... Precisamos de cerca de 20 dias de escavação para passarmos pelo buraco");
 Sleep(700);
 Beep(300,200);
 printf("\nO mais importante, é que ninguém pode desconfiar! Para isso trouxe essas folhas de jornal com tinta e verniz.");
 Sleep(700);
 Beep(300,200);
 printf("\nCom essa combinação, você irá conseguir tampar o buraco diariamente. NUNCA esqueça de tampar... Senão seremos pegos durante a vistoria!\n");
 pontinhos();
 getch();
 cavar();
 Beep(200,200);
 printf("\n\n*Na madrugada do 20º dia, após o buraco na saída de ar estar pronto, Morris aparece, junto com outras de suas invenções malucas para a fuga.*");
 Sleep(700);
 Beep(300,200);
 printf("\n\nAgora é a hora! Tome isso!");
 Sleep(700);
 Beep(200,200);
 printf("*Você pega um conjunto de ferramentas feitas por ele (corda, pá, lanterna e faca)*\n");
 Sleep(700);
 Beep(200,200);
 pontinhos();
 getch();
 system("cls");
 Beep(200,200);
 printf("*Com cuidado, você entram pelo buraco e seguem o caminho por onde percorre o ar de todo a prisão.*\n");
 printf("*Morris tem o mapa do local. Porém com a escuridão do lugar, você terá de usar a lanterna feita por ele para enxergar o mapa!*\n");
 printf("*A lanterna funciona por apenas 5 segundos. OLHE O MAPA COM ATENÇÃO! Ou poderá ser pego.\n");
 lanterna();
 system("cls");
 printf("Morris: Metade do plano foi concluído! Agora iremos cortar toda a energia elétrica!\n");
 Sleep(700);
 Beep(300,200);
 printf("Vá até aquele gerador e corte os fios certos!");
 cortafio();
 system("cls");
 Beep(300,200);
 printf("Morris: Isso! Agora só precisaremos pular o muro! Use a corda!");
 Sleep(700);
 Beep(200,200);
 printf("\n*Você consegue pular o muro*\n");
 pontinhos();
 getch();
 system("cls");
 Beep(400,300);
 if (frankkarma<=3){
 	Beep(300,200);
 	printf("Morris: Me desculpe %s, a gente podia trabalhar muito bem junto.\n", &nome);
 	Sleep(700);
 	Beep(300,200);
 	printf("Se você não fosse tão babaca comigo... Bem, acho que isso vai atrasar os policiais.");
 	Beep(200,200);
 	Beep(200,200);
 	Beep(200,200);
 	printf("\n\n*Frank Morris te mata violentamente sem pensar duas vezes...*");
 	printf("\n*Mais tarde a policia acha o seu cadáver e ninguém nunca mais ouviu falar de Frank Morris...*");
 	pontinhos();
 	getch();
 	system("cls");
 	creditofim();
 }
 
if (frankkarma>=3){
	Beep(200,200);
	printf("*Vocês conseguiram fugir da prisão e atravessar o mar sem nenhum arranhão*");
	Sleep(700);
	Beep(300,200);
	printf("Morris: É %s, parece que formamos uma ótima dupla! Ha ha ha!\n", &nome);
	Sleep(700);
	Beep(300,200);
	printf("Vou até te fazer um favor!\n");
	Sleep(700);
	Beep(300,200);
	printf("Boatos dizem que você foi pra prisão, por ter matado sua esposa e seus filhos...");
	Sleep(700);
	Beep(300,200);
	printf("O que não faz sentido é que...\n");
	Sleep(700);
	Beep(300,200);
	pontinhos();
	Sleep(300);
	Beep(300,200);
	printf("\nSua esposa está viva. Mas eu tenho nada a ver com isso, talvez um dia a \ngente se encontre de novo.");
	Sleep(700);
	Beep(200,200);
	printf("\n\n*Ninguém nunca mais ouviu falar de Frank Morris...*");
	Sleep(200);
	Beep(300,200);
	pontinhos();
	getch();
	system("cls");
	Beep(200,200);
	printf("\n*Você consegue chegar até São Francisco, onde descobre que é verdade.*\nSua mulher está viva, porém seus filhos todos mortos.*\nE isso não é um bom sinal...");
	pontinhos();
	getch();
	system("cls");
	Beep(200,200);
	printf("Fim");
	pontinhos();
	pontinhos();
	Beep(500,200);
	printf("?\n");
	pontinhos();
	getch();
	system("cls");
	creditofimbom();
}

Beep(200,200);
printf("*Vocês conseguiram fugir da prisão e atravessar o mar sem nenhum arranhão*");
Sleep(700);
Beep(200,200);
printf("\n*Sem você perceber Morris havia sumido sem deixar rastros.*");
Sleep(700);
Beep(200,200);
printf("\n*Fazendo até mesmo com que sua existência tenha sido duvidosa.*");
Sleep(700);
Beep(200,200);
printf("\n*Você consegue fugir até São Francisco, aonde vive anonimamente.*\n");
Sleep(700);
Beep(200,200);
printf("Porém sem nunca saber toda a verdade...");
Sleep(700);
Beep(200,200);
printf("*Será que haviam escolhas que revelassem mais sobre esse mistério?*\n");
Sleep(700);
Beep(200,200);
pontinhos();
getch();
system("cls");
creditofimbom();
}

int savecap3(){
	a=0;
	while(a==0){
	printf("\nDeseja salvar o jogo? S/N\n");
	j=0;
	while(j==0){
		jogos=getch();
		switch(jogos){
			case 's':
			case 'S':
				Beep(400,200);
				savestate=3;
				printf("Jogo salvo!\n");
				pontinhos();
				getch();
				printf("\nContinuar o Jogo? S/N\n");
				k=0;
				while(k==0){
				jogom=getch();
					switch(jogom){
						case'n':
						case'N':
							system("cls");
							a=1;
							i=1;
							j=1;
							k=1;
							main();
							break;

						case's':
						case'S':
							a=1;
							i=1;
							j=1;
							k=1;
							system("cls");
							capitulo3();
							break;

						default:
							Beep (200,200);
							printf("\nComando Inválido, escolha entre S ou N.");
							break;
					}
					}
					break;

			case 'n':
			case 'N':
				printf("Realmente não quer salvar? S/N\n");
				k=0;
				while(k==0){
					jogom=getch();
					switch(jogom){
						case 'S':
						case 's':
							a=1;
							i=1;
							j=1;
							k=1;
							system("cls");
							capitulo3();
							break;

						case 'n':
						case 'N':
							k=1;
							printf("Deseja salvar o jogo? S/N\n");
							break;

						default:
							Beep (200,200);
							printf("\nComando Inválido, escolha entre S ou N.");
							break;
					}
				}
				break;

			default:
				Beep (200,200);
				printf("\nComando Inválido, escolha entre S ou N.");
				break;
			}
		}
	}
}

void capitulo2(){
	char a = 177;
	system("cls");
	Beep (600,500);
	Beep (600,500);
	Beep (200,1000);
	Beep (100,1000);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("\n         ||||    ||    ||||  || |||||| ||  || ||    ||||||    |||| \n");
    printf("         ||     ||||   ||_|| ||   ||   ||  || ||    ||  ||      ||\n");
    printf("         ||    ||__||  ||    ||   ||   ||  || ||    ||  ||    ||  \n");
    printf("         |||| ||    || ||    ||   ||   |||||| ||||| ||||||   ||||| \n");
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
	printf("\n");
	pontinhos();
	getch();
	system("cls");
	Beep (200,200);
	printf("*Depois de descobrir aonde está, a questão agora é outra. Por que estar aqui?*\n");
	Sleep(700);
	Beep (200,200);
	printf("*Você decide dormir e espera até o guarda voltar, provavelmente para a próxima refeição do dia...\n");
	Sleep(700);
	pontinhos();
	printf("\n");
	Beep(200,200);
	Beep(220,200);
	Beep(200,700);
	printf("*Um som toma conta do seu quarto, parece que vem da parede. Mas nada acontece.*");
	pontinhos();
	getch();
	system("cls");
	Beep(200,200);
	printf("O* guarda lhe chama...*\n");
	Sleep(700);
	Beep(400,200);
	printf("\nGuarda: Ei, se prepare para o jantar, vá para a fila.");
	Sleep(700);
	Beep(200,200);
	printf("\n\n*O refeitório é o seu cenário mais uma vez. Morris chega com um grande sorriso, parece animado.*");
	Sleep(700);
	Beep(300,200);
	printf("\n\nMorris: %s você vai ficar feliz com o que vou te dizer!", &nome);
	printf("\nOpção:\n");
	printf("1 - Não quero ouvir! Meu único interesse é saber o por que de estar aqui!\n2 - Diga sem enrolações, já estou de saco cheio de tudo isso...\n");
	i=0;
	while(i==0){
		escolha=getch();
		switch(escolha){
			case '1':
				frankkarma=frankkarma-1;
				system("cls");
				Beep(400,200);
				printf("Morris: Como você não sabe? É maluco? Bom, os guardas podem te ajudar a saber. Só não garanto que irão ser amistosos.");
				printf("\n\n*Você termina sua refeição e caminha para a fila, quando avista um guarda. Sem mais delongas decide perguntar...\n");
				printf("\nQuero saber por que estou aqui!");
				printf("\n\nGuarda: Volte para a fila!\n");
				printf("\nOpções:\n1 - Voltar para a fila.\n2 - Insistir por informações.\n");
				j=0;
				while(j==0){
					escolha=getch();
					switch(escolha){
						case '1':
							system("cls");
							Beep(400,200);
							printf("*Faltam informações e seu pesadelo parece que não irá terminar tão cedo. O jeito é dormir*\n");
							Sleep(700);
							Beep(200,200);
							printf("\nZzZzZz");
							Sleep(700);
							Beep (400,200);
							printf("\n*No meio da noite, o barulho que você ouviu mais cedo volta a aparecer.\n");
							Sleep(700);
							Beep(200,200);
							Beep(220,200);
							Beep(200,700);
							pontinhos();
							getch();
							system("cls");
							Beep (400,200);
							printf("\nDESENHO COM O BURACO\n");
							Sleep(700);
							Beep (400,200);
							printf("\n*Seu vizinho de cela consegue abrir um buraco pela parede. Mas suas intenções não parecem ser boas...*\n");
							Sleep(700);
							Beep (200,200);
							pontinhos();
							printf(" ");
							pontinhos();
							printf(" ");
							pontinhos();
							Beep(400,300);
							Beep(400,300);
							Beep(200,900);
							printf("*Morris sem dizer uma palavra te mata... Da próxima vez, tenha mais cuidado ao falar com ele...\n");
							i=1;
							j=1;
							pontinhos();
							getch();
							Beep(400,200);
							creditofim();
							break;
								
						case '2':
							system("cls");
							Beep(400,200);
							printf("Eu preciso saber!\n");
							Sleep(700);
							Beep(500,200);
							printf("\nGuarda: Venha comigo.");
							Sleep(700);
							Beep(200,200);
							printf("\nVocê é levado até o diretor do presídio.");
							Sleep(700);
							Beep(500,200);
							printf("Diretor: Você quer saber o motivo da sua prisão? Já era esperado.\nNosso médico disse que talvez perderia a memória.../nE pelo visto isso realmente aconteceu.\n");
							Sleep(700);
							Beep(500,200);
							printf("Ouça o que tenho a te dizer...\n");
							Sleep(700);
							Beep(500,200);
							printf("Você matou sua mulher e seus filhos. Simples assim.");
							Sleep(700);
							Beep(500,200);
							printf("Está condenado a prisão perpétua sem direito a condicional...");
							Sleep(700);
							Beep(500,200);
							printf(" Podem levá-lo");
							Sleep(700);
							Beep(200,200);
							printf("\n\n*Você parecia consumido por culpa, você amava incondicionalmente sua esposa e seus filhos...*\n");
							Sleep(700);
							Beep(400,200);
							printf("\n\nA única coisa que eu posso fazer é cumprir minha pena... ");
							Sleep(700);
							Beep(400,200);
							printf("E-");
							Sleep(500);
							Beep(400,200);
							printf("eu mereço isso...");
							Sleep(700);
							Beep(200,200);
							printf("\n\n*Assim você viveu até os últimos momentos de sua vida, velho, consumido pela culpa...*\n");
							Sleep(700);
							Beep(200,200);
							printf("*Mas será que você descobriu toda a verdade?\n");
							pontinhos();
							getch();
							Beep(400,200);
							i=1;
							j=1;
							creditofim();
							break;
							
						default:
							Beep(200,200);
							printf("\nComando Inválido, escolha entre 1 ou 2.");
							break;
					}
				}
				i=1;
				break;
				
			case '2':
				frankkarma=frankkarma+1;
				system("cls");
				Beep(400,200);
				printf("Morris: Finalmente meu plano de escape vai funcionar. E você vai junto...\n");
				Sleep(700);
				Beep(300,200);
				printf("Espere a madrugada e lhe direi!");
				Sleep(700);
				Beep(400,200);
				printf("\n\nMadrugada?! Mas não temos refeições durante a madrugada...");
				Sleep(700);
				Beep(300,200);
				printf("\n\nMorris: Espere e verá...\n");
				Sleep(700);
				Beep(200,200);
				i=1;
				break;
			
			default:
				Beep(200,200);
				printf("\nComando Inválido, escolha entre 1 ou 2.");
				break;
		}
	}
	printf("\n\n*Depois disso você volta ao seu quarto e decide escrever em sua agenda.*");
	pontinhos();
	getch();
	savecap3();
}

int savecap2(){
	a=0;
	while(a==0){
	printf("\nDeseja salvar o jogo? S/N\n");
	j=0;
	while(j==0){
		jogos=getch();
		switch(jogos){
			case 's':
			case 'S':
				Beep(400,200);
				savestate=2;
				printf("Jogo salvo!\n");
				pontinhos();
				getch();
				printf("\nContinuar o Jogo? S/N\n");
				k=0;
				while(k==0){
				jogom=getch();
					switch(jogom){
						case'n':
						case'N':
							system("cls");
							a=1;
							i=1;
							j=1;
							k=1;
							main();
							break;

						case's':
						case'S':
							a=1;
							i=1;
							j=1;
							k=1;
							system("cls");
							capitulo2();
							break;

						default:
							Beep (200,200);
							printf("\nComando Inválido, escolha entre S ou N.");
							break;
					}
					}
					break;

			case 'n':
			case 'N':
				printf("Realmente não quer salvar? S/N\n");
				k=0;
				while(k==0){
					jogom=getch();
					switch(jogom){
						case 'S':
						case 's':
							a=1;
							i=1;
							j=1;
							k=1;
							system("cls");
							capitulo2();
							break;

						case 'n':
						case 'N':
							k=1;
							printf("Deseja salvar o jogo? S/N\n");
							break;

						default:
							Beep (200,200);
							printf("\nComando Inválido, escolha entre S ou N.");
							break;
					}
				}
				break;

			default:
				Beep (200,200);
				printf("\nComando Inválido, escolha entre S ou N.");
				break;
			}
		}
	}
}

void capitulo12(){
	system("cls");
	Beep(400,200);
	printf("O que é isso tudo isso que está acontecendo?");
	Sleep(700);
	printf("\n\n*Você começa a ter flashes em sua cabeça.\nLembra de sua familia, filhos e principalmente de sua mulher... Até que você acaba dormindo novamente*\n");
	Sleep(700);
	Beep(400,200);
	printf("\nGuarda: Ei, você só sabe dormir? Vamos, acorde, hora de sair!\n");
	printf("Opções:\n");
	printf("1 - Sair.\n2 - Ficar no quarto.\n3 - Aonde quer me levar.");
	i=0;
	while (i==0){
		escolha=getch();
		switch(escolha){
			case '1':
				Beep (400,200);
				system("cls");
				printf("*Você se levanta e segue o guarda*\n");
				i=1;
				pontinhos();
				getch();
				break;

			case '2':
				Beep (400,200);
				system("cls");
				guardakarma=guardakarma-1;
				printf("Guarda: Não tenho o dia inteiro, será que vou ter que te dar uma lição?");
				printf("\n\n*Você se sente intimidado e resolve sair.*");
				i=1;
				pontinhos();
				getch();
				break;
				
			case '3':
				Beep (400,200);
				system("cls");
				printf("Guarda: Você tem direito a um banho de sol por dia. Aproveite para conhecer seus amigos, e não arrume encrenca.");
				printf("\n\n*Você acena com a cabeça e aceita sair do quarto*");
				i=1;
				pontinhos();
				getch();
				break;

			default:
				Beep (200,200);
				printf("\nComando Inválido, escolha entre 1, 2 ou 3.");
				break;
		}	
	}
	Beep(200,400);
	printf("\n*Você se encontra em uma lugar grande a céu aberto. O pátio, onde todas as pessoas daquela fila misteriosa se encontram.*");
	Sleep(700);
	Beep(200,400);
	printf("\n*Talvez essa seja uma ótima oportunidade de saber as coisas*");
	if(frank==1){
		if (frankkarma<=2){
			Beep(200,400);
			printf("\n\nMorris: Você de novo... Dessa vez podemos conversar mais. Ou vai me mandar calar a boca de novo?");
			Sleep(700);
		}
		printf("\n\nMorris: Você de novo... Dessa vez podemos conversar mais.");
			Beep(200,400);
			Sleep(700);
	}
	
	if(frank==0){
		Beep(200,400);
		printf("\n\nDesconhecido: Fiquei sabendo que fez besteira e por isso não foi tomar um cafézinho com a gente.\n");
		printf("Aliás, meu nome é Morris, Frank Morris.");
		Sleep(700);
	}
	
	printf("\nVenha, quero te conhecer melhor.");
	printf("\nOpções:\n");
	printf("1 - Ir.\n2 - Não ir.");
	i=0;
	while(i==0){
		escolha=getch();
		switch(escolha){
			case '1':
				Beep(400,200);
				frankkarma=frankkarma+1;
				system("cls");
				Beep(300,200);
				printf("Tudo bem, vamos. Espero que me conte mais sobre aqui.\n");
				Sleep(700);
				Beep(300,200);
				printf("\nMorris: Bem, tenho três coisas a te dizer:\n");
				Sleep(700);
				Beep(300,200);
				printf("Primeiramente: Nunca escute o que os outros dizem sobre mim.\n");
				Sleep(700);
				Beep(300,200);
				printf("Segundo: Assim como você, quero sair daqui.\n");
				Sleep(700);
				Beep(300,200);
				printf("Terceiro: Nunca brigue com alguém.");
				Sleep(700);
				Beep(300,200);
				pontinhos();
				getch();
				i=1;
				break;
				
			case '2':
				frankkarma=frankkarma-1;
				Beep(400,200);
				system("cls");
				printf("\n*Você decide não ir com Morris mas sim andar pelo pátio.*");
				pontinhos();
				getch();			
				i=1;
				break;
			
			default:
				Beep (200,200);
				printf("\nComando Inválido, escolha entre 1 ou 2.");
				break;
		}
	}
	
	printf("\n\n*Logo após chega um sujeiro mal encarado querendo tirar onda*");
	printf("\n\nSujeito: Ei! Cê ta achando que ta em uma aventura pirata?!\n");
	printf("Fica aí, andando de um lado por outro?");
	if (escolha==1){
		Beep(200,200);
		printf("\n\n*Você resolve escutar os conselho de Morris e evita uma briga.*");
		Sleep(700);
		Beep(300,200);
		printf("\n\nMorris: Boa, brigar aqui vai trazer no máximo uma cicatriz e um bom tempo na enfermaria...");
		Sleep(700);
		Beep(300,200);
		printf("\nEntão, aqui é Alcatraz! Bem vindo ao inferno...");
		Sleep(700);
		Beep(300,200);
		printf("\n\nAlcatraz?! Por que estou aqui?! Fiz nada de errado!");
		Beep(300,200);
		Sleep(700);
		printf("\n\nMorris: Aqui somos todos inocentes! Ha, ha, ha!");
		Sleep(700);
		pontinhos();
		getch();
		}
		
	if(escolha==0){
		Beep(200,200);
		printf("\n\nOpções:\n");
		printf("\n1 - *Ignorar.*\n2 - *Iniciar uma briga.*");
		i=0;
		while(i==0){
			escolha=getch();
			switch(escolha){
				case '1':
					frankkarma=frankkarma+1;
					Beep(400,200);
					system("cls");
					Beep(400,200);
					printf("*O sujeito viu que você não queria nada e só voltou para o seu grupo dando risada*");
					Sleep(700);
					Beep(400,200);
					printf("\n*Então Morris vendo essa atitude se aproxima novamente*");
					Sleep(700);
					Beep(400,200);
					printf("\n\nMorris: Boa, brigar aqui vai trazer no máximo uma cicatriz e um bom tempo na enfermaria...");
					Sleep(700);
					Beep(300,200);
					printf("\nMorris: Bem, tenho três coisas a te dizer:\n");
					Sleep(700);
					Beep(300,200);
					printf("Primeiramente: Nunca escute o que os outros dizem sobre mim.\n");
					Sleep(700);
					Beep(300,200);
					printf("Segundo: Assim como você, quero sair daqui.\n");
					Sleep(700);
					Beep(300,200);
					printf("Terceiro: Nunca brigue com alguém.\n");
					Sleep(700);
					printf("\nEntão, aqui é Alcatraz! Bem vindo ao inferno...");
					Sleep(700);
					Beep(300,200);
					printf("\n\nAlcatraz?! Por que estou aqui?! Fiz nada de errado!");
					Beep(300,200);
					Sleep(700);
					Beep(300,200);
					printf("\n\nMorris: Aqui somos todos inocentes! Ha, ha, ha!");
					Sleep(700);
					pontinhos();
					getch();
					i=1;
					break;
					
				case '2':
					Beep(400,200);
					system("cls");
					printf("*Você xinga e provoca o sujeito, fazendo com que ele venha com tudo para cima de você buscando uma luta.\n");
					pontinhos();
					getch();
					luta=1;
					lutasujeito=1;
					luta1();
					system("cls");
					i=1;
					printf("*Você ganhou a luta, mas não é de se comemorar. Seu destino é a solitária por alguns dias. Aceite isso...*");
					pontinhos();
					getch();
					printf("\n*Depois de cumprir o tempo na solitária, você volta para o seu quarto, ou melhor, sua cela.*");
					pontinhos();
					getch();
					capitulo2;
					break;
					
				default:
					Beep (200,200);
					printf("\nComando Inválido, escolha entre 1 ou 2.");
					break;
			}
		}
	}
	
	printf("Você volta para o quarto, ou melhor, a cela. E resolve escrever todos acontecimentos do dia na agenda.\n");
	savecap2();
}

int savecap12(){
	a=0;
	while(a==0){
	printf("\nDeseja salvar o jogo? S/N\n");
	j=0;
	while(j==0){
		jogos=getch();
		switch(jogos){
			case 's':
			case 'S':
				Beep(400,200);
				savestate=12;
				printf("Jogo salvo!\n");
				pontinhos();
				getch();
				printf("\nContinuar o Jogo? S/N\n");
				k=0;
				while(k==0){
				jogom=getch();
					switch(jogom){
						case'n':
						case'N':
							system("cls");
							a=1;
							i=1;
							j=1;
							k=1;
							main();
							break;

						case's':
						case'S':
							a=1;
							i=1;
							j=1;
							k=1;
							system("cls");
							capitulo12();
							break;

						default:
							Beep (200,200);
							printf("\nComando Inválido, escolha entre S ou N.");
							break;
					}
					}
					break;

			case 'n':
			case 'N':
				printf("Realmente não quer salvar? S/N\n");
				k=0;
				while(k==0){
					jogom=getch();
					switch(jogom){
						case 'S':
						case 's':
							a=1;
							i=1;
							j=1;
							k=1;
							system("cls");
							capitulo12();
							break;

						case 'n':
						case 'N':
							k=1;
							printf("Deseja salvar o jogo? S/N\n");
							break;

						default:
							Beep (200,200);
							printf("\nComando Inválido, escolha entre S ou N.");
							break;
					}
				}
				break;

			default:
				Beep (200,200);
				printf("\nComando Inválido, escolha entre S ou N.");
				break;
			}
		}
	}
}

void capitulo11(){
	for(x=0; x<3; x++){
	system("color 42");
	Beep(200,1000);

	system("color f2");
	Beep(500,1000);
	}

	system("color 17");
	pontinhos();
	getch();
	system("cls");
	Beep(400,200);
	printf("Guarda: Todos para a fila!\nO café será servido. 30 minutos para comer.");
	Sleep(500);
	Beep(200,200);
	printf("\n\n*A porta se abre e você percebe que está de manhã, você sai de seu quarto e se  depara com uma fila extensa de pessoas se preparando para o que seria o café da manhã naquele lugar estranho*");
	Sleep(500);
	pontinhos();
	Beep(400,200);
	printf("\n\nO que é isso? Que lugar é este? Quem são eles?!");
	Sleep(500);
	Beep(200,200);
	Sleep(500);
	printf("\n\n*Você então levanta da cama e vai para a porta*");
	printf("\n\nOpções:\n");
	printf("1 - Tentar encontrar uma saída e fugir.\n2 - Ir para a fila.\n3 - Perguntar aonde está.");
	i=0;
	while(i==0){
		escolha=getch();
		switch(escolha){
			case '1':
				Beep (400,200);
				system("cls");
				if (guardakarma<=-3){
					Beep(400,200);
					printf("*Você tenta correr e fugir, mas sem sucesso.*\n\n");
					Beep(500,700);
					printf("Guarda: AONDE VOCÊ PENSA QUE ESTÁ INDO? JÁ ESTOU CANSADO DESSA SUA ATITUDE!\nGUARDAS, MANDEM ELE PARA A SOLITÁRIA!");
					Sleep(1000);
					Beep(400,200);
					printf("\n\nSolitária? Então eu estou em uma pri...");
					Sleep(500);
					printf("*Antes de terminar a frase, o guarda te nocauteia.*");
					Beep(200,200);
					Beep(200,700);
					Sleep(600);
					pontinhos();
					getch();
					system("cls");
					Beep(200,200);
					printf("*A sua vinda para esse lugar foi um mistério*\n*Tamanha confusão em sua mente foi suficiente para te levar a loucura*");
					Sleep(600);
					Beep(200,200);
					printf("\n\n*Você foi enviado à enfermaria e foi diagnosticado com graves problemas psiquiátricos.*\n\n*Devido a isso você foi levado a um manicômio onde passou o resto de sua vida*");
					Sleep(600);
					Beep(200,200);
					printf("\n\n*Tudo ainda se permaneceu um mistério, aonde você estava? Como foi parar lá?*");
					pontinhos();
					getch();
					system("cls");
					i=1;
					creditofim();
					break;
				}

				guardakarma=guardakarma-3;
				printf("*Você tenta correr e fugir, mas sem sucesso. Além disso, fica sem o café. E é obrigado a voltar ao seu quarto.*\n");
				pontinhos();
				getch();
				i=1;
				break;

			case '2':
				Beep(400,200);
				guardakarma=guardakarma+1;
				system("cls");
				printf("Guarda: Bom garoto. Continue assim.\n");
				pontinhos();
				getch();
				i=1;
				break;

			case '3':
				guardakarma=guardakarma-1;
				Beep(400,200);
				system("cls");
				printf("Guarda: Isso não são horas para perguntas idiotas, vá logo para a fila. Estou de olho em você. Ande logo para a fila!\n");
				pontinhos();
				getch();
				i=1;
				break;

			default:
				Beep(200,200);
				printf("\nComando inválido. Escolha entre 1, 2 ou 3.");
				break;
		}
		}

	switch(escolha){
		case '2':
		case '3':
			frank=1;
			bilhete=1;
			Beep(400,200);
			printf("\n\n*Enquanto caminha, você repara no lugar e nas pessoas.\n");
			Sleep(600);
			Beep(400,200);
			printf("*Pelo corredor você observa que há quartos iguais ao seu em ambos os lados.*\n");
			Sleep(600);
			Beep(400,200);
			printf("*O corredor chega ao fim com uma grande porta e o leva para um espaço maior e   mais claro.*\n");
			Sleep(400);
			pontinhos();
			getch();
			Beep(400,200);
			printf("\n*Ao visto era o refeitório onde tomaria o suposto café da manhã.*\n");
			Sleep(600);
			Beep(400,200);
			printf("*Você se senta ao lado do que seria seu vizinho de quarto, que não para de te   observar.*\n");
			Sleep(600);
			pontinhos();
			getch();
			Beep(300,200);
			printf("\nVizinho de quarto: Novo por aqui, não é?");
			Sleep(600);
			Beep(300,200);
			printf(" Sou Morris... Mas me chamam de Frank.");
			Sleep(600);
			Beep(300,200);
			printf("\nPor que está aqui?");
			Sleep(600);
			Beep(300,200);
			printf("\nNão sou do tipo que faz amigos, mas gostei de você.\n");
			printf("\nOpções:\n");
			printf("1 - Cale a boca, não falo com estranhos.\n");
			printf("2 - Que lugar é este?\n");
			printf("3 - Quem é você?");
			i=0;
			while(i==0){
				escolha=getch();
				switch(escolha){
					case '1':
						system("cls");
						frankkarma=frankkarma-2;
						Beep(400,200);
						printf("Frank: Tudo bem, você não me faz falta... Seja bem vindo.");
						i=1;
						Sleep(600);
						Beep(200,200);
						printf("\n\n*Depois de tomar seu café, você levanta e volta para a fila que leva ao quarto.*");
						pontinhos();
						getch();
						break;

					case '2':
						system("cls");
						Beep(300,200);
						printf("Frank: Isso eu me pergunto até hoje.");
						Sleep(700);
						Beep(200,200);
						printf("\n\n*Frank volta para o quarto com uma risada no canto da boca.*");
						Sleep(600);
						Beep(200,200);
						printf("\n\n*Depois de tomar seu café, você levanta e volta para a fila que leva ao quarto.*");
						i=1;
						pontinhos();
						getch();
						break;

					case '3':
						system("cls");
						Beep(300,200);
						printf("Frank: Alguém em que você pode confiar.");
						Sleep(700);
						Beep(300,200);
						printf(" Você tem vontade de sair daqui?");
						printf("\n\nOpções:");
						printf("\n1 - Sim, como eu faço?\n2 - *Terminar o café e voltar para fila que leva ao quarto*");
						j=0;
						while(j==0){
							escolha=getch();
							switch(escolha){
								case '1':
									frankkarma=frankkarma+1;
									Beep(300,200);
									system("cls");
									printf("Frank: ");
									pontinhos();
									Sleep(400);
									Beep(300, 200);
									printf(" Se eu soubesse já não estaria aqui.");
									Sleep(600);
									Beep(300,200);
									printf("\nTenho alguns plano, mas não sei se devo te contar.");
									Sleep(600);
									Beep(200,200);
									printf("\n\n*Frank volta para o quarto com uma risada no canto da boca.*\n");
									Sleep(600);
									Beep(200,200);
									printf("\n\n*Depois de tomar seu café, você levanta e volta para a fila que leva ao quarto.*");
									i=1;
									j=1;
									pontinhos();
									getch();
									break;

								case '2':
									frankkarma=frankkarma-1;
									Beep(400,200);
									system("cls");
									printf("*Você ignora a proposta e volta para a fila que leva ao quarto.*\n");
									i=1;
									j=1;
									pontinhos();
									getch();
									break;

								default:
									Beep(200,200);
									printf("\nComando inválido. Escolha entre 1 ou 2.");
									break;
							}
						}
						break;

					default:
						Beep(200,200);
						printf("\nComando inválido. Escolha entre 1, 2 ou 3.");
						break;
				}
			}
			Beep(200,500);
			printf("\n\n*Durante a fila, um estranho lhe entrega um bilhete...*\n");
			pontinhos();
			getch();
			system("cls");
			printf("No bilhete estava escrito: \n\n");
			Sleep(1000);
			Beep(400,200);
			Beep(400,200);
			printf("|||||||||||||||||||||||||\n");
 			printf("|||||Cuidado com o|||||||\n");
  			printf("|||||||||||Morris||||||||\n");
			printf("|||||||||||||||||||||||||\n");
			pontinhos();
			getch();
			break;

		default:
			break;
	}
	system("cls");
	Beep(200,200);
	printf("*Você é trancado novamente no seu quarto.*\n");
	if (livro==1){
		printf("*Você volta a olhar a agenda e anota todos acontecimentos recentes.*");
		savecap12();
	}

	if (livro==0){
		printf("*Você nota que há uma agenda e uma luminária em cima da mesa*\n");
		pontinhos();
		getch();
		cela=1;
		for (x=0; x<3; x++){
			if (livro==0){
			printlivro();
			livro=1;
			}

			if (livro==1){
			printlivro();
			livro=0;
			}
			printf("*Você olha a agenda e resolve anotar todos acontecimentos recentes.*\n");
			pontinhos();
			getch();
			savecap12();
	}
	}
	getch();
}

void capitulo1(){
	system("cls");
	savestate=1;
	char a = 177;
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("\n         ||||    ||    ||||  || |||||| ||  || ||    ||||||    /|  \n");
    printf("         ||     ||||   ||_|| ||   ||   ||  || ||    ||  ||   /||  \n");
    printf("         ||    ||__||  ||    ||   ||   ||  || ||    ||  ||    ||  \n");
    printf("         |||| ||    || ||    ||   ||   |||||| ||||| ||||||  __||__   \n");
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
	Beep (300,500);
	Beep (300,500);
	Beep (200,1000);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(" - Pressione qualquer tecla para continuar.");
	getch();
	system("cls");

	Beep (200,200);
	printf("*Você parece estar em um sonho...*\n");
	Sleep(1000);
	Beep (200,200);
	printf("*Uma voz te chama...*\n");
	Sleep(1000);
	pontinhos();
	getch(NULL);
	getch();

	Beep (400,200);
	printf("\n\nVoz misteriosa: %s,", &sobrenome);
	Sleep(1000);
	Beep (500,200);
	printf(" %s! Rápido!\n", &sobrenome);
	Sleep(1000);

	printf("\nOpções:\n");
	printf("1 - Abrir os olhos.\n");
	printf("2 - Continuar no sonho...\n");
	i=0;
	while(i==0){
	escolha=getch();
	switch(escolha){
		case '1':
			system("cls");
			Beep (400,200);
			printf("*Abre os olhos*\n");
			pontinhos();
			getch();
			i=1;
			break;

		case '2':
			system("cls");
			Beep(400,200);
			printf("Voz misteriosa: Acorde seu bosta!\n");
			Sleep(1000);
			Beep(300,400);
			printf("*Você sente um chute... E abre os olhos...*\n");
			pontinhos();
			guardakarma=guardakarma-1;
			getch();
			i=1;
			break;

		default:
			Beep(200,200);
			printf("\nComando inválido. Escolha entre 1 ou 2.");
			break;
	}
	}

	Beep(400,200);
	printf("\nVocê se depara com a seguinte cena:\n");
	Sleep(1500);

	printcela();

	Beep(200,600);
	Sleep(2000);
	pontinhos();
	getch();
	printf("\nOpções:");
	printf("\n1 - Seguir a voz vindo da porta.\n");
	printf("2 - Se questionar aonde está.\n");
	for(i=0; i<20; i++){
		printf("\n");
	}
	i=0;
	while(i==0){
		escolha=getch();
		switch(escolha){
			case '1':
				system("cls");
				Beep(400,200);
				printf("Voz misteriosa: Venha logo %s! Não tenho a noite toda!\n", &sobrenome);
				i=1;
				break;

			case '2':
				guardakarma=guardakarma-1;
				system("cls");
				printf("Voz misteriosa: O que você está falando? Você sabe muito bem aonde está!\n\n");
				Beep(300,200);
				printf("E");
				Sleep(200);
				Beep(300,200);
				printf("-eu...");
				Sleep(500);
				Beep(500,200);
				printf("Sei?");
				Sleep(300);
				Beep(250,200);
				printf(".");
				Sleep(300);
				Beep(250,200);
				printf(".");
				Sleep(100);
				Beep(200,400);
				printf(".\n\n");
				Sleep(600);
				i=1;
				break;

			default:
				Beep(200,200);
				printf("\nComando inválido. Escolha entre 1 ou 2.");
				break;
		}
	}
	Beep(400,200);
	printf("Voz misteriosa: Chega de brincadeira, ainda tenho outras vistorias para fazer!\n");
	Sleep(1200);
	Beep(200,200);
	printf("\n*O que parece ser um guarda começa a revistar todo o lugar.*\n");
	Sleep(1200);
	Beep(400,200);
	printf("\nGuarda: Bem, parece estar tudo em ordem.\n");
	Sleep(1200);
	printf("\n*O guarda se vira e sai batendo a porta*\n");
	Beep(150,1000);
	pontinhos();
	getch();
	system("cls");
	Beep(400,200);
	printf("O que está acontecendo? Aonde estou?!\n");
	printf("\nOpções:\n");
	printf("1 - Dormir.\n");
	printf("2 - Revistar o local.\n");
	printf("3 - Tentar abrir a porta.");
	i=0;
	while(i==0){
		escolha=getch();
		switch(escolha){
			case '1':
				Beep(400,200);
				system("cls");
				printf("Acredito estar em um pesadelo... Vou voltar a dormir.\n");
				pontinhos();
				getch();
				system("cls");
				i=1;
				capitulo11();
				break;

			case '2':
				Beep(400,200);
				system("cls");
				printf("*Você começa a vasculhar o local*\n");
				pontinhos();
				getch();
				printf("\n*Você achou uma mesa com uma luminária e ao lado uma agenda*\n");
				cela=1;
				for (x=0; x<3; x++){
					if (livro==0){
						printlivro();
						livro=1;
					}

					if (livro==1){
						printlivro();
						livro=0;
					}
				}
				printcela();
				pontinhos();
				getch();
				system("cls");
				printf("*Você então resolve anotar os acontecimentos recente nessa agenda.*\n");
				a=0;
				while(a==0){
				printf("\nDeseja salvar o jogo? S/N\n");
				j=0;
				while(j==0){
					jogos=getch();
					switch(jogos){
						case 's':
						case 'S':
							Beep(400,200);
							savestate=11;
							printf("Jogo salvo!\n");
							pontinhos();
							getch();
							printf("\nContinuar o Jogo? S/N\n");
							k=0;
							while(k==0){
								jogom=getch();
								switch(jogom){
									case'n':
									case'N':
										system("cls");
										a=1;
										i=1;
										j=1;
										k=1;
										main();
										break;

									case's':
									case'S':
										a=1;
										i=1;
										j=1;
										k=1;
										system("cls");
										capitulo11();
										break;

									default:
									Beep (200,200);
									printf("\nComando Inválido, escolha entre S ou N.");
									break;
								}
							}
							break;

						case 'n':
						case 'N':
							printf("Realmente não quer salvar? S/N\n");
							k=0;
							while(k==0){
								jogom=getch();
								switch(jogom){
									case 'S':
									case 's':
										a=1;
										i=1;
										j=1;
										k=1;
										system("cls");
										capitulo11();
										break;

									case 'n':
									case 'N':
										k=1;
										printf("Deseja salvar o jogo? S/N\n");
										break;

									default:
										Beep (200,200);
										printf("\nComando Inválido, escolha entre S ou N.");
										break;
								}
							}
							break;

						default:
							Beep (200,200);
							printf("\nComando Inválido, escolha entre S ou N.");
							break;
						}
					}
				}
				break;

			case '3':
				Beep(400,200);
				system("cls");
				printf("*Você tenta abrir a porta batendo desesperadamente*\n");
				Beep(200,200);
				Sleep(400);
				Beep(400,200);
				Sleep(400);
				Beep(400,200);
				Beep(400,200);
				Beep(400,200);
				Sleep(400);
				Beep(600,200);
				printf("\nGuarda: PARE COM ISSO AGORA E VÁ DORMIR!\n");
				Beep(400,200);
				printf("\n*Você com medo resolve obedecer e vai dormir*\n");
				guardakarma=guardakarma-1;
				i=1;
				pontinhos();
				getch();
				system("cls");
				capitulo11();
				break;

			default:
				Beep(200,200);
				printf("\nComando inválido. Escolha entre 1, 2 ou 3.");
				break;
			}
		}
		getch();
	}

void ficha(){
	guardakarma=0;
	cela=0;
	livro=0;
	bilhete=0;
	frank=0; 
	frankkarma=0; 
	lutasujeito=0;
	lutaguarda=0;
	luta=0;
	bonus=0;
	i=0;
	while(i==0){
	system("cls");
	Beep(300,200);
	printf("Qual o seu primeiro nome?\n\n > ");
	fgets (nome, 20, stdin);
	if ((strlen(nome)>0) && (nome[strlen (nome)-1]=='\n')){
		nome[strlen(nome)-1]='\0';
	}

	Beep(300,200);
	printf("\nSobrenome?\n\n > ");
	fgets (sobrenome, 50, stdin);
	if ((strlen(sobrenome)>0) && (sobrenome[strlen (sobrenome)-1]=='\n')){
		sobrenome[strlen(sobrenome)-1]='\0';
	}

	Beep(300,200);
	printf("\nSua idade: (Apenas números.)\n\n > ");
	fgets (idade, 10, stdin);
	if ((strlen(idade)>0) && (idade[strlen (idade)-1]=='\n')){
		idade[strlen(idade)-1]='\0';
	}

	Beep(300,200);
	printf("\nSua altura: (Em centímetros, apenas números.)\n\n > ");
	fgets (altura, 10, stdin);
	if ((strlen(altura)>0) && (altura[strlen (altura)-1]=='\n')){
		altura[strlen(altura)-1]='\0';
	}

	Beep(300,200);
	printf("\nPeso: (Em quilos, apenas números.)\n\n > ");
	fgets (peso, 10, stdin);
	if ((strlen(peso)>0) && (peso[strlen (peso)-1]=='\n')){
		peso[strlen(peso)-1]='\0';
	}

	Beep(300,200);
	printf("\nPaís de origem:\n\n > ");
	fgets (pais, 20, stdin);
	if ((strlen(pais)>0) && (pais[strlen (pais)-1]=='\n')){
		pais[strlen(pais)-1]='\0';
	}

	system("cls");

	printf("               _________________________________________________  \n");
    printf("              /                                                 \\ \n");
    printf("             |    __________________________________________     |\n");

    printf("             |   | Nome: %s %s", &nome, &sobrenome);
    tpalavra=strlen(nome)+strlen(sobrenome);
    for (x=0; x<(34-tpalavra); x++){
    	printf(" ");
	}
	printf("|    |\n");

    printf("             |   | Idade: %s anos.", &idade);
	tpalavra=strlen(idade);
    for (x=0; x<(28-tpalavra); x++){
    	printf(" ");
	}
	printf("|    |\n");

    printf("             |   | Altura: %s cms.", &altura);
    tpalavra=strlen(altura);
    for (x=0; x<(28-tpalavra); x++){
    	printf(" ");
	}
	printf("|    |\n");

    printf("             |   | Peso: %s kgs.", &peso);
    tpalavra=strlen(peso);
    for (x=0; x<(30-tpalavra); x++){
    	printf(" ");
    }
	printf("|    |\n");

    printf("             |   | País de origem: %s", &pais);
    tpalavra=strlen(pais);
    for (x=0; x<(25-tpalavra); x++){
    	printf(" ");
    }
	printf("|    |\n");

    printf("             |   |                                          |    |\n");
    printf("             |   |                                          |    |\n");
    printf("             |   |__________________________________________|    |\n");
    printf("             |                                                   |\n");
    printf("              \\_________________________________________________/\n");
    printf("                    \\____________________________________/\n");
    printf("                  ____________________________________________\n");
    printf("                _-'    .-.-.-.-.-.-.-.-.-.-.-.-.--.-.-.-.  --- `-_\n");
    printf("            _-'.-.-. .---.-.-.-.-.-.-.-.-.-.--.-.-.-.-.--.  .-.-.`-_\n");
    printf("         _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.--.-.-.-.-.-`__`. .-.-.-.`-_\n");
    printf("      _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.--.-.-.-.-.-----. .-.-.-.-.`-_\n");
    printf("   _-'.-.-.-.-.-. .---.-. .--------------------------. .-.---. .---.-.-.-.`-_\n");
    printf("  :--------------------------------------------------------------------------:\n");
    printf("  `---._.--------------------------------------------------------------._.---'\n");
	printf("Todos os dados estão corretos? S/N\n");
	j=0;
	while(j==0){
		escolha=getch();
		switch(escolha){
			case 's':
			case 'S':
				Beep (400,200);
				i=1;
				j=1;
				system("cls");
				break;

			case 'n':
			case 'N':
				Beep (400,200);
				j=1;
				system("cls");
				break;

			default:
				Beep (200,200);
				printf("\nComando Inválido, escolha entre S ou N.");
				break;
		}
	}
}
	capitulo1();
}

void save(){
	if (savestate==0){
		ficha();
	}

	if (savestate==1){
		capitulo1();
	}

	if (savestate==11){
		capitulo11();
	}
	
	if (savestate==12){
		capitulo12();
	}
	
	if (savestate==2){
		capitulo2();
	}
	
	if (savestate==3){
		capitulo3();
	}
}

int creditofim(){
	system("cls");
	printf("Game over!\n\n");
	Beep(400,300);
	Beep(400,300);
	Beep(400,300);
	Beep(400,300);
	Beep(300,500);
	Beep(200,500);
	Beep(100,500);
	pontinhos();
	getch();
	system("cls");
	printf("Deseja continuar? S/N\n");
	escolha=getch();
	i=0;
	while(i==0){
	switch(escolha){
		case 's':
		case 'S':
			system("cls");
			i=1;
			save();
			break;
			
		case 'n':
		case 'N':
			system("cls");
			i=1;
			main();
			break;
			
		default:
			Beep (200,200);
			printf("\nComando Inválido, escolha entre S ou N.");
			break;
	}
	}
	main();
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil.1252");
    char a=177;
    noix=0;

    i=0;
    system ("color 17");
	while (i==0){
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("    |||     ||       |||||||     |||     |||||||| ||||||||      ||     ||||||||\n");
    printf("   |||||    ||       ||         |||||       ||    ||    ||     ||||         |||\n");
    printf("  ||   ||   ||       ||        ||   ||      ||    || |||      ||  ||      |||\n");
    printf(" |||||||||  ||       ||       |||||||||     ||    ||   |||   ||||||||   |||\n");
    printf("||       || |||||||| ||||||| ||       ||    ||    ||     || ||      || ||||||||\n");
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    if (noix==1){
    printf("                               >>> É NOIX <<<");
	}
	if (noix!=1){
	printf("                     >>> LUTE CONTRA SUAS ESCOLHAS <<<");
	}
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n\n", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("                  Pressione 'N' para começar um Novo Jogo.\n");
	printf("                       Pressione 'C' para Continuar.\n");
	printf("                      Pressione 'M' para ver o Manual.\n");
	printf("                     Pressione 'O' para ver os Créditos.\n");
	printf("                   Pressione 'H' para ir à tela de Códigos.\n");
	if (bonus==1){
	printf("                          Pressione 'B' para os Bônus!\n");
	}
    printf("\n\n\n© 2016 FullHumilda. Todos os direitos reservados. v1.0.\n");

    escolha=getch();
	switch(escolha){
		case'n':
		case 'N':
			Beep (600,200);
			system("cls");
			printf("Deseja criar um novo jogo? S/N\n");
			j=0;
			while (j==0){
			njogo=getch();
			switch(njogo){
				case's':
				case'S':
					Beep (600,200);
					savestate=0;
					i=1;
					j=1;
					save();
					break;

				case'n':
				case'N':
					Beep (600,200);
					system("cls");
					j=1;
					break;

				default:
					Beep (200,200);
					printf("\nComando Inválido, escolha entre S ou N.");
					break;
			}
			}
			Beep (600,200);
			system("cls");
			break;

		case'c':
		case'C':
			Beep (600,200);
			system("cls");
			i=1;
			save();
			break;

		case'o':
		case'O':
			Beep (600,200);
			system("cls");
			Beep (400,200);
			Beep (400,200);
			printf("Jogo criado por: Felipe Goes\n");
			Beep (400,200);
			Beep (400,200);
			printf("                 Rodrigo Zeferino\n");
			Beep (400,200);
			Beep (400,200);
			printf("                 Yugo Toshio\n");
			Beep (400,200);
			Beep (400,200);
			printf("Fatec Carapicuíba - Jogos Digitais - Segundo Semestre - Manhã\n");
			Beep (300,1000);
			printf("\n\nPressione qualquer tecla para voltar ao menu.\n");
			getch();
			system("cls");
			break;

		case'm':
		case'M':
			Beep (600,200);
			system("cls");
			Beep (400,200);
			printf("Suas escolhas definem o seu destino.\n");
			Sleep (800);
			Beep (400,200);
			printf("O maior desafio é saber qual escolha é a correta. Isso se houver alguma.\n");
			Sleep (800);
			Beep (400,200);
			printf("\nComo jogar:\n");
			Sleep(800);
			Beep (400,200);
			printf("O jogo consiste em decisões. Você terá a oportunidade de escolher entre ações \ndiferentes que definem o rumo da história.\n");
			printf("\nPense bem antes de responder, pois CADA uma das respostas definirá seu rumo.\n");
			printf("\nPara escolher a ação pressione o número correspondente.");
			printf("\nQuando houver linhas com apenas '...' pressione qualquer tecla para continuar.");
			printf("\nFechar o executável fará com que o estado do jogo salvo se perca.");
			printf("\n\n\n\n\n\n\nPressione qualquer tecla para voltar ao menu.\n");
			getch();
			system ("cls");
			Beep (600,200);
			break;

		case'h':
		case'H':
			Beep(600,200);
			system("cls");
			printf("Digite o código: ");
			scanf("%d", &codigo);

			if (codigo==101){
				printf("\nCodigo para o checkpoint do capitulo 1 cena 1 recebido com sucesso!\n");
				savestate=1;
				pontinhos();
				getch();
				system("cls");
				break;
			}
			
			if (codigo==111){
				printf("\nCodigo para o checkpoint do capitulo 1 cena 2 recebido com sucesso!\n");
				pontinhos();
				savestate=11;
				getch();
				system("cls");
				break;
			}
			
			if (codigo==121){
				printf("\nCodigo para o checkpoint do capitulo 1 cena 3 recebido com sucesso!\n");
				savestate=12;
				pontinhos();
				getch();
				system("cls");
				break;
			}
			
			if (codigo==201){
				printf("\nCodigo para o checkpoint do capitulo 2 recebido com sucesso!\n");
				savestate=2;
				pontinhos();
				getch();
				system("cls");
				break;
			}
			
			if (codigo==301){
				printf("\nCodigo para o checkpoint do capitulo 3 recebido com sucesso!\n");
				savestate=3;
				pontinhos();
				getch();
				system("cls");
				break;
			}
			
			if (codigo==999){
				printf("\nCodigo para habilitar os bônus recebido com sucesso!\n");
				bonus=1;
				pontinhos();
				getch();
				system("cls");
				break;
			}
			
			if (codigo==1337){
				printf("\nÉ NOIX!\n");
				noix=1;
				pontinhos();
				getch();
				system("cls");
				break;
			}
			
			
			system("cls");
			break;
			
		case'b':
		case'B':
			if(bonus==1){
				Beep(600,200);
				system("cls");
				printf("Escolha quais das duas lutas você deseja ir!\n1 - Luta contra o Sujeito.\n2 - Cavar.\n3 - Mapa.\n4 - Cortar o fio.\n5 - Voltar ao menu.");
				j=0;
				while(j==0){
					escolha=getch();
					switch(escolha){
						case '1':
							system("cls");
							printf("Indo a luta contra o Sujeito!\n");
							pontinhos();
							getch();
							j=1;
							lutabonus1();
							system("cls");
							break;
							
						case '2':
							system("cls");
							printf("Indo cavar!\n");
							pontinhos();
							getch();
							j=1;
							cavar();
							system("cls");
							break;
							
						case '3':
							system("cls");
							printf("Indo ver o mapa!\n");
							pontinhos();
							getch();
							j=1;
							lanterna();
							system("cls");
							break;
							
						case '4':
							system("cls");
							printf("Indo cortar o fio!\n");
							pontinhos();
							getch();
							j=1;
							cortafio();
							system("cls");
							break;
							
						case '5':
							system("cls");
							printf("Indo para o menu.\n");
							pontinhos();
							getch();
							j=1;
							system("cls");
							break;
							
						default:
							Beep (200,200);
							printf("Comando Inválido, escolha entre 1, 2 ou 3\n");
							break;
					}
				}
			}
			
			Beep(200,200);
			system("cls");
			break;

		default:
			Beep (200,200);
			system("cls");
			break;
	}
	}
}
