#include <iostream>

// Espacio de nombres para Gutierrez
namespace gutierrez
{
    // Función que calcula una parte del número de banco
    int parte_numero_banco(int modificador_secreto)
    {
        int perez_parte{9898}; // Valor de perez_parte
        return (perez_parte * modificador_secreto) % 10000; // Retorna el resultado del cálculo
    }

    // Espacio de nombres para código rojo
    namespace rojo
    {
        // Función que devuelve un fragmento de código rojo
        int fragmento_codigo()
        {
            return 879; // Valor del fragmento de código rojo
        }
    }

    // Espacio de nombres para código azul
    namespace azul
    {
        // Función que devuelve un fragmento de código azul
        int fragmento_codigo()
        {
            return 458; // Valor del fragmento de código azul
        }
    }
}

// Espacio de nombres para Garcia
namespace garcia
{
    // Función que calcula una parte del número de banco
    int parte_numero_banco(int modificador_secreto)
    {
        int lopez_parte{6879}; // Valor de lopez_parte
        return (lopez_parte * modificador_secreto) % 10000; // Retorna el resultado del cálculo
    }

    // Espacio de nombres para código rojo
    namespace rojo
    {
        // Función que devuelve un fragmento de código rojo
        int fragmento_codigo()
        {
            return 754; // Valor del fragmento de código rojo
        }
    }

    // Espacio de nombres para código azul
    namespace azul
    {
        // Función que devuelve un fragmento de código azul
        int fragmento_codigo()
        {
            return 652; // Valor del fragmento de código azul
        }
    }
}

// Espacio de nombres para Gomez
namespace gomez
{
    // Función que calcula una parte del número de banco
    int parte_numero_banco(int modificador_secreto)
    {
        int gonzalez_parte{2897}; // Valor de gonzalez_parte
        return (gonzalez_parte * modificador_secreto) % 10000; // Retorna el resultado del cálculo
    }

    // Espacio de nombres para código rojo
    namespace rojo
    {
        // Función que devuelve un fragmento de código rojo
        int fragmento_codigo()
        {
            return 224; // Valor del fragmento de código rojo
        }
    }

    // Espacio de nombres para código azul
    namespace azul
    {
        // Función que devuelve un fragmento de código azul
        int fragmento_codigo()
        {
            return 354; // Valor del fragmento de código azul
        }
    }
}

// Espacio de nombres para estate_executor
namespace estate_executor
{
    // Función que ensambla el número de cuenta utilizando las partes de los tres nombres
    int ensamblar_numero_cuenta(int modificador_secreto)
    {
        return gutierrez::parte_numero_banco(modificador_secreto) +
               garcia::parte_numero_banco(modificador_secreto) +
               gomez::parte_numero_banco(modificador_secreto);
    }

    // Función que ensambla el código combinando fragmentos rojos y azules de los tres nombres
    int ensamblar_codigo()
    {
        // Suma de fragmentos azules
        int fragmentos_azules = gutierrez::azul::fragmento_codigo() +
                                garcia::azul::fragmento_codigo() +
                                gomez::azul::fragmento_codigo();

        // Suma de fragmentos rojos
        int fragmentos_rojos = gutierrez::rojo::fragmento_codigo() +
                               garcia::rojo::fragmento_codigo() +
                               gomez::rojo::fragmento_codigo();

        // Retorna el producto de los fragmentos azules y rojos
        return fragmentos_azules * fragmentos_rojos;
    }
}

int main()
{
    // Valor del modificador secreto
    int modificador_secreto = 42;

    // Imprime el número de cuenta ensamblado
    std::cout << "Numero de cuenta ensamblado: " << estate_executor::ensamblar_numero_cuenta(modificador_secreto) << std::endl;

    // Imprime el código ensamblado
    std::cout << "Codigo ensamblado: " << estate_executor::ensamblar_codigo() << std::endl;

    return 0;
}