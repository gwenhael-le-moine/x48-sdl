# Makefile to build x48-sdl

CC = gcc
CFLAGS = -g -O2 -Wall
LIBS = -lSDL -lm

all: x48 mkcard checkrom dump2rom

x48: mainsdl.o actions.o debugger.o device.o disasm.o emulate.o errors.o init.o lcd.o memory.o register.o resources.o romio.o rpl.o serial.o timer.o SDL_gfxPrimitives.o SDL_rotozoom.o x48_sdl.o
	$(CC) $(CFLAGS) $(LIBS) *.o -o x48

mkcard: mkcard.c
	$(CC) $(CFLAGS) $(LIBS) $^ -o $@

checkrom: checkrom.c romio.o
	$(CC) $(CFLAGS) $(LIBS) $^ -o $@

dump2rom: dump2rom.c
	$(CC) $(CFLAGS) $(LIBS) $^ -o $@

clean:
	rm -f *.o

clean-all: clean
	rm -f x48 mkcard checkrom dump2rom

# %.o: %.c %.d
#	$(CC) $(CFLAGS) -c -o $@ $^

mainsdl.o: mainsdl.c x48_sdl.h global.h config.h hp48.h mmu.h debugger.h resources.h
	$(CC) $(CFLAGS) -c $< -o mainsdl.o

actions.o: actions.c global.h config.h hp48.h mmu.h hp48_emu.h device.h x48_sdl.h timer.h debugger.h romio.h
	$(CC) $(CFLAGS) -c $< -o actions.o

debugger.o: debugger.c global.h config.h hp48.h mmu.h device.h timer.h x48_sdl.h debugger.h disasm.h rpl.h romio.h resources.h
	$(CC) $(CFLAGS) -c $< -o debugger.o

device.o: device.c global.h config.h hp48.h mmu.h hp48_emu.h device.h timer.h x48_sdl.h
	$(CC) $(CFLAGS) -c $< -o device.o

disasm.o: disasm.c global.h config.h hp48.h mmu.h disasm.h
	$(CC) $(CFLAGS) -c $< -o disasm.o

emulate.o: emulate.c global.h config.h hp48.h mmu.h hp48_emu.h device.h timer.h x48_sdl.h debugger.h
	$(CC) $(CFLAGS) -c $< -o emulate.o

errors.o: errors.c global.h config.h resources.h
	$(CC) $(CFLAGS) -c $< -o errors.o

init.o: init.c hp48.h global.h config.h mmu.h hp48_emu.h device.h resources.h romio.h
	$(CC) $(CFLAGS) -c $< -o init.o

lcd.o: lcd.c global.h config.h hp48.h mmu.h hp48_emu.h x48_sdl.h annunc.h bitmaps/ann_alpha.h bitmaps/ann_battery.h bitmaps/ann_busy.h bitmaps/ann_io.h bitmaps/ann_left.h bitmaps/ann_right.h device.h
	$(CC) $(CFLAGS) -c $< -o lcd.o

memory.o: memory.c global.h config.h hp48.h mmu.h device.h hp48_emu.h x48_sdl.h romio.h resources.h
	$(CC) $(CFLAGS) -c $< -o memory.o

register.o: register.c global.h config.h hp48.h mmu.h hp48_emu.h
	$(CC) $(CFLAGS) -c $< -o register.o

resources.o: resources.c global.h config.h resources.h disasm.h hp48.h mmu.h errors.h
	$(CC) $(CFLAGS) -c $< -o resources.o

romio.o: romio.c global.h config.h resources.h romio.h
	$(CC) $(CFLAGS) -c $< -o romio.o

rpl.o: rpl.c global.h config.h hp48.h mmu.h hp48_emu.h rpl.h debugger.h append.h disasm.h romio.h hp48char.h
	$(CC) $(CFLAGS) -c $< -o rpl.o

serial.o: serial.c global.h config.h x48_sdl.h hp48.h mmu.h device.h hp48_emu.h resources.h
	$(CC) $(CFLAGS) -c $< -o serial.o

timer.o: timer.c global.h config.h timer.h hp48.h mmu.h debugger.h romio.h
	$(CC) $(CFLAGS) -c $< -o timer.o

