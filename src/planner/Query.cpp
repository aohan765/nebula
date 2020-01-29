/* Copyright (c) 2020 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#include "Query.h"

namespace nebula {
namespace graph {
std::string GetNeighbors::explain() const {
    // TODO:
    return "GetNeighbors";
}

std::string GetVertices::explain() const {
    // TODO:
    return "GetVertices";
}

std::string GetEdges::explain() const {
    // TODO:
    return "GetEdges";
}

std::string ReadIndex::explain() const {
    // TODO:
    return "ReadIndex";
}

std::string Filter::explain() const {
    // TODO:
    return "Filter";
}

std::string Union::explain() const {
    // TODO:
    return "Union";
}

std::string Intersect::explain() const {
    // TODO:
    return "Intersect";
}

std::string Minus::explain() const {
    // TODO:
    return "Minus";
}

std::string Project::explain() const {
    // TODO:
    return "Project";
}

std::string Sort::explain() const {
    // TODO:
    return "Sort";
}

std::string Limit::explain() const {
    std::string buf;
    buf.reserve(256);
    buf += "Limit: ";
    buf += folly::stringPrintf("offset %ld, count %ld", offset_, count_);
    return buf;
}

std::string Aggregate::explain() const {
    // TODO:
    return "Aggregate";
}

std::string Selector::explain() const {
    return "Selector";
}

std::string Loop::explain() const {
    return "Loop";
}

std::string RegisterSpaceToSession::explain() const {
    return "RegisterSpaceToSession";
}

std::string Dedup::explain() const {
    return "Dedup";
}
}  // namespace graph
}  // namespace nebula