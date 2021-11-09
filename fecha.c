#include <stdio.h>
#include <string.h>

struct estruc_fecha
{
	int dia, mes, ano;
};

typedef struct estruc_fecha Fecha;

int capturaFecha(Fecha *fecha);
Fecha sumaFecha(Fecha fecha, int tipo, int cantidadSuma);
Fecha restaFecha(Fecha fecha, int tipo, int cantidadResta);
int comparaFecha(Fecha fecha1, Fecha fecha2);
void imprimeFecha(Fecha fecha);

int main()
{
	int res, resp, cantidadSuma;
	char tipo;
	Fecha fecha, fecha2;
	
	fecha = capturaFecha(Fecha *fecha);
	printf("Que operacion quiere hacer 1 = Suma, 0 = Resta");
	scanf("%d", &res);
	if(res == 1)
	{
		printf("A que le quiere sumar 'Dia', 'Mes', 'Ano'");
		scanf("%s", &tipo);
		printf("Cual es la cantidad a sumar");
		scanf("%d", cantidadSuma);
		
		fecha2 = sumaFecha(fecha, tipo, cantidadSuma)
	}
	else
	{
		printf("A que le quiere restar 'Dia', 'Mes', 'Ano'");
		scanf("%s", &tipo);
		printf("Cual es la cantidad a restar");
		scanf("%d", cantidadResta);
		
		fecha2 = restaFecha(fecha, tipo, cantidadResta)
	}
	resp = comparaFecha(fecha, fecha2);
	printf("La comparativa es %d", resp);
	imprimeFecha(fecha2);
}

int capturaFecha(Fecha *fecha)
{
	printf("Dame el dia: ");
	scanf("%d", &fecha->dia);
	printf("Dame el mes: ");
	scanf("%d", &fecha->mes);
	printf("Dame el ano: ");
	scanf("%d", &fecha->ano);
}

Fecha sumaFecha(Fecha fecha, int tipo, int cantidadSuma)
{
	Fecha nueva_fecha;
	int auxmes;
	
	if(tipo == ANO)
	{
		nueva_fecha.dia = fecha.dia;
		nueva_fecha.mes = fecha.mes;
		nueva_fecha.ano = fecha.ano + cantidadSuma;
	}a
		if(tipo == MES)
		{
			nueva_fecha.dia = fecha.dia;
			nueva_fecha.mes = fecha.mes + cantidadSuma;
			if(nueva_fecha.mes > 12)
			{
				do
				{
				auxmes = nueva_fecha.mes - 12;
				nueva_fecha.ano = fecha.ano + 1;
				}while(auxmes > 12)
				nueva_fecha.mes = auxmes;
			}
			else
				nueva_fecha.ano = fecha.ano;
		 } 
		else
		{
			if(tipo == DIA)
			{
				nueva_fecha.mes = fecha.mes;
				if(nueva_fecha.mes == 1 || nueva_fecha.mes == 3 ||nueva_fecha.mes == 5 ||nueva_fecha.mes == 7 ||nueva_fecha.mes == 8 ||nueva_fecha.mes == 10 ||nueva_fecha.mes == 12 ||)
				{
					nueva_fecha.dia = fecha.dia + cantidadSuma;
					if(nueva_fecha.dia > 31)
					{	
						do
						{
						auxdia = nueva_fecha.dia - 31;
						nueva_fecha.mes = fecha.mes + 1;
						}while(auxdia > 31)
						nueva_fecha.dia = auxdia;
						nueva_fecha.ano = fecha.ano;
					}
					else
					{
						nueva_fecha.mes = fecha.mes;
						nueva_fecha.ano = fecha.ano;
					}
				}
				else
				{
					if(nueva_fecha.mes = 2)
					{
						nueva_fecha.dia = fecha.dia + cantidadSuma;
						if(nueva_fecha.dia > 28)
						{
							if(nueva_fecha.ano % 4 = 0)
							{		
								do
								{
								auxdia = nueva_fecha.dia - 29;
								nueva_fecha.mes = fecha.mes + 1;
								}while(auxdia > 29)
								nueva_fecha.dia = auxdia;
								nueva_fecha.ano = fecha.ano;
							}
							else
							{
								do
								{
								auxdia = nueva_fecha.dia - 28;
								nueva_fecha.mes = fecha.mes + 1;
								}while(auxdia > 28)
								nueva_fecha.dia = auxdia;
								nueva_fecha.ano = fecha.ano;
							}
						}
						else
						{
							nueva_fecha.dia = fecha.dia + cantidadSuma;
							nueva_fecha.mes = fecha.mes;
							nueva_fecha.ano = fecha.ano;
						}
					}
					else
					{
						if(nueva_fecha.mes == 4 || nueva_fecha.mes == 6 || nueva_fecha.mes == 9 || nueva_fecha.mes == 11)
						{
							nueva_fecha.dia = fecha.dia + cantidadSuma;
							if(nueva_fecha.dia > 30)
							{		
								do
								{
								auxdia = nueva_fecha.dia - 30;
								nueva_fecha.mes = fecha.mes + 1;
								}while(auxdia > 30)
								nueva_fecha.dia = auxdia;
								nueva_fecha.ano = fecha.ano;
							}
							else
							{
								nueva_fecha.dia = fecha.dia + cantidadSuma;
								nueva_fecha.mes = fecha.mes;
								nueva_fecha.ano = fecha.ano;
							}
						}
					}		
				}
			}	
	 	}
	}
	
	return nueva_fecha;
}

