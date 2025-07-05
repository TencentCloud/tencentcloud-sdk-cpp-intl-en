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

#include <tencentcloud/mdl/v20200326/model/PushEventSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

PushEventSetting::PushEventSetting() :
    m_notifyUrlHasBeenSet(false),
    m_notifyKeyHasBeenSet(false)
{
}

CoreInternalOutcome PushEventSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NotifyUrl") && !value["NotifyUrl"].IsNull())
    {
        if (!value["NotifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushEventSetting.NotifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyUrl = string(value["NotifyUrl"].GetString());
        m_notifyUrlHasBeenSet = true;
    }

    if (value.HasMember("NotifyKey") && !value["NotifyKey"].IsNull())
    {
        if (!value["NotifyKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushEventSetting.NotifyKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyKey = string(value["NotifyKey"].GetString());
        m_notifyKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PushEventSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyKey.c_str(), allocator).Move(), allocator);
    }

}


string PushEventSetting::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void PushEventSetting::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool PushEventSetting::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string PushEventSetting::GetNotifyKey() const
{
    return m_notifyKey;
}

void PushEventSetting::SetNotifyKey(const string& _notifyKey)
{
    m_notifyKey = _notifyKey;
    m_notifyKeyHasBeenSet = true;
}

bool PushEventSetting::NotifyKeyHasBeenSet() const
{
    return m_notifyKeyHasBeenSet;
}

