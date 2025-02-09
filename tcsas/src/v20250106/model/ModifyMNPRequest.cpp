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

#include <tencentcloud/tcsas/v20250106/model/ModifyMNPRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

ModifyMNPRequest::ModifyMNPRequest() :
    m_mNPTypeHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_mNPIntroHasBeenSet(false),
    m_mNPDescHasBeenSet(false),
    m_mNPIdHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_mNPIconHasBeenSet(false)
{
}

string ModifyMNPRequest::ToJsonString() const
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


string ModifyMNPRequest::GetMNPType() const
{
    return m_mNPType;
}

void ModifyMNPRequest::SetMNPType(const string& _mNPType)
{
    m_mNPType = _mNPType;
    m_mNPTypeHasBeenSet = true;
}

bool ModifyMNPRequest::MNPTypeHasBeenSet() const
{
    return m_mNPTypeHasBeenSet;
}

string ModifyMNPRequest::GetMNPName() const
{
    return m_mNPName;
}

void ModifyMNPRequest::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool ModifyMNPRequest::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string ModifyMNPRequest::GetMNPIntro() const
{
    return m_mNPIntro;
}

void ModifyMNPRequest::SetMNPIntro(const string& _mNPIntro)
{
    m_mNPIntro = _mNPIntro;
    m_mNPIntroHasBeenSet = true;
}

bool ModifyMNPRequest::MNPIntroHasBeenSet() const
{
    return m_mNPIntroHasBeenSet;
}

string ModifyMNPRequest::GetMNPDesc() const
{
    return m_mNPDesc;
}

void ModifyMNPRequest::SetMNPDesc(const string& _mNPDesc)
{
    m_mNPDesc = _mNPDesc;
    m_mNPDescHasBeenSet = true;
}

bool ModifyMNPRequest::MNPDescHasBeenSet() const
{
    return m_mNPDescHasBeenSet;
}

string ModifyMNPRequest::GetMNPId() const
{
    return m_mNPId;
}

void ModifyMNPRequest::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool ModifyMNPRequest::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string ModifyMNPRequest::GetPlatformId() const
{
    return m_platformId;
}

void ModifyMNPRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool ModifyMNPRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string ModifyMNPRequest::GetMNPIcon() const
{
    return m_mNPIcon;
}

void ModifyMNPRequest::SetMNPIcon(const string& _mNPIcon)
{
    m_mNPIcon = _mNPIcon;
    m_mNPIconHasBeenSet = true;
}

bool ModifyMNPRequest::MNPIconHasBeenSet() const
{
    return m_mNPIconHasBeenSet;
}


