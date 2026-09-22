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

#include <tencentcloud/faceid/v20180301/model/CreateEKYCWebhookRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

CreateEKYCWebhookRequest::CreateEKYCWebhookRequest() :
    m_webhookNameHasBeenSet(false),
    m_webhookURLHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_signatureKeyHasBeenSet(false)
{
}

string CreateEKYCWebhookRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
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


string CreateEKYCWebhookRequest::GetWebhookName() const
{
    return m_webhookName;
}

void CreateEKYCWebhookRequest::SetWebhookName(const string& _webhookName)
{
    m_webhookName = _webhookName;
    m_webhookNameHasBeenSet = true;
}

bool CreateEKYCWebhookRequest::WebhookNameHasBeenSet() const
{
    return m_webhookNameHasBeenSet;
}

string CreateEKYCWebhookRequest::GetWebhookURL() const
{
    return m_webhookURL;
}

void CreateEKYCWebhookRequest::SetWebhookURL(const string& _webhookURL)
{
    m_webhookURL = _webhookURL;
    m_webhookURLHasBeenSet = true;
}

bool CreateEKYCWebhookRequest::WebhookURLHasBeenSet() const
{
    return m_webhookURLHasBeenSet;
}

string CreateEKYCWebhookRequest::GetScene() const
{
    return m_scene;
}

void CreateEKYCWebhookRequest::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool CreateEKYCWebhookRequest::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string CreateEKYCWebhookRequest::GetSignatureKey() const
{
    return m_signatureKey;
}

void CreateEKYCWebhookRequest::SetSignatureKey(const string& _signatureKey)
{
    m_signatureKey = _signatureKey;
    m_signatureKeyHasBeenSet = true;
}

bool CreateEKYCWebhookRequest::SignatureKeyHasBeenSet() const
{
    return m_signatureKeyHasBeenSet;
}


