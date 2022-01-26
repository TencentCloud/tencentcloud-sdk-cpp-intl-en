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

#include <tencentcloud/dms/v20200819/model/SendEmailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dms::V20200819::Model;
using namespace std;

SendEmailRequest::SendEmailRequest() :
    m_fromAddressHasBeenSet(false),
    m_toAddressHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_fromNameHasBeenSet(false),
    m_replyAddressHasBeenSet(false),
    m_htmlContentHasBeenSet(false),
    m_textContentHasBeenSet(false)
{
}

string SendEmailRequest::ToJsonString() const
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

    if (m_subjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subject.c_str(), allocator).Move(), allocator);
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

    if (m_htmlContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HtmlContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_htmlContent.c_str(), allocator).Move(), allocator);
    }

    if (m_textContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_textContent.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendEmailRequest::GetFromAddress() const
{
    return m_fromAddress;
}

void SendEmailRequest::SetFromAddress(const string& _fromAddress)
{
    m_fromAddress = _fromAddress;
    m_fromAddressHasBeenSet = true;
}

bool SendEmailRequest::FromAddressHasBeenSet() const
{
    return m_fromAddressHasBeenSet;
}

string SendEmailRequest::GetToAddress() const
{
    return m_toAddress;
}

void SendEmailRequest::SetToAddress(const string& _toAddress)
{
    m_toAddress = _toAddress;
    m_toAddressHasBeenSet = true;
}

bool SendEmailRequest::ToAddressHasBeenSet() const
{
    return m_toAddressHasBeenSet;
}

string SendEmailRequest::GetSubject() const
{
    return m_subject;
}

void SendEmailRequest::SetSubject(const string& _subject)
{
    m_subject = _subject;
    m_subjectHasBeenSet = true;
}

bool SendEmailRequest::SubjectHasBeenSet() const
{
    return m_subjectHasBeenSet;
}

string SendEmailRequest::GetFromName() const
{
    return m_fromName;
}

void SendEmailRequest::SetFromName(const string& _fromName)
{
    m_fromName = _fromName;
    m_fromNameHasBeenSet = true;
}

bool SendEmailRequest::FromNameHasBeenSet() const
{
    return m_fromNameHasBeenSet;
}

string SendEmailRequest::GetReplyAddress() const
{
    return m_replyAddress;
}

void SendEmailRequest::SetReplyAddress(const string& _replyAddress)
{
    m_replyAddress = _replyAddress;
    m_replyAddressHasBeenSet = true;
}

bool SendEmailRequest::ReplyAddressHasBeenSet() const
{
    return m_replyAddressHasBeenSet;
}

string SendEmailRequest::GetHtmlContent() const
{
    return m_htmlContent;
}

void SendEmailRequest::SetHtmlContent(const string& _htmlContent)
{
    m_htmlContent = _htmlContent;
    m_htmlContentHasBeenSet = true;
}

bool SendEmailRequest::HtmlContentHasBeenSet() const
{
    return m_htmlContentHasBeenSet;
}

string SendEmailRequest::GetTextContent() const
{
    return m_textContent;
}

void SendEmailRequest::SetTextContent(const string& _textContent)
{
    m_textContent = _textContent;
    m_textContentHasBeenSet = true;
}

bool SendEmailRequest::TextContentHasBeenSet() const
{
    return m_textContentHasBeenSet;
}


