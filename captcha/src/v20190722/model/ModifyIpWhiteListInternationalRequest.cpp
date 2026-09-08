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

#include <tencentcloud/captcha/v20190722/model/ModifyIpWhiteListInternationalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

ModifyIpWhiteListInternationalRequest::ModifyIpWhiteListInternationalRequest() :
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_captchaAppidHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string ModifyIpWhiteListInternationalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_captchaAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_captchaAppid, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyIpWhiteListInternationalRequest::GetName() const
{
    return m_name;
}

void ModifyIpWhiteListInternationalRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyIpWhiteListInternationalRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifyIpWhiteListInternationalRequest::GetId() const
{
    return m_id;
}

void ModifyIpWhiteListInternationalRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyIpWhiteListInternationalRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t ModifyIpWhiteListInternationalRequest::GetCaptchaAppid() const
{
    return m_captchaAppid;
}

void ModifyIpWhiteListInternationalRequest::SetCaptchaAppid(const int64_t& _captchaAppid)
{
    m_captchaAppid = _captchaAppid;
    m_captchaAppidHasBeenSet = true;
}

bool ModifyIpWhiteListInternationalRequest::CaptchaAppidHasBeenSet() const
{
    return m_captchaAppidHasBeenSet;
}

int64_t ModifyIpWhiteListInternationalRequest::GetStatus() const
{
    return m_status;
}

void ModifyIpWhiteListInternationalRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyIpWhiteListInternationalRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyIpWhiteListInternationalRequest::GetComment() const
{
    return m_comment;
}

void ModifyIpWhiteListInternationalRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyIpWhiteListInternationalRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


