# Poker Hand Evaluator (C++)

Bibliothèque d'évaluation pure de mains de poker développée en **C++20**.

Le projet fournit une infrastructure rapide, native et agnostique des règles de jeu pour l'évaluation de combinaisons de cartes, utilisable comme brique de base pour un moteur de jeu ou un solveur RL.

## 💡 Fonctionnalités

- [x] **Évaluation pure des combinaisons** : Détection des mains (Royal Flush, Straight Flush, Four of a Kind, etc.) via `EvaluatePlayersHands`.
- [x] **Gestion des kickers** : Extraction et tri automatique des 5 meilleures cartes actives (`HandResult`).
- [x] **Structure agnostique** : Indépendante de la logique de partie (aucune dépendance aux joueurs, jetons ou pots).

## 🛠️ Stack Technique

- **Langage** : C++20
- **Structure** : Orientée performances (`std::array`, passage par valeur/référence léger).
- **Gestion mémoire** : Zéro allocation dynamique sur le chemin critique d'évaluation.

## 🚀 Compilation & Exécution

### Prérequis
- Un compilateur C++ compatible C++20 (`g++`, `clang++` ou MSVC)

### Compilation avec CMake
```bash
mkdir build && cd build
cmake ..
make
./poker_engine
```