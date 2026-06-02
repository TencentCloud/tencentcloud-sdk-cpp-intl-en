/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/mdc/v20200828/model/FlowSRTInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdc::V20200828::Model;
using namespace std;

FlowSRTInfo::FlowSRTInfo() :
    m_timestampHasBeenSet(false),
    m_sendPacketLossRateHasBeenSet(false),
    m_sendRetransmissionRateHasBeenSet(false),
    m_recvPacketLossRateHasBeenSet(false),
    m_recvRetransmissionRateHasBeenSet(false),
    m_rTTHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sendPacketDropNumberHasBeenSet(false),
    m_recvPacketDropNumberHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_sendBandwidthHasBeenSet(false),
    m_recvBandwidthHasBeenSet(false),
    m_sendPacketsHasBeenSet(false),
    m_recvPacketsHasBeenSet(false),
    m_sendLostPacketsHasBeenSet(false),
    m_recvLostPacketsHasBeenSet(false),
    m_sendRetransmitPacketsHasBeenSet(false),
    m_recvRetransmitPacketsHasBeenSet(false),
    m_flightSizeHasBeenSet(false),
    m_congestionWindowHasBeenSet(false),
    m_sendBufferHasBeenSet(false),
    m_recvBufferHasBeenSet(false),
    m_sendLatencyHasBeenSet(false),
    m_recvLatencyHasBeenSet(false)
{
}

