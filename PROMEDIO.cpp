#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int numEstudiantes;
    std::cout << "Ingrese el numero de estudiantes: ";
    std::cin >> numEstudiantes;

    std::vector<double> calificaciones;
    double sumaTotal = 0;

    for (int i = 0; i < numEstudiantes; i++) {
        double calificacion;
        std::cout << "Ingrese la calificacion del estudiante " << i + 1 << ": ";
        std::cin >> calificacion;
        calificaciones.push_back(calificacion);
        sumaTotal += calificacion;
    }

    double promedioMayor = *std::max_element(calificaciones.begin(), calificaciones.end());

    std::cout << "El promedio mayor de calificaciones del curso es: " << promedioMayor << std::endl;

    return 0;
}

