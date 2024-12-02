# Arduino Ampel-Schaltung

Dieses Projekt simuliert eine Ampel-Schaltung mit einem Arduino und drei LEDs (rot, gelb und grün). Die LEDs leuchten in bestimmten Zeitabständen auf, um den Ablauf einer klassischen Ampelschaltung darzustellen.

## Komponenten

1x Arduino Uno oder kompatibles Board
1x rote LED
1x gelbe LED
1x grüne LED
3x 220 Ohm Widerstände
Verbindungskabel
Steckbrett

## Schaltplan

Rote LED: Pin 9 (mit einem 220 Ohm Widerstand)
Gelbe LED: Pin 10 (mit einem 220 Ohm Widerstand)
Grüne LED: Pin 11 (mit einem 220 Ohm Widerstand)
Gemeinsame Masse (GND) für alle LEDs

## Aufbau

Verbinde die LEDs mit dem Arduino entsprechend dem Schaltplan.
Schließe das Arduino-Board über USB an den Computer an.

## Installation

Öffne die Arduino IDE.
Kopiere den Code aus der Datei traffic_light.ino und füge ihn in die IDE ein.
Wähle das richtige Board und den Port in der IDE aus.
Lade den Code auf das Arduino-Board hoch.

## Funktionsweise

Der Code steuert die LEDs in vier Phasen:

Rote Phase: Die rote LED leuchtet für 5 Sekunden.
Rot-Gelbe Phase: Die rote und die gelbe LED leuchten für 2 Sekunden.
Grüne Phase: Die grüne LED leuchtet für 5 Sekunden.
Gelbe Phase: Die gelbe LED leuchtet für 2 Sekunden.


Dieser Ablauf wiederholt sich, um den Zyklus einer Ampelschaltung darzustellen.