# Sistema de Control de Ventas Anuales

Este proyecto implementa una matriz bidimensional (12x3) en Java y Python para gestionar el registro mensual de ventas de tres departamentos: Ropa, Deportes y Juguetería.

## Estructura de Datos
- **Filas (12):** Representan los meses de Enero a Diciembre (índices 0 al 11).
- **Columnas (3):** Representan los departamentos (0: Ropa, 1: Deportes, 2: Juguetería).

## Métodos Implementados
1. `insertar_venta / insertarVenta`: Recibe el índice del mes, el índice del departamento y el importe a registrar, asignándolo a la coordenada correspondiente en la matriz.
2. `buscar_venta / buscarVenta`: Recorre la matriz completa mediante bucles anidados para localizar qué departamento(s) y mes(es) coinciden con el monto consultado.
3. `eliminar_venta / eliminarVenta`: Recibe las coordenadas de mes y departamento y restablece el valor a `0.0` para simular la eliminación del registro en una estructura estática.
