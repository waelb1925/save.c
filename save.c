#include "save.h"

void sauvegarde (char fich[40],jeu *game)
{
	int i;
	FILE *f;
	
	f=fopen(fich,"a+b");

	
	
	
           fwrite(&(game->B1),sizeof(Background),1,f);

	/*fwrite(&(game->s1),sizeof(score),1,f);
	fwrite(&(game->v1),sizeof(vie),1,f);
	fwrite(&(game->s2),sizeof(score),1,f);
	fwrite(&(game->v2),sizeof(vie),1,f);*/
	

	
	fclose(f);
	
}

void lire (char fich[40],jeu *game)
{
	int i;
	FILE *f;
	
	f=fopen(fich,"a+b");
	if (f==NULL)
	{
	   
		printf("erreur, fichier ne peut pas etre ouvert\n");
		exit(0);

		
	}
	
	else
	{
		
		
	//fread(&(game->v1),sizeof(Voiture),1,f);
        fread(&(game->B1),sizeof(Background),1,f);
       

	
	}
	
	fclose(f);
}
