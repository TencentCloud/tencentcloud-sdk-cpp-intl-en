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

#include <tencentcloud/captcha/v20190722/model/CreateIpWhiteListInternationalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

CreateIpWhiteListInternationalRequest::CreateIpWhiteListInternationalRequest() :
    m_nameHasBeenSet(false),
    m_captchaAppidHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string CreateIpWhiteListInternationalRequest::ToJsonString() const
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

    if (m_captchaAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_captchaAppid, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
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


string CreateIpWhiteListInternationalRequest::GetName() const
{
    return m_name;
}

void CreateIpWhiteListInternationalRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateIpWhiteListInternationalRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateIpWhiteListInternationalRequest::GetCaptchaAppid() const
{
    return m_captchaAppid;
}

void CreateIpWhiteListInternationalRequest::SetCaptchaAppid(const int64_t& _captchaAppid)
{
    m_captchaAppid = _captchaAppid;
    m_captchaAppidHasBeenSet = true;
}

bool CreateIpWhiteListInternationalRequest::CaptchaAppidHasBeenSet() const
{
    return m_captchaAppidHasBeenSet;
}

string CreateIpWhiteListInternationalRequest::GetIp() const
{
    return m_ip;
}

void CreateIpWhiteListInternationalRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CreateIpWhiteListInternationalRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string CreateIpWhiteListInternationalRequest::GetComment() const
{
    return m_comment;
}

void CreateIpWhiteListInternationalRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateIpWhiteListInternationalRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


