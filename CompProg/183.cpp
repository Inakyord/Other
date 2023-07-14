//Template completo, todas las bibliotecas y I/O archivos

#include <cstdio>
#include <cmath>

void suma(int *arreglo, int rowsMin, int rowsMax, int colMin, int colMax);
void dividir(int *arreglo, int rowsMin, int rowsMax, int colMin, int colMax);
void transIda(int rows, int columnas);

/*
001000011011

0010			rmin=0; rmax=2; colmin=0; colmax=3;
0001
1011

D
				// primer cuadrante:  rmin=0; rmax=1; colmin=0; colmax=1
00 10			// segundo cuadrante: rmin=0; rmax=1; colmin=2; colmax=3
00 01			// tercer cuadrante:  rmin=2; rmax=2; colmin=0; colmax=1
				// cuarto cuadrante:  rmin=2; rmax=2; colmin=2; colmax=2
10 11

D0

1 0 
0 1

D0D1001D101

*/

void suma(int *arreglo, int rowsMin, int rowsMax, int colMin, int colMax){
  int suma=0;
  
  for(int i=rowsMin; i<rowsMax; i++)
    for(int j=colMin; j<colMax; j++)
      suma+=*arreglo[i][j];
  
  if(suma==0)
    printf("0");
  else if(suma==((1+rowsMax - rowsMin) * (1+colMax - colMin)))
  	printf("1");
  else{
    printf("D");
    dividir(arreglo, rowsMin, rowsMax, colMin, colMax); 
  }
}

void dividir(int *arreglo, int rowsMin, int rowsMax, int colMin, int colMax){
	if (rowsMax == rowsMin)
    {
    // region izquierda
  		suma(arreglo, rowsMin, rowsMax, colMin, (colMax - colMin) / 2);
  	// region derecha
  		suma(arreglo, rowsMin, rowsMax, ((colMax-colMin)/2)+1, colMax);
    }
  	else if(colMin == colMax)
    {
    // region arriba
  		suma(arreglo, rowsMin, (rowsMax - rowsMin)/2 , colMin, colMax);
  	// region abajo
  		suma(arreglo, ((rowsMax - rowsMin)/2)+1, rowsMax, colMin, colMax);
    }
  	else 	
    {
  	// primer cuadrante (arriba a la izquierda)
  		suma(arreglo, rowsMin, (rowsMax - rowsMin) / 2, colMin, (colMax - colMin) / 2);
  	// segundo cuadrante
  		suma(arreglo, rowsMin, (rowsMax - rowsMin) / 2, ((colMax - colMin) / 2)+1, colMax);
  	// tercer cuadrante
  		suma(arreglo, ((rowsMax - rowsMin)/2)+1, rowsMax, colMin, (colMax - colMin) / 2);
  	// cuarto cuadrante
  		suma(arreglo, ((rowsMax - rowsMin)/2)+1, rowsMax, ((colMax - colMin) / 2)+1, colMax);
    }
}




void transIda(int rows, int columnas){
  int total = rows*columnas;
  
  int arreglo[rows][columnas];
    
  for (int i = 0; i < total; i++)
  {  
    if( i%50 == 0)
      scanf("\n%c", &arreglo[i]);
    else
      scanf("%c", &arreglo[i]);
  }	
  
  suma(arreglo, 0, rows-1, 0, columnas-1);
  
}


void solve() {
	
	char letra;
  	int rows, columnas;
  	
  	while(scanf("%c", &letra), letra!='#')
    {
    	scanf("%d %d", &rows, &columnas);
      
      	if(letra=='B'){
        	//transformación de ida
        	transIda(rows, columnas);
        }
      	else {
        	//transformación de vuelta
          	
        }

    }
	

}


int main() {

	solve();
	
	return 0;
}