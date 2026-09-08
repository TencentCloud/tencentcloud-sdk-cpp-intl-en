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

#include <tencentcloud/captcha/v20190722/model/DescribeIpWhiteListInternationalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

DescribeIpWhiteListInternationalRequest::DescribeIpWhiteListInternationalRequest() :
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_captchaAppidHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string DescribeIpWhiteListInternationalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_captchaAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_captchaAppid, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeIpWhiteListInternationalRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeIpWhiteListInternationalRequest::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeIpWhiteListInternationalRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

int64_t DescribeIpWhiteListInternationalRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeIpWhiteListInternationalRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeIpWhiteListInternationalRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeIpWhiteListInternationalRequest::GetCaptchaAppid() const
{
    return m_captchaAppid;
}

void DescribeIpWhiteListInternationalRequest::SetCaptchaAppid(const int64_t& _captchaAppid)
{
    m_captchaAppid = _captchaAppid;
    m_captchaAppidHasBeenSet = true;
}

bool DescribeIpWhiteListInternationalRequest::CaptchaAppidHasBeenSet() const
{
    return m_captchaAppidHasBeenSet;
}

string DescribeIpWhiteListInternationalRequest::GetName() const
{
    return m_name;
}

void DescribeIpWhiteListInternationalRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeIpWhiteListInternationalRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeIpWhiteListInternationalRequest::GetIp() const
{
    return m_ip;
}

void DescribeIpWhiteListInternationalRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeIpWhiteListInternationalRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t DescribeIpWhiteListInternationalRequest::GetStatus() const
{
    return m_status;
}

void DescribeIpWhiteListInternationalRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeIpWhiteListInternationalRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


