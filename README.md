# Exemple de création de bibliothèques partagée et statique

Pour utiliser les exécutables compilés avec la bibliothèque partagée 
il faut mettre la variable d'environnement LD_LIBRARY_PATH dans la console:

lancer directement le programme va produire une erreur:

```
$ ./prog1.exe 

./prog1.exe: error while loading shared libraries: libcomplex.so: cannot open shared object file: No such file or directory
```
on met à jour la variable comme suit:

```
$ export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
$ echo $LD_LIBRARY_PATH 
I_am_here:
$ ./prog1.exe 
module = 1.3
prog1.exe done.
```