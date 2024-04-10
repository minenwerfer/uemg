ASSIGNMENTS=$(wildcard assignments/*/*.md)
.PHONY: $(ASSIGNMENTS)

all:: $(ASSIGNMENTS)

$(ASSIGNMENTS):
	pandoc defaults.yaml $@ \
		-s -N \
		-o$(patsubst %.md, %.pdf, $@) \
		--template=template.tex
