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
	printf("*Voc� foi pego! Os guardas te mandaram para a solit�ria e voc� n�o vai sair de \nl� logo!*\n*E como se n�o bastasse, ainda acabaram com qualquer plano de fuga*");
	pontinhos();
	getch(NULL);
	getch();
	creditofim();
}

int cortafio(){
	system("cls");
	printf("*Voc� se depara com 4 fios dentro do gerador*\n");
	printf("\nOp��es:\n1 - Cortar o fio Branco.\n2 - Cortar o fio Amarelo.\n3 - Cortar o fio Vermelho.\n4 - Cortar o fio Azul");
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
			printf("\n*Voc� foi morto eletrocutado...*");
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
			printf("\n*Voc� foi morto eletrocutado...*");
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
			printf("\n*Voc� foi morto eletrocutado...*");
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
			printf("\n*Voc� foi morto eletrocutado...*");
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
			printf("Comando Inv�lido, escolha apenas entre 1, 2, 3 ou 4.");
			break;
	}
}
system("cls");
printf("Voc� conseguiu cortar o fio certo!\n");
pontinhos();
getch();
system("cls");
}

int lanterna(){
	int tecla;
	system("cls");
	printf("Lembre-se! A lanterna tem apenas 5 segundos de bateria, preste MUITA aten��o!\n");
	printf("Pressione 'Enter' para ver o mapa e decorar as dire��es.");
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
			printf("Comando Inv�lido, escolha apenas entre 1, 2, 3 ou 4.");
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
			printf("Comando Inv�lido, escolha apenas entre 1, 2, 3 ou 4.");
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
			printf("Comando Inv�lido, escolha apenas entre 1, 2, 3 ou 4.");
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
			printf("Comando Inv�lido, escolha apenas entre 1, 2, 3 ou 4.");
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
			printf("Comando Inv�lido, escolha apenas entre 1, 2, 3 ou 4.");
			break;
	}
	}
	printf("*Voc� conseguiu chegar no teto do pres�dio!");
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
 	printf("*Pressione 'W' para cavar. Quando a tela piscar rapidamente, significa que a \nvistoria est� vindo\nEla acontece a cada dois dias.\nTampe o buraco todos os dias com a tecla 'S' para que o guarda n�o te veja \ncavando.\n");
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
 			printf("\nN�o � necess�rio tampar o buraco agora!");
 			break;
 			
 		default:
 			Beep(200,200);
 			printf("\nComando Inv�lido, escolha entre 'W' ou 'S'");
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
 			printf("\nComando Inv�lido, escolha entre 'W' ou 'S'");
 			break;
	}
	}
	}
	system("cls");
	printf("Finalmente se passaram os 20 dias! Voc� consegue ver o outro lado!\n");
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
	printf("\nComo voc� reage?");
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
			printf("Voc� deu um soco e causou %d de dano!\n", dano);
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
			printf("Voc� se defende! E com isso se protege de %d de dano no proximo ataque que \nreceber!", bloqueio);
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
				printf("Voc� bate com toda sua f�ria! Voc� causou %d de dano!!!", dano);
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
			printf("\nComando Inv�lido, escolha entre 1, 2, ou 3.\n");
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
		printf("*O sujeito era muito forte para voc�... Sem demonstrar miseric�rdia ele te mata a sangue frio...*\n");
		pontinhos();
		getch();
		creditofim();
	}
	
	if(hp>0){
		system("cls");
		printf("*Voc� foi mais forte que o seu oponente! Parab�ns!*\n");
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
	printf("\nComo voc� reage?");
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
			printf("Voc� deu um soco e causou %d de dano!\n", dano);
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
			printf("Voc� se defende! E com isso se protege de %d de dano no proximo ataque que \nreceber!", bloqueio);
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
				printf("Voc� bate com toda sua f�ria! Voc� causou %d de dano!!!", dano);
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
			printf("\nComando Inv�lido, escolha entre 1, 2, ou 3.\n");
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
		printf("*O sujeito era muito forte para voc�...* \nSem demonstrar miseric�rdia ele te mata a sangue frio...*\n");
		pontinhos();
		getch();
		creditofim();
	}
	
	if(hp>0){
		system("cls");
		printf("*Voc� foi mais forte que o seu oponente!*\nMas isso atraiu a aten��o dos guardas...*\n");
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
	printf("Fatec Carapicu�ba - Jogos Digitais - Segundo Semestre - Manh�\n");
	Beep (300,1000);
	for(i=0; i<22; i++){
		Beep(i*25,100);
		Sleep(150);
		printf("\n");
	}
	printf("\nobrigado por jogar!\n");
	pontinhos();
	printf(" - Pressione qualquer bot�o para voltar ao menu!");
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
    printf("*Voc� se deita para dormir, e se lembra do que Morris tinha dito.*");
    Sleep(700);
    Beep (200,200);
    printf("\n*De repente voc� ouve o mesmo barulho na parede de mais cedo.*");
    Sleep(500);
    Beep(200,200);
	Beep(220,200);
	Beep(200,700);
    printf("\n*Um pequeno buraco se abre... E se torna grande em pouco tempo. Era Morris e uma esp�cie de p� improvisada.*\n");
    pontinhos();
    getch();
    Beep(200,200);
    system("cls");
	printf("DESENHO COM BURACO\n");
	Sleep(3000);
	pontinhos();
	getch();
	printf("\nOp��es:\n1 - Pedir para Morris ir embora.\n2 - O que est� fazendo aqui?! Vou chamar os guardas!\n3 - Como fez essa p�?!");
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
				printf("Voc� quer sair daqui? N�o quer?\n");
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
				printf("Morris: Se voc� continuar com essa boca aberta, eu te mato... Antes que me matem.\n");
				Sleep(700);
				Beep(300,200);
				printf("Agora escute o que tenho a dizer.\n");
				Sleep(700);
				Beep(300,200);
				printf("Voc� quer sair daqui? N�o quer?\n");
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
				printf("Morris: Em cada refei��o eu sumia com alhum talher sem que ningu�m percebesse...\n");
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
				printf("\nComando Inv�lido, escolha entre 1, 2 ou 3.");
				break;
		}
	}
 pontinhos();
 getch();
 system("cls");
 Beep(300,200);
 printf("Morris: N�o sei se j� observou, mas o seu quarto, assim como todos, existem uma pequena sa�da de ar.\n");
 Sleep(700);
 Beep(300,200);
 printf("L�gicamente esse ar, vem de alguma �rea externa da cadeia.\n");
 Sleep(700);
 Beep(300,200);
 printf("Coma a minha p�, conseguimos expandir essa pequena sa�da... Assim conseguiremos sair!\n");
 Sleep(700);
 Beep(300,200);
 printf("Tente cavar um pouco todos os dias... Precisamos de cerca de 20 dias de escava��o para passarmos pelo buraco");
 Sleep(700);
 Beep(300,200);
 printf("\nO mais importante, � que ningu�m pode desconfiar! Para isso trouxe essas folhas de jornal com tinta e verniz.");
 Sleep(700);
 Beep(300,200);
 printf("\nCom essa combina��o, voc� ir� conseguir tampar o buraco diariamente. NUNCA esque�a de tampar... Sen�o seremos pegos durante a vistoria!\n");
 pontinhos();
 getch();
 cavar();
 Beep(200,200);
 printf("\n\n*Na madrugada do 20� dia, ap�s o buraco na sa�da de ar estar pronto, Morris aparece, junto com outras de suas inven��es malucas para a fuga.*");
 Sleep(700);
 Beep(300,200);
 printf("\n\nAgora � a hora! Tome isso!");
 Sleep(700);
 Beep(200,200);
 printf("*Voc� pega um conjunto de ferramentas feitas por ele (corda, p�, lanterna e faca)*\n");
 Sleep(700);
 Beep(200,200);
 pontinhos();
 getch();
 system("cls");
 Beep(200,200);
 printf("*Com cuidado, voc� entram pelo buraco e seguem o caminho por onde percorre o ar de todo a pris�o.*\n");
 printf("*Morris tem o mapa do local. Por�m com a escurid�o do lugar, voc� ter� de usar a lanterna feita por ele para enxergar o mapa!*\n");
 printf("*A lanterna funciona por apenas 5 segundos. OLHE O MAPA COM ATEN��O! Ou poder� ser pego.\n");
 lanterna();
 system("cls");
 printf("Morris: Metade do plano foi conclu�do! Agora iremos cortar toda a energia el�trica!\n");
 Sleep(700);
 Beep(300,200);
 printf("V� at� aquele gerador e corte os fios certos!");
 cortafio();
 system("cls");
 Beep(300,200);
 printf("Morris: Isso! Agora s� precisaremos pular o muro! Use a corda!");
 Sleep(700);
 Beep(200,200);
 printf("\n*Voc� consegue pular o muro*\n");
 pontinhos();
 getch();
 system("cls");
 Beep(400,300);
 if (frankkarma<=3){
 	Beep(300,200);
 	printf("Morris: Me desculpe %s, a gente podia trabalhar muito bem junto.\n", &nome);
 	Sleep(700);
 	Beep(300,200);
 	printf("Se voc� n�o fosse t�o babaca comigo... Bem, acho que isso vai atrasar os policiais.");
 	Beep(200,200);
 	Beep(200,200);
 	Beep(200,200);
 	printf("\n\n*Frank Morris te mata violentamente sem pensar duas vezes...*");
 	printf("\n*Mais tarde a policia acha o seu cad�ver e ningu�m nunca mais ouviu falar de Frank Morris...*");
 	pontinhos();
 	getch();
 	system("cls");
 	creditofim();
 }
 
