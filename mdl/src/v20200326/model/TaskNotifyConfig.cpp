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

#include <tencentcloud/mdl/v20200326/model/TaskNotifyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

TaskNotifyConfig::TaskNotifyConfig() :
    m_typeHasBeenSet(false),
    m_notifyUrlHasBeenSet(false)
{
}

CoreInternalOutcome TaskNotifyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskNotifyConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("NotifyUrl") && !value["NotifyUrl"].IsNull())
    {
        if (!value["NotifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskNotifyConfig.NotifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyUrl = string(value["NotifyUrl"].GetString());
        m_notifyUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskNotifyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

}


string TaskNotifyConfig::GetType() const
{
    return m_type;
}

void TaskNotifyConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TaskNotifyConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TaskNotifyConfig::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void TaskNotifyConfig::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool TaskNotifyConfig::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

