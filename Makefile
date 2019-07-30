.PHONY: clean All

All:
	@echo "----------Building project:[ PL1 - Release ]----------"
	@cd "PL1" && "$(MAKE)" -f  "PL1.mk"
clean:
	@echo "----------Cleaning project:[ PL1 - Release ]----------"
	@cd "PL1" && "$(MAKE)" -f  "PL1.mk" clean
