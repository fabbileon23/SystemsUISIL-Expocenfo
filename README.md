<!-- Improved compatibility of back to top link: See: https://github.com/fabbileon23/SystemsUISIL-Expocenfo -->
<a id="readme-top"></a>
<!--

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/fabbileon23/SystemsUISIL-Expocenfo">
    <img src="Images/Logo.jpg" alt="Logo" width="600" height="300">
  </a>
</div>
<h1 align="center"> Expocenfo 2024</h1> 

<h1 align="center">Bastón Inteligente para Personas No Videntes y Casa Domotica</h1>
<br />

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Tabla de Contenidos</summary>
  <ol>
    <li>
      <a href="#Descripcion-del-Proyecto">Descripcion del Proyecto</a>
      <ul>
        <li><a href="#Caracteristicas-del-Proyecto">Caracteristicas del Proyecto</a></li>
      </ul>
    </li>
    <li>
      <a href="#Componentes">Componentes</a>
      <ul>
        <li><a href="#Baston-Inteligente">Baston</a></li>
        <li><a href="#Casa-Domotica">Casa Domotica</a></li>
        <li><a href="#Librerias-y-Lenguaje-de-Programacion">Librerias y Lenguaje de Programacion</a></li>
      </ul>
    </li>
  </ol>
</details>

<!-- ABOUT THE PROJECT -->
## Descripcion del Proyecto
Este proyecto está enfocado en mejorar la calidad de vida de las personas no videntes, proporcionando herramientas que les permitan moverse y vivir de manera más independiente y segura. El proyecto incluye dos componentes principales:

* Bastón Inteligente: Un dispositivo diseñado para ayudar a las personas a navegar su entorno de manera segura, utilizando sensores que detectan obstáculos, y alertan al usuario mediante vibraciones y sonidos.
<br />
<div align="center">
    <img src="Images/Baston1.jpeg" alt="Logo" width="600" height="790">
</div>
<br />

* Casa Domótica: Un sistema de hogar inteligente que incluye tecnologías como RFID para acceso seguro, sensores que monitorean la calidad del aire y las condiciones de temperatura, y un sistema de iluminación automática.
<br />
<div align="center">
    <img src="Images/Casa Domotica.jpeg" alt="Logo" width="650" height="290">
</div>
<br />
<p align="right">(<a href="#readme-top">back to top</a>)</p>


## Caracteristicas del Proyecto.
### Bastón Inteligente
* Sensores de Proximidad:
Utiliza sensores ultrasónicos para medir la distancia entre el bastón y los objetos cercanos.
Cuando un objeto es detectado dentro de un rango específico, el bastón alerta al usuario.

* Vibración:
El mango del bastón tiene un motor vibratorio que se activa cuando se detecta un obstáculo.
La intensidad de la vibración puede variar dependiendo de la distancia del obstáculo, proporcionando una retroalimentación táctil intuitiva.

* Sonido:
Se emiten alertas sonoras cuando se detecta un obstáculo, proporcionando una segunda capa de información al usuario.
Los sonidos pueden personalizarse para diferenciar entre tipos de obstáculos o distancias.

### Casa Domotica
* RFID (Identificación por Radiofrecuencia):
Utilizado para acceder de manera segura al hogar sin necesidad de llaves.
Cada usuario tiene una tarjeta RFID personalizada que, al ser escaneada, desbloquea la puerta.

* Sensores de Humedad y Temperatura:
Monitorean las condiciones ambientales dentro del hogar.
Permiten ajustar automáticamente el sistema de calefacción o aire acondicionado para mantener un ambiente confortable.

* Iluminación Automática:
Basada en la detección de presencia y las condiciones de luz ambiental, las luces se encienden y apagan automáticamente.
Esto asegura que las luces siempre estén encendidas cuando sea necesario y ahorra energía cuando no lo es.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Componentes
### Baston Inteligente
* **Tubo PVC 1/2**
* **Sensor Ultrasonico**
* **Cable UTP**
* **Arduino Nano**
* **Mini Proto**
* **Vibration Brick**
* **9V Battery Holder con Cobertor de encedido y apagado**
<div align="center">
    <img src="Images/Componentes BT.png" alt="Logo" width="600" height="300">
</div>

### Casa Domotica
* **Casa Impresa en 3D**
* **2 Arduinos UNO**
* **ProtoBoard**
* **2 LEDs**
* **Cables Hembra-Macho**
* **3 Resistencia 220 ohms**
* **LDR**
* **Fuente para la Protoboard 5v3.3**
* **RFID**
* **Sensor Temperatura LM35**
* **LCD i2c 16x2**
* **ServoMotor 5V**
* **3 Broches para Bateria 9V**
* **Fuente de 120v-5v**
* **Power Bank**

<div align="center">
    <img src="Images/Componentes CD.png" alt="Logo" width="600" height="300">
</div>
<br />

### Librerias y Lenguaje de Programacion 
1. Librerías:
* LiquidCrystal: Utilizada para controlar la pantalla LCD i2c 16x2, permitiendo la visualización en tiempo real de información relevante.
* MFRC522: Implementada para gestionar la comunicación con el módulo RFID, facilitando el control de acceso y la autenticación.
* Servo.h: Utilizada para controlar el microservo de 5V, permitiendo un movimiento preciso y automático de mecanismos como puertas o ventanas.
2. Programacion:
* Se desarrollaron scripts en C/C++ en el entorno de Arduino IDE, optimizando el código para manejar la lógica del bastón, ademas, garantizando que los diferentes módulos del sistema domótico trabajen de manera coordinada
<p align="right">(<a href="#readme-top">back to top</a>)</p>






