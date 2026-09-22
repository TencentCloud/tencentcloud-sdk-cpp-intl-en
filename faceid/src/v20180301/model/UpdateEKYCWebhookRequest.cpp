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

#include <tencentcloud/faceid/v20180301/model/UpdateEKYCWebhookRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

UpdateEKYCWebhookRequest::UpdateEKYCWebhookRequest() :
    m_webhookIdHasBeenSet(false),
    m_webhookNameHasBeenSet(false),
    m_webhookURLHasBeenSet(false),
    m_signatureKeyHasBeenSet(false)
{
}

string UpdateEKYCWebhookRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_webhookIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_webhookId, allocator);
    }

    if (m_webhookNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_webhookName.c_str(), allocator).Move(), allocator);
    }

    if (m_webhookURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_webhookURL.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signatureKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t UpdateEKYCWebhookRequest::GetWebhookId() const
{
    return m_webhookId;
}

void UpdateEKYCWebhookRequest::SetWebhookId(const int64_t& _webhookId)
{
    m_webhookId = _webhookId;
    m_webhookIdHasBeenSet = true;
}

bool UpdateEKYCWebhookRequest::WebhookIdHasBeenSet() const
{
    return m_webhookIdHasBeenSet;
}

string UpdateEKYCWebhookRequest::GetWebhookName() const
{
    return m_webhookName;
}

void UpdateEKYCWebhookRequest::SetWebhookName(const string& _webhookName)
{
    m_webhookName = _webhookName;
    m_webhookNameHasBeenSet = true;
}

bool UpdateEKYCWebhookRequest::WebhookNameHasBeenSet() const
{
    return m_webhookNameHasBeenSet;
}

string UpdateEKYCWebhookRequest::GetWebhookURL() const
{
    return m_webhookURL;
}

void UpdateEKYCWebhookRequest::SetWebhookURL(const string& _webhookURL)
{
    m_webhookURL = _webhookURL;
    m_webhookURLHasBeenSet = true;
}

bool UpdateEKYCWebhookRequest::WebhookURLHasBeenSet() const
{
    return m_webhookURLHasBeenSet;
}

string UpdateEKYCWebhookRequest::GetSignatureKey() const
{
    return m_signatureKey;
}

void UpdateEKYCWebhookRequest::SetSignatureKey(const string& _signatureKey)
{
    m_signatureKey = _signatureKey;
    m_signatureKeyHasBeenSet = true;
}

bool UpdateEKYCWebhookRequest::SignatureKeyHasBeenSet() const
{
    return m_signatureKeyHasBeenSet;
}


