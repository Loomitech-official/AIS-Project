/*
 * AIS Kernel - Entry Point
 * Adaptive Intelligent System
 */

#include <ais_hal.h>

void kernel_main() {
    // 1. Inicializar la Capa de Abstracción de Hardware (HAL)
    ais_hal_init();

    // 2. Inicializar el Sistema de Drivers Universales
    ais_driver_bridge_init();

    // 3. Cargar drivers específicos del dispositivo detectado
    // AIS detecta si es un Samsung, Redmi, etc. y carga los drivers correspondientes
    ais_load_compatible_drivers();

    // 4. Iniciar servicios del núcleo
    ais_core_services_start();

    // 5. Bucle principal del sistema
    while(1) {
        ais_schedule();
    }
}