SDL_gfxPrimitives.o: SDL_gfxPrimitives.c SDL_gfxPrimitives.h SDL_gfxPrimitives_font.h
	$(CC) $(CFLAGS) -c $< -o SDL_gfxPrimitives.o

SDL_rotozoom.o: SDL_rotozoom.c SDL_rotozoom.h
	$(CC) $(CFLAGS) -c $< -o SDL_rotozoom.o

x48_sdl.o: x48_sdl.c global.h config.h SDL_gfxPrimitives.h SDL_rotozoom.h x48_sdl.h icon.h bitmaps/hp48_icon.h bitmaps/hp48_top.h bitmaps/hp48_bottom.h bitmaps/hp48_logo.h bitmaps/hp48_text.h bitmaps/hp48_disp.h bitmaps/hp48_keys.h bitmaps/hp48_orange.h bitmaps/hp48_blue.h bitmaps/hp48_on.h bitmaps/hp48_top_gx.h bitmaps/hp48_logo_gx.h bitmaps/hp48_text_gx.h bitmaps/hp48_green_gx.h small.h bitmaps/blank.h bitmaps/hash.h bitmaps/lbrace.h bitmaps/rbrace.h bitmaps/comma.h bitmaps/slash.h bitmaps/two.h bitmaps/three.h bitmaps/small_colon.h bitmaps/A.h bitmaps/B.h bitmaps/C.h bitmaps/D.h bitmaps/E.h bitmaps/F.h bitmaps/G.h bitmaps/H.h bitmaps/I.h bitmaps/J.h bitmaps/K.h bitmaps/L.h bitmaps/M.h bitmaps/N.h bitmaps/O.h bitmaps/P.h bitmaps/Q.h bitmaps/R.h bitmaps/S.h bitmaps/T.h bitmaps/U.h bitmaps/V.h bitmaps/W.h bitmaps/X.h bitmaps/Y.h bitmaps/Z.h bitmaps/lbracket.h bitmaps/rbracket.h bitmaps/arrow.h bitmaps/diff.h bitmaps/integral.h bitmaps/sigma.h bitmaps/sqr.h bitmaps/root.h bitmaps/pow10.h bitmaps/exp.h bitmaps/under.h bitmaps/prog.h bitmaps/string.h bitmaps/equal.h bitmaps/nl.h bitmaps/pi.h bitmaps/angle.h bitmaps/lcurly.h bitmaps/rcurly.h bitmaps/sqr_gx.h bitmaps/root_gx.h bitmaps/pow10_gx.h bitmaps/exp_gx.h bitmaps/parens_gx.h bitmaps/hash_gx.h bitmaps/bracket_gx.h bitmaps/under_gx.h bitmaps/prog_gx.h bitmaps/quote_gx.h bitmaps/curly_gx.h bitmaps/colon_gx.h bitmaps/angle_gx.h bitmaps/pi_gx.h bitmaps/nl_gx.h bitmaps/comma_gx.h bitmaps/arrow_gx.h bitmaps/equal_gx.h buttons.h bitmaps/menu_label.h bitmaps/up.h bitmaps/down.h bitmaps/left.h bitmaps/right.h bitmaps/sqrt.h bitmaps/power.h bitmaps/inv.h bitmaps/neg.h bitmaps/bs.h bitmaps/alpha.h bitmaps/div.h bitmaps/shl.h bitmaps/mul.h bitmaps/shr.h bitmaps/minus.h bitmaps/plus.h bitmaps/last.h bitmaps/colon.h hp.h bitmaps/hp.h bitmaps/hp48sx.h bitmaps/hp48gx.h bitmaps/science.h bitmaps/gx_128K_ram.h bitmaps/gx_silver.h bitmaps/gx_green.h hp48.h mmu.h device.h constants.h options.h resources.h errors.h romio.h annunc.h bitmaps/ann_alpha.h bitmaps/ann_battery.h bitmaps/ann_busy.h bitmaps/ann_io.h bitmaps/ann_left.h bitmaps/ann_right.h bitmaps/sdlicon.h
	$(CC) $(CFLAGS) -c $< -o x48_sdl.o
