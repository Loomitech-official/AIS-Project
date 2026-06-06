# Contribuir a AIS (Adaptive Intelligent System)

¡Gracias por tu interés en contribuir a AIS! Estamos construyendo el futuro de la telefonía móvil abierta y tu ayuda es fundamental.

## Áreas de Contribución

1.  **Desarrollo del Kernel:** Mejora del planificador, gestión de memoria y comunicación entre procesos (IPC).
2.  **Drivers Bridge (ADB):** Implementación de nuevos adaptadores para fabricantes específicos (Sony, Google, Oppo, etc.).
3.  **HAL:** Definición de nuevas interfaces estándar para hardware emergente (sensores biométricos avanzados, cámaras multi-lente).
4.  **Documentación:** Mejora de las guías técnicas y de arquitectura.

## Proceso de Desarrollo

1.  Haz un **Fork** del repositorio.
2.  Crea una **Rama** para tu funcionalidad (`git checkout -b feature/nueva-funcionalidad`).
3.  Realiza tus **Commits** siguiendo las convenciones de mensajes claros.
4.  Asegúrate de que el código compile usando el `Makefile`.
5.  Envía un **Pull Request** detallando tus cambios.

## Estándares de Código

- Usamos C (estándar C11) y C++ para componentes específicos.
- Sigue el estilo de codificación del kernel de Linux (indentación con tabs, nombres descriptivos).
- Comenta el código de forma clara, especialmente en la lógica de traducción de drivers.

---
*Hagamos que el hardware sea libre.*
