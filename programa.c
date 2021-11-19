Este documento se para practicar la subidda y bajada de archivos al repositorio remoto de github.

include <stdio.h>

char* mensaje();

int main (int argc, char* argv[]){
	
	printf("A continuación se procesarán los datos ingresados: \n");

	for(int i = 1; i < argc; i+){
		printf("- El %d° argumento ingresado es: %s\n", i, argv[i]);
	}

	printf("%s", mensaje());

	return 0;
}


char* mensaje(){
	char msj[] = "El programa está funcionando perfecto";
	
	return msj;
}
