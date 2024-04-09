ASSIGNMENTS=$(wildcard assignments/*/*.md)
.PHONY: $(ASSIGNMENTS)

all:: $(ASSIGNMENTS)

$(ASSIGNMENTS):
	pandoc $@ \
		-o $(patsubst %.md, %.pdf, $@) \
		-V geometry:margin=1in
