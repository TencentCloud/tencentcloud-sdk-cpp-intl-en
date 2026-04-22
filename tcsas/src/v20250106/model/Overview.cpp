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

#include <tencentcloud/tcsas/v20250106/model/Overview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

Overview::Overview() :
    m_appNumHasBeenSet(false),
    m_corpNumHasBeenSet(false),
    m_flushTimeHasBeenSet(false),
    m_miniAppNumHasBeenSet(false),
    m_miniGameNumHasBeenSet(false),
    m_miniGameVisitNumHasBeenSet(false),
    m_updateNumHasBeenSet(false),
    m_visitNumHasBeenSet(false)
{
}

CoreInternalOutcome Overview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppNum") && !value["AppNum"].IsNull())
    {
        if (!value["AppNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.AppNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appNum = value["AppNum"].GetInt64();
        m_appNumHasBeenSet = true;
    }

    if (value.HasMember("CorpNum") && !value["CorpNum"].IsNull())
    {
        if (!value["CorpNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.CorpNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_corpNum = value["CorpNum"].GetInt64();
        m_corpNumHasBeenSet = true;
    }

    if (value.HasMember("FlushTime") && !value["FlushTime"].IsNull())
    {
        if (!value["FlushTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.FlushTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flushTime = string(value["FlushTime"].GetString());
        m_flushTimeHasBeenSet = true;
    }

    if (value.HasMember("MiniAppNum") && !value["MiniAppNum"].IsNull())
    {
        if (!value["MiniAppNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.MiniAppNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppNum = value["MiniAppNum"].GetInt64();
        m_miniAppNumHasBeenSet = true;
    }

    if (value.HasMember("MiniGameNum") && !value["MiniGameNum"].IsNull())
    {
        if (!value["MiniGameNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.MiniGameNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_miniGameNum = value["MiniGameNum"].GetInt64();
        m_miniGameNumHasBeenSet = true;
    }

    if (value.HasMember("MiniGameVisitNum") && !value["MiniGameVisitNum"].IsNull())
    {
        if (!value["MiniGameVisitNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.MiniGameVisitNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_miniGameVisitNum = value["MiniGameVisitNum"].GetInt64();
        m_miniGameVisitNumHasBeenSet = true;
    }

    if (value.HasMember("UpdateNum") && !value["UpdateNum"].IsNull())
    {
        if (!value["UpdateNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.UpdateNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateNum = value["UpdateNum"].GetInt64();
        m_updateNumHasBeenSet = true;
    }

    if (value.HasMember("VisitNum") && !value["VisitNum"].IsNull())
    {
        if (!value["VisitNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.VisitNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_visitNum = value["VisitNum"].GetInt64();
        m_visitNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Overview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appNum, allocator);
    }

    if (m_corpNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_corpNum, allocator);
    }

    if (m_flushTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlushTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flushTime.c_str(), allocator).Move(), allocator);
    }

    if (m_miniAppNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_miniAppNum, allocator);
    }

    if (m_miniGameNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniGameNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_miniGameNum, allocator);
    }

    if (m_miniGameVisitNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniGameVisitNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_miniGameVisitNum, allocator);
    }

    if (m_updateNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateNum, allocator);
    }

    if (m_visitNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_visitNum, allocator);
    }

}


int64_t Overview::GetAppNum() const
{
    return m_appNum;
}

void Overview::SetAppNum(const int64_t& _appNum)
{
    m_appNum = _appNum;
    m_appNumHasBeenSet = true;
}

bool Overview::AppNumHasBeenSet() const
{
    return m_appNumHasBeenSet;
}

int64_t Overview::GetCorpNum() const
{
    return m_corpNum;
}

void Overview::SetCorpNum(const int64_t& _corpNum)
{
    m_corpNum = _corpNum;
    m_corpNumHasBeenSet = true;
}

bool Overview::CorpNumHasBeenSet() const
{
    return m_corpNumHasBeenSet;
}

string Overview::GetFlushTime() const
{
    return m_flushTime;
}

void Overview::SetFlushTime(const string& _flushTime)
{
    m_flushTime = _flushTime;
    m_flushTimeHasBeenSet = true;
}

bool Overview::FlushTimeHasBeenSet() const
{
    return m_flushTimeHasBeenSet;
}

int64_t Overview::GetMiniAppNum() const
{
    return m_miniAppNum;
}

void Overview::SetMiniAppNum(const int64_t& _miniAppNum)
{
    m_miniAppNum = _miniAppNum;
    m_miniAppNumHasBeenSet = true;
}

bool Overview::MiniAppNumHasBeenSet() const
{
    return m_miniAppNumHasBeenSet;
}

int64_t Overview::GetMiniGameNum() const
{
    return m_miniGameNum;
}

void Overview::SetMiniGameNum(const int64_t& _miniGameNum)
{
    m_miniGameNum = _miniGameNum;
    m_miniGameNumHasBeenSet = true;
}

bool Overview::MiniGameNumHasBeenSet() const
{
    return m_miniGameNumHasBeenSet;
}

int64_t Overview::GetMiniGameVisitNum() const
{
    return m_miniGameVisitNum;
}

void Overview::SetMiniGameVisitNum(const int64_t& _miniGameVisitNum)
{
    m_miniGameVisitNum = _miniGameVisitNum;
    m_miniGameVisitNumHasBeenSet = true;
}

bool Overview::MiniGameVisitNumHasBeenSet() const
{
    return m_miniGameVisitNumHasBeenSet;
}

int64_t Overview::GetUpdateNum() const
{
    return m_updateNum;
}

void Overview::SetUpdateNum(const int64_t& _updateNum)
{
    m_updateNum = _updateNum;
    m_updateNumHasBeenSet = true;
}

bool Overview::UpdateNumHasBeenSet() const
{
    return m_updateNumHasBeenSet;
}

int64_t Overview::GetVisitNum() const
{
    return m_visitNum;
}

void Overview::SetVisitNum(const int64_t& _visitNum)
{
    m_visitNum = _visitNum;
    m_visitNumHasBeenSet = true;
}

bool Overview::VisitNumHasBeenSet() const
{
    return m_visitNumHasBeenSet;
}

