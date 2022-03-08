#ifndef PP_H_INCLUDED
#define PP_H_INCLUDED

#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
//#include<SDL/SDL_mixer.h>
//#include <SDL/SDL_ttf.h>



typedef struct
{

int Nbr_Score ;
SDL_Surface Score_img , Score_Reach ;
SDL_Rect Position_score , Position_score_reach ;

}	Score ;

typedef struct
{

SDL_Surface *Sprite_sheet ;
SDL_Rect Position_intiale , Pos_Sprite[5];
Life Vie_perso ;
Score Score_perso ;
int Direction ;
double vitesse , acceleration ;
int up ;
int frame ;

}	Personnage_Principal;

void init(Personnage_Principal *p) ;
void initPerso(Personnage_Principal*p) ;
void afficherPerso(Personnage_Principal *p , SDL_Surface *screen)  ;


#endif // PP_H_INCLUDED
