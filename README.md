# TP05 - Structures itératives - Compléments
**STS 1CIEL** - Cette fois-ci nous allez plus loin sur l'utilisation des boucles et boucles imbriquées afin de parcourir des tableaux et faire des dessins sur le terminal.

Ce repository est un projet CLion dans lequel vous trouverez un certain nombre de fichiers `.cpp` qui vont vous permettre de coder chaque exercice demandé. Une fois terminé il suffira de faire un commit, puis un push vers GitHub afin de rendre votre travail.


## Exo1 - Damier de nombres

Réaliser un programme qui affiche un damier de forme carrée, de côté de longueur $n>0$ et rempli alternativement du nombre 4 et du nombre 2. La case en haut à gauche sera toujours 4. Par exemple, pour $n=7$, le damier aura l'allure suivante :

```text
4 2 4 2 4 2 4
2 4 2 4 2 4 2
4 2 4 2 4 2 4
2 4 2 4 2 4 2
4 2 4 2 4 2 4
2 4 2 4 2 4 2
4 2 4 2 4 2 4
```

Il est possible de coder l'exercice de plusieurs façons. On pourra imaginer que la grille est numérotée par ligne et par colonne et on remarquera que tous les 4 de la grille sont à des indices de ligne et de colonne qui ont toujours la même parité (soit les deux indices sont pairs, soit les deux indices sont impairs).

## Exo2 - Liste de nombres premiers

### Première étape
Écrire un programme pour savoir si un nombre n donné est premier ou pas.

**Rappel** : Un nombre est premier s'il n'est divisible que par 1 et lui-même. 

▶︎ [Wikipédia Nombre Premier](https://fr.wikipedia.org/wiki/Nombre_premier)

### Deuxième étape
Écrire un code qui affiche les N premiers nombres premiers. (et non pas les nombres premiers inférieurs ou égaux à N)


## Exo3 - Nombres de Harshad
On dit qu'un entier `n>0` est un nombre de Harshad s'il est divisible par la somme de ses chiffres. Par exemple, 42 est un nombre de Harshad car la somme de ses chiffres est 6 et 42 est un multiple de 6. En revanche, 32 n'est pas un nombre de Harshad puisque 32 n'est pas un multiple de 5.

Déterminer la liste des nombres de Harshad ayant 1, 2 ou 3 chiffres (on trouvera une liste de 212 entiers). On utilisera 3 boucles `for` imbriquées et un vecteur pour stocker ces nombres.
