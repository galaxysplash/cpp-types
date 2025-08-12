#pragma once

#include <expected>

template <typename T, typename E> using Result = std::expected<T, E>;

