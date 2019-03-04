![alt text](https://media.discordapp.net/attachments/452473827432071199/495672409207210008/red.png?width=433&height=419)

### Merebel is a fork of [PIVX](https://github.com/PIVX-Project/PIVX) that forked [Dash](https://github.com/dashpay/dash) that forked [Bitcoin](https://github.com/bitcoin/bitcoinp)


# MasterRebelCore integration/staging repository


Merebel is a cutting edge privacy Masternode cryptocurrency.

- Anonymized transactions using zerocoin technology.
- Fast transactions featuring guaranteed zero confirmation transactions.
- We have equipped Merebel with the algorithm Lyra2z for excellent performance and power efficiency.
- Decentralized blockchain voting providing for consensus based advancement of the current Masternode
  technology used to secure the network and provide the above features, each Masternode is secured
  with a collateral of 3K MERI.

Merebel is the first cryptocurrency to implement a bank and debitcard system based on Masternode rewards!

Merebel Masternode hosting Platform > Merebel Exchange > Merebel Bank 3.0 > MasterMERIcard 

More information at [merebel.org](http://www.merebel.org) Visit our ANN thread at [BitcoinTalk](https://bitcointalk.org/index.php?topic=4712850.0)


### Coin Specs
<table>
<tr><td>Algo</td><td>Lyra2z</td></tr>
<tr><td>Block Time</td><td>120 Seconds</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
<tr><td>Premine</td><td>5%</td></tr>
<tr><td>max. Supply</td><td>30.000.000 MERI</td></tr>
</table>



Merebel Core
=====================

Setup
---------------------
[Merebel Core](http://merebel.org/wallets/) is the original Merebel client and it builds the backbone of the network. However, it downloads and stores the entire history of Merebel transactions; depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once.

Running
---------------------
The following are some helpful notes on how to run Merebel on your native platform.

### Unix

Unpack the files into a directory and run:

- bin/32/Merebel-qt (GUI, 32-bit) or bin/32/Merebeld (headless, 32-bit)
- bin/64/Merebel-qt (GUI, 64-bit) or bin/64/Merebeld (headless, 64-bit)

### Windows

Unpack the files into a directory, and then run Merebel-qt.exe.

### OSX

Drag Merebel-Qt to your applications folder, and then run Merebel-Qt.

### Need Help?

* See the documentation at the [Merebel Wiki](https://en.bitcoin.it/wiki/Main_Page) ***TODO***
for help and more information.
* Ask for help on [BitcoinTalk](https://bitcointalk.org/index.php) or on the [Merebel Forum](http://crebellion.org/).
* Join one of our Discord groups [Merebel Discord Groups](https://discord.gg/TFt9xss).

Building
---------------------
The following are developer notes on how to build Merebel on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OSX Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The Merebel repo's [root README](https://github.com/ElCrebel/Merebel-project/blame/master/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/bitcoin/doxygen/) ***TODO***
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Dnsseed Policy](dnsseed-policy.md)

### Resources

* Discuss on the [BitcoinTalk](https://bitcointalk.org/index.php?topic=4712850.0) .
* Join the [Merebel-Dev] Discord groups [Merebel Discord Groups](https://discord.gg/TFt9xss).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT/Lyra2z software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
