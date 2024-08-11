/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/tcmpp/v20240801/model/ModifyMNPVersionPreviewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

ModifyMNPVersionPreviewRequest::ModifyMNPVersionPreviewRequest() :
    m_mNPIdHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_mNPVersionIdHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_testEntrancePathHasBeenSet(false)
{
}

string ModifyMNPVersionPreviewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_actionType, allocator);
    }

    if (m_mNPVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mNPVersionId, allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_testEntrancePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestEntrancePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_testEntrancePath.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMNPVersionPreviewRequest::GetMNPId() const
{
    return m_mNPId;
}

void ModifyMNPVersionPreviewRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool ModifyMNPVersionPreviewRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

int64_t ModifyMNPVersionPreviewRequest::GetActionType() const
{
    return m_actionType;
}

void ModifyMNPVersionPreviewRequest::SetActionType(const int64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ModifyMNPVersionPreviewRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

int64_t ModifyMNPVersionPreviewRequest::GetMNPVersionId() const
{
    return m_mNPVersionId;
}

void ModifyMNPVersionPreviewRequest::SetMNPVersionId(const int64_t& _mNPVersionId)
{
    m_mNPVersionId = _mNPVersionId;
    m_mNPVersionIdHasBeenSet = true;
}

bool ModifyMNPVersionPreviewRequest::MNPVersionIdHasBeenSet() const
{
    return m_mNPVersionIdHasBeenSet;
}

string ModifyMNPVersionPreviewRequest::GetPlatformId() const
{
    return m_platformId;
}

void ModifyMNPVersionPreviewRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ModifyMNPVersionPreviewRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string ModifyMNPVersionPreviewRequest::GetTestEntrancePath() const
{
    return m_testEntrancePath;
}

void ModifyMNPVersionPreviewRequest::SetTestEntrancePath(const string& _testEntrancePath)
{
    m_testEntrancePath = _testEntrancePath;
    m_testEntrancePathHasBeenSet = true;
}

bool ModifyMNPVersionPreviewRequest::TestEntrancePathHasBeenSet() const
{
    return m_testEntrancePathHasBeenSet;
}


