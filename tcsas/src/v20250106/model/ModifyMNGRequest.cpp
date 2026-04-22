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

#include <tencentcloud/tcsas/v20250106/model/ModifyMNGRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

ModifyMNGRequest::ModifyMNGRequest() :
    m_mNPTypeHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_mNPIntroHasBeenSet(false),
    m_mNPDescHasBeenSet(false),
    m_mNPIdHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_mNPIconHasBeenSet(false)
{
}

string ModifyMNGRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mNPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPType.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPName.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIntroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIntro";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPIntro.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIcon";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mNPIcon.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMNGRequest::GetMNPType() const
{
    return m_mNPType;
}

void ModifyMNGRequest::SetMNPType(const string& _mNPType)
{
    m_mNPType = _mNPType;
    m_mNPTypeHasBeenSet = true;
}

bool ModifyMNGRequest::MNPTypeHasBeenSet() const
{
    return m_mNPTypeHasBeenSet;
}

string ModifyMNGRequest::GetMNPName() const
{
    return m_mNPName;
}

void ModifyMNGRequest::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool ModifyMNGRequest::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string ModifyMNGRequest::GetMNPIntro() const
{
    return m_mNPIntro;
}

void ModifyMNGRequest::SetMNPIntro(const string& _mNPIntro)
{
    m_mNPIntro = _mNPIntro;
    m_mNPIntroHasBeenSet = true;
}

bool ModifyMNGRequest::MNPIntroHasBeenSet() const
{
    return m_mNPIntroHasBeenSet;
}

string ModifyMNGRequest::GetMNPDesc() const
{
    return m_mNPDesc;
}

void ModifyMNGRequest::SetMNPDesc(const string& _mNPDesc)
{
    m_mNPDesc = _mNPDesc;
    m_mNPDescHasBeenSet = true;
}

bool ModifyMNGRequest::MNPDescHasBeenSet() const
{
    return m_mNPDescHasBeenSet;
}

string ModifyMNGRequest::GetMNPId() const
{
    return m_mNPId;
}

void ModifyMNGRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool ModifyMNGRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string ModifyMNGRequest::GetPlatformId() const
{
    return m_platformId;
}

void ModifyMNGRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ModifyMNGRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string ModifyMNGRequest::GetMNPIcon() const
{
    return m_mNPIcon;
}

void ModifyMNGRequest::SetMNPIcon(const string& _mNPIcon)
{
    m_mNPIcon = _mNPIcon;
    m_mNPIconHasBeenSet = true;
}

bool ModifyMNGRequest::MNPIconHasBeenSet() const
{
    return m_mNPIconHasBeenSet;
}


