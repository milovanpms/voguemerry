<h1 align="center">
Vogue Merry
<br/><br/>
<img src="https://cdn.discordapp.com/attachments/485464301516095509/1154158898060734534/titanic-breaks.gif" alt="Vogue Merry" width="500"/>
</h1>

<div align="center">

Prénom1 - Prénom4
<br/><br/>
Prénom2 - Prénom5
<br/><br/>
Prénom3 - Prénom6

</div>

Le Vogue Merry est un bateau piloté à distance via une application mobile, avec pour mission de récupérer des données sur l'environnement dans lequel il est lâché. Ce projet est réalisé dans le cadre des 3ème et 4ème semestres de nos études à l'ESEO, afin de continuer à exploiter la plateforme Arduino. Il est équipé de plusieurs capteurs et actionneurs dont voici une liste exhaustive:
 - Capteur de pollution de l'eau
 - Capteur de profondeur
 - Lumières pilotables
 - Dispositif sonore

## Installation des outils

Pour pouvoir collaborer sur ce repo, il vous faudra absolument installer [GitHub Desktop](https://desktop.github.com/), un logiciel GUI simple de prise en main de Git.

Pour ceux qui veulent, vous pouvez aussi installer [Visual Studio Code](https://code.visualstudio.com/download), ça vous permettra d'avoir Git intégré dans votre IDE, mais plus galère à configurer: il vous faudra notamment installer [Git CLI](https://git-scm.com/download/win) (plus rapide ou flemme = GitHub Desktop).

## Mais comment ça fonctionne

Git est un outil qui aide les développeurs travaillant en équipe (ou seuls) à gérer les modifications que chacun apporte à un projet au fil du temps: on a bien vu ce que ça a donné de travailler avec Google Drive alors plus jamais. Ça permet une collaboration complètement transparente entre chacun de nous et surtout on peut voir où on en est à tout instant.

Cet outil est accompagné de dizaines de fonctions toutes aussi intéressantes les unes des autres, mais voici quelques unes d'entre elles qui sont fondamentales:

 - `git commit`: Permet d'envoyer sur le repo une modification quelconque, avec un commentaire (Exemple: Zoé supprime une ligne de code sur un fichier, elle sauvegarde et l'envoie: Zoé vient de faire un commit sur sa branche)
 - `git fetch`: Permet de récupérer l'état actuel de la branche, c'est à dire les modifications qui ont été faites (Exemple: Milo ne s'est pas connecté pendant une semaine, pendant que Caro a ajouté 3 fichiers et 150 lignes de code: Milo effectue un `git fetch` et voit désormais les modifications de Caro)
 - `git merge`: Permet de fusionner des modifications ou des branches ensembles (Exemple: MC vient de faire un `git fetch`, elle a pu constater les modifications faites depuis son absence: MC va maintenant faire un `git merge` pour télécharger les modifications sur son ordinateur)
 - `git pull`: C'est en réalité `git fetch` + `git merge`, pour pas perdre son temps, permet de récupérer et de télécharger les modifications
 - `git push`: Permet d'envoyer vos commits et plus généralement d'envoyer votre dossier local sur le repo, mais ça se fait tout seul normalement

## Branches

Git fonctionne avec un système de branches (`git branch`): le principe est de "découper" chaque morceau/fonctionnalité/partie du projet en une branche distincte, de travailler indépendamment dessus, puis une fois le boulot terminé de faire un `git merge`, c'est à dire fusionner la branche sur laquelle on travaillait avec la branche principale, qu'on appelle branche `main`.

Chacun travaillera sur sa branche, par exemple Zoé et MC travailleront sur la branche `Zoé-MC`, puis à la fin on fusionnera tout avec la branche `main`, ça nous permettra vraiment de nous y retrouver et de pas empiéter sur le travail des autres (bien qu'on pourra tous regarder ce que les autres font!).

 - Branche `Zoé-MC`: Détecteur de pollution / Détecteur de profondeur
 - Branche `Nargice-Christ`: Dispositif sonore / Lumières
 - Branche `Caro-Milo`: Moteur / Application mobile / Batterie
