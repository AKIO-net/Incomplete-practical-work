#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>
#define pi 3.141592653589793
#include <time.h>
#define L 50

int main()
{
    int A, B, C, N=5, K=3, E, D, a=0, b=0, c=1, i=0, j=0, k=0,U0 = 0, U1 = 1, U2 = 2, UN, n, temp, T[5]= {0,0,0,0,0},fac,fac1,etoiles,mult1,entier;
    int ninterger, num_par,bin,oct,decimale,decimale1,bina[20],octa[20],annee, note,num1,num2,nbr_prem,div1,somme_divis,entier_donne,boolian=0, pyramide;
    int Cels,F,nbr_fort,modulo,somme_mod,nbr_autom,s_carre,temperature[6], scr[4][4],classm[4],marque[4]={0},encai[4]={0},diff[4];
    int total[7][3],tjour[7]={0},tcaisse[3]={0},caisse,jour,rent[7],decrypt[50],decrypt1[50],Tl[25],Tb[25],tp47[50],couples[50][2],gri[10][10],grnd,ok;
    int letotal = 0,range, col,r,degP, degQ, degR,PQ[20], Q[20], R[20],val,choose,Determinant,choix1,trouve;
    float X, Y, Z, M, P, S,x0,mt[4][4], O[4][4], second[4][4], HY[4][4],tri = 0;
    bool A1, B1, C1, D1, E1;
    setlocale(LC_ALL,"");
    char rep='A',rep2, ch, LOL,hexa[20],signe,equipe,equipe0,Matrice[5][5],MOT[50],character,playlist[5][L],rech[L];
    int choix;
    while(toupper(rep) != 'Q'){
        system("cls");
        printf("\n\t\t===============================================\n");
        printf("\t\t\t****\033[1;34m Liste des TPs en Langage C \033[0m****\n");
        printf("\t\t\t              -by-\n");
        printf("\t\t\t     \e[1mBELLEILI Hamed Zakaria\e[0m\n");
        printf("\t\t===============================================\n\n\n");
        printf("TP 01 : Somme de deux entiers\n");
        printf("TP 02 : Suface et le perimetre d'un rectangle\n");
        printf("TP 03 : Suface et le perimetre d'un carre\n");
        printf("TP 04 : Suface et le perimetre d'un cercle\n");
        printf("TP 05 : Salaire net\n");
        printf("TP 06 : permuter deux entiers\n");
        printf("TP 07 : Resoudre une equation du second degre\n");
        printf("TP 08 : Pair ou impair \n");
        printf("TP 09 : Le max et la somme de trois nombres\n");
        printf("TP 10 : Le prix de vente d'un article à partir de son prix\n");
        printf("TP 11 : Exo 03 TD 1\n");
        printf("TP 12 : Exo 04 TD 1(le signe de somme et produit de deux entiers)\n");
        printf("TP 13 : Exo 05 TD 1(prix a partir du poid)\n");
        printf("TP 14 : Exo 06 TD 1(colonne et rangée)\n");
        printf("TP 15 : Exo 07 TD 1(numero de la medaille)\n");
        printf("TP 16 : Exo 08 TD 1(choix de la question)\n");
        printf("TP 17 : Exo 09 TD 1(miroir d'un nombre) \n");
        printf("TP 18 : Exo 10 TD 1(PGCD en deux methodes)\n");
        printf("TP 19 : Exo 11 TD 1(calcule du ppcm)\n");
        printf("TP 20 : Exo 12 TD 1(calcule de UN)\n");
        printf("TP 21 : Moyenne de N valeurs données\n");
        printf("TP 22 : trier dans l'ordre croissant 5 entiers \n");
        printf("TP 23 : compter et afficher le nombre de repetition d'un reel \n");
        printf("TP 24 : nieme terme de fibonacci \n");
        printf("TP 25 : compter le nombre de valeur paires et impaires parmi une liste \n");
        printf("TP 26 : CALCULE DU FACTORIEL \n");
        printf("TP 27 : afficher un tringle d'* \n");
        printf("TP 28 : afficher les tables de multiplication \n");
        printf("TP 29 : somme des chiffres pairs d'un nombre \n");
        printf("TP 30 : nombre parfait \n");
        printf("TP 31 : binaire,octale,hexadecimale \n");
        printf("TP 32 : année bissextile \n");
        printf("TP 33 : afficher la note et l'appreciation \n");
        printf("TP 34 : lire une operation et afficher le resultat \n");
        printf("TP 35 : determiner si un entier est premier \n");
        printf("TP 36 : afficher la somme des diviseurs positifs \n");
        printf("TP 37 : lire N et afficher les nombres premiers \n");
        printf("TP 38 : afficher une pyramide \n");
        printf("TP 39 : afficher les equivalence de temperatures \n");
        printf("TP 40 : nombre fort \n");
        printf("TP 41 : nombre automorphe \n");
        printf("TP 42 : engistrer les temp sur 7 jours \n");
        printf("TP 43 : creer une playliste \n");
        printf("TP 44 : MINI CHAMPIONNAT \n");
        printf("TP 45 : calcule du totale par jours et par caisses \n");
        printf("TP 46 : cryptage et decryptage \n");
        printf("TP 47 : tableau compresse \n");
        printf("TP 48 : battaille navale \n");
        printf("TP 49 : Polynomes P et Q... \n");
        printf("TP 50 : Matrice 3X3 4X4 calcule de determinant + multiplication par l'inverse \n");
        printf("\n\tChoisissez le numéro du TP que vous voulez exécuter : ");
        scanf("%d",&choix);
        while (getchar() != '\n'); //c'est pour régler le probleme du switch 0.X
        system("cls");
        switch (choix){
        case 1:
            printf("\t\t\033[1;34m TP 01 : Somme de deux entiers\033[0m\n\n");
            printf("Entrer la valeur de A :\n");
            scanf("%d",&A);
            printf("Entrer la valeur de B\n");
            scanf("%d",&B);
            C =A+B;
            printf("A + B = %d",C);

            break;
        case 2:
            printf("\t\t\033[1;34m TP 02 : Suface et le perimetre d'un rectangle\033[0m\n\n");
            printf("Entrer la Longueur du rectangle :\n");
            scanf("%f",&X);
            printf("Entrer la Largeur du rectangle :\n");
            scanf("%f",&Y);
            P =2*(X+Y);
            S =X*Y;
            printf("Le perimetre = %.3f",P);
            printf("\nLa surface = %.3f",S);

            break;
        case 3:
            printf("\t\t\033[1;34m TP 03 : Suface et le perimetre d'un carre\033[0m\n\n");
            printf("\t\tTP 02 : Suface et le perimetre d'un rectangle\n");
            printf("Entrer la valeur d'un coté :\n");
            scanf("%f",&X);
            P =4*X;
            S =X*X;
            printf("Le perimetre = %.3f",P);
            printf("\nLa surface = %.3f",S);

            break;
        case 4:
            printf("\t\t\033[1;34m TP 04 : Suface et le perimetre d'un cercle\033[0m\n\n");
            printf("Voulez vous entrer :\n"),
            printf("1 - Le rayon\n");
            printf("2 - Le diametre\n(1 ou 2)\n");
            scanf("%d",&A);
            if (A == 1) {
                    printf("Entrez le rayon : ");
                    scanf("%f",&X);
                    P= 2*pi*X;
                    S= pi*X*X;
                    printf("Le perimetre = %.3f",P);
                    printf("\nLa surface = %.3f",S);
                    break;
            }
                else if (A == 2) {
                    printf("Entrez le diametre : ");
                    scanf("%f",&X);
                    P= 2*pi*(X/2);
                    S= pi*(X/2)*(X/2);
                    printf("Le perimetre = %.3f",P);
                    printf("\nLa surface = %.3f",S);
            }

            break;
        case 5:
            printf("\t\t\033[1;34m TP 05 : Salaire net\033[0m\n\n");
            printf("Entrer le salaire brut : \n");
            scanf("%f", &X);
            printf("Entrer le taux de retenue : \n");
            scanf("%f", &Y);
            Z =X-(X*Y)/100;
            printf("Le salaire net est : %.3f \n", Z);


            break;
        case 6:
            printf("\t\t\033[1;34m TP 06 : permuter deux entiers\033[0m\n\n");
            printf("entrer la valeur de A :\n");
            scanf("%d",&A);
            printf("entrer la valeur de B :\n");
            scanf("%d",&B);
            C=B;
            B=A;
            A=C;
            printf("A = %d \nB = %d",A,B);
            break;
        case 7:
            printf("\t\t\033[1;34m TP 07 : Resoudre une equation du second degre\n\n\033[0m");
            printf("entrer la valeur de A\n");
            scanf("%f",&X);
            printf("entrer la valeur de B\n");
            scanf("%f",&Y);
            printf("entrer la valeur de C\n");
            scanf("%f",&Z);
            S = Y*Y-(4*X*Z);
            if (X == 0 && Y == 0 && Z == 0) {
                printf("ERROR : equation impossible.\n");
            }
            else {
            if (S > 0) {
                P = (-Y+sqrt(S))/(2*X);
                M = (-Y-sqrt(S))/(2*X);
                printf("Voici la solution\n\n");
                printf("X1 = %.2f \nX2 = %.2f",P,M);
            }
            else if (S == 0) {
                P = -Y/(2*X);
                printf("Voici la solution\n\n");
                printf("X = %.2f",P);
            }
            else printf("pas de solution réelle (solutions Imaginaires)");
        }

            break;
        case 8:
            printf("\t\t\033[1;34m TP 08 : pair ou impair\n\n\033[0m");
            printf("Entrer un nombre :\n");
            scanf("%d",&A);
            if (A % 2 == 0) {
                printf("le nombre %d est pair",A);
            }
            else printf("le nombre %d est impair",A);

            break;
        case 9:
            printf("\t\t\033[1;34m CC1 : Le max et la somme de trois nombres\n\n\033[0m");
            printf("-entrer la valeur de A\n");
            scanf("%f",&X);
            printf("-entrer la valeur de B\n");
            scanf("%f",&Y);
            printf("-entrer la valeur de C\n");
            scanf("%f",&Z);
            S = X+Y+Z;
            printf("la somme est %.2f \n",S);
            if (X>=Y && X>=Y) {
                printf("le max est %f",X);
            }
            else if (Y>=X && Y>=Z) {
                printf("le max est %f",Y);
            }
            else printf("le mex est %f",Z);

            break;
        case 10:
            printf("\t\t\033[1;34m TP 10 : Le prix de vente d'un article à partir de son prix\n\n\033[0m");
            printf("entrer le prix de l'article : \n");
            scanf("%f",&X);
            X= X+(X*0.15);
            printf("Voici le prix de vente de votre article :\033[1;34m %.3f\033[0m",X);

            break;
        case 11:
            printf("\t\t\033[1;34m Exo 03 TD 1\n\n\033[0m");
            M=K;
            X =2*N*N;
            printf("\n%.4f\n",X);
            Y=X;
            Z=M;
            printf("%.3f,%.3f\n",Y,Z);
            E =-2-3;
            D =E % 2;
            printf("%d,%d\n",D,E);
            A=4;
            LOL='a';
            C=LOL;
            printf("%d\n",A);
            printf("%c\n",LOL);
            printf("%c\n",C);
            A1 = (!false) || (!true);
            printf("A1 = %d\n", A1);
            B1 = A1;
            printf("B1 = %d\n", B1);
            A1 = (3 > 5) || false;
            B1 = B1 || (true && A1);
            printf("B1 = %d\n", B1);
            D1 = (4 == (6 % 4 * 2)) && true;
            printf("D1 = %d\n", D1);
            E1 = ((3 + 7 / 2) <= 5) || false;
            printf("E1 = %d\n", E1);
            C1 = !(D1 || E1);
            printf("C1 = %d\n", C1);

            break;
        case 12:
            printf("\t\t\033[1;34m Exo 04 TD 1 (le signe de somme et produit de deux entiers)\n\n\033[0m");
            printf("entrer la valeur de A :\n");
            scanf("%d",&A);
            printf("entrer la valeur de B :\n");
            scanf("%d",&B);
            printf("la somme : %d + (%d)\nle produit : %d x %d",A,B,A,B);
            printf("\nVous comfimez ? (O/N)\n");
            scanf(" %c",&rep2);
            while (toupper(rep2) == 'O') {
            if ((A>0 && B>0) || (A<0 && B<0)) {
                printf("le signe du produit est \033[31mpositif\033[0m\n");
            }
            else if ((A>0 && B<0) || (A<0 && B>0)) {
                printf("le signe du produit est \033[31mnegatif\033[0m\n");
            }
             else if (A==0 || B==0) {
                 printf("le signe du produit est \033[31mnulle\033[0m\n");
            }
            if (-B>A) {
                printf("le signe de la somme est \033[31mnegatif\033[0m\n");
                }
            else if (A>-B) {
                printf("le signe de la somme est \033[31mpositif\033[0m\n");
            }
            else if ((A == 0 && B ==0) || (A==-B)) {
                printf("la somme est \033[31mnulle\033[0m\n");
            }
             printf("\nVoulez-vous recommencer ? (O/N) : ");
             scanf(" %c", &rep2);
             if (toupper(rep2) == 'O') {
                 printf("\nChoisissez à nouveau les valeurs.\n");
                 printf("Entrez la valeur de A : ");
                 scanf("%d", &A);
                 printf("Entrez la valeur de B : ");
                 scanf("%d", &B);
            }
         }

            break;
        case 13:
            printf("\t\t\033[1;34m Exo 05 TD 1(prix a partir du poid)\n\n\033[0m");
            printf("entrer le poid que vous voudriez (minimum 1)\n");
            scanf("%f",&X);
            if (X<1) {
                printf("\n\033[31mERROR\033[0m: Valeur impossible");
            }
            else if (X<=20) {
                printf("\n\033[31mLe prix est de 25 DA\033[0m");
            }
            else if (X<=50) {
                printf("\n\033[31mLe prix est de 40 DA\033[0m");
            }
            else if (X<=100) {
                printf("\n\033[31mLe prix est de 50 DA\033[0m");
            }
            else if (X>100) {
                A= X/100;
                A= A*10+40;
                printf("\nLe prix est de \033[31m%d DA\033[0m",A);
            }
            break;
        case 14:
            printf("\t\t\033[1;34m Exo 06 TD 1(colonne et rangée\n\n\033[0m");
            printf("entrer le numero du siege de l'eleve\n");
            scanf("%d",&A);
            if (A<1 || A>200) {
                printf("ERROR: Introuvable");
            }
            else if (A%20 == 0){
                B= A%20;
                C=20;
                printf("la rangée: %d \nla colonne: %d",B,C);
            }
            else if (A%20 != 0) {
                B= (A/20)+1;
                C= (A%20);
                printf("la rangée: %d \nla colonne: %d",B,C);
            }

            break;
        case 15:
            printf("\t\t\033[1;34m Exo 07 TD 1 (numero de la medaille)\n\n\033[0m");
            printf("taper le numéro du classement de l'athlete\n");
            scanf("%d",A);
            if (A<1) {
                printf("ERROR");
            }
            else if (A==1) {
                printf("L'athlete a eu \033[1;33mune medaille d'or\033[0m");
            }
            else if (A==2){
                printf("l'athlete a eu une medaille d'argent");
            }
            else if (A==3) {
                printf("l'athlete a eu une medaille de Bronze");
            }
            else
                printf("Aucune medaille ;(");
            break;
        case 16:
            printf("\t\t\033[1;34m Exo 08 TD 1\n\n\033[0m");
            printf("EXO8, Question 1\n");
            printf("EXO8, Question 2\n");
            printf("EXO8, Question 3\n");
            printf("EXO8, Question 4\n");
            printf("EXO8, Question 5\n");
            printf("EXO8, Question 6\n");
            printf("Choisis le num de la question (entre 1 et 6)\n");
            scanf("%d",&E);

        switch (E) {
        case 1:
            printf("Entrez une séquence de caractères (terminez par #) :\n");
            scanf(" %c", &ch);

            while (ch != '#') {
            switch (1) {
             case 1:
                if (ch >= 'A' && ch <= 'Z')
                    a= a+1;
                else if (ch >= 'a' && ch <= 'z')
                    b= b+1;
                break;
             }

            scanf(" %c", &ch);
           }
            printf("\nNombre de majuscules : %d\n", a);
            printf("Nombre de minuscules : %d\n", b);
            break;
        case 2:
            printf("Entrez le nombre d'éléments : ");
            scanf("%d", &A);

            printf("Entrez le premier nombre : ");
            scanf("%f", &X);
            Z = Y = X;
            for (i = 2; i <= A; i=i+1) {
            printf("Entrez le nombre %d : ", i);
            scanf("%f", &X);

            if (X < Z) Z = X;
            if (X > Y) Y = X;
    }
            printf("Minimum = %.2f\n", Z);
            printf("Maximum = %.2f\n", Y);
            break;
         case 3:
            printf("Entrez A : ");
            scanf("%d", &A);
            printf("Entrez B (diviseur) : ");
            scanf("%d", &B);

            C = A;
            while (C >= B) {
            C = C-B;
            a=a+1;
            }
            printf("Quotient = %d\n", a);
            printf("Reste = %d\n", C);
            break;
         case 4:
            printf("Entrez un entier positif : ");
            scanf("%d", &A);

            if (A <= 1) c = 0;
            else {
            for (i = 2; i * i <= A; i=i+1) {
            if (A % i == 0) {
                c = 0;
              }
             }
           }

            if (c)
            printf("%d est un nombre premier.\n", A);
            else
            printf("%d n'est pas un nombre premier.\n", A);
            break;
         case 5:
            printf("Afficher alphabet majuscule (M) ou minuscule (m) ? ");
            scanf(" %c", &LOL);

            if (LOL == 'M' || LOL == 'm') {
            if (LOL == 'M') {
            for (char XD = 'A'; XD <= 'Z'; XD=XD+1)
                printf("%c ", XD);
               }
            else {
            for (char XD = 'a'; XD <= 'z'; XD=XD+1)
                printf("%c ", XD);
            }
             printf("\n");
            }
             else {
            printf("Choix invalide.\n");
            }
            break;
         case 6:
            printf("Entrez un entier positif A : ");
            scanf("%d", &A);
            printf("Entrez un chiffre C (0 jusqu'a 9) : ");
            scanf("%d", &C);
            B = A;
            while (B > 0) {
            if (B % 10 == C)
            a=a+1;
            B = B/10;
            }
            printf("Le chiffre %d apparait %d fois dans %d.\n", C, a, A);
            }
            break;
        case 17:
            printf("\t\t\033[1;34m Exo 09 TD 1(miroir d'un nombre)\n\n\033[0m");
            printf("Entrez un entier positif A : \n");
            scanf("%d", &A);
            while (A > 0) {
            a = a * 10 + (A % 10);
            A = A / 10;
            }
            printf("Image miroir : %d\n", a);

            break;
        case 18:
            printf("\t\t\033[1;34m Exo 10 TD 1(PGCD en deux methodes)\n\n\033[0m");
            printf("Methode 1: Par soustractions successives\n");
            printf("Methode 2: Par divisions euclidiennes\n\n");
            printf("selectionne une methode (1 ou 2)");
            scanf("%d",&E);
            switch(E) {
            case 1:
               printf("Entrez deux entiers positifs A et B : ");
               scanf("%d %d", &A, &B);
               while (A != B) {
                if (A > B)
                  A = A - B;
                else
                  B = B - A;
                 }
               printf("Le PGCD par soustraction est : %d\n", A);
               break;
            case 2:
               printf("Entrer deux entiers positifs A et B : ");
               scanf("%d %d", &A, &B);
               while (B != 0) {
                C = A % B;
                A = B;
                B = C;
                  }
               printf("Le PGCD par division euclidienne est : %d\n", A);
                }
                break;

            break;
        case 19:
            printf("\t\t\033[1;34m Exo 11 TD 1(calcule du ppcm)\n\n\033[0m");
            printf("Entrez deux entiers positifs A et B : \n");
            scanf("%d %d", &A, &B);
            if (A > B)
                C = A;
            else
                C = B;
            while (1) {
                if (C%A== 0 && C%B== 0) {
                   printf("Le PPCM de %d et %d est : %d\n", A, B, C);
                   }
            break;
            C=C+1;
                }
            break;
        case 20:
            printf("\t\t\033[1;34m Exo 12 TD 1\n\n\033[0m");
            printf("Entrez la valeur de N : ");
            scanf("%d", &A);
            B = 3;
            if (A == 0)
                UN = U0;
            else if (A == 1)
                UN = U1;
            else if (A == 2)
                UN = U2;
            else {
              for (B;B <= A ; B=B+1) {
                 UN = 2 * U2 + 3 * U0;
                 U0 = U1;
                 U1 = U2;
                 U2 = UN;
               }
              }
             printf("La valeur de U%d est : %d\n", A, UN);

            break;
        case 21:
            printf("\t\t\033[1;34m Moyenne de N valeurs données \n\n\033[0m");
            printf("entrer le nombre d'entiers pour calculer leurs moyenne : \n");
            scanf("%d",&n);
            C=0;
            for (a=1;a<=n;a++) {
                printf("entrer le nombre numéro %d : ",a);
                scanf("%d",&B);
                C=B+C;
            }
            X=C/(float)n;
            printf("voici la moyenne des %d nombres entrées : %.2f",n,X);
            break;
        case 22:
             printf("\t\t\033[1;34m trier dans l'ordre croissant 5 entiers \n\n\033[0m");
             for(i=0;i<=4;i++) {
                printf("entrer le nombre numéro %d : ",i+1);
                scanf("%d",&T[i]);
             }
             for (i=0;i<=4;i++){
                for(j=0;j<=4-i;j++){
                    if(T[j]>T[j+1]) {
                        temp=T[j];
                        T[j]=T[j+1];
                        T[j+1]=temp;
                    }
                }
            }
                for (i=0;i<=4;i++) {
                    printf("%d ",T[i]);
                }

             break;
        case 23:
            printf("\t\t\033[1;34m compter et afficher le nombre de repetition d'un reel \n\n\033[0m");
            printf("donne le nombres de reel que tu veux rentrer : \n");
            scanf("%d",&n);
            printf(" donne moi le nombre reel que tu veux chercher dans la liste : \n");
            scanf(" %f",&X);
            j=0;
            for (i=0;i<n;i++) {
                printf("entrer le nombre %d : ",i+1) ;
                scanf("%f",&Y);
                if (Y==X) {j++;}
            }
            printf("voici le nombre de repetition de votre nombre %f : %d",X,j);
            break;
        case 24:
            printf("\t\t\033[1;34m nieme terme de fibonacci \n\n\033[0m");
            printf("entrer le terme de fibonacci que vous souhaitez avoir :  ");
            scanf("%d",&n);
            if(n==0) {UN=0;}
            if(n==1 || n==2) {UN=1;}
            if(n==3) {UN=2;}
            else if (n>3) {
            for(i=0;i<n-3;i++) {
                UN=U2+U1;
                temp=U2;
                U2=UN;
                U1=temp;
            }
            }
            printf("Un = %d",UN);
            U1=1;U2=2;
            break;
        case 25:
            printf("donner le nombre d'entier que vous voulez entrer : ");
            scanf("%d",&n);
            j=0;k=0;
            for(i=0;i<n;i++) {
                printf("entrer le nombre numéro %d : ",i+1);
                scanf("%d",&A);
                if (A%2==0) {j++;}
                else if(A%2!=0) {k++;}
            }
            printf("le nombre des nombres pairs = %d \nle nombre des nombres imapairs = %d",j,k);
            break;
        case 26:
            printf("\t\t\033[1;34m CALCULE DU FACTORIEL \n\n\033[0m");
            printf("entrer le un entier positif : ");
            scanf("%d",&fac);
            fac1=fac;
            for(i=1;i<=fac-1;i++){
                fac1=fac1*i;
            }
            printf("%d! = %d",fac,fac1);
            break;
        case 27:
            printf("\t\t\033[1;34m AFFICHER UN TRIANGLE D'ETOILES \n\n\033[0m");
            printf("entrer un nombre pour faire un triangle d'* : ");
            scanf("%d",&etoiles);
            for(i=1;i<=etoiles;i++){
                for(j=0;j<i;j++) {
                    printf("*");
                    }
                    printf("\n");
            }
            break;
        case 28:
            printf("\t\t\033[1;34m TABLES DE MULTIPLICATION : \n\n\033[0m");
            for(i=1;i<=10;i++){
                for(j=1;j<=10;j++){
                    printf("%3d ",i*j);
                }
            printf("\n");

            }
            break;
        case 29:
            printf("\t\t\033[1;34m SOMME DES CHIFFRES PAIRS D'UN ENTIER : \n\n\033[0m");
            printf("entrer un entier : ");
            scanf("%d",&entier);
            j=0;
            while(entier>0) {
                ninterger=entier%10;
                if(ninterger%2==0){
                   j=ninterger+j;
                }
                entier=entier/10;
               }
            printf("somme des chiffres pairs = %d",j);
            break;
        case 30:
            printf("\t\t\033[1;34m NOMBRE PARFAIT : \n\n\033[0m");
            printf("entrer un entier positif : ");
            scanf("%d",&num_par);
            j=0;
            for(i=1;i<=num_par/2;i++){
                if(num_par%i==0){
                    j=j+i;
                }
            }
            if(j==num_par){
                printf("le nombre %d est parfait !",j);
            }
            else if (j!=num_par){
                printf("le nombre %d n'est pas parfait !",num_par);
            }
            break;
        case 31:
            printf("\t\t\033[1;34m V_DECIMALE_BINAIRE_OCTALE_HEXADECIMALE : \n\n\033[0m");
            printf("entrer un entier positif : ");
            scanf("%d",&decimale);
            printf("voici la valeur en decimale : %d \n",decimale);
            bin=decimale;
            oct=decimale;
            i=0;
            while(decimale>0){
                decimale1=decimale%16;
                if(decimale1<10) {
                    hexa[i]= decimale1 + '0';
                }
                if(decimale1>10){
                    hexa[i]= (decimale1-10)+ 'A';
                }
                decimale=decimale/16;
                i++;

            }
            printf("voici la valeur en hexadecimale : ");
            for (j=i-1;j>=0;j--){
                printf(" %c",hexa[j]);
            }
            i=0;
            while(bin>0){
                bina[i]=bin%2;
                bin=bin/2;
                i++;
            }
            printf("\nvoici la valeur en binaire : ");
            for(j=i-1;j>=0;j--){
                printf("%d",bina[j]);
            }
            i=0;
            while(oct>0){
                octa[i]=oct%8;
                oct=oct/8;
                i++;
            }
            printf("\nvoici la valeur en octale : ");
            for(j=i-1;j>=0;j--){
                printf("%d",octa[j]);
            }
            break;
        case 32:
            printf("\t\t\033[1;34m ANNEE BISSEXTILE : \n\n\033[0m");
            printf("donner une année : ");
            scanf("%d",&annee);
            if(annee%4==0 && (annee%100!=0 || annee%400==0)){
                printf("cette année est bissextile");
            }
            else {printf("cette années n'est pas bissextile");}
            break;
        case 33:
            printf("\t\t\033[1;34m AFFICHER L'APPRECIATION D'UNE NOTE : \n\n\033[0m");
            printf("entrer une note :");
            scanf("%d",&note);
            switch (note) {
        case 0 ... 9:
            printf("insuffisant");
            break;
        case 10 ... 11:
            printf("passable");
            break;
        case 12 ... 13:
            printf("assez bien");
            break;
        case 14 ... 15:
            printf("bien");
            break;
        case 16 ... 20:
            printf("trés bien");
            break;
            }
            break;
        case 34:
            printf("entrer une opération (exemple 1 + 1) \n");
            scanf("%d %c%d",&num1,&signe,&num2);
            switch (signe) {
        case '+':
            printf("%d + %d = %d",num1,num2,num1+num2);
        break;
        case '-':
            printf("%d - %d = %d",num1,num2,num1-num2);
        break;
        case '*':
            printf("%d * %d = %d",num1,num2,num1*num2);
        break;
        case '/':
            X=(float)num1/num2;
            printf("%d / %d = %.2f",num1,num2,X);
        break;
            }
            break;
        case 35:
            printf("\t\t\033[1;34m LIRE UN NOMBRE PREMIER : \n\n\033[0m");
            printf("entrer un entier : ");
            scanf("%d",&nbr_prem);

            for(i=2;i<=((nbr_prem+1)/2);i++){
               if(nbr_prem%i==0){
                printf("ce nombre n'est pas premier !");
                break;
               }
            }
            if(i>=nbr_prem/2){
                printf("ce nombre est premier");
            }
            break;
        case 36:
            printf("\t\t\033[1;34m SOMME DE TOUS LES DIVISEUR D'UN ENTIER DONNé : \n\n\033[0m");
            printf("entrer un entiers : ");
            scanf("%d",&entier_donne);
            somme_divis=0;
            for(i=1;i<=entier_donne/2;i++){
                if(entier_donne%i==0){
                    somme_divis=somme_divis+i;
                }
            }
            printf("la somme des diviseurs = %d",somme_divis+entier_donne);
            break;
        case 37:
            printf("\t\t\033[1;34m AFFICHER TOUS LES NOMBRES PREMIERS <=N : \n\n\033[0m");
            printf("donner la valeur à N : ");
            scanf("%d",&nbr_prem);

            k=0;
            for(i=3;i<=nbr_prem;i++){
                boolian=0;
                for(j=2;j<i;j++){
                    if (i%j==0){
                            boolian=1;
                        break;
                    }
                }
               if(boolian==0){
                printf("%3d ",i);
               }
            }
            break;
        case 38:
            printf("\t\t\033[1;34m AFFICHER UNE PYRAMIDE : \n\n\033[0m");
            printf("entrer une valeur n pour afficher une pyramide : ");
            scanf("%d",&pyramide);
            k=1;
            for(i=1;i<=pyramide;i++){
                for(j=0;j<i;j++){
                    printf("%d",k);
                }
                printf("\n");
                k++;
            }
            break;
        case 39:
            printf("\t\t\033[1;34m LES EQUIVALENCES DE TEMPERATURES en °F : \n\n\033[0m");
            printf("C F\n");
            for(i=0;i<=10;i++){
                Cels=i*10;
                F=i*18+32;
                printf("%d %d\n",Cels,F);
            }
            break;
        case 40:
            printf("\t\t\033[1;34m NOMBRE FORT : \n\n\033[0m");
            printf("enter un nombre : ");
            scanf("%d",&nbr_fort);
            somme_mod=0;
            C=nbr_fort;
            while(nbr_fort>0){
                modulo=nbr_fort%10;
                k=modulo;
                for(i=1;i<modulo;i++){
                    k=k*i;
                }
                somme_mod=somme_mod+k;
                nbr_fort=nbr_fort/10;
            }
            if(somme_mod==C){
                printf("ce nombre est fort !");
            }
            else if(somme_mod!=C){
                printf("ce nombre n'est pas fort !");
            }
            break;
            k=0;
            C=0;
        case 41:
            printf("\t\t\033[1;34m NOMBRES AUTOMORPHES : \n\n\033[0m");
            printf("entrer un entier : ");
            scanf("%d",&nbr_autom);
            i=1;
            j=-1;
            boolian=0;
            s_carre=nbr_autom*nbr_autom;
            while(j!=s_carre){
                i=i*10;
                j=s_carre%i;
                if(nbr_autom==j){
                    printf("ce nombre est automorphe !");
                    boolian=1;
                    break;
                }

            }
            if(boolian==0){
                printf("ce nombre n'est pas automorphe !");
            }
            break;
        case 42:
            printf("\t\t\033[1;34m TEMPERATURES SUR 7 JOURS : \n\n\033[0m");
            printf("entrer les temperatures pendant les 7 jours (de samedi à vendredi) : \n");
            temp=0;
            for(i=0;i<7;i++){
            printf("jour %d de la semaine : ",i+1);
            scanf("%d",&temperature[i]);
            temp=temperature[i]+temp;
            }
            X=(float)temp/7;
            printf("voici la temperature moyenne de la semaine : %.3f \n\n",X);
            for(i=0;i<6;i++){
                for(j=0;j<6-i;j++){
                    if(temperature[j]>temperature[j+1]){
                        temp=temperature[j];
                        temperature[j]=temperature[j+1];
                        temperature[j+1]=temp;
                    }
                }
            }
            printf("le jour le plus chaud est a %d \n\nle jour le plus froid est a %d",temperature[6],temperature[0]);
            break;
        case 43:
            N=5;
            for(i=0; i<N; i++){
                printf("Chanson %d : ",i+1);
                fgets(playlist[i],L,stdin);
                playlist[i][strcspn(playlist[i],"\n")]=0;
            }
            while(choix1!=0)
            {
                printf("\n1-Afficher\n2-Rechercher\n3-Supprimer\n0-Quitter\nChoix: ");
                scanf("%d",&choix1);
                getchar();
                if(choix1==1){
                    for(i=0;i<N;i++)printf("%d:%s\n",i+1,playlist[i]);
                }
                if(choix1==2)
                {
                    printf("nom pour rechercher: ");
                    fgets(rech,L,stdin);
                    rech[strcspn(rech,"\n")]=0;
                    trouve=0;
                    for(i=0;i<N;i++){
                        if(strcmp(playlist[i],rech)==0){
                            printf("Trouvee a la position %d\n",i+1);
                            trouve=1;
                        }
                    }
                    if(!trouve)printf("pas trouvee\n");
                }
                if(choix1==3)
                {
                    printf("Nom a supprimer: ");
                    fgets(rech,L,stdin);
                    rech[strcspn(rech,"\n")]=0;
                    for(i=0;i<N;i++){
                        if(strcmp(playlist[i],rech)==0)
                        {
                            strcpy(playlist[i],"<vide>");
                            printf("delete\n");
                        }
                    }
                }

            }
            N=0;
            break;

        case 44:
            printf("\t\t\033[1;34m MINI-CHAMPIONNAT : \n\n\033[0m");
            for(i=0;i<=3;i++){
                for(j=0;j<=3;j++){
                  if(j!=i){
                  printf("buts de l'equipe  %d vs equipe  %d \n",i+1,j+1);
                  printf("score : ");
                  scanf(" %d", &scr[i][j]);
                  }
                  else {
                    scr[i][j]=0;
                  }
                }
            }
            for(i=0;i<=3;i++){
                classm[i]=i;
            }
            for(i=0;i<=3;i++){
                for(j=0;j<=3;j++){

                    marque[i]+=scr[i][j];
                    encai[j]+=scr[i][j];
                }
            }
            for(i=0;i<=3;i++){
                diff[i]=marque[i]-encai[i];
            }
            printf("\n");
            for(i=0;i<=3;i++){
                printf("le nombre de buts marqués par l'equipe %d : %d \n",i+1,marque[i]);
                printf("le nombre de but encaissé par l'equipe %d : %d \n",i+1,encai[i]);
            }
            for(i=0;i<=3;i++){
                for(j=0;j<3-i;j++){
                    if(diff[classm[j]]<diff[classm[j+1]] ||(diff[classm[j]]==diff[classm[j+1]] && marque[classm[j]]<marque[classm[j+1]])){
                        temp=classm[j];
                        classm[j]=classm[j+1];
                        classm[j+1]=temp;
                    }
                }
            }
            printf("\n\nCLASSEMENT : \n\n");
             for(i=0;i<=3;i++){
                printf("%d - equipe %d\n",i+1,classm[i]+1);
             }
             printf("vainqueur du chmpionnat : equipe %d !",classm[0]+1);
             break;
        case 45:
            printf("\t\t\033[1;34m CAISSE ET RENTABILITE : \n\n\033[0m");
            for(jour=0;jour<7;jour++){
                printf("jour %d :\n\n",jour+1);
                for(caisse=0;caisse<3;caisse++){
                    printf("caisse %d :",caisse+1);
                    scanf("%d",&total[jour][caisse]);
                }
                printf("\n\n");
            }
            printf("total par jour\n");
            for(jour=0;jour<7;jour++){
                for(caisse=0;caisse<3;caisse++){
                    tjour[jour]+=total[jour][caisse];
                }
                printf("\njour %d : %d",jour+1,tjour[jour]);
            }
            printf("\ntotal par caisse\n");
            for(jour=0;jour<7;jour++){
                for(caisse=0;caisse<3;caisse++){
                    tcaisse[caisse]+=total[jour][caisse];
                }
            }
            for(caisse=0;caisse<3;caisse++){
                printf("\ntotale caisse %d : %d",caisse+1,tcaisse[caisse]);
            }
            caisse=0;
            for(i=0;i<3;i++){
                caisse+=tcaisse[i];
            }
            printf("\ntotale global = %d",caisse);
            for(i=0;i<7;i++){
                rent[i]=i;
            }
            caisse=0;
            for(jour=0;jour<7;jour++){
                for(i=0;i<6-jour;i++){
                    if(tjour[rent[i]]<tjour[rent[i+1]]){
                        temp=rent[i];
                        rent[i]=rent[i+1];
                        rent[i+1]=temp;
                    }
                }
            }
            printf("\n\nle jours le plus rentable est le jour %d",rent[6]);
            break;
        case 46:
            printf("\t\t\033[1;34m CRYPTAGE ET DECRYPTAGE : \n\n\033[0m");
            character='A';
            for(i=0;i<5;i++){
                for(j=0;j<5;j++){
                    while(character=='X')character++;
                    Matrice[i][j]=character;
                    character++;
                }
            }
            n=0;
            printf("tepez un mot ( sans X !) : ");
            fgets(MOT, 50, stdin);
            for(k=0;MOT[k]!='\0';k++){
                for(i=0;i<5;i++){
                    for(j=0;j<5;j++){
                        if(MOT[k]==Matrice[i][j]||MOT[k]==tolower(Matrice[i][j])){
                            printf("(%d,%d) ",i,j);
                            decrypt[n]=i;
                            decrypt1[n]=j;
                            n++;
                        }
                    }
                }

            }
            printf("\n decrytpe : ");
            k=0;

            for(k=0;k<n;k++){
                i=decrypt[k];
                j=decrypt1[k];
                printf("%c",Matrice[i][j]);
            }
            break;
        case 47:
            printf("\t\t\033[1;34m COMPRESSER UN TABLEAU : \n\n\033[0m");
            n=0;
            printf("entrer la grnd du tableau (maximum 50) \n");
            while(n<1 || n>50){
                scanf("%d",&n);
            }
            for(i=0;i<n;i++){
                printf("\ntaper le nombre Number %d : ",i+1);
                scanf("%d",&tp47[i]);
            }
            k=0;
            printf("\n couples :\n");
            for(i=0;i<n;i++){
                j=1;
                while(tp47[i]==tp47[i+1]){
                    if(i<n-1){
                        j++;
                        i++;
                    }
                }
                couples[k][0]=tp47[i];
                couples[k][1]=j;
                k++;
            }
            printf("[ ");
            for(i=0;i<k;i++){
                printf("(%d,%d)",couples[i][0],couples[i][1]);
            }
            printf(" ]");
            printf("\ndecompresse :\n");
            for(i=0;i<k;i++){
                for(j=0;j<couples[i][1];j++){
                    printf("%d",couples[i][0]);
                }
            }
            break;
        case 48:
            srand(time(NULL));
            ok=1;
            for (i=0;i<10;i++)
                for (j=0;j<10;j++)
                    gri[i][j]=0;
            for (b=0;b<5;b++){
                if (b==0) grnd=3;
                else if (b==1||b==2)grnd=2;
                else grnd =1;
                for (;;){
                    r=rand()%10;
                    c=rand()%(10-grnd+1);
                    ok = 1;
                    for (j=0;j<grnd;j++)
                        if (gri[r][c + j] != 0)
                            ok = 0;

                    if (ok){
                        for (j=0;j<grnd;j++){
                            gri[r][c+j]=1;
                            letotal++;
                            }
                            break;
                        }
                    }
                }
            while (letotal>0){
                printf("\n ");
                for (j=0;j<10; j++) printf("%d",j);
                printf("\n");
                for (i =0; i<10; i++){
                    printf("%d ", i);
                    for (j=0;j<10;j++){
                        if (gri[i][j]==2) printf("X");
                        else if (gri[i][j]==3) printf("O");
                        else printf("* ");
                        }
                    printf("\n");
                    }
                printf("\ntape la range et la colonne : ");
                scanf("%d %d", &range, &col);
                if (range<0 ||range>= 10||col< 0||col>=10)
                      continue;
                if (gri[range][col]==1){
                    printf("Touche !\n");
                    gri[range][col]= 2;
                    letotal--;
                    }
                else if (gri[range][col]==0){
                    printf("Rate !\n");
                    gri[range][col]=3;
                    }
                else{
                    printf("Tu l'as deja fais\n");
                    }
                }

                printf("\n END !\n");
            break;
        case 49:
            printf("degre de P : ");
            scanf("%d",&degP);
            printf("coefficients :\n");
            for (i=0; i<= degP;i++)
                scanf("%d",&PQ[i]);
            printf("\ndegre de Q : ");
            scanf("%d",&degQ);

            printf("coefficients :\n");
            for (i=0; i<=degQ;i++){
                scanf("%d",&Q[i]);
            }
            if (degP>degQ)
            degR=degP;
            else
            degR=degQ;
            for (i =0;i<=degR;i++)
                R[i]=0;
            for (i=0;i<=degP; i++)
                R[i+(degR-degP)]+=PQ[i];
            for (i =0;i<=degQ;i++)
                R[i+(degR-degQ)]+=Q[i];
            printf("\nR(x) = P(x) + Q(x) = ");
            for (i=0; i<=degR;i++)
            {
                if (R[i]!=0){
                    printf("%d",R[i]);
                    if (degR-i> 0) printf("x^^%d ",degR - i);
                    if (i<degR) printf("+");
                }
            }
            degR=degP+degQ;

            for (i=0;i<=degR;i++)
                R[i]=0;
            for (i=0;i<=degP;i++)
                for (j=0;j<= degQ;j++)
                    R[i + j]+=PQ[i]*Q[j];
            printf("\n\nR(x) = P(x) * Q(x) = ");
            for (i=0;i<=degR;i++){
                if (R[i]!=0){
                    printf("%d",R[i]);
                    if (degR-i>0) printf("x^^%d ",degR-i);
                    if (i<degR) printf("+");
                }
            }
            printf("\n\nvaleur de x0 : ");
            scanf("%f",&x0);
            val=0;
            for (i=0;i<=degP;i++)
                val+=PQ[i]*pow(x0, degP - i);
            printf("P(%.2f)=%.2f\n",x0,val);
            break;

        case 50:
            Determinant=0;
            printf("tape la taille de la matrice 3 ou 4 4 : ");
            scanf("%d",&k);
            while (k!=3 && k!=4);
            printf("les elements de la matrice :\n");
            for (i=0;i<k;i++){
                for (j=0;j<k;j++){
                    scanf("%f",&mt[i][j]);
                }
            }
                printf("1. afficher matrice\n");
                printf("2. calcule de trace\n");
                printf("3. affiche la transposee\n");
                printf("4. calcule du determinant\n");
                printf("5. verifier inversible\n");
                printf("6. calcule de l'inverse\n");
                printf("0. quitter\n");
                printf("Choix : ");
                scanf("%d",&choose);

            switch (choose){
            case 1:
                for (i=0;i<k;i++){
                    for (j=0;j<k;j++)
                    printf("%6.2f ",mt[i][j]);
                    printf("\n");
                    }
                        break;
            case 2:
                    {
                        for (i=0; i<k;i++)
                            tri+=mt[i][i];
                        printf("Trace = %.2f\n",tri);
                        break;
                    }
                    case 3:
                        for (int i=0; i<k;i++)
                            for (int j=0;j<k;j++)
                                O[j][i]=mt[i][j];

                        printf("Transposee :\n");
                        for (int i=0; i<k; i++){
                            for (int j=0; j<k; j++)
                                printf("%6.2f ", O[i][j]);
                            printf("\n");
                        }
                        break;
                    case 4:
                        if (k==3){
                            Determinant =mt[0][0]*(mt[1][1]*mt[2][2]-mt[1][2]*mt[2][1])-mt[0][1]*(mt[1][0]*mt[2][2]-mt[1][2]*mt[2][0])+mt[0][2]*(mt[1][0]*mt[2][1]-mt[1][1]*mt[2][0]);
                        }
                        else{
                            printf("Determinant 4x4 \n");
                            break;
                        }
                        printf("Determinant=%.2f\n",Determinant);
                        break;
                    case 5:
                        if (k==3){
                            Determinant=mt[0][0]*(mt[1][1]*mt[2][2]-mt[1][2]*mt[2][1])-mt[0][1]*(mt[1][0]*mt[2][2] -mt[1][2]*mt[2][0])+mt[0][2]*(mt[1][0]*mt[2][1]-mt[1][1]*mt[2][0]);
                        }

                        if (Determinant!=0)
                            printf("La matrice est inversible\n");
                        else
                            printf("La matrice n'est pas inversible\n");
                        break;
                    case 6:
                        if (k!=3){
                            printf("Inverse uniquement pour 3x3\n");
                            break;
                        }

                        Determinant=mt[0][0]*(mt[1][1]*mt[2][2]-mt[1][2]*mt[2][1])-mt[0][1]*(mt[1][0]*mt[2][2]-mt[1][2]*mt[2][0])+mt[0][2]*(mt[1][0]*mt[2][1]-mt[1][1]*mt[2][0]);
                        if (Determinant==0){
                            printf("Matrice non inversible\n");
                            break;
                        }
                        HY[0][0]= (mt[1][1]*mt[2][2]-mt[1][2]*mt[2][1]);
                        HY[0][1]=-(mt[1][0]*mt[2][2]-mt[1][2]*mt[2][0]);
                        HY[0][2]=(mt[1][0]*mt[2][1]-mt[1][1]*mt[2][0]);
                        HY[1][0]=-(mt[0][1]*mt[2][2]-mt[0][2]*mt[2][1]);
                        HY[1][1]=(mt[0][0]*mt[2][2]-mt[0][2]*mt[2][0]);
                        HY[1][2]=-(mt[0][0]*mt[2][1]-mt[0][1]*mt[2][0]);
                        HY[2][0]=(mt[0][1]*mt[1][2]-mt[0][2]*mt[1][1]);
                        HY[2][1]= -(mt[0][0]*mt[1][2]-mt[0][2]*mt[1][0]);
                        HY[2][2]=(mt[0][0]*mt[1][1]-mt[0][1]*mt[1][0]);
                        printf("Inverse :\n");
                        for (i=0; i<3; i++){
                            for (j=0;j<3;j++){
                                second[i][j]=HY[j][i]/Determinant;
                                printf("%6.2f ",second[i][j]);
                            }
                            printf("\n");
                        }
                        break;

                    case 0:
                        printf("END\n");
                        break;

                    default:
                        printf("ERROR\n");
                    }


                while (choose != 0);






        default:
            printf("\n\t\tCet exercice n'existe pas !\n");

            break;
        }
        printf("\n\nTapez Q pour quitter ou une autre touche (un seul caractère seulement) pour lancer un autre TP : ");
        scanf(" %c",&rep);
    }
    return 0;
}
