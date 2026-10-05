# Poker Engine & Solver (C++)

Moteur d'évaluation de mains de Poker (Texas Hold'em) et base de calcul d'équité / solver développé en **C++20**.

Le projet vise à fournir une infrastructure rapide et native pour l'évaluation de combinaisons et la résolution d'arbres de décision (GTO / CFR) sans surcoût d'un garbage collector.

## 💡 Fonctionnalités actuelles & Roadmap

- [x] **Évaluation des combinaisons** : Détection des mains (Royal Flush, Straight, Pair, etc.) via `EvaluateHand`.
- [x] **Comparaison de cartes hautes / kickers** : Algorithmes de tri et de départage entre joueurs.
- [x] **Moteur de comparaison complet** : Finalisation de la résolution des ex-æquo sur toutes les combinaisons.
- [ ] **Solver CFR (Counterfactual Regret Minimization)** : Implémentation de la logique de calcul d'équilibre de Nash.

## 🛠️ Stack Technique

- **Langage** : C++20
- **Structure** : Orientée performances (structures légères, allocation statique via `std::array`).
- **Gestion mémoire** : Zéro allocation dynamique sur le chemin critique d'évaluation.

## 🚀 Compilation & Exécution

### Prérequis
- Un compilateur C++ compatible C++20 (`g++`, `clang++` ou MSVC)
- CMake ou `g++` en ligne de commande

### Compilation directe (GCC)
```bash
g++ -std=c++20 -fsanitize=address -g main.cpp Engine.cpp Card.cpp Player.cpp -o poker_engine
./poker_engine