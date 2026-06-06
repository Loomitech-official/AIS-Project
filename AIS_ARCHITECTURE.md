# AIS (Adaptive Intelligent System) - Arquitectura para PC (x86_64)

**AIS** ha evolucionado de un concepto móvil a un sistema operativo diseñado para la arquitectura de computadoras personales (**x86_64**). Este cambio estratégico permite un desarrollo más seguro mediante emulación, aprovecha estándares de hardware maduros (UEFI, PCI, USB) y facilita la implementación de una capa de compatibilidad de drivers universales.

## 1. Visión General de la Arquitectura PC

AIS para PC utiliza un diseño de **Microkernel Híbrido** optimizado para procesadores modernos de 64 bits.

### Capas del Sistema:

| Capa | Descripción | Componente Clave |
| :--- | :--- | :--- |
| **AIS Desktop Layer** | Entorno gráfico basado en ventanas y gestión de escritorio. | AIS Window Manager |
| **System Services** | Gestión de archivos, red y seguridad. | AIS Core Services |
| **PC Driver Bridge** | Abstracción de drivers para estándares de PC. | AIS Universal Bridge |
| **AIS HAL (x86_64)** | Interfaz con BIOS/UEFI y hardware estándar. | AIS HAL Core |
| **AIS 64-bit Kernel** | Gestión de CPU (Long Mode), Memoria (Paging) e IPC. | AIS Kernel (x86_64) |

## 2. El Sistema de Drivers Universales en PC

En el entorno de PC, el **AIS Driver Bridge** se enfoca en abstraer las comunicaciones de bus estándar:

1.  **Abstracción PCI/PCIe:** Permite que drivers de diferentes fabricantes de tarjetas de red, sonido o video hablen un lenguaje común con el kernel.
2.  **Universal USB Stack:** Un stack de USB diseñado desde cero que permite la conexión de periféricos sin necesidad de drivers específicos para cada modelo, utilizando perfiles genéricos avanzados.
3.  **Traducción de Firmwares:** Capacidad para interactuar con firmwares propietarios de hardware mediante capas de compatibilidad seguras.

## 3. Estrategia de Arranque y Ejecución

-   **Soporte UEFI:** AIS arranca utilizando el estándar moderno UEFI, lo que garantiza compatibilidad con todas las computadoras fabricadas en la última década.
-   **Modo Largo (64-bit):** El sistema opera nativamente en modo de 64 bits desde el arranque, aprovechando toda la memoria RAM disponible.
-   **Entorno de Pruebas QEMU:** El desarrollo se valida en el emulador QEMU, simulando hardware real de PC de forma segura.

---
*Documento actualizado para la transición a arquitectura PC - 2026*
