#ifndef AIS_HAL_H
#define AIS_HAL_H

/* 
 * AIS HAL - Hardware Abstraction Layer
 * Define las interfaces estándar que todos los drivers deben implementar
 */

typedef struct {
    int (*init)(void);
    int (*read)(void* buffer, int size);
    int (*write)(const void* buffer, int size);
    int (*control)(int command, void* arg);
} ais_device_t;

// Prototipos de funciones globales
void ais_hal_init(void);
void ais_driver_bridge_init(void);
void ais_load_compatible_drivers(void);
void ais_core_services_start(void);
void ais_schedule(void);

#endif // AIS_HAL_H
