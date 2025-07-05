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

#include <tencentcloud/dms/v20200819/model/SendTemplatedEmailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dms::V20200819::Model;
using namespace std;

SendTemplatedEmailRequest::SendTemplatedEmailRequest() :
    m_fromAddressHasBeenSet(false),
    m_toAddressHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateValueHasBeenSet(false),
    m_fromNameHasBeenSet(false),
    m_replyAddressHasBeenSet(false)
{
}

string SendTemplatedEmailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fromAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_toAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_templateValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateValue.c_str(), allocator).Move(), allocator);
    }

    if (m_fromNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromName.c_str(), allocator).Move(), allocator);
    }

    if (m_replyAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replyAddress.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendTemplatedEmailRequest::GetFromAddress() const
{
    return m_fromAddress;
}

void SendTemplatedEmailRequest::SetFromAddress(const string& _fromAddress)
{
    m_fromAddress = _fromAddress;
    m_fromAddressHasBeenSet = true;
}

bool SendTemplatedEmailRequest::FromAddressHasBeenSet() const
{
    return m_fromAddressHasBeenSet;
}

string SendTemplatedEmailRequest::GetToAddress() const
{
    return m_toAddress;
}

void SendTemplatedEmailRequest::SetToAddress(const string& _toAddress)
{
    m_toAddress = _toAddress;
    m_toAddressHasBeenSet = true;
}

bool SendTemplatedEmailRequest::ToAddressHasBeenSet() const
{
    return m_toAddressHasBeenSet;
}

string SendTemplatedEmailRequest::GetTemplateName() const
{
    return m_templateName;
}

void SendTemplatedEmailRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool SendTemplatedEmailRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string SendTemplatedEmailRequest::GetTemplateValue() const
{
    return m_templateValue;
}

void SendTemplatedEmailRequest::SetTemplateValue(const string& _templateValue)
{
    m_templateValue = _templateValue;
    m_templateValueHasBeenSet = true;
}

bool SendTemplatedEmailRequest::TemplateValueHasBeenSet() const
{
    return m_templateValueHasBeenSet;
}

string SendTemplatedEmailRequest::GetFromName() const
{
    return m_fromName;
}

void SendTemplatedEmailRequest::SetFromName(const string& _fromName)
{
    m_fromName = _fromName;
    m_fromNameHasBeenSet = true;
}

bool SendTemplatedEmailRequest::FromNameHasBeenSet() const
{
    return m_fromNameHasBeenSet;
}

string SendTemplatedEmailRequest::GetReplyAddress() const
{
    return m_replyAddress;
}

void SendTemplatedEmailRequest::SetReplyAddress(const string& _replyAddress)
{
    m_replyAddress = _replyAddress;
    m_replyAddressHasBeenSet = true;
}

bool SendTemplatedEmailRequest::ReplyAddressHasBeenSet() const
{
    return m_replyAddressHasBeenSet;
}


