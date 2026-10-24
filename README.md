# Simulación de una Pila (Stack) en Python

**Nombre:** Johan Alexander Coot Vazquez
**Materia:** Estrcutura de datos
**Grupo:** 3ZA
**Fecha:** 24/Octubre/2026
---

## Descripción del problema

Dibujar los distintos estados de una estructura tipo pila al ejecutar una serie de operaciones, mostrando cómo queda la pila y el puntero al tope (TOPE) en cada paso.

- La pila inicia vacía (`TOPE = 0`).
- Su capacidad máxima es de 8 elementos.

Operaciones a realizar:

| Paso | Operación |
|:---:|---|
| a | Insertar (PILA, X) |
| b | Insertar (PILA, Y) |
| c | Eliminar (PILA, Z) |
| d | Eliminar (PILA, T) |
| e | Eliminar (PILA, U) |
| f | Insertar (PILA, V) |
| g | Insertar (PILA, W) |
| h | Eliminar (PILA, p) |
| i | Insertar (PILA, R) |

Preguntas a responder:

1. ¿Con cuántos elementos quedó la pila?
2. ¿Hubo algún caso de error (desbordamiento o subdesbordamiento)? Si ocurrió, explicarlo.

---

## Estados de la pila

| Paso | Operación | Contenido (base → cima) | TOPE |
|:---:|---|---|:---:|
| — | Estado inicial | (vacía) | 0 |
| a | Insertar (PILA, X) | X | 1 |
| b | Insertar (PILA, Y) | X, Y | 2 |
| c | Eliminar (PILA, Z) → `Z = Y` | X | 1 |
| d | Eliminar (PILA, T) → `T = X` | (vacía) | 0 |
| e | Eliminar (PILA, U) | **ERROR: subdesbordamiento** | 0 |
| f | Insertar (PILA, V) | V | 1 |
| g | Insertar (PILA, W) | V, W | 2 |
| h | Eliminar (PILA, p) → `p = W` | V | 1 |
| i | Insertar (PILA, R) | V, R | 2 |

### Estado final

```
      ┌─────────┐
   8  │    ·    │
      ├─────────┤
   7  │    ·    │
      ├─────────┤
   6  │    ·    │
      ├─────────┤
   5  │    ·    │
      ├─────────┤
   4  │    ·    │
      ├─────────┤
   3  │    ·    │
      ├─────────┤
   2  │    R    │  ◄── TOPE
      ├─────────┤
   1  │    V    │
      └─────────┘
      TOPE = 2
```

---

## Respuestas

### ¿Con cuántos elementos quedó la pila?

Quedó con 2 elementos: `V` (base) y `R` (cima), con TOPE = 2.

### ¿Hubo algún caso de error?

**Sí, un subdesbordamiento (underflow) en el paso e) Eliminar (PILA, U).

Las operaciones c) y d) retiraron `Y` y `X`, por lo que la pila quedó vacía (`TOPE = 0`). Al intentar eliminar de nuevo en e), no había ningún elemento que retirar. La operación no se realiza y la pila sigue vacía.

No hubo desbordamiento, porque la pila nunca pasó de 2 elementos y su capacidad es de 8.


