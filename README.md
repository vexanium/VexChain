# Vexanium Blockchain - Blockchain financial center building a trusted business ecosystem.

VexChain forking Basic EOSIO Version: v2.1.0

Welcome to the VexChain source code repository! This software enables businesses to rapidly build and deploy high-performance and high-security blockchain-based applications.

Some of the groundbreaking features of VEXCHAIN include:

1. Free Rate Limited Transactions
1. Low Latency Block confirmation (0.5 seconds)
1. Low-overhead Byzantine Fault Tolerant Finality
1. Designed for optional high-overhead, low-latency BFT finality
1. Smart contract platform powered by WebAssembly
1. Designed for Sparse Header Light Client Validation
1. Scheduled Recurring Transactions
1. Time Delay Security
1. Hierarchical Role Based Permissions
1. Support for Biometric Hardware Secured Keys (e.g. Apple Secure Enclave)
1. Designed for Parallel Execution of Context Free Validation Logic
1. Designed for Inter Blockchain Communication


## Supported Operating Systems

VEXCHAIN currently supports the following operating systems:  

1. Amazon Linux 2
2. CentOS 7
2. CentOS 7.x
2. CentOS 8
3. Ubuntu 16.04
4. Ubuntu 18.04
4. Ubuntu 20.04
5. MacOS 10.14 (Mojave)
6. MacOS 10.15 (Catalina)

---

**Note: It may be possible to install VEXCHAIN on other Unix-based operating systems. This is not officially supported, though.**

---

## Software Installation

If you are new to VEXCHAIN, it is recommended that you install the [VEXCHAIN Prebuilt Binaries](#prebuilt-binaries). If you are an advanced developer, a block producer, or no binaries are available for your platform, you may need to [Build VEXCHAIN from source](https://github.com/vexanium/VexChain/blob/main/README.md#manual-build).

---

**Note: If you used our scripts to build/install VEXCHAIN, please run the [Uninstall Script](#uninstall-script) before using our prebuilt binary packages.**

---

## Prebuilt Binaries

Prebuilt VEXCHAIN software packages are available for the operating systems below. Find and follow the instructions for your OS:

### Mac OS X:

#### Mac OS X Brew Install
```sh
brew tap vex/vexanium
brew install vex
```
Note: On MacOS 10.15 (Catalina), there is a chance to face the linking error below which prevents successful installation of VEXCHAIN:
```
Reinstalling 1 broken dependent from source:
vexanium/vexanium/vexanium
```
The following Homebrew commands will resolve this issue:
```sh
brew link vex
```
#### Mac OS X Brew Uninstall
```sh
brew remove vex
```

### Ubuntu Linux:

#### Ubuntu 20.04 Package Install
```sh
wget https://github.com/vexanium/VexChain/releases/download/v2.1.0/vex_2.1.0-1_ubuntu_20.04_amd64.deb
sudo apt install ./vex_2.1.0-1_ubuntu_20.04_amd64.deb
```
#### Ubuntu 18.04 Package Install
```sh
wget https://github.com/vexanium/VexChain/releases/download/v2.1.0/vex_2.1.0-1-ubuntu-18.04_amd64.deb
sudo apt install ./vex_2.1.0-1-ubuntu-18.04_amd64.deb
```
#### Ubuntu Package Uninstall
```sh
sudo apt remove vex
```

## Manual build
```sh
git clone https://github.com/vexanium/VexChain
cd VexChain
./scripts/
io_build.sh
./scripts/eosio_install.sh
```

## Uninstall Script
To uninstall the VEXCHAIN built/installed binaries and dependencies, run:
```sh
./scripts/eosio_uninstall.sh
```

## Resources
1. [Website](https://vexanium.com)
1. [Blog](https://vexanium.medium.com)
1. [Developer Portal](https://docs.vexanium.com)
1. [Community Telegram Group](https://t.me/vexaniumcom)
1. [Developer Telegram Group](https://t.me/chatvexchain)
1. [White Paper](https://vexanium.s3-ap-southeast-1.amazonaws.com/dl/vexanium-whitepaper.pdf)
