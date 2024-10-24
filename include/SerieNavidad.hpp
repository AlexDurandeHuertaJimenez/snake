#pragma once
#include <Foco.hpp>
#include <list>

using namespace std;

class SerieNavidad
{
private:
    list<Foco> focos;

public:
    SerieNavidad(int noFocos) {
        for (size_t i = 0; i < noFocos; i++)
        {
            Foco f;
            focos.emplace_back(f);
        }
        
    }
    ~SerieNavidad() {}
    void Encender(){
        for (auto &&foco : focos)
        {
            foco.Encender();
        }
        
    }
    void Apagar (){
        for (auto &&foco : focos)
        {
            foco.Apagar();
        }
    }
    void Alternar(bool estado){
    
        for (auto &&foco : focos)
        {
            if (estado)
            {
                foco.Apagar();
                estado = false;
            }else{
                foco.Encender();
                estado = true;
            }
        }
    }
    void Encender(int noFocos){
        int decremento = noFocos;
        for (auto &&foco : focos)
        {
            if (decremento > 0)
            {
                foco.Encender();
                decremento--;
            }
            foco.Encender();
        }
        
    }
    void Apagar (){
        for (auto &&foco : focos)
        {
            foco.Apagar();
        }
    }
    void Imprimir(){
        for (auto &&foco : focos)
        {
            foco.Imprimir();
        }
        cout<<endl;
    }
};