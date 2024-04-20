ALL = $(wildcard documents/*/*.md)
LATEST = $(shell git diff --name-only --cached | grep 'documents/' | grep '\.md')

.PHONY: $(ALL)

all: $(ALL)
latest: $(LATEST)

run_pandoc = $(shell pandoc defaults.yaml $1 \
	-s -N \
	-o$(patsubst %.md, %.pdf, $1) \
	--template=template.tex)

$(ALL):
	@echo building $@
	$(call run_pandoc, $@)

