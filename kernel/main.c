/*
 * AIS Kernel - Entry Point (x86_64 PC Edition)
 * Adaptive Intelligent System
 */

#include <ais_hal.h>
#include <stdio.h>

void kernel_main() {
    // 1. Inicializar la consola de texto básica (VGA/UEFI FB)
    printf("[AIS] Iniciando sistema operativo AIS para PC (x86_64)...\n");

    // 2. Inicializar el HAL para x86_64
    // Esto incluye GDT, IDT, Paging y detección de CPU
    ais_hal_init();

    // 3. Escaneo del bus PCI para detectar hardware
    printf("[AIS] Escaneando hardware en el bus PCI...\n");
    ais_pci_scan();

    // 4. Inicializar el Sistema de Drivers Universales
    // Carga puentes para hardware detectado
    ais_driver_bridge_init();

    // 5. Iniciar servicios del núcleo y scheduler
    ais_core_services_start();

    printf("[AIS] Sistema listo. Entrando en bucle de ejecución.\n");

    while(1) {
        ais_schedule();
    }
}
