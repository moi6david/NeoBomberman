#include "c:/MaterialCurso/shell.cpp"
#include <stdlib.h>
Window W("prueba",900,535);
int** Fuego1(int **map,int coory1,int coorx1);
int** Fuego1(int **map,int coory1,int coorx1){
	if(coory1<8){
		if(map[coory1+1][coorx1]<13&&map[coory1+1][coorx1]>8)
			map[coory1+1][coorx1]=map[coory1+1][coorx1]+8;
		else if(map[coory1+1][coorx1]==2)map[coory1+1][coorx1]=21;
		else if(map[coory1+1][coorx1]!=0&&map[coory1+1][coorx1]!=3)map[coory1+1][coorx1]=5;	
	}
	if(coorx1<12){
		if(map[coory1][coorx1+1]>8&&map[coory1][coorx1+1]<13)
			map[coory1][coorx1+1]=map[coory1][coorx1+1]+8;
		else if(map[coory1][coorx1+1]==2)map[coory1][coorx1+1]=21;
		else if(map[coory1][coorx1+1]!=0&&map[coory1][coorx1+1]!=3)map[coory1][coorx1+1]=6;
	}
	if(coory1>0){
		if(map[coory1-1][coorx1]<13&&map[coory1-1][coorx1]>8)
			map[coory1-1][coorx1]=map[coory1-1][coorx1]+8;
		else if(map[coory1-1][coorx1]==2)map[coory1-1][coorx1]=21;
		else if(map[coory1-1][coorx1]!=0&&map[coory1-1][coorx1]!=3)map[coory1-1][coorx1]=7;
	}
	if(coorx1>0){
		if(map[coory1][coorx1-1]<13&&map[coory1][coorx1-1]>8)
			map[coory1][coorx1-1]=map[coory1][coorx1-1]+8;
		else if(map[coory1][coorx1-1]==2)map[coory1][coorx1-1]=21;
		else if(map[coory1][coorx1-1]!=0&&map[coory1][coorx1-1]!=3)map[coory1][coorx1-1]=8;
	}
	return map;
}
int** Fuego2(int **map,int coory1,int coorx1);
int** Fuego2(int **map,int coory1,int coorx1){
	int ab,ar,der,izq;
	ab=ar=der=izq=0;
	if(coory1<8){
		if(map[coory1+1][coorx1]<13&&map[coory1+1][coorx1]>8){
			map[coory1+1][coorx1]=map[coory1+1][coorx1]+8;
		}
		else if(map[coory1+1][coorx1]==2){
			map[coory1+1][coorx1]=21;
		}
		else if(map[coory1+1][coorx1]!=0&&map[coory1+1][coorx1]!=3){
			map[coory1+1][coorx1]=5;
			ab=1;	
		}
	}
	if(coorx1<12){
		if(map[coory1][coorx1+1]>8&&map[coory1][coorx1+1]<13)
			map[coory1][coorx1+1]=map[coory1][coorx1+1]+8;
		else if(map[coory1][coorx1+1]==2)map[coory1][coorx1+1]=21;
		else if(map[coory1][coorx1+1]!=0&&map[coory1][coorx1+1]!=3){
			der=1;
			map[coory1][coorx1+1]=6;
		}
	}
	if(coory1>0){
		if(map[coory1-1][coorx1]<13&&map[coory1-1][coorx1]>8)
			map[coory1-1][coorx1]=map[coory1-1][coorx1]+8;
		else if(map[coory1-1][coorx1]==2)map[coory1-1][coorx1]=21;
		else if(map[coory1-1][coorx1]!=0&&map[coory1-1][coorx1]!=3){
			map[coory1-1][coorx1]=7;
			ar=1;
		}
	}
	if(coorx1>0){
		if(map[coory1][coorx1-1]<13&&map[coory1][coorx1-1]>8)
			map[coory1][coorx1-1]=map[coory1][coorx1-1]+8;
		else if(map[coory1][coorx1-1]==2)map[coory1][coorx1-1]=21;
		else if(map[coory1][coorx1-1]!=0&&map[coory1][coorx1-1]!=3){
			map[coory1][coorx1-1]=8;
			izq=1;
		}
	}
	if(coory1<7&&map[coory1+1][coorx1]==5&&ab==1){
		if(map[coory1+2][coorx1]<13&&map[coory1+2][coorx1]>8)
			map[coory1+2][coorx1]=map[coory1+2][coorx1]+8;
		else if(map[coory1+2][coorx1]==2)map[coory1+2][coorx1]=21;
		else if(map[coory1+2][coorx1]!=0)map[coory1+2][coorx1]=5;	
	}
	if(coorx1<11&&map[coory1][coorx1+1]==6&&der==1){
		if(map[coory1][coorx1+2]>8&&map[coory1][coorx1+2]<13)
			map[coory1][coorx1+2]=map[coory1][coorx1+2]+8;
		else if(map[coory1][coorx1+2]==2)map[coory1][coorx1+2]=21;
		else if(map[coory1][coorx1+2]!=0)map[coory1][coorx1+2]=6;
	}
	if(coory1>1&&map[coory1-1][coorx1]==7&&ar==1){
		if(map[coory1-2][coorx1]<13&&map[coory1-2][coorx1]>8)
			map[coory1-2][coorx1]=map[coory1-2][coorx1]+8;
		else if(map[coory1-2][coorx1]==2)map[coory1-2][coorx1]=21;
		else if(map[coory1-2][coorx1]!=0)map[coory1-2][coorx1]=7;
	}
	if(coorx1>1&&map[coory1][coorx1-1]==8&&izq==1){
		if(map[coory1][coorx1-2]<13&&map[coory1][coorx1-2]>8)
			map[coory1][coorx1-2]=map[coory1][coorx1-2]+8;
		else if(map[coory1][coorx1-2]==2)map[coory1][coorx1-2]=21;
		else if(map[coory1][coorx1-2]>0)map[coory1][coorx1-2]=8;
	}
	return map;
}
int** Fuego3(int **map,int coory1,int coorx1);
int** Fuego3(int **map,int coory1,int coorx1){
	int ab,ab1,ar,ar1,der,der1,izq,izq1;
	ab=ar=der=izq=0;
	ab1=ar1=der1=izq1=0;
	if(coory1<8){
		if(map[coory1+1][coorx1]<13&&map[coory1+1][coorx1]>8)
			map[coory1+1][coorx1]=map[coory1+1][coorx1]+8;
		else if(map[coory1+1][coorx1]==2)map[coory1+1][coorx1]=21;
		else if(map[coory1+1][coorx1]!=0&&map[coory1+1][coorx1]!=3){
			map[coory1+1][coorx1]=5;
			ab=1;	
		}
	}
	if(coorx1<12){
		if(map[coory1][coorx1+1]>8&&map[coory1][coorx1+1]<13)
			map[coory1][coorx1+1]=map[coory1][coorx1+1]+8;
		else if(map[coory1][coorx1+1]==2)map[coory1][coorx1+1]=21;
		else if(map[coory1][coorx1+1]!=0&&map[coory1][coorx1+1]!=3){
			map[coory1][coorx1+1]=6;
			der=1;
		}
	}
	if(coory1>0){
		if(map[coory1-1][coorx1]<13&&map[coory1-1][coorx1]>8)
			map[coory1-1][coorx1]=map[coory1-1][coorx1]+8;
		else if(map[coory1-1][coorx1]==2)map[coory1-1][coorx1]=21;
		else if(map[coory1-1][coorx1]!=0&&map[coory1-1][coorx1]!=3){
			map[coory1-1][coorx1]=7;
			ar=1;
		}
	}
	if(coorx1>0){
		if(map[coory1][coorx1-1]<13&&map[coory1][coorx1-1]>8)
			map[coory1][coorx1-1]=map[coory1][coorx1-1]+8;
		else if(map[coory1][coorx1-1]==2)map[coory1][coorx1-1]=21;
		else if(map[coory1][coorx1-1]!=0&&map[coory1][coorx1-1]!=3){
			map[coory1][coorx1-1]=8;
			izq=1;
		}
	}
	if(coory1<7&&map[coory1+1][coorx1]==5&&ab==1){
		if(map[coory1+2][coorx1]<13&&map[coory1+2][coorx1]>8)
			map[coory1+2][coorx1]=map[coory1+2][coorx1]+8;
		else if(map[coory1+2][coorx1]==2)map[coory1+2][coorx1]=21;
		else if(map[coory1+2][coorx1]!=0&&map[coory1+2][coorx1]!=3){
			ab1=1;
			map[coory1+2][coorx1]=5;
		}
	}
	if(coorx1<11&&map[coory1][coorx1+1]==6&&der==1){
		if(map[coory1][coorx1+2]>8&&map[coory1][coorx1+2]<13)
			map[coory1][coorx1+2]=map[coory1][coorx1+2]+8;
		else if(map[coory1][coorx1+2]==2)map[coory1][coorx1+2]=21;
		else if(map[coory1][coorx1+2]!=0&&map[coory1][coorx1+2]!=3){
			map[coory1][coorx1+2]=6;
			der1=1;
		}
	}
	if(coory1>1&&map[coory1-1][coorx1]==7&&ar==1){
		if(map[coory1-2][coorx1]<13&&map[coory1-2][coorx1]>8)
			map[coory1-2][coorx1]=map[coory1-2][coorx1]+8;
		else if(map[coory1-2][coorx1]==2)map[coory1-2][coorx1]=21;
		else if(map[coory1-2][coorx1]!=0&&map[coory1-2][coorx1]!=3){
			map[coory1-2][coorx1]=7;
			ar1=1;
		}
	}
	if(coorx1>1&&map[coory1][coorx1-1]==8&&izq==1){
		if(map[coory1][coorx1-2]<13&&map[coory1][coorx1-2]>8)
			map[coory1][coorx1-2]=map[coory1][coorx1-2]+8;
		else if(map[coory1][coorx1-2]==2)map[coory1][coorx1-2]=21;
		else if(map[coory1][coorx1-2]!=0&&map[coory1][coorx1-2]!=3){
			map[coory1][coorx1-2]=8;
			izq1=1;
		}
	}
	if(coory1<6&&map[coory1+2][coorx1]==5&&ab1==1){
		if(map[coory1+3][coorx1]<13&&map[coory1+3][coorx1]>8)
			map[coory1+3][coorx1]=map[coory1+3][coorx1]+8;
		else if(map[coory1+3][coorx1]==2)map[coory1+3][coorx1]=21;
		else if(map[coory1+3][coorx1]!=0&&map[coory1+3][coorx1]!=3){
			map[coory1+3][coorx1]=5;	
		}
	}
	if(coorx1<10&&map[coory1][coorx1+2]==6&&der1==1){
		if(map[coory1][coorx1+3]>8&&map[coory1][coorx1+3]<13)
			map[coory1][coorx1+3]=map[coory1][coorx1+3]+8;
		else if(map[coory1][coorx1+3]==2)map[coory1][coorx1+3]=21;
		else if(map[coory1][coorx1+3]!=0&&map[coory1][coorx1+3]!=3)
		map[coory1][coorx1+3]=6;
	}
	if(coory1>2&&map[coory1-2][coorx1]==7&&ar1==1){
		if(map[coory1-3][coorx1]<13&&map[coory1-3][coorx1]>8)
			map[coory1-3][coorx1]=map[coory1-3][coorx1]+8;
		else if(map[coory1-3][coorx1]==2)map[coory1-3][coorx1]=21;
		else if(map[coory1-3][coorx1]!=0&&map[coory1-3][coorx1]!=3)
		map[coory1-3][coorx1]=7;
	}
	if(coorx1>2&&map[coory1][coorx1-2]==8&&izq1==1){
		if(map[coory1][coorx1-3]<13&&map[coory1][coorx1-3]>8)
			map[coory1][coorx1-3]=map[coory1][coorx1-3]+8;
		else if(map[coory1][coorx1-3]==2)map[coory1][coorx1-3]=21;
		else if(map[coory1][coorx1-3]!=0&&map[coory1][coorx1-3]!=3)
		map[coory1][coorx1-3]=8;
	}
	return map;
}
int*CajaRan(int*caj);
int*CajaRan(int*caj){
	int pat1,pat2,bomenc1,bomenc2,bomenc3,fuenc1,fuenc2,fuenc3,fuenc4,bomenc4,pod,i;
	randomize();
	pod=random(47);
	while(1){
	pat1=random(47);
	if(pat1!=pod)break;
	}
	while(1){
	pat2=random(47);
	if(pat2!=pat1&&pat2!=pod)break;
	}
	while(1){
		bomenc1=random(47);
		if(bomenc1!=pod&&bomenc1!=pat1&&bomenc1!=pat2)break;
	}
	while(1){
		bomenc2=random(47);
		if(bomenc2!=pod&&bomenc2!=pat1&&bomenc2!=pat2&&bomenc2!=bomenc1)break;
	}
	while(1){
		bomenc3=random(47);
		if(bomenc3!=pod&&bomenc3!=pat1&&bomenc3!=pat2&&bomenc3!=bomenc1&&bomenc3!=bomenc2)break;
	}
	while(1){
		bomenc4=random(47);
		if(bomenc4!=pod&&bomenc4!=pat1&&bomenc4!=pat2&&bomenc4!=bomenc1&&bomenc4!=bomenc2&&bomenc4!=bomenc3)break;
	}
	while(1){
		fuenc1=random(47);
		if(fuenc1!=pod&&fuenc1!=pat1&&fuenc1!=pat2&&fuenc1!=bomenc1&&fuenc1!=
		bomenc2&&fuenc1!=bomenc3&&fuenc1!=bomenc4)break;
	}
	while(1){
		fuenc2=random(47);
		if(fuenc2!=pod&&fuenc2!=pat1&&fuenc2!=pat2&&fuenc2!=bomenc1&&fuenc2!=
		bomenc2&&fuenc2!=bomenc3&&fuenc2!=bomenc4&&fuenc2!=fuenc1)break;
	}
	while(1){
		fuenc3=random(47);
		if(fuenc3!=pod&&fuenc3!=pat1&&fuenc3!=pat2&&fuenc3!=bomenc1&&fuenc3!=
		bomenc2&&fuenc3!=bomenc3&&fuenc3!=bomenc4&&fuenc3!=fuenc1&&fuenc3!=fuenc2)break;
	}
	while(1){
		fuenc4=random(47);
		if(fuenc4!=pod&&fuenc4!=pat1&&fuenc4!=pat2&&fuenc4!=bomenc1&&fuenc4!=bomenc2&&
		fuenc4!=bomenc3&&fuenc4!=bomenc4&&fuenc4!=fuenc1&&fuenc4!=fuenc2&&fuenc4!=fuenc3)break;
	}
	for(i=0;i<47;i++){
		caj[i]=0;
	}
	caj[pat1]=1;			//caj[i] son los lugares donde hay cosas
	caj[pat2]=1;
	caj[bomenc1]=2;
	caj[bomenc2]=2;
	caj[bomenc3]=2;
	caj[bomenc4]=2;
	caj[fuenc1]=3;
	caj[fuenc2]=3;
	caj[fuenc3]=3;
	caj[fuenc4]=3;
	caj[pod]=4;
}
void Menu();
void Menu(){
	int i,j,nr,nc,h,nr1,nc1;
	unsigned int k;
	COLORREF ***exp,**a;
	char e[10][50];
	for(i=0;i<10;i++){
		sprintf(e[i],"c:/MaterialCurso/explosion%d.bmp",i);
		DimensionesBmp(e[i],&nr,&nc);
	}
	exp=(COLORREF***)malloc(10*sizeof(COLORREF**));
	for(i=0;i<10;i++){
		exp[i]=(COLORREF**)malloc(nr*sizeof(COLORREF*));
		for(j=0;j<nr;j++){
			exp[i][j]=(COLORREF*)malloc(nc*sizeof(COLORREF));
		}
	}
	DimensionesBmp("c:/MaterialCurso/bomberman184.bmp",&nr1,&nc1);
	a=(COLORREF**)malloc(nr1*sizeof(COLORREF*));
	for(j=0;j<nr1;j++){
		a[j]=(COLORREF*)malloc(nc1*sizeof(COLORREF));
	}
	LeeBmpColor(a,"c:/MaterialCurso/bomberman184.bmp");
	h=0;
	for(i=0;i<10;i++){
		LeeBmpColor(exp[i],e[i]);
	}
	while(Kbhit(&k)!=1){
		LeeBmpColor(a,"c:/MaterialCurso/bomberman184.bmp");
		for(i=0;i<nr;i++){
			for(j=0;j<nc;j++){
				if(exp[h][i][j]!=RGB(0,255,0))a[i+190][j+235]=exp[h][i][j];
			}
		}
		W.PlotCBitmap(a,nr1,nc1,0,0,1);
		if(h==1)h=0;
		else h++;
		Sleep(150);		
	}
	LeeBmpColor(a,"c:/MaterialCurso/bomberman184.bmp");
	W.PlotCBitmap(a,550,900,0,0,1);
	for(i=2;i<10;i++){
		LeeBmpColor(exp[i],e[i]);
		for(j=0;j<nr;j++){
			for(h=0;h<nc;h++){
				if(exp[i][j][h]!=RGB(0,255,0))a[j+190][h+235]=exp[i][j][h];
			}
		}
		W.PlotCBitmap(a,nr1,nc1,0,0,1);
		Sleep(100);
	}
	for(i=0;i<9;i++){
		for(j=0;j<nr;j++){
			free(exp[i][j]);
		}
		free(exp[i]);
	}
	free(exp);
	for(i=0;i<nr1;i++){
		free(a[i]);
	}
	free(a);
}
void VICTORIA(int gan1,int gan2,int gan);
void VICTORIA(int gan1,int gan2,int gan){
	int i,j,nr,nc,nr1,nc1,nr2,nc2,nr3,nc3;
	char e[50],f[50];
	COLORREF **mono1,**mono2,**vic,**map;
	unsigned int k;
	if(gan==1){
		sprintf(e,"c:/MaterialCurso/monitoper1.bmp");
		sprintf(f,"c:/MaterialCurso/monitoper2.bmp");
	}
	else if(gan==2){
		sprintf(e,"c:/MaterialCurso/monitoper1.bmp");
		sprintf(f,"c:/MaterialCurso/monitogan2.bmp");
	}
	else if(gan==3){
		sprintf(e,"c:/MaterialCurso/monitogan1.bmp");
		sprintf(f,"c:/MaterialCurso/monitoper2.bmp");
	}
	DimensionesBmp("c:/MaterialCurso/victorias.bmp",&nr3,&nc3);
	DimensionesBmp(e,&nr,&nc);
	DimensionesBmp(f,&nr2,&nc2);
	DimensionesBmp("c:/MaterialCurso/monitooro.bmp",&nr1,&nc1);
	mono1=(COLORREF**)malloc(nr*sizeof(COLORREF*));
	mono2=(COLORREF**)malloc(nr2*sizeof(COLORREF*));
	vic=(COLORREF**)malloc(nr1*sizeof(COLORREF*));
	for(i=0;i<nr;i++){
		mono1[i]=(COLORREF*)malloc(nc*sizeof(COLORREF));
	}
	for(i=0;i<nr2;i++){
		mono2[i]=(COLORREF*)malloc(nc2*sizeof(COLORREF));
	}
	for(i=0;i<nr1;i++){
		vic[i]=(COLORREF*)malloc(nc1*sizeof(COLORREF));
	}
	map=(COLORREF**)malloc(nr3*sizeof(COLORREF*));
	for(i=0;i<nr3;i++){
		map[i]=(COLORREF*)malloc(nc3*sizeof(COLORREF));
	}
	LeeBmpColor(mono1,e);
	LeeBmpColor(mono2,f);
	LeeBmpColor(vic,"c:/MaterialCurso/monitooro.bmp");
	LeeBmpColor(map,"c:/MaterialCurso/victorias.bmp");
	for(i=0;i<nr;i++){
		for(j=0;j<nc;j++){
			if(mono1[i][j]!=RGB(0,255,0)){
				map[i+90][j+50]=mono1[i][j];
			}
		}
	}
	for(i=0;i<nr2;i++){
		for(j=0;j<nc2;j++){
			if(mono2[i][j]!=RGB(0,255,0)){
				map[i+260][j+50]=mono2[i][j];
			}
		}
	}
	if(gan1>=1){
		for(i=0;i<nr1;i++){
			for(j=0;j<nc1;j++){
				if(vic[i][j]!=RGB(0,255,0)){
					map[i+300][j+350]=vic[i][j];
				}
			}
		}
	}
	if(gan1>=2){
		for(i=0;i<nr1;i++){
			for(j=0;j<nc1;j++){
				if(vic[i][j]!=RGB(0,255,0)){
					map[i+300][j+450]=vic[i][j];
				}
			}
		}
	}
	if(gan1>=3){
		for(i=0;i<nr1;i++){
			for(j=0;j<nc1;j++){
				if(vic[i][j]!=RGB(0,255,0)){
					map[i+300][j+550]=vic[i][j];
				}
			}
		}
	}
	if(gan2>=1){
		for(i=0;i<nr1;i++){
			for(j=0;j<nc1;j++){
				if(vic[i][j]!=RGB(0,255,0)){
					map[i+100][j+350]=vic[i][j];
				}
			}
		}
	}
	if(gan2>=2){
		for(i=0;i<nr1;i++){
			for(j=0;j<nc1;j++){
				if(vic[i][j]!=RGB(0,255,0)){
					map[i+100][j+450]=vic[i][j];
				}
			}
		}
	}
	if(gan2>=3){
		for(i=0;i<nr1;i++){
			for(j=0;j<nc1;j++){
				if(vic[i][j]!=RGB(0,255,0)){
					map[i+100][j+550]=vic[i][j];
				}
			}
		}
	}
	W.PlotCBitmap(map,nr3,nc3,0,0,1);
	while(Kbhit(&k)==0){
		Sleep(100);
	}
	for(i=0;i<nr;i++){
		free(mono1[i]);
	}
	for(i=0;i<nr2;i++){
		free(mono2[i]);
	}
	for(i=0;i<nr1;i++){
		free(vic[i]);
	}
	for(i=0;i<nr3;i++){
		free(map[i]);
	}
	free(map);
	free(mono1);
	free(mono2);
	free(vic);
}
COLORREF** MueveImagen(int **map,COLORREF**a,COLORREF **a2,COLORREF **pan,int nr,int nc,int xa1,int ya1,int m1,int nm1,int xa2,int ya2,int m2,int nm2,int n);
COLORREF** MueveImagen(int **map,COLORREF**a,COLORREF **a2,COLORREF **pan,int nr,int nc,int xa1,int ya1,int m1,int nm1,int xa2,int ya2,int m2,int nm2,int n){
	int i,j,h,nr1,nc1,p,q;
	char e[50],t[50],d[50];
	COLORREF **pin,**caj,**bom,**fueiz,**fuede,**fuear,**fueab,**fuece,**bomenc;
	COLORREF **fueenc,**podenc,**patenc,**cajque;
	DimensionesBmp("c:/MaterialCurso/mapa2.bmp",&nr1,&nc1);
	pin=(COLORREF**)malloc(nr1*sizeof(COLORREF*));
	for(i=0;i<nr1;i++){
		pin[i]=(COLORREF*)malloc(nc1*sizeof(COLORREF));
	}
	sprintf(e,"c:/MaterialCurso/monito %d,%d.bmp",nm1,m1);
	sprintf(t,"c:/MaterialCurso/monito %d,%d.bmp",nm2,m2);
	sprintf(d,"c:/MaterialCurso/bomba%d.bmp",n);
	LeeBmpColor(pin,"c:/MaterialCurso/mapa2.bmp");
	caj=(COLORREF**)malloc(55*sizeof(COLORREF*));
	cajque=(COLORREF**)malloc(55*sizeof(COLORREF*));
	for(i=0;i<55;i++){
		caj[i]=(COLORREF*)malloc(65*sizeof(COLORREF));
		cajque[i]=(COLORREF*)malloc(65*sizeof(COLORREF));
	}
	bom=(COLORREF**)malloc(55*sizeof(COLORREF*));
	for(i=0;i<55;i++){
		bom[i]=(COLORREF*)malloc(65*sizeof(COLORREF));
	}
	fuede=(COLORREF**)malloc(55*sizeof(COLORREF*));
	for(i=0;i<55;i++){
		fuede[i]=(COLORREF*)malloc(65*sizeof(COLORREF));
	}
	fueiz=(COLORREF**)malloc(55*sizeof(COLORREF*));
	for(i=0;i<55;i++){
		fueiz[i]=(COLORREF*)malloc(65*sizeof(COLORREF));
	}
	fuear=(COLORREF**)malloc(55*sizeof(COLORREF*));
	for(i=0;i<55;i++){
		fuear[i]=(COLORREF*)malloc(65*sizeof(COLORREF));
	}
	fueab=(COLORREF**)malloc(55*sizeof(COLORREF*));
	for(i=0;i<55;i++){
		fueab[i]=(COLORREF*)malloc(65*sizeof(COLORREF));
	}
	fuece=(COLORREF**)malloc(55*sizeof(COLORREF*));
	for(i=0;i<55;i++){
		fuece[i]=(COLORREF*)malloc(65*sizeof(COLORREF));
	}
	fueenc=(COLORREF**)malloc(55*sizeof(COLORREF*));
	for(i=0;i<55;i++){
		fueenc[i]=(COLORREF*)malloc(65*sizeof(COLORREF));
	}
	bomenc=(COLORREF**)malloc(55*sizeof(COLORREF*));
	for(i=0;i<55;i++){
		bomenc[i]=(COLORREF*)malloc(65*sizeof(COLORREF));
	}
	patenc=(COLORREF**)malloc(55*sizeof(COLORREF*));
	for(i=0;i<55;i++){
		patenc[i]=(COLORREF*)malloc(65*sizeof(COLORREF));
	}
	podenc=(COLORREF**)malloc(55*sizeof(COLORREF*));
	for(i=0;i<55;i++){
		podenc[i]=(COLORREF*)malloc(65*sizeof(COLORREF));
	}
	LeeBmpColor(caj,"c:/MaterialCurso/cajas.bmp");
	LeeBmpColor(bom,d);
	LeeBmpColor(fuede,"c:/MaterialCurso/fuegoder1.bmp");
	LeeBmpColor(fueiz,"c:/MaterialCurso/fuegoizq1.bmp");
	LeeBmpColor(fuear,"c:/MaterialCurso/fuegoarriba1.bmp");
	LeeBmpColor(fueab,"c:/MaterialCurso/fuegoabajo1.bmp");
	LeeBmpColor(fuece,"c:/MaterialCurso/fuegocen.bmp");
	LeeBmpColor(bomenc,"c:/MaterialCurso/bomenc.bmp");
	LeeBmpColor(fueenc,"c:/MaterialCurso/fueenc.bmp");
	LeeBmpColor(podenc,"c:/MaterialCurso/misilder.bmp");
	LeeBmpColor(patenc,"c:/MaterialCurso/patenc.bmp");
	LeeBmpColor(cajque,"c:/MaterialCurso/cajaquemandose.bmp");
	for(i=0;i<9;i++){
		for(j=0;j<13;j++){
			if(map[i][j]==2||(map[i][j]>8&&map[i][j]<13)){
				for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						pin[i*55+20+p][j*65+20+q]=caj[p][q];
					}
				}
			}
			else if(map[i][j]==3){
				for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						if(bom[p][q]!=RGB(0,255,0))
						pin[i*55+20+p][j*65+20+q]=bom[p][q];
					}
				}
			}
			else if(map[i][j]==4){
				for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						if(fuece[p][q]!=RGB(0,255,0))
						pin[i*55+20+p][j*65+20+q]=fuece[p][q];
					}
				}
			}
			else if(map[i][j]==5){
				for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						if(fueab[p][q]!=RGB(0,255,0))
						pin[i*55+20+p][j*65+20+q]=fueab[p][q];
					}
				}
			}
			else if(map[i][j]==6){
				for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						if(fuede[p][q]!=RGB(0,255,0))
						pin[i*55+20+p][j*65+20+q]=fuede[p][q];
					}
				}
			}
			else if(map[i][j]==7){
				for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						if(fuear[p][q]!=RGB(0,255,0))
						pin[i*55+20+p][j*65+20+q]=fuear[p][q];
					}
				}
			}
			else if(map[i][j]==8){
				for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						if(fueiz[p][q]!=RGB(0,255,0))
						pin[i*55+20+p][j*65+20+q]=fueiz[p][q];
					}
				}
			}
			else if(map[i][j]==13){
				for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						if(patenc[p][q]!=RGB(255,0,0))
						pin[i*55+20+p][j*65+20+q]=patenc[p][q];
					}
				}
			}
			else if(map[i][j]==14){
				for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						if(bomenc[p][q]!=RGB(255,0,0))
						pin[i*55+20+p][j*65+20+q]=bomenc[p][q];
					}
				}
			}
			else if(map[i][j]==15){
				for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						if(fueenc[p][q]!=RGB(0,255,0))
						pin[i*55+20+p][j*65+20+q]=fueenc[p][q];
					}
				}
			}
			else if(map[i][j]==16){
				for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						if(podenc[p][q]!=RGB(0,255,0))
						pin[i*55+20+p][j*65+20+q]=podenc[p][q];
					}
				}
			}
			else if(map[i][j]>16){
				for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						pin[i*55+20+p][j*65+20+q]=cajque[p][q];
					}
				}
			}
		}
	}
	LeeBmpColor(a,e);
	LeeBmpColor(a2,t);
	if(ya2>ya1){
		for(i=0;i<nr;i++){
			for(j=0;j<nc;j++){
				if(a[i][j]!=RGB(255,0,0)&&xa1+j>0&&ya1+i>0){
					pin[i+ya1][j+xa1]=a[i][j];
				}
			}
		}
		for(i=0;i<nr;i++){
			for(j=0;j<nc;j++){
				if(a2[i][j]!=RGB(255,0,0)&&xa2+j>0&&ya2+i>0){
					pin[i+ya2][j+xa2]=a2[i][j];
				}
			}
		}
	}
	else{
		for(i=0;i<nr;i++){
			for(j=0;j<nc;j++){
				if(a2[i][j]!=RGB(255,0,0)&&xa2+j>0&&ya2+i>0){
					pin[i+ya2][j+xa2]=a2[i][j];
				}
			}
		}
		for(i=0;i<nr;i++){
			for(j=0;j<nc;j++){
				if(a[i][j]!=RGB(255,0,0)&&xa1+j>0&&ya1+i>0){
					pin[i+ya1][j+xa1]=a[i][j];
				}
			}
		}
	}
	W.PlotCBitmap(pin,nr1,nc1,0,0,1);
	for(i=0;i<nr1;i++){
		for(j=0;j<nc1;j++){
			pan[i][j]=pin[i][j];
		}
	}
	for(i=0;i<nr1;i++){
		free(pin[i]);
	}
	free(pin);
	for(i=0;i<55;i++){
		free(caj[i]);
		free(bom[i]);
		free(fuede[i]);
		free(fueiz[i]);
		free(fuear[i]);
		free(fueab[i]);
		free(fuece[i]);
		free(bomenc[i]);
		free(fueenc[i]);
		free(patenc[i]);
		free(podenc[i]);
		free(cajque[i]);
	}
	free(bom);
	free(caj);
	free(fuede);
	free(fueiz);
	free(fuear);
	free(fueab);
	free(fuece);
	free(fueenc);
	free(patenc);
	free(bomenc);
	free(podenc);
	free(cajque);
	return pan;
}
int MueveMonito(COLORREF **a,int xa1,int ya1,float xn1,float yn1,int xa2,int ya2,float xn2,float yn2,int nr,int nc,int gan1,int gan2);
int MueveMonito(COLORREF **a,int xa1,int ya1,float xn1,float yn1,int xa2,int ya2,float xn2,float yn2,int nr,int nc,int gan1,int gan2){
	unsigned int k;
	int i,j,nm1,m1x1,m1y1,m1x2,m1y2,b[550][900],**map,p,q,n,nr1,nc1;
	int nm2,m1,m2,m2x1,m2y1,m2x2,m2y2,exp1[7],exp2[7],bom1,bom2,cbom1,cbom2;
	int coorx1[7],coory1[7],cs1[7],cs2[7],cf1,cf2,cfmax,csf1,coorx2[7],coory2[7];
	int csf2,pdesp1,caj[47],vic1,tim,vic2,pr,pr2,tim2,pst1,pst2,cpe,din,dinx,diny;
	float vx1,vy1,vxm1,vym1,vx2,vy2,vxm2,vym2,n2;
	COLORREF **pan,**a2;
	char e[50],t[50];
	map=(int**)malloc(9*sizeof(int*));
	for(i=0;i<9;i++){
		map[i]=(int*)malloc(13*sizeof(int));
	}
	DimensionesBmp("c:/MaterialCurso/mapa2.bmp",&nr1,&nc1);
	pan=(COLORREF**)malloc(nr1*sizeof(COLORREF*));
	a2=(COLORREF**)malloc(nr*sizeof(COLORREF*));
	for(i=0;i<nr;i++){
		a2[i]=(COLORREF*)malloc(nc*sizeof(COLORREF));
	}
	for(i=0;i<nr1;i++){
		pan[i]=(COLORREF*)malloc(nc1*sizeof(COLORREF));
	}					//cero es no poderse mover
	for(i=0;i<550;i++){
		for(j=0;j<900;j++){
			if(i<10||i>515||j<15||j>865){
				b[i][j]=0;
			}
			else{
				b[i][j]=1;
			}
		}
	}
	for(i=0;i<9;i++){
		for(j=0;j<13;j++){
			if(((i!=1&&i!=3&&i!=5&&i!=7)||(j!=2&&j!=4&&j!=6&&j!=8&&j!=10))&&(i!=0||j>8||j<4))
				map[i][j]=1;
			else {
				map[i][j]=0;
				for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						b[i*55+20+p][j*65+20+q]=0;
					}
				}
			}
		}
	}
	for(i=0;i<9;i++){
		for(j=0;j<13;j++){
			if(map[i][j]==1&&j<11&&j>1&&i<8){
			map[i][j]=2;
			for(p=0;p<55;p++){
					for(q=0;q<65;q++){
						b[i*55+20+p][j*65+20+q]=0;
					}
				}
			}
		}
	}
	CajaRan(caj);
	p=0;
	for(i=0;i<9;i++){
		for(j=0;j<13;j++){
			if(map[i][j]==2){
				if(caj[p]==1)map[i][j]=9;
				else if(caj[p]==2)map[i][j]=10;
				else if(caj[p]==3)map[i][j]=11;
				else if(caj[p]==4)map[i][j]=12;
				else map[i][j]=2;
				p++;
			}
		}
	}
	vxm1=12;			//map=0 es barrera
	vym1=12;			//map=1 es espacio libre
	vxm2=12;			//map=2 es caja
	vym2=12;			//map=3 es bomba
	m1=1;				//map=4 es fuego centro
	nm1=1;				//map=5 es fuego abajo
	m1x1=xa1+7;			//map=6 es fuego derecha
	m1x2=xa1+47;		//map=7 es fuego arriba
	m1y1=ya1+35;		//map=8 es fuego izquierda
	m1y2=ya1+60;		//map=9 es caja con patin
	m2x1=xa2+7;			//map=10 es caja con bomba
	m2x2=xa2+47;		//map=11 es caja con fuego
	m2y1=ya2+35;		//map=12 es caja con poder
	m2y2=ya2+60;		//map=13 es patin
	n=1;				//map=14 es bomba encontrada
	n2=1;				//map=15 es fuego encontrado
	m2=1;				//map=16 es poder
	nm2=5;				//map=17 es caja quemandose con patin
	bom1=0;				//map=18 es caja quemandose con bomba
	bom2=0;				//map=19 es caja quemandose con fuego
	cbom1=1;			//map=20 es caja quemandose con poder
	cbom2=1;			//map=21 es caja quemandose
	for(i=0;i<7;i++){
		coorx1[i]=0;
		coory1[i]=0;
		cs1[i]=0;
		exp1[i]=0;
		coorx2[i]=0;
		coory2[i]=0;
		cs2[i]=0;
		exp2[i]=0;
	}
	cf1=0;
	cf2=0;
	csf1=0;
	csf2=0;
	vic1=0;
	vic2=0;
	tim=0;
	tim2=0;
	pr=0;
	pst1=0;
	din=0;
	cpe=0;
	DimensionesBmp("c:/MaterialCurso/monito 1,1.bmp",&nr,&nc);
	MueveImagen(map,a,a2,pan,nr,nc,xa1,ya1,m1,nm1,xa2,ya2,m2,nm2,n);
	while(1){
		vx1=0;
		vy1=0;
		vx2=0;
		vy2=0;
		while (Kbhit(&k)!=0){		
			if (k==37){				//mover a la izquierda
				vy1=0;
				nm1=4;
				m1=((m1+1)%3)+1;
				if (b[m1y1][m1x1-(int)vxm1]==0||b[m1y2][m1x1-(int)vxm1]==0){	
					vx1=0;
				}         
				else{
					vx1=-vxm1;
				}
			}
			else if (k==40){		//presiona s para mover hacia abajo
				vx1=0;
				nm1=1;
				m1=((m1+1)%3)+1;	
				if (b[m1y2+(int)vym1][m1x1]==0||b[m1y2+(int)vym1][m1x2]==0){
					vy1=0;
				}
				else {
					vy1=vym1;
				}
			}
			else if (k==39){		//presione d para mover hacia la derecha
				vy1=0;
				nm1=2;	
				m1=((m1+1)%3)+1;		
				if (b[m1y1][m1x1+(int)vxm1]==0||b[m1y2][m1x2+(int)vxm1]==0){
					vx1=0;
					
				}
				else {
					vx1=vxm1;
				}
			}
			else if (k==38){		//presione w para mover hacia arriva
				vx1=0;
				nm1=3;	
				m1=((m1+1)%3)+1;		
				if (b[m1y1-(int)vym1][m1x1]==0||b[m1y1-(int)vym1][m1x2]==0||ya1-10<=0){
					vy1=0;
				}
				else {
					vy1=-vxm1;
				}
			} 
			else if (k=='A'){		//presiones a para poner bombas
				if(bom1<cbom1){
					map[(ya1+20)/55][(xa1+20)/65]=3;
					coorx1[tim]=(xa1+20)/65;
					coory1[tim]=(ya1+20)/55;
					cs1[tim]=1;
					bom1++;
					tim=(tim+1)%7;
				}
			}				
			else if (k==' '){	// presione ' ' para parar el programa
				goto e1;
			}
			else m1=1;
			if (k=='J'){			//mover j la izquierda
				vy2=0;
				nm2=8;
				m2=((m2+1)%3)+1;
				if (b[m2y1][m2x1-(int)vxm2]==0||b[m2y2][m2x1-(int)vxm2]==0){	
					vx2=0;
				}
				else{
					vx2=-vxm2;
				}
			}
			else if (k=='K'){		//presiona k para mover hacia abajo
				vx2=0;
				nm2=5;	
				if(m2<3)m2++;                     
				else m2=1;		
				if (b[m2y2+(int)vym2][m2x1]==0||b[m2y2+(int)vym2][m2x2]==0){
					vy2=0;
				}
				else {
					vy2=vym2;
				}
			}
			else if (k=='L'){		//presione l para mover hacia la derecha
				vy2=0;
				nm2=6;	
				if(m2<3)m2++;
				else m2=1;		
				if (b[m2y1][m2x1+(int)vxm2]==0||b[m2y2][m2x2+(int)vxm2]==0){
					vx2=0;
					
				}
				else {
					vx2=vxm2;
				}
			}
			else if (k=='I'){		//presione i para mover hacia arriva
				vx2=0;
				nm2=7;	
				if(m2<3)m2++;
				else m2=1;		
				if (b[m2y1-(int)vym2][m2x1]==0||b[m2y1-(int)vym2][m2x2]==0||ya2-10<=0){
					vy2=0;
				}
				else {
					vy2=-vxm2;
				}
			} 
			else if(k=='S'){
				if(bom2<cbom2){
				map[(ya2+20)/55][(xa2+20)/65]=3;
				coorx2[tim2]=(xa2+20)/65;
				coory2[tim2]=(ya2+20)/55;
				bom2++;
				cs2[tim2]=1;
				tim2=(tim2+1)%7;
				}
			}
			else m2=1;
			if (n2==2.5)n2=1;
			else n2=n2+0.5;
			n=(int)n2;
			xn1=xn1+vx1;
			yn1=yn1+vy1;
			xn2=xn2+vx2;
			yn2=yn2+vy2;
			xa1=(int)xn1;
			ya1=(int)yn1;
			m1x1=xa1+7;
			m1x2=xa1+47;
			m1y1=ya1+35;
			m1y2=ya1+60;
			xa2=(int)xn2;
			ya2=(int)yn2;
			m2x1=xa2+7;
			m2x2=xa2+47;
			m2y1=ya2+35;
			m2y2=ya2+60;
			for(i=0;i<7;i++){
				if(cs1[i]==1){
					exp1[i]++;
				}
			}
			for(i=0;i<7;i++){
				if(exp1[i]>=30){
					pr=i;
					map[coory1[i]][coorx1[i]]=4;
					cs1[i]=0;
					exp1[i]=0;
					bom1=bom1-1;
					csf1=1;
					break;
				}
			}
			if(csf1==1){
				if(cf1==0)map=Fuego1(map,coory1[pr],coorx1[pr]);
				else if(cf1==1)map=Fuego2(map,coory1[pr],coorx1[pr]);
				else map=Fuego3(map,coory1[pr],coorx1[pr]);
				csf1=0;
			}
			for(i=0;i<7;i++){
				if(cs2[i]==1){
					exp2[i]++;
				}
			}
			for(i=0;i<7;i++){
				if(exp2[i]>=30){
					pr2=i;
					map[coory2[i]][coorx2[i]]=4;
					cs2[i]=0;
					exp2[i]=0;
					bom2=bom2-1;              
					csf2=1;
					break;
				}
			}
			if(csf2==1){
				if(cf2==0)map=Fuego1(map,coory2[pr2],coorx2[pr2]);
				else if(cf2==1)map=Fuego2(map,coory2[pr2],coorx2[pr2]);
				else map=Fuego3(map,coory2[pr2],coorx2[pr2]);
				csf2=0;
			}	
			pan=MueveImagen(map,a,a2,pan,nr,nc,xa1,ya1,m1,nm1,xa2,ya2,m2,nm2,n);
			if(map[m1y1/55][m1x1/65]==4||map[m1y1/55][m1x1/65]==5||map[m1y1/55][m1x1/65]==6||map[m1y1/55][m1x1/65]==7||map[m1y1/55][m1x1/65]==8){
				vic1=1;
			}
			if(map[m2y1/55][m2x1/65]==4||map[m2y1/55][m2x1/65]==5||map[m2y1/55][m2x1/65]==6||map[m2y1/55][m2x1/65]==7||map[m2y1/55][m2x1/65]==8){
				vic2=1;
			}
			if((vic1==1)&&(vic2==1)){					//victoria 1 es empate
				VICTORIA(gan1,gan2,1);
				goto e1;					//victoria 2 es pierde primer player
			}								//victoria 3 es pierde segundo player	
			else if(vic1==1){
				gan1++;
				VICTORIA(gan1,gan2,2);
				goto e1;
			}
			else if(vic2==1){
				gan2++;
				VICTORIA(gan1,gan2,3);
				goto e1;
			}
			if(map[m1y1/55][m1x1/65]==13){
				vxm1++;
				vym1++;
				map[m1y1/55][m1x1/65]=1;
			}
			if(map[m2y1/55][m2x1/65]==13){
				vxm2++;
				vym2++;
				map[m2y1/55][m2x1/65]=1;
			}
			if(map[m1y1/55][m1x1/65]==14){
				cbom1++;
				map[m1y1/55][m1x1/65]=1;
			}
			if(map[m2y1/55][m2x1/65]==14){
				cbom2++;
				map[m2y1/55][m2x1/65]=1;
			}
			if(map[m1y1/55][m1x1/65]==15){
				cf1++;
				map[m1y1/55][m1x1/65]=1;
			}
			if(map[m2y1/55][m2x1/65]==15){
				cf2++;
				map[m2y1/55][m2x1/65]=1;
			}
			for(i=0;i<9;i++){
				for(j=0;j<13;j++){
					if(map[i][j]==17||map[i][j]==18||map[i][j]==19||map[i][j]==20)
					map[i][j]=map[i][j]-4;
					else if(map[i][j]==16){
						cpe=1;
						dinx=j;
						diny=i;
					}
				}
			}
			if(cpe==1){
				din++;
			}
			if(din>10){
				map=Fuego3(map,diny,dinx);
				cpe=0;
				din=0;
				map[diny][dinx]=1;
			}
			for(i=0;i<9;i++){
				for(j=0;j<13;j++){
					if(map[i][j]==4||map[i][j]==5||map[i][j]==6||map[i][j]==7||map[i][j]==8){
						map[i][j]=1;
						for(p=0;p<55;p++){
							for(q=0;q<65;q++){
								b[i*55+20+p][j*65+20+q]=1;
							}
						}
					}
					else if(map[i][j]==13||map[i][j]==14||map[i][j]==15||map[i][j]==16){
						for(p=0;p<55;p++){
							for(q=0;q<65;q++){
								b[i*55+20+p][j*65+20+q]=1;
							}
						}
					}
				}	
			}
			for(i=0;i<9;i++){
				for(j=0;j<13;j++){
					if(map[i][j]==21){
						map[i][j]=1;
						for(p=0;p<55;p++){
							for(q=0;q<65;q++){
								b[i*55+20+p][j*65+20+q]=1;
							}
						}
					}
				}
			}
			Sleep(20);
		}
		for(i=0;i<7;i++){
			if(cs1[i]==1){
				exp1[i]++;
			}
		}
		for(i=0;i<7;i++){
			if(exp1[i]>=30){
				pr=i;
				map[coory1[i]][coorx1[i]]=4;
				cs1[i]=0;
				exp1[i]=0;
				bom1=bom1-1;
				csf1=1;
				break;
			}
		}
		if(csf1==1){
			if(cf1==0)map=Fuego1(map,coory1[pr],coorx1[pr]);
			else if(cf1==1)map=Fuego2(map,coory1[pr],coorx1[pr]);
			else map=Fuego3(map,coory1[pr],coorx1[pr]);
			csf1=0;
		}
		for(i=0;i<7;i++){
			if(cs2[i]==1){
				exp2[i]++;
			}
		}
		for(i=0;i<7;i++){
			if(exp2[i]>=30){
				pr2=i;
				map[coory2[i]][coorx2[i]]=4;
				cs2[i]=0;
				exp2[i]=0;
				bom2=bom2-1;              
				csf2=1;
				break;
			}
		}
		if(csf2==1){
			if(cf2==0)map=Fuego1(map,coory2[pr2],coorx2[pr2]);
			else if(cf2==1)map=Fuego2(map,coory2[pr2],coorx2[pr2]);
			else map=Fuego3(map,coory2[pr2],coorx2[pr2]);
			csf2=0;
		}
		if (n2==2.5)n2=1;
		else n2=n2+0.5;
		n=(int)n2;
		pan=MueveImagen(map,a,a2,pan,nr,nc,xa1,ya1,1,nm1,xa2,ya2,1,nm2,n);
		if(map[m1y1/55][m1x1/65]==4||map[m1y1/55][m1x1/65]==5||map[m1y1/55][m1x1/65]==6||map[m1y1/55][m1x1/65]==7||map[m1y1/55][m1x1/65]==8){
			vic1=1;
		}
		if(map[m2y1/55][m2x1/65]==4||map[m2y1/55][m2x1/65]==5||map[m2y1/55][m2x1/65]==6||map[m2y1/55][m2x1/65]==7||map[m2y1/55][m2x1/65]==8){
			vic2=1;
		}
		if(vic1==1&&vic2==1){					//victoria 1 es empate
			VICTORIA(gan1,gan2,1);
			goto e1;
		}
		if(vic1==1){
			gan1++;				//victoria 2 es pierde primer player
			VICTORIA(gan1,gan2,2);
			goto e1;
		}
		if(vic2==1){
			gan2++;				//victoria 3 es pierde segundo player
			VICTORIA(gan1,gan2,3);
			goto e1;
		}
		if(map[m1y1/55][m1x1/65]==13){
			vxm1++;
			vym1++;             
		}           
		if(map[m2y1/55][m2x1/65]==13){
			vxm2++;
			vym2++;
		}
		if(map[m1y1/55][m1x1/65]==14){
			cbom1++;
			map[m1y1/55][m1x1/65]=1;
		}
		if(map[m2y1/55][m2x1/65]==14){
			cbom2++;
			map[m2y1/55][m2x1/65]=1;
		}
		if(map[m1y1/55][m1x1/65]==15){
			cf1++;
			map[m1y1/55][m1x1/65]=1;
		}
		if(map[m2y1/55][m2x1/65]==15){
			cf2++;
			map[m2y1/55][m2x1/65]=1;
		}
		for(i=0;i<9;i++){
			for(j=0;j<13;j++){
				if(map[i][j]==17||map[i][j]==18||map[i][j]==19||map[i][j]==20)
				map[i][j]=map[i][j]-4;
			}
		}
		for(i=0;i<9;i++){
			for(j=0;j<13;j++){
				if(map[i][j]==4||map[i][j]==5||map[i][j]==6||map[i][j]==7||map[i][j]==8){
					map[i][j]=1;
					for(p=0;p<55;p++){
						for(q=0;q<65;q++){
							b[i*55+20+p][j*65+20+q]=1;
						}
					}
				}
				else if(map[i][j]==13||map[i][j]==14||map[i][j]==15||map[i][j]==16){
					for(p=0;p<55;p++){
						for(q=0;q<65;q++){
							b[i*55+20+p][j*65+20+q]=1;
						}
					}
				}
			}
		}
		for(i=0;i<9;i++){
			for(j=0;j<13;j++){
				if(map[i][j]==21){
					map[i][j]=1;
					for(p=0;p<55;p++){
						for(q=0;q<65;q++){
							b[i*55+20+p][j*65+20+q]=1;
						}
					}
				}
			}
		}
		Sleep(20);
	}
	e1:
	for(i=0;i<nr1;i++){
		free(pan[i]);
	}
	free(pan);
	for(i=0;i<9;i++){
		free(map[i]);
	}
	free(map);
	for(i=0;i<nr;i++){
		free(a2[i]);
	}
	free(a2);
	if(vic1==1&&vic2==1){
		return 0;
	}
	else if(vic1==1){
		return 1;
	}
	else if(vic2==1){
		return 2;
	}
	else return 0;
}
int main(){
	float xn1,yn1,xn2,yn2;
	COLORREF **a;
	int nr,nc,i,xa1,ya1,xa2,ya2,v1,v2,s;
	unsigned int p;
	DimensionesBmp("c:/MaterialCurso/monito 1,1.bmp",&nr,&nc);
	a=(COLORREF**)malloc(nr*sizeof(COLORREF*));
	for(i=0;i<nr;i++){
		a[i]=(COLORREF*)malloc(nc*sizeof(COLORREF));
	}
	v1=0;v2=0;
	Menu();
	while(1){
		while(v1<3&&v2<3){
			xa1=100;
			ya1=100;
			xn1=100;
			yn1=100;
			xa2=750;
			ya2=100;
			xn2=750;
			yn2=100;
			s=MueveMonito(a,xa1,ya1,xn1,yn1,xa2,ya2,xn2,yn2,nr,nc,v1,v2);
			if(s==1)v1++;
			else if(s==2)v2++;
		}
		if(MessageYesNo("Quieres volver a jugar")==0)break;
	}
	for(i=0;i<nr;i++){
		free(a[i]);
	}
	free(a);
	return MainLoop();
}
