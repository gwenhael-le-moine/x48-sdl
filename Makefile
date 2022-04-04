# Makefile to build x48-sdl

CC = gcc
CFLAGS = -g -O2 -Wall
LIBS = -lSDL -lm

all: x48 mkcard checkrom dump2rom

# Binaries
x48: src/mainsdl.o src/actions.o src/debugger.o src/device.o src/disasm.o src/emulate.o src/errors.o src/init.o src/lcd.o src/memory.o src/register.o src/resources.o src/romio.o src/rpl.o src/serial.o src/timer.o src/SDL_gfxPrimitives.o src/SDL_rotozoom.o src/x48_sdl.o
	$(CC) $(CFLAGS) $(LIBS) $^ -o $@

mkcard: src/mkcard.c
	$(CC) $(CFLAGS) $(LIBS) $^ -o $@

checkrom: src/checkrom.c src/romio.o
	$(CC) $(CFLAGS) $(LIBS) $^ -o $@

dump2rom: src/dump2rom.c
	$(CC) $(CFLAGS) $(LIBS) $^ -o $@

# Cleaning
clean:
	rm -f src/*.o

clean-all: clean
	rm -f x48 mkcard checkrom dump2rom

# Objects
# %.o: %.c %.d
#	$(CC) $(CFLAGS) -c -o $@ $^

src/mainsdl.o: src/mainsdl.c src/x48_sdl.h src/global.h src/config.h src/hp48.h src/mmu.h src/debugger.h src/resources.h
	$(CC) $(CFLAGS) -c $< -o $@

src/actions.o: src/actions.c src/global.h src/config.h src/hp48.h src/mmu.h src/hp48_emu.h src/device.h src/x48_sdl.h src/timer.h src/debugger.h src/romio.h
	$(CC) $(CFLAGS) -c $< -o $@

src/debugger.o: src/debugger.c src/global.h src/config.h src/hp48.h src/mmu.h src/device.h src/timer.h src/x48_sdl.h src/debugger.h src/disasm.h src/rpl.h src/romio.h src/resources.h
	$(CC) $(CFLAGS) -c $< -o $@

src/device.o: src/device.c src/global.h src/config.h src/hp48.h src/mmu.h src/hp48_emu.h src/device.h src/timer.h src/x48_sdl.h
	$(CC) $(CFLAGS) -c $< -o $@

src/disasm.o: src/disasm.c src/global.h src/config.h src/hp48.h src/mmu.h src/disasm.h
	$(CC) $(CFLAGS) -c $< -o $@

src/emulate.o: src/emulate.c src/global.h src/config.h src/hp48.h src/mmu.h src/hp48_emu.h src/device.h src/timer.h src/x48_sdl.h src/debugger.h
	$(CC) $(CFLAGS) -c $< -o $@

src/errors.o: src/errors.c src/global.h src/config.h src/resources.h
	$(CC) $(CFLAGS) -c $< -o $@

src/init.o: src/init.c src/hp48.h src/global.h src/config.h src/mmu.h src/hp48_emu.h src/device.h src/resources.h src/romio.h
	$(CC) $(CFLAGS) -c $< -o $@

src/lcd.o: src/lcd.c src/global.h src/config.h src/hp48.h src/mmu.h src/hp48_emu.h src/x48_sdl.h src/annunc.h src/bitmaps/ann_alpha.h src/bitmaps/ann_battery.h src/bitmaps/ann_busy.h src/bitmaps/ann_io.h src/bitmaps/ann_left.h src/bitmaps/ann_right.h src/device.h
	$(CC) $(CFLAGS) -c $< -o $@

src/memory.o: src/memory.c src/global.h src/config.h src/hp48.h src/mmu.h src/device.h src/hp48_emu.h src/x48_sdl.h src/romio.h src/resources.h
	$(CC) $(CFLAGS) -c $< -o $@

src/register.o: src/register.c src/global.h src/config.h src/hp48.h src/mmu.h src/hp48_emu.h
	$(CC) $(CFLAGS) -c $< -o $@

src/resources.o: src/resources.c src/global.h src/config.h src/resources.h src/disasm.h src/hp48.h src/mmu.h src/errors.h
	$(CC) $(CFLAGS) -c $< -o $@

src/romio.o: src/romio.c src/global.h src/config.h src/resources.h src/romio.h
	$(CC) $(CFLAGS) -c $< -o $@

src/rpl.o: src/rpl.c src/global.h src/config.h src/hp48.h src/mmu.h src/hp48_emu.h src/rpl.h src/debugger.h src/append.h src/disasm.h src/romio.h src/hp48char.h
	$(CC) $(CFLAGS) -c $< -o $@

src/serial.o: src/serial.c src/global.h src/config.h src/x48_sdl.h src/hp48.h src/mmu.h src/device.h src/hp48_emu.h src/resources.h
	$(CC) $(CFLAGS) -c $< -o $@

src/timer.o: src/timer.c src/global.h src/config.h src/timer.h src/hp48.h src/mmu.h src/debugger.h src/romio.h
	$(CC) $(CFLAGS) -c $< -o $@

src/SDL_gfxPrimitives.o: src/SDL_gfxPrimitives.c src/SDL_gfxPrimitives.h src/SDL_gfxPrimitives_font.h
	$(CC) $(CFLAGS) -c $< -o $@

src/SDL_rotozoom.o: src/SDL_rotozoom.c src/SDL_rotozoom.h
	$(CC) $(CFLAGS) -c $< -o $@

src/x48_sdl.o: src/x48_sdl.c src/global.h src/config.h src/SDL_gfxPrimitives.h src/SDL_rotozoom.h src/x48_sdl.h src/icon.h src/bitmaps/hp48_icon.h src/bitmaps/hp48_top.h src/bitmaps/hp48_bottom.h src/bitmaps/hp48_logo.h src/bitmaps/hp48_text.h src/bitmaps/hp48_disp.h src/bitmaps/hp48_keys.h src/bitmaps/hp48_orange.h src/bitmaps/hp48_blue.h src/bitmaps/hp48_on.h src/bitmaps/hp48_top_gx.h src/bitmaps/hp48_logo_gx.h src/bitmaps/hp48_text_gx.h src/bitmaps/hp48_green_gx.h src/small.h src/bitmaps/blank.h src/bitmaps/hash.h src/bitmaps/lbrace.h src/bitmaps/rbrace.h src/bitmaps/comma.h src/bitmaps/slash.h src/bitmaps/two.h src/bitmaps/three.h src/bitmaps/small_colon.h src/bitmaps/A.h src/bitmaps/B.h src/bitmaps/C.h src/bitmaps/D.h src/bitmaps/E.h src/bitmaps/F.h src/bitmaps/G.h src/bitmaps/H.h src/bitmaps/I.h src/bitmaps/J.h src/bitmaps/K.h src/bitmaps/L.h src/bitmaps/M.h src/bitmaps/N.h src/bitmaps/O.h src/bitmaps/P.h src/bitmaps/Q.h src/bitmaps/R.h src/bitmaps/S.h src/bitmaps/T.h src/bitmaps/U.h src/bitmaps/V.h src/bitmaps/W.h src/bitmaps/X.h src/bitmaps/Y.h src/bitmaps/Z.h src/bitmaps/lbracket.h src/bitmaps/rbracket.h src/bitmaps/arrow.h src/bitmaps/diff.h src/bitmaps/integral.h src/bitmaps/sigma.h src/bitmaps/sqr.h src/bitmaps/root.h src/bitmaps/pow10.h src/bitmaps/exp.h src/bitmaps/under.h src/bitmaps/prog.h src/bitmaps/string.h src/bitmaps/equal.h src/bitmaps/nl.h src/bitmaps/pi.h src/bitmaps/angle.h src/bitmaps/lcurly.h src/bitmaps/rcurly.h src/bitmaps/sqr_gx.h src/bitmaps/root_gx.h src/bitmaps/pow10_gx.h src/bitmaps/exp_gx.h src/bitmaps/parens_gx.h src/bitmaps/hash_gx.h src/bitmaps/bracket_gx.h src/bitmaps/under_gx.h src/bitmaps/prog_gx.h src/bitmaps/quote_gx.h src/bitmaps/curly_gx.h src/bitmaps/colon_gx.h src/bitmaps/angle_gx.h src/bitmaps/pi_gx.h src/bitmaps/nl_gx.h src/bitmaps/comma_gx.h src/bitmaps/arrow_gx.h src/bitmaps/equal_gx.h src/buttons.h src/bitmaps/menu_label.h src/bitmaps/up.h src/bitmaps/down.h src/bitmaps/left.h src/bitmaps/right.h src/bitmaps/sqrt.h src/bitmaps/power.h src/bitmaps/inv.h src/bitmaps/neg.h src/bitmaps/bs.h src/bitmaps/alpha.h src/bitmaps/div.h src/bitmaps/shl.h src/bitmaps/mul.h src/bitmaps/shr.h src/bitmaps/minus.h src/bitmaps/plus.h src/bitmaps/last.h src/bitmaps/colon.h src/hp.h src/bitmaps/hp.h src/bitmaps/hp48sx.h src/bitmaps/hp48gx.h src/bitmaps/science.h src/bitmaps/gx_128K_ram.h src/bitmaps/gx_silver.h src/bitmaps/gx_green.h src/hp48.h src/mmu.h src/device.h src/constants.h src/options.h src/resources.h src/errors.h src/romio.h src/annunc.h src/bitmaps/ann_alpha.h src/bitmaps/ann_battery.h src/bitmaps/ann_busy.h src/bitmaps/ann_io.h src/bitmaps/ann_left.h src/bitmaps/ann_right.h src/bitmaps/sdlicon.h
	$(CC) $(CFLAGS) -c $< -o $@
