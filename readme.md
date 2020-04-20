# MIDIDRUMS

MIDI-powered finger drums, made from a bunch of old electronics and some MIDI-powered finger drums.

---

## Design

The drum pads came out of an M-Audio Axiom-49 II. Rather than peizoelectric transducers, these are more like a membrane keyboard - their resistance goes down when thwacked. Arranged in two banks of four, some multiplexing will be required to avoid using too many ADCs.

An STM32F4 Discovery board is currently being used to for ADC, multiplexing and USB MIDI. This may be overkill.

---

## Roadmap

### Electronics

- [x] Circuit designed
- [x] One pad can be thwacked and detected
- [ ] Bank of four pads can be thwacked and detected
- [ ] Two banks of four pads can be thwacked and detected
- [ ] Circuit soldered onto some protoboard

### MIDI

- [ ] Register as USB device
- [ ] Register as MIDI instrument
- [ ] Send any MIDI message
- [ ] Send a MIDI message when drum thwacked
- [ ] All drum pads send MIDI out USB port when thwacked

### Housing

- [x] Temporary housing made to hold electronics
- [ ] Temporary housing braced to withstand being thwacked
- [ ] Permanent housing / brace designed (3D print?)
- [ ] Permanent housing / brace fabricated
