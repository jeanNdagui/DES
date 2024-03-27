
#include <stdlib.h>
#include <stdio.h>
#define DESC "desc.txt"

struct des_msg
{
    char *title;
    char *key_title;
};


void start_des();
void display_permutation_table(int8_t IP[], u_char size, char *t);
void display_des(u_int64_t x, u_int64_t *key, int8_t b);
void plaintext_init_msg(u_int64_t x, u_int64_t ip, u_int32_t L, u_int32_t R, int8_t IP[], int8_t b);
void display_f_function(u_int64_t permutation, u_int64_t k, u_int64_t E_xor_K, int8_t E[]);
void display_s_box(u_char i, u_int8_t in, u_int8_t ou, int8_t S[][16]);
void display_permutation_P(u_int32_t in, u_int32_t ou, int8_t E[]);
void display_L_R(int8_t i, u_int32_t L, u_int32_t R);
void display_key_schedule_init(u_int64_t key, u_int64_t permuted_choice_1, u_int32_t C, u_int32_t D);
void display_key_schedule_end(int8_t p, u_int64_t key, u_int32_t C, u_int32_t D, int8_t r);
void binary_expansion64(u_int64_t x);
void display_sbox_table(int8_t S[][16], u_char nb);
