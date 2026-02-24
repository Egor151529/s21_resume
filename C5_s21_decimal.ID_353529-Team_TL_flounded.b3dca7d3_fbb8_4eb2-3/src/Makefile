CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
LINKING_FLAGS = -lcheck -lm -lsubunit
GCOV_FLAGS = -fprofile-arcs -ftest-coverage

LIB_DIR = lib
TEST_DIR = tests
COMMON_DIR = common
BUILD_DIR = ../build
LIB_SRCS = $(wildcard $(LIB_DIR)/s21_*.c)
COMMON_SRCS = $(wildcard $(COMMON_DIR)/*.c)
LIB_OBJS = $(patsubst %.c,%.o,$(LIB_SRCS)) $(patsubst %.c,%.o,$(COMMON_SRCS))
TEST_SRC = $(TEST_DIR)/*.c
COMMON_SRC = $(COMMON_DIR)/*.c
TEST_EXEC = $(BUILD_DIR)/test_runner
LIB_NAME = s21_decimal.a
CHECK_FILES = $(wildcard lib/*.c lib/*.h tests/*.c tests/*.h *.c *.h common/*.c common/*.h)

all: $(LIB_NAME) test clean_o gcov_report

clean:
	rm -f $(LIB_NAME)
	rm -f $(LIB_DIR)/*.o
	rm -rf $(BUILD_DIR)/*
	rm -f *.gcda *.gcno *.o
	rm -f $(LIB_DIR)/*.gcda $(LIB_DIR)/*.gcno
	rm -f $(BUILD_DIR)/*.gcda $(BUILD_DIR)/*.gcno coverage.info
	rm -rf gcov_report

test: $(LIB_NAME) clean_o
	clang-format -i $(CHECK_FILES)
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(TEST_SRC) $(LIB_NAME) -o $(TEST_EXEC) $(LINKING_FLAGS)
	./$(TEST_EXEC)

$(LIB_NAME): $(LIB_OBJS)
	clang-format -i $(CHECK_FILES)
	ar rcs $(LIB_NAME) $(LIB_OBJS)

gcov_report: clean_o
	rm -rf gcov_report
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(GCOV_FLAGS) -c $(TEST_SRC) $(LIB_SRCS)
	$(CC) $(CFLAGS) -c $(COMMON_SRC)
	$(CC) $(GCOV_FLAGS) *.o -o $(TEST_EXEC) $(LINKING_FLAGS)
	./$(TEST_EXEC)
	lcov --capture --directory . --output-file coverage.info
	genhtml coverage.info --output-directory gcov_report
	rm -f *.gcda *.gcno *.o
	@echo "Отчёт gcov сгенерирован в папке gcov_report"

style:
	clang-format -i $(CHECK_FILES)
	clang-format -n $(CHECK_FILES)

clean_o:
	rm -f $(LIB_DIR)/*.o
	rm -f $(COMMON_DIR)/*.o

test_memory: $(LIB_NAME) clean_o
	clang-format -i $(CHECK_FILES)
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(TEST_SRC) $(LIB_NAME) -o $(TEST_EXEC) $(LINKING_FLAGS) -fsanitize=address
	./$(TEST_EXEC)

test_valgrind: $(LIB_NAME) clean_o
	clang-format -i $(CHECK_FILES)
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(TEST_SRC) $(LIB_NAME) -o $(TEST_EXEC) $(LINKING_FLAGS)
	valgrind --tool=memcheck --leak-check=yes -q -s ./$(TEST_EXEC)

$(LIB_DIR)/%.o: $(LIB_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all test clean style clean_o gcov_report