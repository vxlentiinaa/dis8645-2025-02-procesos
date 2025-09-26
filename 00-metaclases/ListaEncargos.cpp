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
            "ponerse al día con sus apuntes en github"));

    ListaEncargos::lista.push_back(
        Encargo(
            6,
            "03a",
            "investigar nand, nor, xor y xnor"));

    ListaEncargos::lista.push_back(
        Encargo(
            7,
            "03b",
            "documentar aprendizajes y dificultades del trabajo con pantallas y displays SSD1306 con simulador Wokwi"));

    ListaEncargos::lista.push_back(
        Encargo(
            8,
            "4b",
            "investigar la poesía y el trabajo de las poetas Allison Parrish, Nick Montfort y Martín Gubbins"));
    ListaEncargos::lista.push_back(
        Encargo(
            9,
            "5b",
            "escuchar y comentar uno de los tres primeros discos de la banda Primus"));

    ListaEncargos::lista.push_back(
        Encargo(
            10,
            "5b",
            "investigar sobre la obra de Mitchel Resnick, leer uno de sus escritos o ver una de sus charlas, y comentarla críticamente"));

    ListaEncargos::lista.push_back(
        Encargo(
            11,
            "6a",
            "investigar sensores vistos en clases, cotizarlos, encontrar referentes que los usen, y describir 3 pequeñas ideas que podamos aplicar a su proyecto-02 de máquinas de saludar"));

    ListaEncargos::lista.push_back(
        Encargo(
            12,
            "7a",
            "leer las bitacoras de colegas, encontrar similitudes, diferencias, preguntas y aciertos de sus máquinas saludadoras propuestas. Citar correctamente las fuentes."));

    ListaEncargos::lista.push_back(
        Encargo(
            13,
            "7a",
            "buscar 2 referentes asociados a tu proyecto de cada una de estas 4 categorías: 1. lenguaje natural (personas), código, materialidad, documentación. escribir un párrafo por cada uno de los referentes encontrados, citando las fuentes, y explicando por qué lo elegiste, qué te aporta, qué te inspira, o incluso si lo incluyes como antiejemplo."));

    ListaEncargos::lista.push_back(
        Encargo(
            14,
            "7b",
            "cada persona del grupo debe implementar en diagrama de flujo dibujado o con la herramienta Mermaid.js con sus propias palabras."));

    ListaEncargos::lista.push_back(
        Encargo(
            15,
            "7b",
            "documentar funcionamiento de sus sensores, incluyendo instrucciones de conexión y de configuración, subir el proyecto entero de arduino como carpeta, tiene que poder compilar sin problema y mostrar en consola los datos de los sensores."));
}
