ASSIGNMENTS := $(shell find documents/ -name \*\.md -mtime -7)
.PHONY: $(ASSIGNMENTS)

all:: $(ASSIGNMENTS)

$(ASSIGNMENTS):
	pandoc defaults.yaml $@ \
		-s -N \
		-o$(patsubst %.md, %.pdf, $@) \
		--template=template.tex
