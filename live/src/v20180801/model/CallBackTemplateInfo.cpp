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

#include <tencentcloud/live/v20180801/model/CallBackTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CallBackTemplateInfo::CallBackTemplateInfo() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_streamBeginNotifyUrlHasBeenSet(false),
    m_streamMixNotifyUrlHasBeenSet(false),
    m_streamEndNotifyUrlHasBeenSet(false),
    m_recordNotifyUrlHasBeenSet(false),
    m_snapshotNotifyUrlHasBeenSet(false),
    m_pornCensorshipNotifyUrlHasBeenSet(false),
    m_callbackKeyHasBeenSet(false),
    m_pushExceptionNotifyUrlHasBeenSet(false)
{
}

CoreInternalOutcome CallBackTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackTemplateInfo.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackTemplateInfo.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackTemplateInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("StreamBeginNotifyUrl") && !value["StreamBeginNotifyUrl"].IsNull())
    {
        if (!value["StreamBeginNotifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackTemplateInfo.StreamBeginNotifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamBeginNotifyUrl = string(value["StreamBeginNotifyUrl"].GetString());
        m_streamBeginNotifyUrlHasBeenSet = true;
    }

    if (value.HasMember("StreamMixNotifyUrl") && !value["StreamMixNotifyUrl"].IsNull())
    {
        if (!value["StreamMixNotifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackTemplateInfo.StreamMixNotifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamMixNotifyUrl = string(value["StreamMixNotifyUrl"].GetString());
        m_streamMixNotifyUrlHasBeenSet = true;
    }

    if (value.HasMember("StreamEndNotifyUrl") && !value["StreamEndNotifyUrl"].IsNull())
    {
        if (!value["StreamEndNotifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackTemplateInfo.StreamEndNotifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamEndNotifyUrl = string(value["StreamEndNotifyUrl"].GetString());
        m_streamEndNotifyUrlHasBeenSet = true;
    }

    if (value.HasMember("RecordNotifyUrl") && !value["RecordNotifyUrl"].IsNull())
    {
        if (!value["RecordNotifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackTemplateInfo.RecordNotifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordNotifyUrl = string(value["RecordNotifyUrl"].GetString());
        m_recordNotifyUrlHasBeenSet = true;
    }

    if (value.HasMember("SnapshotNotifyUrl") && !value["SnapshotNotifyUrl"].IsNull())
    {
        if (!value["SnapshotNotifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackTemplateInfo.SnapshotNotifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotNotifyUrl = string(value["SnapshotNotifyUrl"].GetString());
        m_snapshotNotifyUrlHasBeenSet = true;
    }

    if (value.HasMember("PornCensorshipNotifyUrl") && !value["PornCensorshipNotifyUrl"].IsNull())
    {
        if (!value["PornCensorshipNotifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackTemplateInfo.PornCensorshipNotifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pornCensorshipNotifyUrl = string(value["PornCensorshipNotifyUrl"].GetString());
        m_pornCensorshipNotifyUrlHasBeenSet = true;
    }

    if (value.HasMember("CallbackKey") && !value["CallbackKey"].IsNull())
    {
        if (!value["CallbackKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackTemplateInfo.CallbackKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackKey = string(value["CallbackKey"].GetString());
        m_callbackKeyHasBeenSet = true;
    }

    if (value.HasMember("PushExceptionNotifyUrl") && !value["PushExceptionNotifyUrl"].IsNull())
    {
        if (!value["PushExceptionNotifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackTemplateInfo.PushExceptionNotifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushExceptionNotifyUrl = string(value["PushExceptionNotifyUrl"].GetString());
        m_pushExceptionNotifyUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallBackTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_streamBeginNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamBeginNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamBeginNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_streamMixNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamMixNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamMixNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_streamEndNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamEndNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamEndNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_recordNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_pornCensorshipNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornCensorshipNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pornCensorshipNotifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackKey.c_str(), allocator).Move(), allocator);
    }

    if (m_pushExceptionNotifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushExceptionNotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushExceptionNotifyUrl.c_str(), allocator).Move(), allocator);
    }

}


int64_t CallBackTemplateInfo::GetTemplateId() const
{
    return m_templateId;
}

void CallBackTemplateInfo::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CallBackTemplateInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string CallBackTemplateInfo::GetTemplateName() const
{
    return m_templateName;
}

void CallBackTemplateInfo::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool CallBackTemplateInfo::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string CallBackTemplateInfo::GetDescription() const
{
    return m_description;
}

void CallBackTemplateInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CallBackTemplateInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CallBackTemplateInfo::GetStreamBeginNotifyUrl() const
{
    return m_streamBeginNotifyUrl;
}

void CallBackTemplateInfo::SetStreamBeginNotifyUrl(const string& _streamBeginNotifyUrl)
{
    m_streamBeginNotifyUrl = _streamBeginNotifyUrl;
    m_streamBeginNotifyUrlHasBeenSet = true;
}

bool CallBackTemplateInfo::StreamBeginNotifyUrlHasBeenSet() const
{
    return m_streamBeginNotifyUrlHasBeenSet;
}

string CallBackTemplateInfo::GetStreamMixNotifyUrl() const
{
    return m_streamMixNotifyUrl;
}

void CallBackTemplateInfo::SetStreamMixNotifyUrl(const string& _streamMixNotifyUrl)
{
    m_streamMixNotifyUrl = _streamMixNotifyUrl;
    m_streamMixNotifyUrlHasBeenSet = true;
}

bool CallBackTemplateInfo::StreamMixNotifyUrlHasBeenSet() const
{
    return m_streamMixNotifyUrlHasBeenSet;
}

string CallBackTemplateInfo::GetStreamEndNotifyUrl() const
{
    return m_streamEndNotifyUrl;
}

void CallBackTemplateInfo::SetStreamEndNotifyUrl(const string& _streamEndNotifyUrl)
{
    m_streamEndNotifyUrl = _streamEndNotifyUrl;
    m_streamEndNotifyUrlHasBeenSet = true;
}

bool CallBackTemplateInfo::StreamEndNotifyUrlHasBeenSet() const
{
    return m_streamEndNotifyUrlHasBeenSet;
}

string CallBackTemplateInfo::GetRecordNotifyUrl() const
{
    return m_recordNotifyUrl;
}

void CallBackTemplateInfo::SetRecordNotifyUrl(const string& _recordNotifyUrl)
{
    m_recordNotifyUrl = _recordNotifyUrl;
    m_recordNotifyUrlHasBeenSet = true;
}

bool CallBackTemplateInfo::RecordNotifyUrlHasBeenSet() const
{
    return m_recordNotifyUrlHasBeenSet;
}

string CallBackTemplateInfo::GetSnapshotNotifyUrl() const
{
    return m_snapshotNotifyUrl;
}

void CallBackTemplateInfo::SetSnapshotNotifyUrl(const string& _snapshotNotifyUrl)
{
    m_snapshotNotifyUrl = _snapshotNotifyUrl;
    m_snapshotNotifyUrlHasBeenSet = true;
}

bool CallBackTemplateInfo::SnapshotNotifyUrlHasBeenSet() const
{
    return m_snapshotNotifyUrlHasBeenSet;
}

string CallBackTemplateInfo::GetPornCensorshipNotifyUrl() const
{
    return m_pornCensorshipNotifyUrl;
}

void CallBackTemplateInfo::SetPornCensorshipNotifyUrl(const string& _pornCensorshipNotifyUrl)
{
    m_pornCensorshipNotifyUrl = _pornCensorshipNotifyUrl;
    m_pornCensorshipNotifyUrlHasBeenSet = true;
}

bool CallBackTemplateInfo::PornCensorshipNotifyUrlHasBeenSet() const
{
    return m_pornCensorshipNotifyUrlHasBeenSet;
}

string CallBackTemplateInfo::GetCallbackKey() const
{
    return m_callbackKey;
}

void CallBackTemplateInfo::SetCallbackKey(const string& _callbackKey)
{
    m_callbackKey = _callbackKey;
    m_callbackKeyHasBeenSet = true;
}

bool CallBackTemplateInfo::CallbackKeyHasBeenSet() const
{
    return m_callbackKeyHasBeenSet;
}

string CallBackTemplateInfo::GetPushExceptionNotifyUrl() const
{
    return m_pushExceptionNotifyUrl;
}

void CallBackTemplateInfo::SetPushExceptionNotifyUrl(const string& _pushExceptionNotifyUrl)
{
    m_pushExceptionNotifyUrl = _pushExceptionNotifyUrl;
    m_pushExceptionNotifyUrlHasBeenSet = true;
}

bool CallBackTemplateInfo::PushExceptionNotifyUrlHasBeenSet() const
{
    return m_pushExceptionNotifyUrlHasBeenSet;
}

