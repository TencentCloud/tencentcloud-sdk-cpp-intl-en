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

#include <tencentcloud/tcmpp/v20240801/model/ApprovalItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

ApprovalItem::ApprovalItem() :
    m_appIdHasBeenSet(false),
    m_approvalResultHasBeenSet(false),
    m_approvalNoteHasBeenSet(false)
{
}

CoreInternalOutcome ApprovalItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApprovalItem.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ApprovalResult") && !value["ApprovalResult"].IsNull())
    {
        if (!value["ApprovalResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApprovalItem.ApprovalResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approvalResult = value["ApprovalResult"].GetInt64();
        m_approvalResultHasBeenSet = true;
    }

    if (value.HasMember("ApprovalNote") && !value["ApprovalNote"].IsNull())
    {
        if (!value["ApprovalNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApprovalItem.ApprovalNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalNote = string(value["ApprovalNote"].GetString());
        m_approvalNoteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApprovalItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approvalResult, allocator);
    }

    if (m_approvalNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalNote.c_str(), allocator).Move(), allocator);
    }

}


string ApprovalItem::GetAppId() const
{
    return m_appId;
}

void ApprovalItem::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ApprovalItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t ApprovalItem::GetApprovalResult() const
{
    return m_approvalResult;
}

void ApprovalItem::SetApprovalResult(const int64_t& _approvalResult)
{
    m_approvalResult = _approvalResult;
    m_approvalResultHasBeenSet = true;
}

bool ApprovalItem::ApprovalResultHasBeenSet() const
{
    return m_approvalResultHasBeenSet;
}

string ApprovalItem::GetApprovalNote() const
{
    return m_approvalNote;
}

void ApprovalItem::SetApprovalNote(const string& _approvalNote)
{
    m_approvalNote = _approvalNote;
    m_approvalNoteHasBeenSet = true;
}

bool ApprovalItem::ApprovalNoteHasBeenSet() const
{
    return m_approvalNoteHasBeenSet;
}

