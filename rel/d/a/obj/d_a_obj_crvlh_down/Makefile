#
# Generated By: dol2asm
#

M429_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_crvlh_down.plf
M429_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_crvlh_down.lcf
M429_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_crvlh_down.map

M429_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_crvlh_down/d_a_obj_crvlh_down.cpp \

M429_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_crvlh_down/d_a_obj_crvlh_down.o \

M429_LIBS := \

M429_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M429_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M429_LDSCRIPT) \
	-unused -map $(M429_MAP) \
	-w off \

$(M429_TARGET): $(M429_O_FILES) $(M429_LIBS)
	@echo [429] creating $(M429_TARGET)
	@echo $(M429_LIBS) $(M429_O_FILES) > build/M429_ofiles
	@python3 tools/lcf.py rel 429 --output $(M429_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M429_LDFLAGS) -o $(M429_TARGET) @build/M429_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_crvlh_down/%.o: rel/d/a/obj/d_a_obj_crvlh_down/%.cpp $(BUILD_DIR)/rel/d/a/obj/d_a_obj_crvlh_down/%.d
	@echo [429] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M429_CFLAGS) $(DEPFLAGS) -c -o $(dir $@) $(basename $@).cpp
	@if [ -z '$(DISABLE_DEPS)' ]; then tools/transform-dep.py '$(basename $@).d' '$(basename $@).d'; touch -c $@; fi

ifndef DISABLE_DEPS
M429_D_FILES := $(M429_O_FILES:.o=.d)
$(M429_D_FILES):
include $(wildcard $(M429_D_FILES))
endif


