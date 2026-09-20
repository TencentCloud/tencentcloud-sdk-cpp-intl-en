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

#include <tencentcloud/faceid/v20180301/model/WebhookList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

WebhookList::WebhookList() :
    m_webhookIdHasBeenSet(false),
    m_webhookNameHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_webhookURLHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_modTimeHasBeenSet(false),
    m_signatureKeyHasBeenSet(false),
    m_hasSignatureKeyHasBeenSet(false)
{
}

CoreInternalOutcome WebhookList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WebhookId") && !value["WebhookId"].IsNull())
    {
        if (!value["WebhookId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookList.WebhookId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_webhookId = value["WebhookId"].GetInt64();
        m_webhookIdHasBeenSet = true;
    }

    if (value.HasMember("WebhookName") && !value["WebhookName"].IsNull())
    {
        if (!value["WebhookName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookList.WebhookName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webhookName = string(value["WebhookName"].GetString());
        m_webhookNameHasBeenSet = true;
    }

    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookList.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("WebhookURL") && !value["WebhookURL"].IsNull())
    {
        if (!value["WebhookURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookList.WebhookURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webhookURL = string(value["WebhookURL"].GetString());
        m_webhookURLHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookList.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("ModTime") && !value["ModTime"].IsNull())
    {
        if (!value["ModTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookList.ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(value["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
    }

    if (value.HasMember("SignatureKey") && !value["SignatureKey"].IsNull())
    {
        if (!value["SignatureKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookList.SignatureKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signatureKey = string(value["SignatureKey"].GetString());
        m_signatureKeyHasBeenSet = true;
    }

    if (value.HasMember("HasSignatureKey") && !value["HasSignatureKey"].IsNull())
    {
        if (!value["HasSignatureKey"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookList.HasSignatureKey` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasSignatureKey = value["HasSignatureKey"].GetBool();
        m_hasSignatureKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebhookList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_webhookIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webhookId, allocator);
    }

    if (m_webhookNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webhookName.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_webhookURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webhookURL.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modTime.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signatureKey.c_str(), allocator).Move(), allocator);
    }

    if (m_hasSignatureKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasSignatureKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasSignatureKey, allocator);
    }

}


int64_t WebhookList::GetWebhookId() const
{
    return m_webhookId;
}

void WebhookList::SetWebhookId(const int64_t& _webhookId)
{
    m_webhookId = _webhookId;
    m_webhookIdHasBeenSet = true;
}

bool WebhookList::WebhookIdHasBeenSet() const
{
    return m_webhookIdHasBeenSet;
}

string WebhookList::GetWebhookName() const
{
    return m_webhookName;
}

void WebhookList::SetWebhookName(const string& _webhookName)
{
    m_webhookName = _webhookName;
    m_webhookNameHasBeenSet = true;
}

bool WebhookList::WebhookNameHasBeenSet() const
{
    return m_webhookNameHasBeenSet;
}

string WebhookList::GetScene() const
{
    return m_scene;
}

void WebhookList::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool WebhookList::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string WebhookList::GetWebhookURL() const
{
    return m_webhookURL;
}

void WebhookList::SetWebhookURL(const string& _webhookURL)
{
    m_webhookURL = _webhookURL;
    m_webhookURLHasBeenSet = true;
}

bool WebhookList::WebhookURLHasBeenSet() const
{
    return m_webhookURLHasBeenSet;
}

string WebhookList::GetAddTime() const
{
    return m_addTime;
}

void WebhookList::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool WebhookList::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string WebhookList::GetModTime() const
{
    return m_modTime;
}

void WebhookList::SetModTime(const string& _modTime)
{
    m_modTime = _modTime;
    m_modTimeHasBeenSet = true;
}

bool WebhookList::ModTimeHasBeenSet() const
{
    return m_modTimeHasBeenSet;
}

string WebhookList::GetSignatureKey() const
{
    return m_signatureKey;
}

void WebhookList::SetSignatureKey(const string& _signatureKey)
{
    m_signatureKey = _signatureKey;
    m_signatureKeyHasBeenSet = true;
}

bool WebhookList::SignatureKeyHasBeenSet() const
{
    return m_signatureKeyHasBeenSet;
}

bool WebhookList::GetHasSignatureKey() const
{
    return m_hasSignatureKey;
}

void WebhookList::SetHasSignatureKey(const bool& _hasSignatureKey)
{
    m_hasSignatureKey = _hasSignatureKey;
    m_hasSignatureKeyHasBeenSet = true;
}

bool WebhookList::HasSignatureKeyHasBeenSet() const
{
    return m_hasSignatureKeyHasBeenSet;
}

