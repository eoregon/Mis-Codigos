import matplotlib.pyplot as plt

def calcular_vector(p_inicio, p_fin):
    """Calcula el vector entre dos puntos (dx, dy)"""
    return (p_fin[0] - p_inicio[0], p_fin[1] - p_inicio[1])

def producto_punto(v1, v2):
    """Calcula el producto punto de dos vectores: (x1*x2 + y1*y2)"""
    return v1[0] * v2[0] + v1[1] * v2[1]

def analizar_cuadrilatero(puntos):
    # Verificación básica
    if len(puntos) != 4:
        print("Error: Se necesitan exactamente 4 puntos.")
        return

    print("="*40)
    print("ANALIZANDO FIGURA...")
    
    # Desempaquetar los 4 puntos
    p1, p2, p3, p4 = puntos

    # --- 1. CÁLCULO DE VECTORES (LADOS) ---
    # Calculamos el vector de cada lado en orden
    v12 = calcular_vector(p1, p2) # Lado 1
    v23 = calcular_vector(p2, p3) # Lado 2
    v34 = calcular_vector(p3, p4) # Lado 3
    v41 = calcular_vector(p4, p1) # Lado 4 (Cierra la figura)

    # --- 2. DETECCIÓN DE 90° (PRODUCTO PUNTO) ---
    # Revisamos si el producto punto de lados adyacentes es CERO.
    # Usamos una pequeña tolerancia (1e-9) por si hay errores mínimos de decimales en Python.
    esquinas_90 = []
    tolerancia = 1e-9 

    # Esquina en P2 (entre lado 1 y lado 2)
    if abs(producto_punto(v12, v23)) < tolerancia: esquinas_90.append(p2)
    
    # Esquina en P3 (entre lado 2 y lado 3)
    if abs(producto_punto(v23, v34)) < tolerancia: esquinas_90.append(p3)
    
    # Esquina en P4 (entre lado 3 y lado 4)
    if abs(producto_punto(v34, v41)) < tolerancia: esquinas_90.append(p4)
    
    # Esquina en P1 (entre lado 4 y lado 1)
    if abs(producto_punto(v41, v12)) < tolerancia: esquinas_90.append(p1)


    # --- 3. RESULTADOS EN TEXTO ---
    if len(esquinas_90) > 0:
        print(f"✅ Se detectaron {len(esquinas_90)} ángulo(s) de 90° en los vértices:")
        for p in esquinas_90:
            print(f"   -> {p}")
        estado_titulo = f"¡{len(esquinas_90)} ángulos rectos detectados!"
        color_titulo = 'green'
    else:
        print("❌ No se detectaron ángulos de 90°.")
        estado_titulo = "Sin ángulos rectos"
        color_titulo = 'black'

    # --- 4. GRAFICACIÓN ---
    plt.figure(figsize=(7, 7))
    
    # Preparar coordenadas para plotear (repetimos el primero al final para cerrar el ciclo)
    xs = [p[0] for p in puntos] + [puntos[0][0]]
    ys = [p[1] for p in puntos] + [puntos[0][1]]

    # Dibujar las líneas azules
    plt.plot(xs, ys, color='blue', linewidth=2, label='Figura', zorder=1)
    # Dibujar los puntos negros
    plt.scatter(xs[:-1], ys[:-1], color='black', s=80, zorder=2)

    # RESALTAR ESQUINAS DE 90° (Cuadros rojos)
    if esquinas_90:
        xs_90 = [p[0] for p in esquinas_90]
        ys_90 = [p[1] for p in esquinas_90]
        # Usamos marker='s' (square) para denotar ángulo recto
        plt.scatter(xs_90, ys_90, color='red', s=200, marker='s', 
                    label='Ángulo de 90°', zorder=3, alpha=0.7)

    # Estética del gráfico
    plt.axhline(0, color='black', linewidth=0.5)
    plt.axvline(0, color='black', linewidth=0.5)
    plt.grid(True, linestyle='--', alpha=0.6)
    plt.axis('equal') # Fundamental para que los 90° se vean reales
    plt.title(estado_titulo, color=color_titulo, fontweight='bold')
    plt.legend()
    
    plt.show()

# =========================================
# ZONA DE PRUEBAS: CAMBIA LOS PUNTOS AQUÍ
# =========================================

# EJEMPLO 1: Un Rectángulo perfecto (Debe detectar 4)
puntos_rectangulo = [(-2, 9), (4, 6), (1, 0), (-5, 3)]
analizar_cuadrilatero(puntos_rectangulo)

# EJEMPLO 2: Un Trapecio Rectángulo (Debe detectar 2)
# (Similar a tu ejercicio 12 pero con 4 puntos)
puntos_trapecio = [(2, 2), (8, 2), (8, 6), (4, 7)]
#analizar_cuadrilatero(puntos_trapecio)

# EJEMPLO 3: Un Romboide (Debe detectar 0)
# (Parece rectángulo pero está inclinado)
puntos_romboide = [(2, 1), (7, 2), (6, 5), (1, 4)]
# analizar_cuadrilatero(puntos_romboide)