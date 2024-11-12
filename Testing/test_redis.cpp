#include <gtest/gtest.h>
#include <hiredis/hiredis.h>

TEST(Redis, start) {
    redisContext *ctx = redisConnect("127.0.0.1", 6379);
    EXPECT_TRUE(ctx != NULL && !ctx->err);
    redisFree(ctx);
}