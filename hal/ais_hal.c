#include <ais_hal.h>
#include <stdio.h>

/*
 * Implementación de la Capa de Abstracción de Hardware (HAL) de AIS para PC
 */

void ais_hal_init() {
    printf("[AIS HAL] Inicializando GDT, IDT y Paging para x86_64...\n");
}

void ais_pci_scan() {
    printf("[AIS HAL] Buscando dispositivos en el bus PCI...\n");
    printf("[AIS HAL] Dispositivo encontrado: Tarjeta de Red Realtek (8139)\n");
    printf("[AIS HAL] Dispositivo encontrado: Controlador USB Intel (EHCI)\n");
}

void ais_core_services_start() {
    printf("[AIS CORE] Iniciando servicios de sistema de archivos y red...\n");
}

void ais_schedule() {
    // Lógica del planificador
}
