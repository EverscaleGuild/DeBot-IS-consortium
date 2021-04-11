#pragma once

namespace tvm { namespace schema {

struct blockHashsRes {
	uint256 h2;
	uint256 h3;
};

__interface ISecurityCardManagement {

	[[internal, answer_id]]
	blockHashRes getBlockHashes(uint192 sn);
	[[internal, answer_id]]
	uint256 turnOnWallet(uint128 p1, uint16 iv, uint32 sc);
	[[internal, answer_id]]
	bool_t setRecoveryData(bytes recoveryData);
	[[internal, answer_id]]
	bytes getRecoveryData();

}
};

