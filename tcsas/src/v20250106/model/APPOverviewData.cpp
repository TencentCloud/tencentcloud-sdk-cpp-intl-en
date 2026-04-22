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

#include <tencentcloud/tcsas/v20250106/model/APPOverviewData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

APPOverviewData::APPOverviewData() :
    m_allActiveDeviceNumHasBeenSet(false),
    m_allNewDeviceNumHasBeenSet(false),
    m_corpNumHasBeenSet(false),
    m_gameActiveDeviceNumHasBeenSet(false),
    m_gameNewDeviceNumHasBeenSet(false),
    m_miniAppNumHasBeenSet(false),
    m_mngNumHasBeenSet(false),
    m_newDeviceNumHasBeenSet(false),
    m_onlineMiniAppNumHasBeenSet(false),
    m_onlineMngNumHasBeenSet(false),
    m_visitNumHasBeenSet(false),
    m_flushTimeHasBeenSet(false)
{
}

CoreInternalOutcome APPOverviewData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AllActiveDeviceNum") && !value["AllActiveDeviceNum"].IsNull())
    {
        if (!value["AllActiveDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APPOverviewData.AllActiveDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allActiveDeviceNum = value["AllActiveDeviceNum"].GetInt64();
        m_allActiveDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("AllNewDeviceNum") && !value["AllNewDeviceNum"].IsNull())
    {
        if (!value["AllNewDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APPOverviewData.AllNewDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allNewDeviceNum = value["AllNewDeviceNum"].GetInt64();
        m_allNewDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("CorpNum") && !value["CorpNum"].IsNull())
    {
        if (!value["CorpNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APPOverviewData.CorpNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_corpNum = value["CorpNum"].GetInt64();
        m_corpNumHasBeenSet = true;
    }

    if (value.HasMember("GameActiveDeviceNum") && !value["GameActiveDeviceNum"].IsNull())
    {
        if (!value["GameActiveDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APPOverviewData.GameActiveDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gameActiveDeviceNum = value["GameActiveDeviceNum"].GetInt64();
        m_gameActiveDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("GameNewDeviceNum") && !value["GameNewDeviceNum"].IsNull())
    {
        if (!value["GameNewDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APPOverviewData.GameNewDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gameNewDeviceNum = value["GameNewDeviceNum"].GetInt64();
        m_gameNewDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("MiniAppNum") && !value["MiniAppNum"].IsNull())
    {
        if (!value["MiniAppNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APPOverviewData.MiniAppNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppNum = value["MiniAppNum"].GetInt64();
        m_miniAppNumHasBeenSet = true;
    }

    if (value.HasMember("MngNum") && !value["MngNum"].IsNull())
    {
        if (!value["MngNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APPOverviewData.MngNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mngNum = value["MngNum"].GetInt64();
        m_mngNumHasBeenSet = true;
    }

    if (value.HasMember("NewDeviceNum") && !value["NewDeviceNum"].IsNull())
    {
        if (!value["NewDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APPOverviewData.NewDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newDeviceNum = value["NewDeviceNum"].GetInt64();
        m_newDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("OnlineMiniAppNum") && !value["OnlineMiniAppNum"].IsNull())
    {
        if (!value["OnlineMiniAppNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APPOverviewData.OnlineMiniAppNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineMiniAppNum = value["OnlineMiniAppNum"].GetInt64();
        m_onlineMiniAppNumHasBeenSet = true;
    }

    if (value.HasMember("OnlineMngNum") && !value["OnlineMngNum"].IsNull())
    {
        if (!value["OnlineMngNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APPOverviewData.OnlineMngNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineMngNum = value["OnlineMngNum"].GetInt64();
        m_onlineMngNumHasBeenSet = true;
    }

    if (value.HasMember("VisitNum") && !value["VisitNum"].IsNull())
    {
        if (!value["VisitNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APPOverviewData.VisitNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_visitNum = value["VisitNum"].GetInt64();
        m_visitNumHasBeenSet = true;
    }

    if (value.HasMember("FlushTime") && !value["FlushTime"].IsNull())
    {
        if (!value["FlushTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APPOverviewData.FlushTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flushTime = string(value["FlushTime"].GetString());
        m_flushTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void APPOverviewData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_allActiveDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllActiveDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allActiveDeviceNum, allocator);
    }

    if (m_allNewDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllNewDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allNewDeviceNum, allocator);
    }

    if (m_corpNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpNum, allocator);
    }

    if (m_gameActiveDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameActiveDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gameActiveDeviceNum, allocator);
    }

    if (m_gameNewDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameNewDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gameNewDeviceNum, allocator);
    }

    if (m_miniAppNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_miniAppNum, allocator);
    }

    if (m_mngNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MngNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mngNum, allocator);
    }

    if (m_newDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newDeviceNum, allocator);
    }

    if (m_onlineMiniAppNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineMiniAppNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineMiniAppNum, allocator);
    }

    if (m_onlineMngNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineMngNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineMngNum, allocator);
    }

    if (m_visitNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_visitNum, allocator);
    }

    if (m_flushTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlushTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flushTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t APPOverviewData::GetAllActiveDeviceNum() const
{
    return m_allActiveDeviceNum;
}

void APPOverviewData::SetAllActiveDeviceNum(const int64_t& _allActiveDeviceNum)
{
    m_allActiveDeviceNum = _allActiveDeviceNum;
    m_allActiveDeviceNumHasBeenSet = true;
}

bool APPOverviewData::AllActiveDeviceNumHasBeenSet() const
{
    return m_allActiveDeviceNumHasBeenSet;
}

int64_t APPOverviewData::GetAllNewDeviceNum() const
{
    return m_allNewDeviceNum;
}

void APPOverviewData::SetAllNewDeviceNum(const int64_t& _allNewDeviceNum)
{
    m_allNewDeviceNum = _allNewDeviceNum;
    m_allNewDeviceNumHasBeenSet = true;
}

bool APPOverviewData::AllNewDeviceNumHasBeenSet() const
{
    return m_allNewDeviceNumHasBeenSet;
}

int64_t APPOverviewData::GetCorpNum() const
{
    return m_corpNum;
}

void APPOverviewData::SetCorpNum(const int64_t& _corpNum)
{
    m_corpNum = _corpNum;
    m_corpNumHasBeenSet = true;
}

bool APPOverviewData::CorpNumHasBeenSet() const
{
    return m_corpNumHasBeenSet;
}

int64_t APPOverviewData::GetGameActiveDeviceNum() const
{
    return m_gameActiveDeviceNum;
}

void APPOverviewData::SetGameActiveDeviceNum(const int64_t& _gameActiveDeviceNum)
{
    m_gameActiveDeviceNum = _gameActiveDeviceNum;
    m_gameActiveDeviceNumHasBeenSet = true;
}

bool APPOverviewData::GameActiveDeviceNumHasBeenSet() const
{
    return m_gameActiveDeviceNumHasBeenSet;
}

int64_t APPOverviewData::GetGameNewDeviceNum() const
{
    return m_gameNewDeviceNum;
}

void APPOverviewData::SetGameNewDeviceNum(const int64_t& _gameNewDeviceNum)
{
    m_gameNewDeviceNum = _gameNewDeviceNum;
    m_gameNewDeviceNumHasBeenSet = true;
}

bool APPOverviewData::GameNewDeviceNumHasBeenSet() const
{
    return m_gameNewDeviceNumHasBeenSet;
}

int64_t APPOverviewData::GetMiniAppNum() const
{
    return m_miniAppNum;
}

void APPOverviewData::SetMiniAppNum(const int64_t& _miniAppNum)
{
    m_miniAppNum = _miniAppNum;
    m_miniAppNumHasBeenSet = true;
}

bool APPOverviewData::MiniAppNumHasBeenSet() const
{
    return m_miniAppNumHasBeenSet;
}

int64_t APPOverviewData::GetMngNum() const
{
    return m_mngNum;
}

void APPOverviewData::SetMngNum(const int64_t& _mngNum)
{
    m_mngNum = _mngNum;
    m_mngNumHasBeenSet = true;
}

bool APPOverviewData::MngNumHasBeenSet() const
{
    return m_mngNumHasBeenSet;
}

int64_t APPOverviewData::GetNewDeviceNum() const
{
    return m_newDeviceNum;
}

void APPOverviewData::SetNewDeviceNum(const int64_t& _newDeviceNum)
{
    m_newDeviceNum = _newDeviceNum;
    m_newDeviceNumHasBeenSet = true;
}

bool APPOverviewData::NewDeviceNumHasBeenSet() const
{
    return m_newDeviceNumHasBeenSet;
}

int64_t APPOverviewData::GetOnlineMiniAppNum() const
{
    return m_onlineMiniAppNum;
}

void APPOverviewData::SetOnlineMiniAppNum(const int64_t& _onlineMiniAppNum)
{
    m_onlineMiniAppNum = _onlineMiniAppNum;
    m_onlineMiniAppNumHasBeenSet = true;
}

bool APPOverviewData::OnlineMiniAppNumHasBeenSet() const
{
    return m_onlineMiniAppNumHasBeenSet;
}

int64_t APPOverviewData::GetOnlineMngNum() const
{
    return m_onlineMngNum;
}

void APPOverviewData::SetOnlineMngNum(const int64_t& _onlineMngNum)
{
    m_onlineMngNum = _onlineMngNum;
    m_onlineMngNumHasBeenSet = true;
}

bool APPOverviewData::OnlineMngNumHasBeenSet() const
{
    return m_onlineMngNumHasBeenSet;
}

int64_t APPOverviewData::GetVisitNum() const
{
    return m_visitNum;
}

void APPOverviewData::SetVisitNum(const int64_t& _visitNum)
{
    m_visitNum = _visitNum;
    m_visitNumHasBeenSet = true;
}

bool APPOverviewData::VisitNumHasBeenSet() const
{
    return m_visitNumHasBeenSet;
}

string APPOverviewData::GetFlushTime() const
{
    return m_flushTime;
}

void APPOverviewData::SetFlushTime(const string& _flushTime)
{
    m_flushTime = _flushTime;
    m_flushTimeHasBeenSet = true;
}

bool APPOverviewData::FlushTimeHasBeenSet() const
{
    return m_flushTimeHasBeenSet;
}

