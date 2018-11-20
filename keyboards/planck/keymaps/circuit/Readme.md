# Circuit
![Circuit](https://user-images.githubusercontent.com/5340992/48798509-68c3a000-ecca-11e8-9c13-931819da3aa7.png)

## Design goals:
1. Arrow keys always available.
2. As few arbitrary decisions as possible.
3. Most frequently used things in the easiest to reach places.
4. Gaming in mind.
    * As few delayed key presses as possible.
    * Game lock, to prevent the annoying start menu from popping up by accident.
5. Programming in mind.
    * Numpad layer.
    * Extra punctuation on the number layer.
6. Dvorak layout.

My layout differs from most in the placement the ARROW keys, `ESC`, VOL keys, having a number pad, and the GAME LOCK function.

## Effective layers:
* [DEFAULT] Qwerty or Dvorak layer.
* [HOLD] Upper layer is numbers and punctuation.
* [HOLD] Lower layer is symbols and actions.
* [TOGGLE] Numpad layer is a layer for numpad keys, (should an application need these separate keys), or should you need to input a lot of numbers.
* [HOLD] Function layer is the infrequently used function keys, layout toggle, game lock, and reset.

### Special keys:
* `RSHFT` and `ENTER` are combined. Tap once for `ENTER` and hold for `RSHFT`. `ENTER` will be registered on release if released within 200 ms, else `RSHFT` is registered starting at 201 ms until release.
    * If for some reason, this interferes with the normal usage of the `ENTER` key in any way, (some problem that may never happen), I have added a regular non-modified `ENTER` key on the same key in the [LOWER] layer.
* Likewise, the volume up and down keys are bound to the respective [UPPER] and [LOWER] layers. Tapping the key will adjust the volume, holding the key will activate the layer instead.
    * If you need to hold the volume key, simply double-tap the key and hold the second press. This also works for `ENTER`.
    * `MUTE` is bound to the space bar on the [FNCTN] layer, e.g. hold `VOL-` and `VOL+` and press `SPACE`.

## Game lock:
**TL;DR**: The game lock is on by default, disabling the `GUI` key (WINDOWS key).

This is my primary keyboard, and I use it to play games. The windows key is a headache while gaming, and I rarely ever need to use it otherwise. Some cases do come up, and I intended for this layout to be usable for others, so maybe they might want it. Enabling the game lock overwrites the `SLASH` key. The reason for this is that rather than have a dedicated GUI button that's useless while the lock is engaged, there might as well be a button there. If the lock is disabled, the `SLASH` and `QUESTION` keys can still be found in the [UPPER] layer.

## Number Pad

![Numpad](https://user-images.githubusercontent.com/5340992/48798623-a58f9700-ecca-11e8-98a0-7a442f837a07.png)

I designed the number pad modelled after a traditional 108-key keyboard numpad. A lot of compromise went into it, but I'm happy with the final product. I added `BKSP`, the arrow keys in the `WASD` configuration, and `ESC`, as well as enabling the space bar for a little extra functionality while on this layer.

## Notes:
* The Dvorak `Z` key is to the right of the `S` key instead of under it as part of a compromise I made to keep the ARROW keys available on the default layer.
* I also support the little tones that the default Planck layout features, plus a few discreet ones to indicate my own custom layers and Game Lock. To disable them, open the `rules.mk` and set `AUDIO_ENABLE = no`.
