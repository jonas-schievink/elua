-- Arduino Mega 2560 configuration

return {
  cpu = 'ATmega2560',
  components = {
    sercon = { uart = 0, speed = 115200 },
  },
  modules = {
    generic = {}
  }
}
