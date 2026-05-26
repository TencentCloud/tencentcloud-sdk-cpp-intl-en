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

#include <tencentcloud/trtc/v20190722/model/TranscriptionParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TranscriptionParams::TranscriptionParams() :
    m_userIdHasBeenSet(false),
    m_userSigHasBeenSet(false),
    m_maxIdleTimeHasBeenSet(false),
    m_transcriptionModeHasBeenSet(false),
    m_targetUserIdHasBeenSet(false),
    m_voicePrintHasBeenSet(false),
    m_turnDetectionHasBeenSet(false)
{
}

CoreInternalOutcome TranscriptionParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserSig") && !value["UserSig"].IsNull())
    {
        if (!value["UserSig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.UserSig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userSig = string(value["UserSig"].GetString());
        m_userSigHasBeenSet = true;
    }

    if (value.HasMember("MaxIdleTime") && !value["MaxIdleTime"].IsNull())
    {
        if (!value["MaxIdleTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.MaxIdleTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxIdleTime = value["MaxIdleTime"].GetUint64();
        m_maxIdleTimeHasBeenSet = true;
    }

    if (value.HasMember("TranscriptionMode") && !value["TranscriptionMode"].IsNull())
    {
        if (!value["TranscriptionMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.TranscriptionMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transcriptionMode = value["TranscriptionMode"].GetUint64();
        m_transcriptionModeHasBeenSet = true;
    }

    if (value.HasMember("TargetUserId") && !value["TargetUserId"].IsNull())
    {
        if (!value["TargetUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.TargetUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetUserId = string(value["TargetUserId"].GetString());
        m_targetUserIdHasBeenSet = true;
    }

    if (value.HasMember("VoicePrint") && !value["VoicePrint"].IsNull())
    {
        if (!value["VoicePrint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.VoicePrint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_voicePrint.Deserialize(value["VoicePrint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_voicePrintHasBeenSet = true;
    }

    if (value.HasMember("TurnDetection") && !value["TurnDetection"].IsNull())
    {
        if (!value["TurnDetection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.TurnDetection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_turnDetection.Deserialize(value["TurnDetection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_turnDetectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranscriptionParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userSigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userSig.c_str(), allocator).Move(), allocator);
    }

    if (m_maxIdleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxIdleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxIdleTime, allocator);
    }

    if (m_transcriptionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscriptionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transcriptionMode, allocator);
    }

    if (m_targetUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_voicePrintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicePrint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voicePrint.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_turnDetectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TurnDetection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_turnDetection.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TranscriptionParams::GetUserId() const
{
    return m_userId;
}

void TranscriptionParams::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool TranscriptionParams::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string TranscriptionParams::GetUserSig() const
{
    return m_userSig;
}

void TranscriptionParams::SetUserSig(const string& _userSig)
{
    m_userSig = _userSig;
    m_userSigHasBeenSet = true;
}

bool TranscriptionParams::UserSigHasBeenSet() const
{
    return m_userSigHasBeenSet;
}

uint64_t TranscriptionParams::GetMaxIdleTime() const
{
    return m_maxIdleTime;
}

void TranscriptionParams::SetMaxIdleTime(const uint64_t& _maxIdleTime)
{
    m_maxIdleTime = _maxIdleTime;
    m_maxIdleTimeHasBeenSet = true;
}

bool TranscriptionParams::MaxIdleTimeHasBeenSet() const
{
    return m_maxIdleTimeHasBeenSet;
}

uint64_t TranscriptionParams::GetTranscriptionMode() const
{
    return m_transcriptionMode;
}

void TranscriptionParams::SetTranscriptionMode(const uint64_t& _transcriptionMode)
{
    m_transcriptionMode = _transcriptionMode;
    m_transcriptionModeHasBeenSet = true;
}

bool TranscriptionParams::TranscriptionModeHasBeenSet() const
{
    return m_transcriptionModeHasBeenSet;
}

string TranscriptionParams::GetTargetUserId() const
{
    return m_targetUserId;
}

void TranscriptionParams::SetTargetUserId(const string& _targetUserId)
{
    m_targetUserId = _targetUserId;
    m_targetUserIdHasBeenSet = true;
}

bool TranscriptionParams::TargetUserIdHasBeenSet() const
{
    return m_targetUserIdHasBeenSet;
}

VoicePrint TranscriptionParams::GetVoicePrint() const
{
    return m_voicePrint;
}

void TranscriptionParams::SetVoicePrint(const VoicePrint& _voicePrint)
{
    m_voicePrint = _voicePrint;
    m_voicePrintHasBeenSet = true;
}

bool TranscriptionParams::VoicePrintHasBeenSet() const
{
    return m_voicePrintHasBeenSet;
}

TurnDetection TranscriptionParams::GetTurnDetection() const
{
    return m_turnDetection;
}

void TranscriptionParams::SetTurnDetection(const TurnDetection& _turnDetection)
{
    m_turnDetection = _turnDetection;
    m_turnDetectionHasBeenSet = true;
}

bool TranscriptionParams::TurnDetectionHasBeenSet() const
{
    return m_turnDetectionHasBeenSet;
}

