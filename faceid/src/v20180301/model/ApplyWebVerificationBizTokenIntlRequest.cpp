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

#include <tencentcloud/faceid/v20180301/model/ApplyWebVerificationBizTokenIntlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

ApplyWebVerificationBizTokenIntlRequest::ApplyWebVerificationBizTokenIntlRequest() :
    m_redirectURLHasBeenSet(false),
    m_compareImageBase64HasBeenSet(false),
    m_extraHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

string ApplyWebVerificationBizTokenIntlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_redirectURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_redirectURL.c_str(), allocator).Move(), allocator);
    }

    if (m_compareImageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compareImageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyWebVerificationBizTokenIntlRequest::GetRedirectURL() const
{
    return m_redirectURL;
}

void ApplyWebVerificationBizTokenIntlRequest::SetRedirectURL(const string& _redirectURL)
{
    m_redirectURL = _redirectURL;
    m_redirectURLHasBeenSet = true;
}

bool ApplyWebVerificationBizTokenIntlRequest::RedirectURLHasBeenSet() const
{
    return m_redirectURLHasBeenSet;
}

string ApplyWebVerificationBizTokenIntlRequest::GetCompareImageBase64() const
{
    return m_compareImageBase64;
}

void ApplyWebVerificationBizTokenIntlRequest::SetCompareImageBase64(const string& _compareImageBase64)
{
    m_compareImageBase64 = _compareImageBase64;
    m_compareImageBase64HasBeenSet = true;
}

bool ApplyWebVerificationBizTokenIntlRequest::CompareImageBase64HasBeenSet() const
{
    return m_compareImageBase64HasBeenSet;
}

string ApplyWebVerificationBizTokenIntlRequest::GetExtra() const
{
    return m_extra;
}

void ApplyWebVerificationBizTokenIntlRequest::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool ApplyWebVerificationBizTokenIntlRequest::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

WebVerificationConfigIntl ApplyWebVerificationBizTokenIntlRequest::GetConfig() const
{
    return m_config;
}

void ApplyWebVerificationBizTokenIntlRequest::SetConfig(const WebVerificationConfigIntl& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ApplyWebVerificationBizTokenIntlRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}


