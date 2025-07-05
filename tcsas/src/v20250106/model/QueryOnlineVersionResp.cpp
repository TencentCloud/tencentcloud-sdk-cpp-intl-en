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

#include <tencentcloud/tcsas/v20250106/model/QueryOnlineVersionResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

QueryOnlineVersionResp::QueryOnlineVersionResp() :
    m_mNPIdHasBeenSet(false),
    m_mNPVersionHasBeenSet(false),
    m_mNPVersionIdHasBeenSet(false),
    m_mNPVersionNoteHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome QueryOnlineVersionResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOnlineVersionResp.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPVersion") && !value["MNPVersion"].IsNull())
    {
        if (!value["MNPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOnlineVersionResp.MNPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersion = string(value["MNPVersion"].GetString());
        m_mNPVersionHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionId") && !value["MNPVersionId"].IsNull())
    {
        if (!value["MNPVersionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOnlineVersionResp.MNPVersionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionId = value["MNPVersionId"].GetInt64();
        m_mNPVersionIdHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionNote") && !value["MNPVersionNote"].IsNull())
    {
        if (!value["MNPVersionNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOnlineVersionResp.MNPVersionNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionNote = string(value["MNPVersionNote"].GetString());
        m_mNPVersionNoteHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOnlineVersionResp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOnlineVersionResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mNPVersionId, allocator);
    }

    if (m_mNPVersionNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPVersionNote.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string QueryOnlineVersionResp::GetMNPId() const
{
    return m_mNPId;
}

void QueryOnlineVersionResp::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool QueryOnlineVersionResp::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string QueryOnlineVersionResp::GetMNPVersion() const
{
    return m_mNPVersion;
}

void QueryOnlineVersionResp::SetMNPVersion(const string& _mNPVersion)
{
    m_mNPVersion = _mNPVersion;
    m_mNPVersionHasBeenSet = true;
}

bool QueryOnlineVersionResp::MNPVersionHasBeenSet() const
{
    return m_mNPVersionHasBeenSet;
}

int64_t QueryOnlineVersionResp::GetMNPVersionId() const
{
    return m_mNPVersionId;
}

void QueryOnlineVersionResp::SetMNPVersionId(const int64_t& _mNPVersionId)
{
    m_mNPVersionId = _mNPVersionId;
    m_mNPVersionIdHasBeenSet = true;
}

bool QueryOnlineVersionResp::MNPVersionIdHasBeenSet() const
{
    return m_mNPVersionIdHasBeenSet;
}

string QueryOnlineVersionResp::GetMNPVersionNote() const
{
    return m_mNPVersionNote;
}

void QueryOnlineVersionResp::SetMNPVersionNote(const string& _mNPVersionNote)
{
    m_mNPVersionNote = _mNPVersionNote;
    m_mNPVersionNoteHasBeenSet = true;
}

bool QueryOnlineVersionResp::MNPVersionNoteHasBeenSet() const
{
    return m_mNPVersionNoteHasBeenSet;
}

string QueryOnlineVersionResp::GetUpdateTime() const
{
    return m_updateTime;
}

void QueryOnlineVersionResp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool QueryOnlineVersionResp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

