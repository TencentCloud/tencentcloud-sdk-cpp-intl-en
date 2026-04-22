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

#include <tencentcloud/tcsas/v20250106/model/ConfigureMNGPreviewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

ConfigureMNGPreviewRequest::ConfigureMNGPreviewRequest() :
    m_mNPIdHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_mNPVersionIdHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_previewEntrancePathHasBeenSet(false)
{
}

string ConfigureMNGPreviewRequest::ToJsonString() const
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

    if (m_previewEntrancePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewEntrancePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_previewEntrancePath.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ConfigureMNGPreviewRequest::GetMNPId() const
{
    return m_mNPId;
}

void ConfigureMNGPreviewRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool ConfigureMNGPreviewRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

int64_t ConfigureMNGPreviewRequest::GetActionType() const
{
    return m_actionType;
}

void ConfigureMNGPreviewRequest::SetActionType(const int64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ConfigureMNGPreviewRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

int64_t ConfigureMNGPreviewRequest::GetMNPVersionId() const
{
    return m_mNPVersionId;
}

void ConfigureMNGPreviewRequest::SetMNPVersionId(const int64_t& _mNPVersionId)
{
    m_mNPVersionId = _mNPVersionId;
    m_mNPVersionIdHasBeenSet = true;
}

bool ConfigureMNGPreviewRequest::MNPVersionIdHasBeenSet() const
{
    return m_mNPVersionIdHasBeenSet;
}

string ConfigureMNGPreviewRequest::GetPlatformId() const
{
    return m_platformId;
}

void ConfigureMNGPreviewRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ConfigureMNGPreviewRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string ConfigureMNGPreviewRequest::GetPreviewEntrancePath() const
{
    return m_previewEntrancePath;
}

void ConfigureMNGPreviewRequest::SetPreviewEntrancePath(const string& _previewEntrancePath)
{
    m_previewEntrancePath = _previewEntrancePath;
    m_previewEntrancePathHasBeenSet = true;
}

bool ConfigureMNGPreviewRequest::PreviewEntrancePathHasBeenSet() const
{
    return m_previewEntrancePathHasBeenSet;
}


