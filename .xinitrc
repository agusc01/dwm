#!/bin/bash

# Wireless
# fish -c 'wifidisable'
fish -c 'bluetoothdisable'

# Volume
fish -c 'setsound 0'
fish -c 'smute'

# Microphone
fish -c 'm0'

# Camera
# TODO see how to disable camera without ask pass
# fish -c 'c0'

# Screen
fish -c 'setbrightness 50'

# Bar
fish -c 'refreshdbar true'

# Background
feh --bg-fill ~/Pictures/backgrounds/debian.jpg

# Notification
fish -c 'refreshdunst'

# Composition maganer. Make bg opacity in st (simple terminal) works !
picom &

# GUI
exec dwm
