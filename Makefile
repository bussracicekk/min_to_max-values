EXTENSION = min_to_max
MODULE_big = min_to_max
DATA = min_to_max--0.0.1.sql
OBJS = min_to_max.o 

PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)