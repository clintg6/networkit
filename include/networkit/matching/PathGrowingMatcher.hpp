/*
 * PathGrowingMatcher.h
 *
 *  Created on: Jun 13, 2013
 *      Author: Henning
 */

#ifndef PATHGROWINGMATCHER_H_
#define PATHGROWINGMATCHER_H_

#include "Matcher.hpp"
#include "Matching.hpp"

namespace NetworKit {

/**
 * @ingroup matching
 * Path growing matching algorithm as described by
 *   Hougardy and Drake, http://dx.doi.org/10.1016/S0020-0190(02)00393-9
 * Computes an approximate maximum weight matching with guarantee 1/2.
 * (Note that better algorithms in terms of approximation quality exist.)
 */
class PathGrowingMatcher: public Matcher {
public:
	/**
	 * @param[in] G Graph for which matching is computed.
	 */
	PathGrowingMatcher(const Graph& G);

	/**
	 * @param[in] G Graph for which matching is computed.
	 */
	PathGrowingMatcher(const Graph& G, const std::vector<double>& edgeScores);

	/**
	 * Runs path growing algorithm to compute approximate maximum weight matching
	 * for graph @a G.
	 * @return Matching (at least half as heavy as maximum weight matching).
	 */
	virtual void run();
};

} /* namespace NetworKit */
#endif /* PATHGROWINGMATCHER_H_ */
