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

#include <tencentcloud/live/v20180801/model/DeleteLiveTranscodeRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

DeleteLiveTranscodeRuleRequest::DeleteLiveTranscodeRuleRequest() :
    m_domainNameHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

string DeleteLiveTranscodeRuleRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteLiveTranscodeRuleRequest::GetDomainName() const
{
    return m_domainName;
}

void DeleteLiveTranscodeRuleRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool DeleteLiveTranscodeRuleRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string DeleteLiveTranscodeRuleRequest::GetAppName() const
{
    return m_appName;
}

void DeleteLiveTranscodeRuleRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DeleteLiveTranscodeRuleRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DeleteLiveTranscodeRuleRequest::GetStreamName() const
{
    return m_streamName;
}

void DeleteLiveTranscodeRuleRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool DeleteLiveTranscodeRuleRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

int64_t DeleteLiveTranscodeRuleRequest::GetTemplateId() const
{
    return m_templateId;
}

void DeleteLiveTranscodeRuleRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool DeleteLiveTranscodeRuleRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}


