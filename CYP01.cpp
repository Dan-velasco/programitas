#include <stdio.h> 
int main() {
	float fanchop = 640, faltop = 480, fporcentajecorx = 0.23, fporcentajecory = 0.80, fporcentajeanchoele = 0.50, fporcentajealtoele = 0.10;
	scanf("%f, %f,%f, %f, %f,%f", &fanchop, &faltop, &fporcentajecorx, &fporcentajecory, &fporcentajeanchoele, &fporcentajealtoele);
	float fx_izquierda = fanchop * fporcentajecorx, fy_izquierda = faltop * fporcentajecory, fancho = fanchop * fporcentajeanchoele, falto = faltop * fporcentajealtoele, fx_derecha = fx_izquierda + fancho, fy_derecha = fy_izquierda + falto;
	 
	printf("%d %d %.2f %.2f %.2f %.2f %d %d %d %d",(int)fanchop, (int)faltop, fporcentajecorx, fporcentajecory, fporcentajeanchoele,fporcentajealtoele,(int)fx_izquierda,(int)fy_izquierda,(int)fx_derecha,(int)fy_derecha);
	return 0;
}