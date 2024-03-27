#include <stdlib.h>

/* 
    Génère 16 clés de round de 48 bits chacune 
    à partir d'une clé initiale de 64 bits.
    @param u_int64_t key : clé initiale
    @return un tableau constitué de 16 clés de round
*/
u_int64_t *key_schedule(u_int64_t key);
u_int64_t encrypt(u_int64_t x, u_int64_t *key);
u_int64_t decrypt(u_int64_t y, u_int64_t *key);