if (frankkarma>=3){
	Beep(200,200);
	printf("*Voc�s conseguiram fugir da pris�o e atravessar o mar sem nenhum arranh�o*");
	Sleep(700);
	Beep(300,200);
	printf("Morris: � %s, parece que formamos uma �tima dupla! Ha ha ha!\n", &nome);
	Sleep(700);
	Beep(300,200);
	printf("Vou at� te fazer um favor!\n");
	Sleep(700);
	Beep(300,200);
	printf("Boatos dizem que voc� foi pra pris�o, por ter matado sua esposa e seus filhos...");
	Sleep(700);
	Beep(300,200);
	printf("O que n�o faz sentido � que...\n");
	Sleep(700);
	Beep(300,200);
	pontinhos();
	Sleep(300);
	Beep(300,200);
	printf("\nSua esposa est� viva. Mas eu tenho nada a ver com isso, talvez um dia a \ngente se encontre de novo.");
	Sleep(700);
	Beep(200,200);
	printf("\n\n*Ningu�m nunca mais ouviu falar de Frank Morris...*");
	Sleep(200);
	Beep(300,200);
	pontinhos();
	getch();
	system("cls");
	Beep(200,200);
	printf("\n*Voc� consegue chegar at� S�o Francisco, onde descobre que � verdade.*\nSua mulher est� viva, por�m seus filhos todos mortos.*\nE isso n�o � um bom sinal...");
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
printf("*Voc�s conseguiram fugir da pris�o e atravessar o mar sem nenhum arranh�o*");
Sleep(700);
Beep(200,200);
printf("\n*Sem voc� perceber Morris havia sumido sem deixar rastros.*");
Sleep(700);
Beep(200,200);
printf("\n*Fazendo at� mesmo com que sua exist�ncia tenha sido duvidosa.*");
Sleep(700);
Beep(200,200);
printf("\n*Voc� consegue fugir at� S�o Francisco, aonde vive anonimamente.*\n");
Sleep(700);
Beep(200,200);
printf("Por�m sem nunca saber toda a verdade...");
Sleep(700);
Beep(200,200);
printf("*Ser� que haviam escolhas que revelassem mais sobre esse mist�rio?*\n");
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
							printf("\nComando Inv�lido, escolha entre S ou N.");
							break;
					}
					}
					break;

			case 'n':
			case 'N':
				printf("Realmente n�o quer salvar? S/N\n");
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
							printf("\nComando Inv�lido, escolha entre S ou N.");
							break;
					}
				}
				break;

			default:
				Beep (200,200);
				printf("\nComando Inv�lido, escolha entre S ou N.");
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
	printf("*Depois de descobrir aonde est�, a quest�o agora � outra. Por que estar aqui?*\n");
	Sleep(700);
	Beep (200,200);
	printf("*Voc� decide dormir e espera at� o guarda voltar, provavelmente para a pr�xima refei��o do dia...\n");
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
	printf("\nGuarda: Ei, se prepare para o jantar, v� para a fila.");
	Sleep(700);
	Beep(200,200);
	printf("\n\n*O refeit�rio � o seu cen�rio mais uma vez. Morris chega com um grande sorriso, parece animado.*");
	Sleep(700);
	Beep(300,200);
	printf("\n\nMorris: %s voc� vai ficar feliz com o que vou te dizer!", &nome);
	printf("\nOp��o:\n");
	printf("1 - N�o quero ouvir! Meu �nico interesse � saber o por que de estar aqui!\n2 - Diga sem enrola��es, j� estou de saco cheio de tudo isso...\n");
	i=0;
	while(i==0){
		escolha=getch();
		switch(escolha){
			case '1':
				frankkarma=frankkarma-1;
				system("cls");
				Beep(400,200);
				printf("Morris: Como voc� n�o sabe? � maluco? Bom, os guardas podem te ajudar a saber. S� n�o garanto que ir�o ser amistosos.");
				printf("\n\n*Voc� termina sua refei��o e caminha para a fila, quando avista um guarda. Sem mais delongas decide perguntar...\n");
				printf("\nQuero saber por que estou aqui!");
				printf("\n\nGuarda: Volte para a fila!\n");
				printf("\nOp��es:\n1 - Voltar para a fila.\n2 - Insistir por informa��es.\n");
				j=0;
				while(j==0){
					escolha=getch();
					switch(escolha){
						case '1':
							system("cls");
							Beep(400,200);
							printf("*Faltam informa��es e seu pesadelo parece que n�o ir� terminar t�o cedo. O jeito � dormir*\n");
							Sleep(700);
							Beep(200,200);
							printf("\nZzZzZz");
							Sleep(700);
							Beep (400,200);
							printf("\n*No meio da noite, o barulho que voc� ouviu mais cedo volta a aparecer.\n");
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
							printf("\n*Seu vizinho de cela consegue abrir um buraco pela parede. Mas suas inten��es n�o parecem ser boas...*\n");
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
							printf("*Morris sem dizer uma palavra te mata... Da pr�xima vez, tenha mais cuidado ao falar com ele...\n");
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
							printf("\nVoc� � levado at� o diretor do pres�dio.");
							Sleep(700);
							Beep(500,200);
							printf("Diretor: Voc� quer saber o motivo da sua pris�o? J� era esperado.\nNosso m�dico disse que talvez perderia a mem�ria.../nE pelo visto isso realmente aconteceu.\n");
							Sleep(700);
							Beep(500,200);
							printf("Ou�a o que tenho a te dizer...\n");
							Sleep(700);
							Beep(500,200);
							printf("Voc� matou sua mulher e seus filhos. Simples assim.");
							Sleep(700);
							Beep(500,200);
							printf("Est� condenado a pris�o perp�tua sem direito a condicional...");
							Sleep(700);
							Beep(500,200);
							printf(" Podem lev�-lo");
							Sleep(700);
							Beep(200,200);
							printf("\n\n*Voc� parecia consumido por culpa, voc� amava incondicionalmente sua esposa e seus filhos...*\n");
							Sleep(700);
							Beep(400,200);
							printf("\n\nA �nica coisa que eu posso fazer � cumprir minha pena... ");
							Sleep(700);
							Beep(400,200);
							printf("E-");
							Sleep(500);
							Beep(400,200);
							printf("eu mere�o isso...");
							Sleep(700);
							Beep(200,200);
							printf("\n\n*Assim voc� viveu at� os �ltimos momentos de sua vida, velho, consumido pela culpa...*\n");
							Sleep(700);
							Beep(200,200);
							printf("*Mas ser� que voc� descobriu toda a verdade?\n");
							pontinhos();
							getch();
							Beep(400,200);
							i=1;
							j=1;
							creditofim();
							break;
							
						default:
							Beep(200,200);
							printf("\nComando Inv�lido, escolha entre 1 ou 2.");
							break;
					}
				}
				i=1;
				break;
				
			case '2':
				frankkarma=frankkarma+1;
				system("cls");
				Beep(400,200);
				printf("Morris: Finalmente meu plano de escape vai funcionar. E voc� vai junto...\n");
				Sleep(700);
				Beep(300,200);
				printf("Espere a madrugada e lhe direi!");
				Sleep(700);
				Beep(400,200);
				printf("\n\nMadrugada?! Mas n�o temos refei��es durante a madrugada...");
				Sleep(700);
				Beep(300,200);
				printf("\n\nMorris: Espere e ver�...\n");
				Sleep(700);
				Beep(200,200);
				i=1;
				break;
			
			default:
				Beep(200,200);
				printf("\nComando Inv�lido, escolha entre 1 ou 2.");
				break;
		}
	}
	printf("\n\n*Depois disso voc� volta ao seu quarto e decide escrever em sua agenda.*");
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
							printf("\nComando Inv�lido, escolha entre S ou N.");
							break;
					}
					}
					break;

			case 'n':
			case 'N':
				printf("Realmente n�o quer salvar? S/N\n");
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
							printf("\nComando Inv�lido, escolha entre S ou N.");
							break;
					}
				}
				break;

			default:
				Beep (200,200);
				printf("\nComando Inv�lido, escolha entre S ou N.");
				break;
			}
		}
	}
}

