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

#include <tencentcloud/mdc/v20200828/model/CreateOutputSrtSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdc::V20200828::Model;
using namespace std;

CreateOutputSrtSettings::CreateOutputSrtSettings() :
    m_destinationsHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_latencyHasBeenSet(false),
    m_recvLatencyHasBeenSet(false),
    m_peerLatencyHasBeenSet(false),
    m_peerIdleTimeoutHasBeenSet(false),
    m_passphraseHasBeenSet(false),
    m_pbKeyLenHasBeenSet(false),
    m_modeHasBeenSet(false)
{
}

CoreInternalOutcome CreateOutputSrtSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Destinations") && !value["Destinations"].IsNull())
    {
        if (!value["Destinations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateOutputSrtSettings.Destinations` is not array type"));

        const rapidjson::Value &tmpValue = value["Destinations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CreateOutputSrtSettingsDestinations item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destinations.push_back(item);
        }
        m_destinationsHasBeenSet = true;
    }

    if (value.HasMember("StreamId") && !value["StreamId"].IsNull())
    {
        if (!value["StreamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputSrtSettings.StreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamId = string(value["StreamId"].GetString());
        m_streamIdHasBeenSet = true;
    }

    if (value.HasMember("Latency") && !value["Latency"].IsNull())
    {
        if (!value["Latency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputSrtSettings.Latency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latency = value["Latency"].GetInt64();
        m_latencyHasBeenSet = true;
    }

    if (value.HasMember("RecvLatency") && !value["RecvLatency"].IsNull())
    {
        if (!value["RecvLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputSrtSettings.RecvLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvLatency = value["RecvLatency"].GetInt64();
        m_recvLatencyHasBeenSet = true;
    }

    if (value.HasMember("PeerLatency") && !value["PeerLatency"].IsNull())
    {
        if (!value["PeerLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputSrtSettings.PeerLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_peerLatency = value["PeerLatency"].GetInt64();
        m_peerLatencyHasBeenSet = true;
    }

    if (value.HasMember("PeerIdleTimeout") && !value["PeerIdleTimeout"].IsNull())
    {
        if (!value["PeerIdleTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputSrtSettings.PeerIdleTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_peerIdleTimeout = value["PeerIdleTimeout"].GetInt64();
        m_peerIdleTimeoutHasBeenSet = true;
    }

    if (value.HasMember("Passphrase") && !value["Passphrase"].IsNull())
    {
        if (!value["Passphrase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputSrtSettings.Passphrase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passphrase = string(value["Passphrase"].GetString());
        m_passphraseHasBeenSet = true;
    }

    if (value.HasMember("PbKeyLen") && !value["PbKeyLen"].IsNull())
    {
        if (!value["PbKeyLen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputSrtSettings.PbKeyLen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pbKeyLen = value["PbKeyLen"].GetInt64();
        m_pbKeyLenHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputSrtSettings.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateOutputSrtSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_destinationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destinations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinations.begin(); itr != m_destinations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

}


vector<CreateOutputSrtSettingsDestinations> CreateOutputSrtSettings::GetDestinations() const
{
    return m_destinations;
}

void CreateOutputSrtSettings::SetDestinations(const vector<CreateOutputSrtSettingsDestinations>& _destinations)
{
    m_destinations = _destinations;
    m_destinationsHasBeenSet = true;
}

bool CreateOutputSrtSettings::DestinationsHasBeenSet() const
{
    return m_destinationsHasBeenSet;
}

string CreateOutputSrtSettings::GetStreamId() const
{
    return m_streamId;
}

void CreateOutputSrtSettings::SetStreamId(const string& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool CreateOutputSrtSettings::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}

int64_t CreateOutputSrtSettings::GetLatency() const
{
    return m_latency;
}

void CreateOutputSrtSettings::SetLatency(const int64_t& _latency)
{
    m_latency = _latency;
    m_latencyHasBeenSet = true;
}

bool CreateOutputSrtSettings::LatencyHasBeenSet() const
{
    return m_latencyHasBeenSet;
}

int64_t CreateOutputSrtSettings::GetRecvLatency() const
{
    return m_recvLatency;
}

void CreateOutputSrtSettings::SetRecvLatency(const int64_t& _recvLatency)
{
    m_recvLatency = _recvLatency;
    m_recvLatencyHasBeenSet = true;
}

bool CreateOutputSrtSettings::RecvLatencyHasBeenSet() const
{
    return m_recvLatencyHasBeenSet;
}

int64_t CreateOutputSrtSettings::GetPeerLatency() const
{
    return m_peerLatency;
}

void CreateOutputSrtSettings::SetPeerLatency(const int64_t& _peerLatency)
{
    m_peerLatency = _peerLatency;
    m_peerLatencyHasBeenSet = true;
}

bool CreateOutputSrtSettings::PeerLatencyHasBeenSet() const
{
    return m_peerLatencyHasBeenSet;
}

int64_t CreateOutputSrtSettings::GetPeerIdleTimeout() const
{
    return m_peerIdleTimeout;
}

void CreateOutputSrtSettings::SetPeerIdleTimeout(const int64_t& _peerIdleTimeout)
{
    m_peerIdleTimeout = _peerIdleTimeout;
    m_peerIdleTimeoutHasBeenSet = true;
}

bool CreateOutputSrtSettings::PeerIdleTimeoutHasBeenSet() const
{
    return m_peerIdleTimeoutHasBeenSet;
}

string CreateOutputSrtSettings::GetPassphrase() const
{
    return m_passphrase;
}

void CreateOutputSrtSettings::SetPassphrase(const string& _passphrase)
{
    m_passphrase = _passphrase;
    m_passphraseHasBeenSet = true;
}

bool CreateOutputSrtSettings::PassphraseHasBeenSet() const
{
    return m_passphraseHasBeenSet;
}

int64_t CreateOutputSrtSettings::GetPbKeyLen() const
{
    return m_pbKeyLen;
}

void CreateOutputSrtSettings::SetPbKeyLen(const int64_t& _pbKeyLen)
{
    m_pbKeyLen = _pbKeyLen;
    m_pbKeyLenHasBeenSet = true;
}

bool CreateOutputSrtSettings::PbKeyLenHasBeenSet() const
{
    return m_pbKeyLenHasBeenSet;
}

string CreateOutputSrtSettings::GetMode() const
{
    return m_mode;
}

void CreateOutputSrtSettings::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CreateOutputSrtSettings::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

