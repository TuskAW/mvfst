/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 */

#pragma once

#include <quic/api/QuicTransportFunctions.h>
#include <quic/codec/QuicConnectionId.h>
#include <quic/dsr/DSRPacketizationRequestSender.h>
#include <quic/dsr/Scheduler.h>
#include <quic/handshake/Aead.h>
#include <quic/server/state/ServerStateMachine.h>

namespace quic {
uint64_t writePacketizationRequest(
    QuicServerConnectionState& connection,
    const ConnectionId& dstCid,
    size_t packetLimit,
    const Aead& aead);
} // namespace quic
