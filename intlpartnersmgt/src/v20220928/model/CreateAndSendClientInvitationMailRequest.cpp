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

#include <tencentcloud/intlpartnersmgt/v20220928/model/CreateAndSendClientInvitationMailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

CreateAndSendClientInvitationMailRequest::CreateAndSendClientInvitationMailRequest() :
    m_emailHasBeenSet(false),
    m_invitationRoleHasBeenSet(false),
    m_materialUrlHasBeenSet(false)
{
}

string CreateAndSendClientInvitationMailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_invitationRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvitationRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_invitationRole.c_str(), allocator).Move(), allocator);
    }

    if (m_materialUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_materialUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAndSendClientInvitationMailRequest::GetEmail() const
{
    return m_email;
}

void CreateAndSendClientInvitationMailRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CreateAndSendClientInvitationMailRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string CreateAndSendClientInvitationMailRequest::GetInvitationRole() const
{
    return m_invitationRole;
}

void CreateAndSendClientInvitationMailRequest::SetInvitationRole(const string& _invitationRole)
{
    m_invitationRole = _invitationRole;
    m_invitationRoleHasBeenSet = true;
}

bool CreateAndSendClientInvitationMailRequest::InvitationRoleHasBeenSet() const
{
    return m_invitationRoleHasBeenSet;
}

string CreateAndSendClientInvitationMailRequest::GetMaterialUrl() const
{
    return m_materialUrl;
}

void CreateAndSendClientInvitationMailRequest::SetMaterialUrl(const string& _materialUrl)
{
    m_materialUrl = _materialUrl;
    m_materialUrlHasBeenSet = true;
}

bool CreateAndSendClientInvitationMailRequest::MaterialUrlHasBeenSet() const
{
    return m_materialUrlHasBeenSet;
}


