rm -rf src/*
rm -rf build/*
mkdir src
mkdir build
asn1c rrc.asn1 -D src -pdu=RRCConnectionSetup -no-gen-OER -no-gen-example -fcompound-names -fno-include-deps
# gcc -Isrc -o build/coder RRCConnection_coder.c src/*.c -DPDU=Rectangle -DASN_DISABLE_OER_SUPPORT
# gcc -Isrc -o build/decoder RRCConnection_decoder.c src/*.c -DPDU=Rectangle -DASN_DISABLE_OER_SUPPORT
# ./build/coder ./build/rectangle_ber_out
# ./build/decoder ./build/rectangle_ber_out