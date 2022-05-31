# Cahier de suivi du projet Gourde Connectée

* Séance du 7 mars 2022

Première séance où nous avons totalement abordé le sujet concernant les projets. 
J'ai d'abord formé un groupe avec Mohamed Sidaoui, malheureusement, aucun de nous deux ne savait quoi faire comme projet et nous étions un peu dans une impasse.
Durant cette même séance nous a été présenté Louis Tranchant qui lui avait une idée de projet mais aucun groupe, il avait déjà décider du projet gourde connectée.
Pendant cette première séance nous avons discuté de comment nous allions mettre en place le projet et on avait déjà une idée globale du matériel qu'il nous fallait.

* Séance du 12 avril 2022

Durant cette séance nous avions répété pour la présentation de mi-parcours du projet, chacun avait sa partie à dire.
Louis devait parler du matériel nécésaire pour le projet, Mohamed des problèmes rencontré et moi de la présentation globale du projet.

* Séance du 14 avril 2022

Le grand jour de la présentation de mi-projet ! Mais malheureusement, avec Mohamed nous nous sommes retrouvé à devoir faire la présentation à deux. 
Résultat nous avons gardé nos parties respectives pour la présentation, sauf que nous avons aussi divisé la partie de Louis en deux. 
Conclusion, le déroulement initial de notre projet allait pouvoir commencer de la façon dont on l'avait prévu, mais avec quelques différences (notamment l'utilisation
de deux capteurs DHT22).

* Première séance Fablab

Avec Mohamed,nous nous sommes retrouvé pour pour la partie électronique du projet, nous avons comencé à souder des fils sur les capteurs DHT22.
Comme nous étions au Fablab en dehors des séances organisé par les professeurs nous avions uniquement des fils électrique souple, il fallait donc aussi souder l'autre extremité des fils.

* Deuxième séance Fablab

Comme nous étions arrivé tard lors de la précédente séance Fablab, toujours avec Mohamed nous avons fini de souder les fils électrique, la difficulté étant que la soudure sur l'autre extremité ne devait pas être trop épaisse car ils ne rentreraient pas dans les trous de la carte.

* Troisième séance Fablab

Cette fois, c'était une séance organisé par les professeurs. J'ai remplacé les fils électriques souple par ceux fournit par M. Ferrero (plus solide et surtout ils ont une broche qui rentre parfaitement dans les trous de la carte). Suite à cela j'ai commencé chercher un programme pour utiliser un capteur DHT22 sur Arduino, il a été trouvé mais malheureusement la difficulté était de devoir en utiliser deux avec une seule carte.


* Quatrième séance Fablab

Après un long moment a essayé de programmer la carte pour utiliser deux DHT22 et avec l'aide d'un professeur, j'ai enfin pu faire fonctionner deux capteurs DHT22, malheureusement la partie affichage du taux d'humidité n'était pas encore au point (soit il restait à 0, soit il affichait la même valeur que la température). Après un petit récapitulatif avec le professeur, il m'a conseillé d'ajouter une partie "alerte" en cas de température ou taux d'humidité trop élevé.

* Séance hors Fablab

Avec Louis on a décidé de se retrouver un week-end pour parler de comment nous devions organiser notre présentation (malheureusement sans Mohamed car il n'était pas disponible). En regardant le programme a deux on a fini par reussir à programmer la partie taux d'humidité, mais afficher un message d'alerte fut un peu plus compliqué, mais un autre problème nous a interpelé : l'un des capteurs DHT22 ne fonctionnait plus, oudu moins il fonctionnait un bref instant et ensuite plus du tout, on en a donc conclu à un problème au niveau des fils et voulions régler ça le lundi qui arrivait.

* Dernière séance Fablab avant la présentation

Avec tout le groupe nous avons donc remplacé les fils du capteur qui ne fonctionnait plus, et même après les avoir changé, il ne fonctionnait toujours pas. J'ai donc utilisé un voltmètre pour vérifier quel broche avait vraiment un problème et il s'est avéré qu'aucune tension ne passait dans le capteur, conclusion : il ne fonctionnait plus (moins d'une heure avant notre présentation, la panique était présente). J'ai donc été voir un professeur pour savoir si l'on pouvait avoir un DHT22 de remplacement, malheureusement il n'y en avait plus. On m'a donc conseillé d'utiliser le capteur intégré à la carte de programmation UCA et d'aller prendre son code de programmation sur le github. Dans un temps très limité, nous avons pu trouver les bonnes lignes de code permettant d'utiliser le capteur de la carte, ainsi qu'un message d'alerte si le taux d'humidité devenait trop haut (mais par manque de temps nous n'avions pas pu en faire de même avec la température extérieur).
