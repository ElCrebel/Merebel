
Debian
====================
This directory contains files used to package Merebeld/Merebel-qt
for Debian-based Linux systems. If you compile Merebeld/Merebel-qt yourself, there are some useful files here.

## Merebel: URI support ##


Merebel-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install Merebel-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your Merebel-qt binary to `/usr/bin`
and the `../../share/pixmaps/Merebel128.png` to `/usr/share/pixmaps`

Merebel-qt.protocol (KDE)

