
compile: gcc -o des des.c des.h main.c msg.h msg.c binaryUtil.c binaryUtil.h
encrypt: ./des -e plaintext key
decrypt: ./des -d ciphertext key