CoreInternalOutcome FlowSRTInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("SendPacketLossRate") && !value["SendPacketLossRate"].IsNull())
    {
        if (!value["SendPacketLossRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SendPacketLossRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendPacketLossRate = value["SendPacketLossRate"].GetInt64();
        m_sendPacketLossRateHasBeenSet = true;
    }

    if (value.HasMember("SendRetransmissionRate") && !value["SendRetransmissionRate"].IsNull())
    {
        if (!value["SendRetransmissionRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SendRetransmissionRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendRetransmissionRate = value["SendRetransmissionRate"].GetInt64();
        m_sendRetransmissionRateHasBeenSet = true;
    }

    if (value.HasMember("RecvPacketLossRate") && !value["RecvPacketLossRate"].IsNull())
    {
        if (!value["RecvPacketLossRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RecvPacketLossRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvPacketLossRate = value["RecvPacketLossRate"].GetInt64();
        m_recvPacketLossRateHasBeenSet = true;
    }

    if (value.HasMember("RecvRetransmissionRate") && !value["RecvRetransmissionRate"].IsNull())
    {
        if (!value["RecvRetransmissionRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RecvRetransmissionRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvRetransmissionRate = value["RecvRetransmissionRate"].GetInt64();
        m_recvRetransmissionRateHasBeenSet = true;
    }

    if (value.HasMember("RTT") && !value["RTT"].IsNull())
    {
        if (!value["RTT"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RTT` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rTT = value["RTT"].GetInt64();
        m_rTTHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("SendPacketDropNumber") && !value["SendPacketDropNumber"].IsNull())
    {
        if (!value["SendPacketDropNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SendPacketDropNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendPacketDropNumber = value["SendPacketDropNumber"].GetInt64();
        m_sendPacketDropNumberHasBeenSet = true;
    }

    if (value.HasMember("RecvPacketDropNumber") && !value["RecvPacketDropNumber"].IsNull())
    {
        if (!value["RecvPacketDropNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RecvPacketDropNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvPacketDropNumber = value["RecvPacketDropNumber"].GetInt64();
        m_recvPacketDropNumberHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.Bandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetDouble();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("SendBandwidth") && !value["SendBandwidth"].IsNull())
    {
        if (!value["SendBandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SendBandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sendBandwidth = value["SendBandwidth"].GetDouble();
        m_sendBandwidthHasBeenSet = true;
    }

    if (value.HasMember("RecvBandwidth") && !value["RecvBandwidth"].IsNull())
    {
        if (!value["RecvBandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RecvBandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_recvBandwidth = value["RecvBandwidth"].GetDouble();
        m_recvBandwidthHasBeenSet = true;
    }

    if (value.HasMember("SendPackets") && !value["SendPackets"].IsNull())
    {
        if (!value["SendPackets"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SendPackets` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendPackets = value["SendPackets"].GetInt64();
        m_sendPacketsHasBeenSet = true;
    }

    if (value.HasMember("RecvPackets") && !value["RecvPackets"].IsNull())
    {
        if (!value["RecvPackets"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RecvPackets` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvPackets = value["RecvPackets"].GetInt64();
        m_recvPacketsHasBeenSet = true;
    }

    if (value.HasMember("SendLostPackets") && !value["SendLostPackets"].IsNull())
    {
        if (!value["SendLostPackets"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SendLostPackets` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendLostPackets = value["SendLostPackets"].GetInt64();
        m_sendLostPacketsHasBeenSet = true;
    }

    if (value.HasMember("RecvLostPackets") && !value["RecvLostPackets"].IsNull())
    {
        if (!value["RecvLostPackets"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RecvLostPackets` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvLostPackets = value["RecvLostPackets"].GetInt64();
        m_recvLostPacketsHasBeenSet = true;
    }

    if (value.HasMember("SendRetransmitPackets") && !value["SendRetransmitPackets"].IsNull())
    {
        if (!value["SendRetransmitPackets"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SendRetransmitPackets` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendRetransmitPackets = value["SendRetransmitPackets"].GetInt64();
        m_sendRetransmitPacketsHasBeenSet = true;
    }

    if (value.HasMember("RecvRetransmitPackets") && !value["RecvRetransmitPackets"].IsNull())
    {
        if (!value["RecvRetransmitPackets"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RecvRetransmitPackets` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvRetransmitPackets = value["RecvRetransmitPackets"].GetInt64();
        m_recvRetransmitPacketsHasBeenSet = true;
    }

    if (value.HasMember("FlightSize") && !value["FlightSize"].IsNull())
    {
        if (!value["FlightSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.FlightSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flightSize = value["FlightSize"].GetInt64();
        m_flightSizeHasBeenSet = true;
    }

    if (value.HasMember("CongestionWindow") && !value["CongestionWindow"].IsNull())
    {
        if (!value["CongestionWindow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.CongestionWindow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_congestionWindow = value["CongestionWindow"].GetInt64();
        m_congestionWindowHasBeenSet = true;
    }

    if (value.HasMember("SendBuffer") && !value["SendBuffer"].IsNull())
    {
        if (!value["SendBuffer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SendBuffer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendBuffer = value["SendBuffer"].GetInt64();
        m_sendBufferHasBeenSet = true;
    }

    if (value.HasMember("RecvBuffer") && !value["RecvBuffer"].IsNull())
    {
        if (!value["RecvBuffer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RecvBuffer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvBuffer = value["RecvBuffer"].GetInt64();
        m_recvBufferHasBeenSet = true;
    }

    if (value.HasMember("SendLatency") && !value["SendLatency"].IsNull())
    {
        if (!value["SendLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SendLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendLatency = value["SendLatency"].GetInt64();
        m_sendLatencyHasBeenSet = true;
    }

    if (value.HasMember("RecvLatency") && !value["RecvLatency"].IsNull())
    {
        if (!value["RecvLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RecvLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvLatency = value["RecvLatency"].GetInt64();
        m_recvLatencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowSRTInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_sendPacketLossRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendPacketLossRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendPacketLossRate, allocator);
    }

    if (m_sendRetransmissionRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendRetransmissionRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendRetransmissionRate, allocator);
    }

    if (m_recvPacketLossRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvPacketLossRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvPacketLossRate, allocator);
    }

    if (m_recvRetransmissionRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvRetransmissionRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvRetransmissionRate, allocator);
    }

    if (m_rTTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rTT, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sendPacketDropNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendPacketDropNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendPacketDropNumber, allocator);
    }

    if (m_recvPacketDropNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvPacketDropNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvPacketDropNumber, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_sendBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendBandwidth, allocator);
    }

    if (m_recvBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvBandwidth, allocator);
    }

    if (m_sendPacketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendPackets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendPackets, allocator);
    }

    if (m_recvPacketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvPackets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvPackets, allocator);
    }

    if (m_sendLostPacketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendLostPackets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendLostPackets, allocator);
    }

    if (m_recvLostPacketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvLostPackets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvLostPackets, allocator);
    }

    if (m_sendRetransmitPacketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendRetransmitPackets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendRetransmitPackets, allocator);
    }

    if (m_recvRetransmitPacketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvRetransmitPackets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvRetransmitPackets, allocator);
    }

    if (m_flightSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlightSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flightSize, allocator);
    }

    if (m_congestionWindowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CongestionWindow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_congestionWindow, allocator);
    }

    if (m_sendBufferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendBuffer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendBuffer, allocator);
    }

    if (m_recvBufferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvBuffer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvBuffer, allocator);
    }

    if (m_sendLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendLatency, allocator);
    }

    if (m_recvLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvLatency, allocator);
    }

}


int64_t FlowSRTInfo::GetTimestamp() const
{
    return m_timestamp;
}

void FlowSRTInfo::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool FlowSRTInfo::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

int64_t FlowSRTInfo::GetSendPacketLossRate() const
{
    return m_sendPacketLossRate;
}

void FlowSRTInfo::SetSendPacketLossRate(const int64_t& _sendPacketLossRate)
{
    m_sendPacketLossRate = _sendPacketLossRate;
    m_sendPacketLossRateHasBeenSet = true;
}

bool FlowSRTInfo::SendPacketLossRateHasBeenSet() const
{
    return m_sendPacketLossRateHasBeenSet;
}

int64_t FlowSRTInfo::GetSendRetransmissionRate() const
{
    return m_sendRetransmissionRate;
}

void FlowSRTInfo::SetSendRetransmissionRate(const int64_t& _sendRetransmissionRate)
{
    m_sendRetransmissionRate = _sendRetransmissionRate;
    m_sendRetransmissionRateHasBeenSet = true;
}

bool FlowSRTInfo::SendRetransmissionRateHasBeenSet() const
{
    return m_sendRetransmissionRateHasBeenSet;
}

int64_t FlowSRTInfo::GetRecvPacketLossRate() const
{
    return m_recvPacketLossRate;
}

void FlowSRTInfo::SetRecvPacketLossRate(const int64_t& _recvPacketLossRate)
{
    m_recvPacketLossRate = _recvPacketLossRate;
    m_recvPacketLossRateHasBeenSet = true;
}

bool FlowSRTInfo::RecvPacketLossRateHasBeenSet() const
{
    return m_recvPacketLossRateHasBeenSet;
}

int64_t FlowSRTInfo::GetRecvRetransmissionRate() const
{
    return m_recvRetransmissionRate;
}

void FlowSRTInfo::SetRecvRetransmissionRate(const int64_t& _recvRetransmissionRate)
{
    m_recvRetransmissionRate = _recvRetransmissionRate;
    m_recvRetransmissionRateHasBeenSet = true;
}

bool FlowSRTInfo::RecvRetransmissionRateHasBeenSet() const
{
    return m_recvRetransmissionRateHasBeenSet;
}

int64_t FlowSRTInfo::GetRTT() const
{
    return m_rTT;
}

void FlowSRTInfo::SetRTT(const int64_t& _rTT)
{
    m_rTT = _rTT;
    m_rTTHasBeenSet = true;
}

bool FlowSRTInfo::RTTHasBeenSet() const
{
    return m_rTTHasBeenSet;
}

string FlowSRTInfo::GetSessionId() const
{
    return m_sessionId;
}

void FlowSRTInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool FlowSRTInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t FlowSRTInfo::GetSendPacketDropNumber() const
{
    return m_sendPacketDropNumber;
}

void FlowSRTInfo::SetSendPacketDropNumber(const int64_t& _sendPacketDropNumber)
{
    m_sendPacketDropNumber = _sendPacketDropNumber;
    m_sendPacketDropNumberHasBeenSet = true;
}

bool FlowSRTInfo::SendPacketDropNumberHasBeenSet() const
{
    return m_sendPacketDropNumberHasBeenSet;
}

int64_t FlowSRTInfo::GetRecvPacketDropNumber() const
{
    return m_recvPacketDropNumber;
}

void FlowSRTInfo::SetRecvPacketDropNumber(const int64_t& _recvPacketDropNumber)
{
    m_recvPacketDropNumber = _recvPacketDropNumber;
    m_recvPacketDropNumberHasBeenSet = true;
}

bool FlowSRTInfo::RecvPacketDropNumberHasBeenSet() const
{
    return m_recvPacketDropNumberHasBeenSet;
}

double FlowSRTInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void FlowSRTInfo::SetBandwidth(const double& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool FlowSRTInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

double FlowSRTInfo::GetSendBandwidth() const
{
    return m_sendBandwidth;
}

void FlowSRTInfo::SetSendBandwidth(const double& _sendBandwidth)
{
    m_sendBandwidth = _sendBandwidth;
    m_sendBandwidthHasBeenSet = true;
}

bool FlowSRTInfo::SendBandwidthHasBeenSet() const
{
    return m_sendBandwidthHasBeenSet;
}

double FlowSRTInfo::GetRecvBandwidth() const
{
    return m_recvBandwidth;
}

void FlowSRTInfo::SetRecvBandwidth(const double& _recvBandwidth)
{
    m_recvBandwidth = _recvBandwidth;
    m_recvBandwidthHasBeenSet = true;
}

bool FlowSRTInfo::RecvBandwidthHasBeenSet() const
{
    return m_recvBandwidthHasBeenSet;
}

int64_t FlowSRTInfo::GetSendPackets() const
{
    return m_sendPackets;
}

void FlowSRTInfo::SetSendPackets(const int64_t& _sendPackets)
{
    m_sendPackets = _sendPackets;
    m_sendPacketsHasBeenSet = true;
}

bool FlowSRTInfo::SendPacketsHasBeenSet() const
{
    return m_sendPacketsHasBeenSet;
}

int64_t FlowSRTInfo::GetRecvPackets() const
{
    return m_recvPackets;
}

void FlowSRTInfo::SetRecvPackets(const int64_t& _recvPackets)
{
    m_recvPackets = _recvPackets;
    m_recvPacketsHasBeenSet = true;
}

bool FlowSRTInfo::RecvPacketsHasBeenSet() const
{
    return m_recvPacketsHasBeenSet;
}

int64_t FlowSRTInfo::GetSendLostPackets() const
{
    return m_sendLostPackets;
}

void FlowSRTInfo::SetSendLostPackets(const int64_t& _sendLostPackets)
{
    m_sendLostPackets = _sendLostPackets;
    m_sendLostPacketsHasBeenSet = true;
}

bool FlowSRTInfo::SendLostPacketsHasBeenSet() const
{
    return m_sendLostPacketsHasBeenSet;
}

int64_t FlowSRTInfo::GetRecvLostPackets() const
{
    return m_recvLostPackets;
}

void FlowSRTInfo::SetRecvLostPackets(const int64_t& _recvLostPackets)
{
    m_recvLostPackets = _recvLostPackets;
    m_recvLostPacketsHasBeenSet = true;
}

bool FlowSRTInfo::RecvLostPacketsHasBeenSet() const
{
    return m_recvLostPacketsHasBeenSet;
}

int64_t FlowSRTInfo::GetSendRetransmitPackets() const
{
    return m_sendRetransmitPackets;
}

void FlowSRTInfo::SetSendRetransmitPackets(const int64_t& _sendRetransmitPackets)
{
    m_sendRetransmitPackets = _sendRetransmitPackets;
    m_sendRetransmitPacketsHasBeenSet = true;
}

bool FlowSRTInfo::SendRetransmitPacketsHasBeenSet() const
{
    return m_sendRetransmitPacketsHasBeenSet;
}

int64_t FlowSRTInfo::GetRecvRetransmitPackets() const
{
    return m_recvRetransmitPackets;
}

void FlowSRTInfo::SetRecvRetransmitPackets(const int64_t& _recvRetransmitPackets)
{
    m_recvRetransmitPackets = _recvRetransmitPackets;
    m_recvRetransmitPacketsHasBeenSet = true;
}

bool FlowSRTInfo::RecvRetransmitPacketsHasBeenSet() const
{
    return m_recvRetransmitPacketsHasBeenSet;
}

int64_t FlowSRTInfo::GetFlightSize() const
{
    return m_flightSize;
}

void FlowSRTInfo::SetFlightSize(const int64_t& _flightSize)
{
    m_flightSize = _flightSize;
    m_flightSizeHasBeenSet = true;
}

bool FlowSRTInfo::FlightSizeHasBeenSet() const
{
    return m_flightSizeHasBeenSet;
}

int64_t FlowSRTInfo::GetCongestionWindow() const
{
    return m_congestionWindow;
}

void FlowSRTInfo::SetCongestionWindow(const int64_t& _congestionWindow)
{
    m_congestionWindow = _congestionWindow;
    m_congestionWindowHasBeenSet = true;
}

bool FlowSRTInfo::CongestionWindowHasBeenSet() const
{
    return m_congestionWindowHasBeenSet;
}

int64_t FlowSRTInfo::GetSendBuffer() const
{
    return m_sendBuffer;
}

void FlowSRTInfo::SetSendBuffer(const int64_t& _sendBuffer)
{
    m_sendBuffer = _sendBuffer;
    m_sendBufferHasBeenSet = true;
}

bool FlowSRTInfo::SendBufferHasBeenSet() const
{
    return m_sendBufferHasBeenSet;
}

int64_t FlowSRTInfo::GetRecvBuffer() const
{
    return m_recvBuffer;
}

void FlowSRTInfo::SetRecvBuffer(const int64_t& _recvBuffer)
{
    m_recvBuffer = _recvBuffer;
    m_recvBufferHasBeenSet = true;
}

bool FlowSRTInfo::RecvBufferHasBeenSet() const
{
    return m_recvBufferHasBeenSet;
}

int64_t FlowSRTInfo::GetSendLatency() const
{
    return m_sendLatency;
}

void FlowSRTInfo::SetSendLatency(const int64_t& _sendLatency)
{
    m_sendLatency = _sendLatency;
    m_sendLatencyHasBeenSet = true;
}

bool FlowSRTInfo::SendLatencyHasBeenSet() const
{
    return m_sendLatencyHasBeenSet;
}

int64_t FlowSRTInfo::GetRecvLatency() const
{
    return m_recvLatency;
}

void FlowSRTInfo::SetRecvLatency(const int64_t& _recvLatency)
{
    m_recvLatency = _recvLatency;
    m_recvLatencyHasBeenSet = true;
}

bool FlowSRTInfo::RecvLatencyHasBeenSet() const
{
    return m_recvLatencyHasBeenSet;
}

