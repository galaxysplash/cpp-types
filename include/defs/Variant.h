#pragma once

#include <variant>

template <typename ...TS> using Variant = std::variant<TS...>;