<a id="readme-top"></a>
<!-- TABLE OF CONTENTS -->
<details>
  <summary>Índice</summary>
  <ol>
    <li>
      <a href="#sobre-el-proyecto">Sobre el proyecto</a>
      <ul>
        <li><a href="#tecnologías">Tecnologías</a></li>
      </ul>
    </li>
    <li>
      <a href="#introducción">Introducción</a>
      <ul>
        <li><a href="#prerrequisitos">Prerrequisitos</a></li>
        <li><a href="#estructura">Estructura</a></li>
        <li><a href="#instalación-y-uso">Instalación y uso</a></li>
      </ul>
    </li>
    <li><a href="#líneas-futuras">Líneas futuras</a></li>
    <li><a href="#licencia">Licencia</a></li>
  </ol>
</details>


<!-- ABOUT THE PROJECT -->
## Introducción

Este proyecto está basado en el lenguaje de programación C y hace uso de OpenGL para renderizar en dos dimensiones, especialmente animaciones. Está dirigido hacia su uso en un entorno GNU/Linux, aunque las instrucciones serán semejantes para otros sistemas.

<p align="right">(<a href="#readme-top">Regresar al principio</a>)</p>

### Tecnologías

Esta sección contiene las tecnologías que se han usado durante el proyecto:

- C.
- OpenGL.
- CMake.
- GLEW.
- Freeglut.

<p align="right">(<a href="#readme-top">Regresar al principio</a>)</p>


<!-- GETTING STARTED -->
## Inicio

Este es un ejemplo de cómo puede utilizarse el proyecto:

<p align="right">(<a href="#readme-top">Regresar al principio</a>)</p>

### Prerrequisitos

Esto es una lista de las dependencias que existen en el proyecto:
- Compilador de C. A ser posible, en un entorno Linux, utilizar GCC.
- CMake.
- OpenGL.
- GLEW.
- Freeglut.
- Valgrind.
- Perf.
- (Opcional, aunque preferible) Sistema operativo GNU/Linux.

<p align="right">(<a href="#readme-top">Regresar al principio</a>)</p>

### Estructura

El proyecto sigue una estructura de directorios de la siguiente forma:
- Directorio donde se compila el proyecto: **/build** .
- Directorio donde se encuentra el código fuente principal: **/src**.
- Directorio donde se encuentran los resultados de las pruebas: **/tests**.
- Directorio donde se encuentra el código fuente de las bibliotecas propias: **/lib**.

Ficheros adicionales en el proyecto:
- Fichero que describe la compilación con CMake: **CMakeLists.txt**.
- Licencia del proyecto: **LICENSE.MD**.
- Este mismo documento, la guía de uso: **README.md**.
- El script que ejecuta los tests con *Valgrind*: **valgrind.sh**.
- El script que ejecuta los tests con *Perf*: **perf.sh**.

<p align="right">(<a href="#readme-top">Regresar al principio</a>)</p>

### Instalación y uso

1. Instalar los repositorios. En caso de debian o similar: 
       ```sh
       # apt install cmake gcc ...
       ```
2. Clonar el repositorio
   ```sh
   $ git clone https://gitlab.com/ivabarlay/renderergl2d.git
   ```
3. Compilar el proyecto
   ```sh
    $ cmake -B build
    $ cmake --build build
   ```
4. Ejecutar programa compilado
   ```sh
    $ ./build/src/ruta/hacia/programa
   ```

<p align="right">(<a href="#readme-top">Regresar al principio</a>)</p>


<!-- ROADMAP -->
## Líneas futuras

Este proyecto sólo es una base para los muchos caminos por los que podría expandirse. A continuación, se enunciarán las posibles líneas futuras que se han contemplado: mejoras de rendimiento, nuevas características, integraciones con otros programas y comparativas.


    -  Mejorar el sistema de animación para permitir geometría tridimensional.

    -  Capacidad de importación de modelos. Se examinó la posibilidad de incorporar \textit{Assimp} con el fin de probar geometría más compleja y diferente.

    -  Algoritmos de triangulación, para transformar geometría compleja en triángulos simples, amigables con la \textit{GPU} y más sencillos de procesar.

    -  Integración con otros programas como extensión y observar ventajas y desventajas. Como caso concreto, \textit{Godot} ofrece una tecnología para interactuar con código \textit{C/C++} llamado \textit{GDExtension} \cite{webGodotGDExtension}, aún en estado experimental; en el caso de ser insuficiente, pueden usarse los módulos personalizados de \textit{C/C++} que también ofrece \textit{Godot} \cite{webGodotCModules}.

    -  Crear comparativas de los tiempos de ejecución respecto a otros programas, como el ya mencionado previamente \textit{Godot}.

    -  Mejora al sistema de animación, permitiendo fácilmente crear caminos distintos para diferentes geometrías y cargar la animación desde un fichero.

    -  Mejora a la biblioteca de \textit{shaders}, abstrayendo aún más las funciones principales, como \textit{initAnimationData}, \textit{initGLData} y \textit{initGLShaders}, incluso permitiendo crear \textit{shaders} básicos sin programar \textit{GLSL}.

<p align="right">(<a href="#readme-top">Regresar al principio</a>)</p>

<!-- LICENSE -->
## Licencia

Distribuido con la licencia GNU GENERAL PUBLIC LICENSE Version 3, 29 June 2007 License. Ver `LICENSE.md` para más información.

<p align="right">(<a href="#readme-top">Regresar al principio</a>)</p>