Fecha restaFecha(Fecha fecha, int tipo, int cantidadResta)
{
	Fecha nueva_fecha;
	int auxmes, rest;
	
	if(tipo == ANO)
	{
		nueva_fecha.dia = fecha.dia;
		nueva_fecha.mes = fecha.mes;
		nueva_fecha.ano = fecha.ano - cantidadResta;
	}
	else
	{
		if(tipo == MES)
		{
			nueva_fecha.dia = fecha.dia;
			nueva_fecha.mes = fecha.mes - cantidadResta;
			rest = nueva_fecha.mes;
			if(nueva_fecha.mes < 1)
			{
				do
				{
				nueva_fecha.mes = 12
				auxmes = nueva_fecha.mes + rest;
				nueva_fecha.ano = fecha.ano - 1;
				}while(auxmes < 1)
				nueva_fecha.mes = auxmes;
			}
			else
				nueva_fecha.ano = fecha.ano;
		}
		else
		{
			if(tipo == DIA)
			{
				nueva_fecha.mes = fecha.mes;
				if(nueva_fecha.mes == 1 || nueva_fecha.mes == 3 ||nueva_fecha.mes == 5 ||nueva_fecha.mes == 7 ||nueva_fecha.mes == 8 ||nueva_fecha.mes == 10 ||nueva_fecha.mes == 12 ||)
				{
					nueva_fecha.dia = fecha.dia - cantidadResta;
					rest = nueva_fecha.dia;
					if(nueva_fecha.dia < 1)
					{	
						nueva_fecha.dia = 31;
						auxdia = nueva_fecha.dia + rest;
						nueva_fecha.mes = fecha.mes - 1;
						if(auxdia < 1)
						{
							restaFecha(nueva_fecha, tipo, cantidadResta);
						}
						else
						{
						nueva_fecha.dia = auxdia;
						nueva_fecha.ano = fecha.ano;
						}
					}
					else
					{
						nueva_fecha.mes = fecha.mes;
						nueva_fecha.ano = fecha.ano;
					}
				}
				else
				{
					if(nueva_fecha.mes = 2)
					{
						nueva_fecha.dia = fecha.dia - cantidadResta;
						rest = nueva_fecha.dia;
						if(nueva_fecha.dia < 1)
						{
							if(nueva_fecha.ano % 4 = 0)
							{		
								auxdia = 29 + rest;
								nueva_fecha.mes = fecha.mes - 1;
								if(auxdia < 1)
								{
									restaFecha(nueva_fecha, tipo, cantidadResta);
								}
								else
								{
									nueva_fecha.dia = auxdia;
									nueva_fecha.ano = fecha.ano;
								}
							}
							else
							{
								auxdia = 28 - rest;
								nueva_fecha.mes = fecha.mes - 1;
								if(auxdia < 1)
								{
									restaFecha(nueva_fecha, tipo, cantidadResta);
								}
								else
								{
									nueva_fecha.dia = auxdia;
									nueva_fecha.ano = fecha.ano;
								}
							}
						}
						else
						{
							nueva_fecha.mes = fecha.mes;
							nueva_fecha.ano = fecha.ano;
						}
					}
					else
					{
						if(nueva_fecha.mes == 4 || nueva_fecha.mes == 6 || nueva_fecha.mes == 9 || nueva_fecha.mes == 11)
						{
							nueva_fecha.dia = fecha.dia - cantidadResta;
							rest = nueva.fecha.dia;
							if(nueva_fecha.dia < 1)
							{		
								auxdia = 30 - rest;
								nueva_fecha.mes = fecha.mes - 1;
								if(auxdia < 1)
								{
									restaFecha(nueva_fecha, tipo, cantidadResta);
								}
								else
								{
									nueva_fecha.dia = auxdia;
									nueva_fecha.ano = fecha.ano;
								}
							}
							else
							{
								nueva_fecha.mes = fecha.mes;
								nueva_fecha.ano = fecha.ano;
							}
						}
					}		
				}
			}	
		}
	}
	
	return nueva_fecha;
}

int comparaFecha(Fecha fecha1, Fecha fecha2)
{
	int aux1 = 0, aux2 = 0, res;
	
	if(fecha1.dia < fecha2.dia)
		aux1++;
	else
		aux2++;
	
	if(fecha1.mes < fecha2.mes)
		aux1++;
	else
		aux2++;
		
	if(fecha1.ano < fecha2.ano)
		aux1++;
	else
		aux2++;
		
	if(aux1 == 3)
		res = 1;
	else
		if(aux2 == 3) 
			res = -1;
		else
			res = 0;
		
	return res;
			
}

void imprimeFecha(Fecha fecha)
{
	printf("Dia %d", fecha.dia);
	printf("Mes %d", fecha.mes);
	printf("Anno %d", fecha.ano);
}


