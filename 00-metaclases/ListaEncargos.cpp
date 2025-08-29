#include "ListaEncargos.h"

ListaEncargos::ListaEncargos()
{
    ListaEncargos::lista.push_back(
        Encargo(
            1,
            "01a",
            "investigar sobre ada lovelace"));

    ListaEncargos::lista.push_back(
        Encargo(
            2,
            "01a",
            "investigar sobre alan turing"));

    ListaEncargos::lista.push_back(
        Encargo(
            3,
            "01b",
            "programar y equivocarse 3 veces, documentar textualmente"));

    ListaEncargos::lista.push_back(
        Encargo(
            4,
            "01b",
            "programar y equivocarse 3 veces, documentar visualmente"));

    ListaEncargos::lista.push_back(
        Encargo(
            5,
            "02a",
            "ponerse al día con sus apuntes en github y documentar aprendizajes y dudas"));

    ListaEncargos::lista.push_back(
        Encargo(
            6,
            "03a",
            "ponerse al día con sus apuntes en github y documentar aprendizajes y dudas"));

    ListaEncargos::lista.push_back(
        Encargo(
            7,
            "03b",
            "documentar aprendizajes y dificultades del trabajo con pantallas y displays SSD1306 con simulador Wokwi"));

    ListaEncargos::lista.push_back(
        Encargo(
            8,
            "4a",
            "investigar la poesía y el trabajo de las poetas computacionales Allison Parrish y Nick Montfort"));
    "));
}
