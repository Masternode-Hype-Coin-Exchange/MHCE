
Debian
====================
This directory contains files used to package mhced/mhce-qt
for Debian-based Linux systems. If you compile mhced/mhce-qt yourself, there are some useful files here.

## mhce: URI support ##


mhce-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install mhce-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your mhceqt binary to `/usr/bin`
and the `../../share/pixmaps/mhce128.png` to `/usr/share/pixmaps`

mhce-qt.protocol (KDE)

