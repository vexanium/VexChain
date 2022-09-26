# Bios Boot Tutorial

The `bios-boot-tutorial.py` script simulates the VEXANIUM bios boot sequence.

## Prerequisites

1. Python 3.x
2. CMake
3. git

## Steps

1. Install vexanium binaries by following the steps outlined in below tutorial
[Install vexanium binaries](https://github.com/VEXANIUM/vexchain2#mac-os-x-brew-install)

2. Install eosio.cdt binaries by following the steps outlined in below tutorial
[Install eosio.cdt binaries](https://github.com/VEXANIUM/eosio.cdt#binary-releases)

3. Compile eosio.contracts sources repository by following the [compile eosio.contracts guidelines](https://github.com/VEXANIUM/vexchain2io.contracts/blob/master/docs/02_compile-and-deploy.md) first part, the deploying steps from those guidelines should not be executed.

4. Make note of the full path of the directory where the contracts were compiled, if you followed the [compile eosio.contracts guidelines](https://github.com/VEXANIUM/vexchain2io.contracts/blob/master/docs/02_compile-and-deploy.md) it should be under the `build` folder, in `build/contracts/`, we'll reference it from now on as `EOSIO_CONTRACTS_DIRECTORY`

5. Launch the `bios-boot-tutorial.py` script
Minimal command line to launch the script below, make sure you replace `EOSIO_CONTRACTS_DIRECTORY` with actual directory

```bash
$ cd ~
$ git clone https://github.com/VEXANIUM/vexchain2.git
$ cd ./eos/tutorials/bios-boot-tutorial/
$ python3 bios-boot-tutorial.py --cleos=cleos --nodeos=nodeos --keosd=keosd --contracts-dir="EOSIO_CONTRACTS_DIRECTORY" -w -a

```

See [VEXANIUM Documentation Wiki: Tutorial - Bios Boot](https://github.com/VEXANIUM/vexchain2.1/wiki/Tutorial-Bios-Boot-Sequence) for additional information.
