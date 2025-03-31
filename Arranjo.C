#define INICIOARRANJO 1
#define MAXTAM 1000


typedef int TipoApontador;
typedef int TipoChave;
typedef struct
{
TipoChave Chave;
} TipoItem;
typedef struct
{
TipoItem Item[MAXTAM ] ;
TipoApontador Primeiro , Ultimo;
} TipoLista;