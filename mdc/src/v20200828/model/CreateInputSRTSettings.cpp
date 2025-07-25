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

#include <tencentcloud/mdc/v20200828/model/CreateInputSRTSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdc::V20200828::Model;
using namespace std;

CreateInputSRTSettings::CreateInputSRTSettings() :
    m_modeHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_latencyHasBeenSet(false),
    m_recvLatencyHasBeenSet(false),
    m_peerLatencyHasBeenSet(false),
    m_peerIdleTimeoutHasBeenSet(false),
    m_passphraseHasBeenSet(false),
    m_pbKeyLenHasBeenSet(false),
    m_sourceAddressesHasBeenSet(false)
{
}

CoreInternalOutcome CreateInputSRTSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInputSRTSettings.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("StreamId") && !value["StreamId"].IsNull())
    {
        if (!value["StreamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInputSRTSettings.StreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamId = string(value["StreamId"].GetString());
        m_streamIdHasBeenSet = true;
    }

    if (value.HasMember("Latency") && !value["Latency"].IsNull())
    {
        if (!value["Latency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInputSRTSettings.Latency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latency = value["Latency"].GetInt64();
        m_latencyHasBeenSet = true;
    }

    if (value.HasMember("RecvLatency") && !value["RecvLatency"].IsNull())
    {
        if (!value["RecvLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInputSRTSettings.RecvLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvLatency = value["RecvLatency"].GetInt64();
        m_recvLatencyHasBeenSet = true;
    }

    if (value.HasMember("PeerLatency") && !value["PeerLatency"].IsNull())
    {
        if (!value["PeerLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInputSRTSettings.PeerLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_peerLatency = value["PeerLatency"].GetInt64();
        m_peerLatencyHasBeenSet = true;
    }

    if (value.HasMember("PeerIdleTimeout") && !value["PeerIdleTimeout"].IsNull())
    {
        if (!value["PeerIdleTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInputSRTSettings.PeerIdleTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_peerIdleTimeout = value["PeerIdleTimeout"].GetInt64();
        m_peerIdleTimeoutHasBeenSet = true;
    }

    if (value.HasMember("Passphrase") && !value["Passphrase"].IsNull())
    {
        if (!value["Passphrase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInputSRTSettings.Passphrase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passphrase = string(value["Passphrase"].GetString());
        m_passphraseHasBeenSet = true;
    }

    if (value.HasMember("PbKeyLen") && !value["PbKeyLen"].IsNull())
    {
        if (!value["PbKeyLen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInputSRTSettings.PbKeyLen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pbKeyLen = value["PbKeyLen"].GetInt64();
        m_pbKeyLenHasBeenSet = true;
    }

    if (value.HasMember("SourceAddresses") && !value["SourceAddresses"].IsNull())
    {
        if (!value["SourceAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateInputSRTSettings.SourceAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SRTSourceAddressReq item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceAddresses.push_back(item);
        }
        m_sourceAddressesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateInputSRTSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_streamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamId.c_str(), allocator).Move(), allocator);
    }

    if (m_latencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latency, allocator);
    }

    if (m_recvLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvLatency, allocator);
    }

    if (m_peerLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peerLatency, allocator);
    }

    if (m_peerIdleTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerIdleTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peerIdleTimeout, allocator);
    }

    if (m_passphraseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Passphrase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passphrase.c_str(), allocator).Move(), allocator);
    }

    if (m_pbKeyLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PbKeyLen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pbKeyLen, allocator);
    }

    if (m_sourceAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceAddresses.begin(); itr != m_sourceAddresses.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CreateInputSRTSettings::GetMode() const
{
    return m_mode;
}

void CreateInputSRTSettings::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateInputSRTSettings::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string CreateInputSRTSettings::GetStreamId() const
{
    return m_streamId;
}

void CreateInputSRTSettings::SetStreamId(const string& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool CreateInputSRTSettings::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}

int64_t CreateInputSRTSettings::GetLatency() const
{
    return m_latency;
}

void CreateInputSRTSettings::SetLatency(const int64_t& _latency)
{
    m_latency = _latency;
    m_latencyHasBeenSet = true;
}

bool CreateInputSRTSettings::LatencyHasBeenSet() const
{
    return m_latencyHasBeenSet;
}

int64_t CreateInputSRTSettings::GetRecvLatency() const
{
    return m_recvLatency;
}

void CreateInputSRTSettings::SetRecvLatency(const int64_t& _recvLatency)
{
    m_recvLatency = _recvLatency;
    m_recvLatencyHasBeenSet = true;
}

bool CreateInputSRTSettings::RecvLatencyHasBeenSet() const
{
    return m_recvLatencyHasBeenSet;
}

int64_t CreateInputSRTSettings::GetPeerLatency() const
{
    return m_peerLatency;
}

void CreateInputSRTSettings::SetPeerLatency(const int64_t& _peerLatency)
{
    m_peerLatency = _peerLatency;
    m_peerLatencyHasBeenSet = true;
}

bool CreateInputSRTSettings::PeerLatencyHasBeenSet() const
{
    return m_peerLatencyHasBeenSet;
}

int64_t CreateInputSRTSettings::GetPeerIdleTimeout() const
{
    return m_peerIdleTimeout;
}

void CreateInputSRTSettings::SetPeerIdleTimeout(const int64_t& _peerIdleTimeout)
{
    m_peerIdleTimeout = _peerIdleTimeout;
    m_peerIdleTimeoutHasBeenSet = true;
}

bool CreateInputSRTSettings::PeerIdleTimeoutHasBeenSet() const
{
    return m_peerIdleTimeoutHasBeenSet;
}

string CreateInputSRTSettings::GetPassphrase() const
{
    return m_passphrase;
}

void CreateInputSRTSettings::SetPassphrase(const string& _passphrase)
{
    m_passphrase = _passphrase;
    m_passphraseHasBeenSet = true;
}

bool CreateInputSRTSettings::PassphraseHasBeenSet() const
{
    return m_passphraseHasBeenSet;
}

int64_t CreateInputSRTSettings::GetPbKeyLen() const
{
    return m_pbKeyLen;
}

void CreateInputSRTSettings::SetPbKeyLen(const int64_t& _pbKeyLen)
{
    m_pbKeyLen = _pbKeyLen;
    m_pbKeyLenHasBeenSet = true;
}

bool CreateInputSRTSettings::PbKeyLenHasBeenSet() const
{
    return m_pbKeyLenHasBeenSet;
}

vector<SRTSourceAddressReq> CreateInputSRTSettings::GetSourceAddresses() const
{
    return m_sourceAddresses;
}

void CreateInputSRTSettings::SetSourceAddresses(const vector<SRTSourceAddressReq>& _sourceAddresses)
{
    m_sourceAddresses = _sourceAddresses;
    m_sourceAddressesHasBeenSet = true;
}

bool CreateInputSRTSettings::SourceAddressesHasBeenSet() const
{
    return m_sourceAddressesHasBeenSet;
}

