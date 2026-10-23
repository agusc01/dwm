# dbar segment click debugging

This fork of dwm reads optional `@{x}` status markers emitted by
[agusc01/dbar](https://github.com/agusc01/dbar). Each one-character
marker identifies the next visible status segment. Markers are removed before
rendering; color control bytes and normal status text still work.

The status parser derives text width and click hitboxes from the same visible
spans. The hitbox follows the segment when its order changes or when another
indicator disappears. The separator before the next marker belongs to the
preceding segment.

Left, middle and right clicks run the locally installed
`~/.config/dbar/dbar click ID BUTTON` command via `/bin/sh`; arbitrary
status text is never passed to a shell. The temporary dispatcher opens `st`
and prints the module name and mouse button. Scroll-wheel buttons are
intentionally unbound. The markers remain internal; `dbar preview` remains
human-readable without any marker text.

Install this dwm update **before** switching to the tagged-status dbar
branch; otherwise older dwm may draw marker text on the screen.

## Manual smoke test

1. Rebuild and restart dwm after updating the fork.
2. Start compatible dbar and verify that no `@{x}` markers are visible.
3. Left-click the Wi-Fi/network, CPU and volume segments; each opens a
   separate `st` window displaying `wifi`, `cpu` or `volume`.
4. Middle- and right-click a segment; the displayed button must match.
5. Verify that the clock, optional Bluetooth, temperature, battery and
   brightness segments identify themselves correctly when present.
6. Switch dbar color mode off and on and repeat, verifying consistent hitboxes.
7. Confirm that clicking blank bar space does nothing and changing segment
   availability does not shift click handling to a different module.

The debug-only callback will later be replaced with configurable actions;
no operational settings (volume, brightness, connectivity, etc.) are changed
by this feature.

## USB and printer modules

The status marker allowlist also accepts `@{u}` for USB storage and
`@{p}` for CUPS printers. Both follow the same coordinate and color handling
as existing segments. Left/middle/right clicks forward the identifier to
`dbar click u BUTTON` or `dbar click p BUTTON`, respectively. USB and
printer actions are diagnostic placeholders; no device or print job is changed.

After installing the companion dbar branch, test both visible modules in
colored and monochrome modes. Confirm that hidden modules leave no phantom
click targets and the clock remains clickable in its actual new position.