void capitulo12(){
	system("cls");
	Beep(400,200);
	printf("O que � isso tudo isso que est� acontecendo?");
	Sleep(700);
	printf("\n\n*Voc� come�a a ter flashes em sua cabe�a.\nLembra de sua familia, filhos e principalmente de sua mulher... At� que voc� acaba dormindo novamente*\n");
	Sleep(700);
	Beep(400,200);
	printf("\nGuarda: Ei, voc� s� sabe dormir? Vamos, acorde, hora de sair!\n");
	printf("Op��es:\n");
	printf("1 - Sair.\n2 - Ficar no quarto.\n3 - Aonde quer me levar.");
	i=0;
	while (i==0){
		escolha=getch();
		switch(escolha){
			case '1':
				Beep (400,200);
				system("cls");
				printf("*Voc� se levanta e segue o guarda*\n");
				i=1;
				pontinhos();
				getch();
				break;

			case '2':
				Beep (400,200);
				system("cls");
				guardakarma=guardakarma-1;
				printf("Guarda: N�o tenho o dia inteiro, ser� que vou ter que te dar uma li��o?");
				printf("\n\n*Voc� se sente intimidado e resolve sair.*");
				i=1;
				pontinhos();
				getch();
				break;
				
			case '3':
				Beep (400,200);
				system("cls");
				printf("Guarda: Voc� tem direito a um banho de sol por dia. Aproveite para conhecer seus amigos, e n�o arrume encrenca.");
				printf("\n\n*Voc� acena com a cabe�a e aceita sair do quarto*");
				i=1;
				pontinhos();
				getch();
				break;

			default:
				Beep (200,200);
				printf("\nComando Inv�lido, escolha entre 1, 2 ou 3.");
				break;
		}	
	}
	Beep(200,400);
	printf("\n*Voc� se encontra em uma lugar grande a c�u aberto. O p�tio, onde todas as pessoas daquela fila misteriosa se encontram.*");
	Sleep(700);
	Beep(200,400);
	printf("\n*Talvez essa seja uma �tima oportunidade de saber as coisas*");
	if(frank==1){
		if (frankkarma<=2){
			Beep(200,400);
			printf("\n\nMorris: Voc� de novo... Dessa vez podemos conversar mais. Ou vai me mandar calar a boca de novo?");
			Sleep(700);
		}
		printf("\n\nMorris: Voc� de novo... Dessa vez podemos conversar mais.");
			Beep(200,400);
			Sleep(700);
	}
	
	if(frank==0){
		Beep(200,400);
		printf("\n\nDesconhecido: Fiquei sabendo que fez besteira e por isso n�o foi tomar um caf�zinho com a gente.\n");
		printf("Ali�s, meu nome � Morris, Frank Morris.");
		Sleep(700);
	}
	
	printf("\nVenha, quero te conhecer melhor.");
	printf("\nOp��es:\n");
	printf("1 - Ir.\n2 - N�o ir.");
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
				printf("\nMorris: Bem, tenho tr�s coisas a te dizer:\n");
				Sleep(700);
				Beep(300,200);
				printf("Primeiramente: Nunca escute o que os outros dizem sobre mim.\n");
				Sleep(700);
				Beep(300,200);
				printf("Segundo: Assim como voc�, quero sair daqui.\n");
				Sleep(700);
				Beep(300,200);
				printf("Terceiro: Nunca brigue com algu�m.");
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
				printf("\n*Voc� decide n�o ir com Morris mas sim andar pelo p�tio.*");
				pontinhos();
				getch();			
				i=1;
				break;
			
			default:
				Beep (200,200);
				printf("\nComando Inv�lido, escolha entre 1 ou 2.");
				break;
		}
	}
	
	printf("\n\n*Logo ap�s chega um sujeiro mal encarado querendo tirar onda*");
	printf("\n\nSujeito: Ei! C� ta achando que ta em uma aventura pirata?!\n");
	printf("Fica a�, andando de um lado por outro?");
	if (escolha==1){
		Beep(200,200);
		printf("\n\n*Voc� resolve escutar os conselho de Morris e evita uma briga.*");
		Sleep(700);
		Beep(300,200);
		printf("\n\nMorris: Boa, brigar aqui vai trazer no m�ximo uma cicatriz e um bom tempo na enfermaria...");
		Sleep(700);
		Beep(300,200);
		printf("\nEnt�o, aqui � Alcatraz! Bem vindo ao inferno...");
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
		printf("\n\nOp��es:\n");
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
					printf("*O sujeito viu que voc� n�o queria nada e s� voltou para o seu grupo dando risada*");
					Sleep(700);
					Beep(400,200);
					printf("\n*Ent�o Morris vendo essa atitude se aproxima novamente*");
					Sleep(700);
					Beep(400,200);
					printf("\n\nMorris: Boa, brigar aqui vai trazer no m�ximo uma cicatriz e um bom tempo na enfermaria...");
					Sleep(700);
					Beep(300,200);
					printf("\nMorris: Bem, tenho tr�s coisas a te dizer:\n");
					Sleep(700);
					Beep(300,200);
					printf("Primeiramente: Nunca escute o que os outros dizem sobre mim.\n");
					Sleep(700);
					Beep(300,200);
					printf("Segundo: Assim como voc�, quero sair daqui.\n");
					Sleep(700);
					Beep(300,200);
					printf("Terceiro: Nunca brigue com algu�m.\n");
					Sleep(700);
					printf("\nEnt�o, aqui � Alcatraz! Bem vindo ao inferno...");
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
					printf("*Voc� xinga e provoca o sujeito, fazendo com que ele venha com tudo para cima de voc� buscando uma luta.\n");
					pontinhos();
					getch();
					luta=1;
					lutasujeito=1;
					luta1();
					system("cls");
					i=1;
					printf("*Voc� ganhou a luta, mas n�o � de se comemorar. Seu destino � a solit�ria por alguns dias. Aceite isso...*");
					pontinhos();
					getch();
					printf("\n*Depois de cumprir o tempo na solit�ria, voc� volta para o seu quarto, ou melhor, sua cela.*");
					pontinhos();
					getch();
					capitulo2;
					break;
					
				default:
					Beep (200,200);
					printf("\nComando Inv�lido, escolha entre 1 ou 2.");
					break;
			}
		}
	}
	
	printf("Voc� volta para o quarto, ou melhor, a cela. E resolve escrever todos acontecimentos do dia na agenda.\n");
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
							printf("\nComando Inv�lido, escolha entre S ou N.");
							break;
					}
					}
					break;

			case 'n':
			case 'N':
				printf("Realmente n�o quer salvar? S/N\n");
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
							printf("\nComando Inv�lido, escolha entre S ou N.");
							break;
					}
				}
				break;

			default:
				Beep (200,200);
				printf("\nComando Inv�lido, escolha entre S ou N.");
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
	printf("Guarda: Todos para a fila!\nO caf� ser� servido. 30 minutos para comer.");
	Sleep(500);
	Beep(200,200);
	printf("\n\n*A porta se abre e voc� percebe que est� de manh�, voc� sai de seu quarto e se  depara com uma fila extensa de pessoas se preparando para o que seria o caf� da manh� naquele lugar estranho*");
	Sleep(500);
	pontinhos();
	Beep(400,200);
	printf("\n\nO que � isso? Que lugar � este? Quem s�o eles?!");
	Sleep(500);
	Beep(200,200);
	Sleep(500);
	printf("\n\n*Voc� ent�o levanta da cama e vai para a porta*");
	printf("\n\nOp��es:\n");
	printf("1 - Tentar encontrar uma sa�da e fugir.\n2 - Ir para a fila.\n3 - Perguntar aonde est�.");
	i=0;
	while(i==0){
		escolha=getch();
		switch(escolha){
			case '1':
				Beep (400,200);
				system("cls");
				if (guardakarma<=-3){
					Beep(400,200);
					printf("*Voc� tenta correr e fugir, mas sem sucesso.*\n\n");
					Beep(500,700);
					printf("Guarda: AONDE VOC� PENSA QUE EST� INDO? J� ESTOU CANSADO DESSA SUA ATITUDE!\nGUARDAS, MANDEM ELE PARA A SOLIT�RIA!");
					Sleep(1000);
					Beep(400,200);
					printf("\n\nSolit�ria? Ent�o eu estou em uma pri...");
					Sleep(500);
					printf("*Antes de terminar a frase, o guarda te nocauteia.*");
					Beep(200,200);
					Beep(200,700);
					Sleep(600);
					pontinhos();
					getch();
					system("cls");
					Beep(200,200);
					printf("*A sua vinda para esse lugar foi um mist�rio*\n*Tamanha confus�o em sua mente foi suficiente para te levar a loucura*");
					Sleep(600);
					Beep(200,200);
					printf("\n\n*Voc� foi enviado � enfermaria e foi diagnosticado com graves problemas psiqui�tricos.*\n\n*Devido a isso voc� foi levado a um manic�mio onde passou o resto de sua vida*");
					Sleep(600);
					Beep(200,200);
					printf("\n\n*Tudo ainda se permaneceu um mist�rio, aonde voc� estava? Como foi parar l�?*");
					pontinhos();
					getch();
					system("cls");
					i=1;
					creditofim();
					break;
				}

				guardakarma=guardakarma-3;
				printf("*Voc� tenta correr e fugir, mas sem sucesso. Al�m disso, fica sem o caf�. E � obrigado a voltar ao seu quarto.*\n");
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
				printf("Guarda: Isso n�o s�o horas para perguntas idiotas, v� logo para a fila. Estou de olho em voc�. Ande logo para a fila!\n");
				pontinhos();
				getch();
				i=1;
				break;

			default:
				Beep(200,200);
				printf("\nComando inv�lido. Escolha entre 1, 2 ou 3.");
				break;
		}
		}

	switch(escolha){
		case '2':
		case '3':
			frank=1;
			bilhete=1;
			Beep(400,200);
			printf("\n\n*Enquanto caminha, voc� repara no lugar e nas pessoas.\n");
			Sleep(600);
			Beep(400,200);
			printf("*Pelo corredor voc� observa que h� quartos iguais ao seu em ambos os lados.*\n");
			Sleep(600);
			Beep(400,200);
			printf("*O corredor chega ao fim com uma grande porta e o leva para um espa�o maior e   mais claro.*\n");
			Sleep(400);
			pontinhos();
			getch();
			Beep(400,200);
			printf("\n*Ao visto era o refeit�rio onde tomaria o suposto caf� da manh�.*\n");
			Sleep(600);
			Beep(400,200);
			printf("*Voc� se senta ao lado do que seria seu vizinho de quarto, que n�o para de te   observar.*\n");
			Sleep(600);
			pontinhos();
			getch();
			Beep(300,200);
			printf("\nVizinho de quarto: Novo por aqui, n�o �?");
			Sleep(600);
			Beep(300,200);
			printf(" Sou Morris... Mas me chamam de Frank.");
			Sleep(600);
			Beep(300,200);
			printf("\nPor que est� aqui?");
			Sleep(600);
			Beep(300,200);
			printf("\nN�o sou do tipo que faz amigos, mas gostei de voc�.\n");
			printf("\nOp��es:\n");
			printf("1 - Cale a boca, n�o falo com estranhos.\n");
			printf("2 - Que lugar � este?\n");
			printf("3 - Quem � voc�?");
			i=0;
			while(i==0){
				escolha=getch();
				switch(escolha){
					case '1':
						system("cls");
						frankkarma=frankkarma-2;
						Beep(400,200);
						printf("Frank: Tudo bem, voc� n�o me faz falta... Seja bem vindo.");
						i=1;
						Sleep(600);
						Beep(200,200);
						printf("\n\n*Depois de tomar seu caf�, voc� levanta e volta para a fila que leva ao quarto.*");
						pontinhos();
						getch();
						break;

					case '2':
						system("cls");
						Beep(300,200);
						printf("Frank: Isso eu me pergunto at� hoje.");
						Sleep(700);
						Beep(200,200);
						printf("\n\n*Frank volta para o quarto com uma risada no canto da boca.*");
						Sleep(600);
						Beep(200,200);
						printf("\n\n*Depois de tomar seu caf�, voc� levanta e volta para a fila que leva ao quarto.*");
						i=1;
						pontinhos();
						getch();
						break;

					case '3':
						system("cls");
						Beep(300,200);
						printf("Frank: Algu�m em que voc� pode confiar.");
						Sleep(700);
						Beep(300,200);
						printf(" Voc� tem vontade de sair daqui?");
						printf("\n\nOp��es:");
						printf("\n1 - Sim, como eu fa�o?\n2 - *Terminar o caf� e voltar para fila que leva ao quarto*");
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
									printf(" Se eu soubesse j� n�o estaria aqui.");
									Sleep(600);
									Beep(300,200);
									printf("\nTenho alguns plano, mas n�o sei se devo te contar.");
									Sleep(600);
									Beep(200,200);
									printf("\n\n*Frank volta para o quarto com uma risada no canto da boca.*\n");
									Sleep(600);
									Beep(200,200);
									printf("\n\n*Depois de tomar seu caf�, voc� levanta e volta para a fila que leva ao quarto.*");
									i=1;
									j=1;
									pontinhos();
									getch();
									break;

								case '2':
									frankkarma=frankkarma-1;
									Beep(400,200);
									system("cls");
									printf("*Voc� ignora a proposta e volta para a fila que leva ao quarto.*\n");
									i=1;
									j=1;
									pontinhos();
									getch();
									break;

								default:
									Beep(200,200);
									printf("\nComando inv�lido. Escolha entre 1 ou 2.");
									break;
							}
						}
						break;

					default:
						Beep(200,200);
						printf("\nComando inv�lido. Escolha entre 1, 2 ou 3.");
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
	printf("*Voc� � trancado novamente no seu quarto.*\n");
	if (livro==1){
		printf("*Voc� volta a olhar a agenda e anota todos acontecimentos recentes.*");
		savecap12();
	}

	if (livro==0){
		printf("*Voc� nota que h� uma agenda e uma lumin�ria em cima da mesa*\n");
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
			printf("*Voc� olha a agenda e resolve anotar todos acontecimentos recentes.*\n");
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
	printf("*Voc� parece estar em um sonho...*\n");
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
	printf(" %s! R�pido!\n", &sobrenome);
	Sleep(1000);

	printf("\nOp��es:\n");
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
			printf("*Voc� sente um chute... E abre os olhos...*\n");
			pontinhos();
			guardakarma=guardakarma-1;
			getch();
			i=1;
			break;

		default:
			Beep(200,200);
			printf("\nComando inv�lido. Escolha entre 1 ou 2.");
			break;
	}
	}

	Beep(400,200);
	printf("\nVoc� se depara com a seguinte cena:\n");
	Sleep(1500);

	printcela();

	Beep(200,600);
	Sleep(2000);
	pontinhos();
	getch();
	printf("\nOp��es:");
	printf("\n1 - Seguir a voz vindo da porta.\n");
	printf("2 - Se questionar aonde est�.\n");
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
				printf("Voz misteriosa: Venha logo %s! N�o tenho a noite toda!\n", &sobrenome);
				i=1;
				break;

			case '2':
				guardakarma=guardakarma-1;
				system("cls");
				printf("Voz misteriosa: O que voc� est� falando? Voc� sabe muito bem aonde est�!\n\n");
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
				printf("\nComando inv�lido. Escolha entre 1 ou 2.");
				break;
		}
	}
	Beep(400,200);
	printf("Voz misteriosa: Chega de brincadeira, ainda tenho outras vistorias para fazer!\n");
	Sleep(1200);
	Beep(200,200);
	printf("\n*O que parece ser um guarda come�a a revistar todo o lugar.*\n");
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
	printf("O que est� acontecendo? Aonde estou?!\n");
	printf("\nOp��es:\n");
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
				printf("*Voc� come�a a vasculhar o local*\n");
				pontinhos();
				getch();
				printf("\n*Voc� achou uma mesa com uma lumin�ria e ao lado uma agenda*\n");
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
				printf("*Voc� ent�o resolve anotar os acontecimentos recente nessa agenda.*\n");
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
									printf("\nComando Inv�lido, escolha entre S ou N.");
									break;
								}
							}
							break;

						case 'n':
						case 'N':
							printf("Realmente n�o quer salvar? S/N\n");
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
										printf("\nComando Inv�lido, escolha entre S ou N.");
										break;
								}
							}
							break;

						default:
							Beep (200,200);
							printf("\nComando Inv�lido, escolha entre S ou N.");
							break;
						}
					}
				}
				break;

			case '3':
				Beep(400,200);
				system("cls");
				printf("*Voc� tenta abrir a porta batendo desesperadamente*\n");
				Beep(200,200);
				Sleep(400);
				Beep(400,200);
				Sleep(400);
				Beep(400,200);
				Beep(400,200);
				Beep(400,200);
				Sleep(400);
				Beep(600,200);
				printf("\nGuarda: PARE COM ISSO AGORA E V� DORMIR!\n");
				Beep(400,200);
				printf("\n*Voc� com medo resolve obedecer e vai dormir*\n");
				guardakarma=guardakarma-1;
				i=1;
				pontinhos();
				getch();
				system("cls");
				capitulo11();
				break;

			default:
				Beep(200,200);
				printf("\nComando inv�lido. Escolha entre 1, 2 ou 3.");
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
	printf("\nSua idade: (Apenas n�meros.)\n\n > ");
	fgets (idade, 10, stdin);
	if ((strlen(idade)>0) && (idade[strlen (idade)-1]=='\n')){
		idade[strlen(idade)-1]='\0';
	}

	Beep(300,200);
	printf("\nSua altura: (Em cent�metros, apenas n�meros.)\n\n > ");
	fgets (altura, 10, stdin);
	if ((strlen(altura)>0) && (altura[strlen (altura)-1]=='\n')){
		altura[strlen(altura)-1]='\0';
	}

	Beep(300,200);
	printf("\nPeso: (Em quilos, apenas n�meros.)\n\n > ");
	fgets (peso, 10, stdin);
	if ((strlen(peso)>0) && (peso[strlen (peso)-1]=='\n')){
		peso[strlen(peso)-1]='\0';
	}

	Beep(300,200);
	printf("\nPa�s de origem:\n\n > ");
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

    printf("             |   | Pa�s de origem: %s", &pais);
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
	printf("Todos os dados est�o corretos? S/N\n");
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
				printf("\nComando Inv�lido, escolha entre S ou N.");
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
			printf("\nComando Inv�lido, escolha entre S ou N.");
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
    printf("                               >>> � NOIX <<<");
	}
	if (noix!=1){
	printf("                     >>> LUTE CONTRA SUAS ESCOLHAS <<<");
	}
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n\n", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("                  Pressione 'N' para come�ar um Novo Jogo.\n");
	printf("                       Pressione 'C' para Continuar.\n");
	printf("                      Pressione 'M' para ver o Manual.\n");
	printf("                     Pressione 'O' para ver os Cr�ditos.\n");
	printf("                   Pressione 'H' para ir � tela de C�digos.\n");
	if (bonus==1){
	printf("                          Pressione 'B' para os B�nus!\n");
	}
    printf("\n\n\n� 2016 FullHumilda. Todos os direitos reservados. v1.0.\n");

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
					printf("\nComando Inv�lido, escolha entre S ou N.");
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
			printf("Fatec Carapicu�ba - Jogos Digitais - Segundo Semestre - Manh�\n");
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
			printf("O maior desafio � saber qual escolha � a correta. Isso se houver alguma.\n");
			Sleep (800);
			Beep (400,200);
			printf("\nComo jogar:\n");
			Sleep(800);
			Beep (400,200);
			printf("O jogo consiste em decis�es. Voc� ter� a oportunidade de escolher entre a��es \ndiferentes que definem o rumo da hist�ria.\n");
			printf("\nPense bem antes de responder, pois CADA uma das respostas definir� seu rumo.\n");
			printf("\nPara escolher a a��o pressione o n�mero correspondente.");
			printf("\nQuando houver linhas com apenas '...' pressione qualquer tecla para continuar.");
			printf("\nFechar o execut�vel far� com que o estado do jogo salvo se perca.");
			printf("\n\n\n\n\n\n\nPressione qualquer tecla para voltar ao menu.\n");
			getch();
			system ("cls");
			Beep (600,200);
			break;

		case'h':
		case'H':
			Beep(600,200);
			system("cls");
			printf("Digite o c�digo: ");
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
				printf("\nCodigo para habilitar os b�nus recebido com sucesso!\n");
				bonus=1;
				pontinhos();
				getch();
				system("cls");
				break;
			}
			
			if (codigo==1337){
				printf("\n� NOIX!\n");
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
				printf("Escolha quais das duas lutas voc� deseja ir!\n1 - Luta contra o Sujeito.\n2 - Cavar.\n3 - Mapa.\n4 - Cortar o fio.\n5 - Voltar ao menu.");
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
							printf("Comando Inv�lido, escolha entre 1, 2 ou 3\n");
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
