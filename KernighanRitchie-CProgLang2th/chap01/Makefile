
CFLAGS = -std=c90

EXECS = hello    \
		conv00   \
		ex0103   \
		ex0104   \
		conv01   \
		ex0105   \
		conv02   \
		conv03   \
		copy00   \
		copy01   \
		ex0106   \
	    ex0107   \
		count00  \
	    count01  \
	    lnct00   \
	    ex0108   \
	    ex0109   \
	    ex0110   \
	    wc       \
	    ex0112   \
		digit_count \
	    ex0113	

all: $(EXECS)
	$(info build done for: $(EXECS))

%: %.c
	$(call color_echo,$@:,$(CC),$(CPPFLAGS) $(CFLAGS),$(INC),$^,$(LIB))
	@$(CC) $(CPPFLAGS) $(CFLAGS) $(INC) $^ $(LIB) -o $@

clean:
	-rm -f $(EXECS)

.PHONY: all clean

# COLOURS
define color_echo
	@tput setaf 3
	@echo -n $1" " 
	@tput setaf 4
	@echo -n $2" "
	@tput setaf 7
	@echo -n $3" "
	@tput setaf 5
	@echo -n $4" "
	@tput setaf 11
	@echo -n $5" "
	@tput setaf 5
	@echo $6
	@tput sgr0
endef

