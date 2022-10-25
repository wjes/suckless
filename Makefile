SUBDIRS := "st" "dwm" "dwmstatus" "sent" "farbfeld"

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@ clean
	$(MAKE) -C $@
	sudo $(MAKE) -C $@ install

.PHONY: all $(SUBDIRS)
