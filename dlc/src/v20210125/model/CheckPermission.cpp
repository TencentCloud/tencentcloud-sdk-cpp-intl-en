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

#include <tencentcloud/dlc/v20210125/model/CheckPermission.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CheckPermission::CheckPermission() :
    m_accessTypeHasBeenSet(false),
    m_resourceBaseInfoHasBeenSet(false)
{
}

CoreInternalOutcome CheckPermission::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckPermission.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceBaseInfo") && !value["ResourceBaseInfo"].IsNull())
    {
        if (!value["ResourceBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CheckPermission.ResourceBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceBaseInfo.Deserialize(value["ResourceBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceBaseInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckPermission::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CheckPermission::GetAccessType() const
{
    return m_accessType;
}

void CheckPermission::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool CheckPermission::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

ResourceBaseInfo CheckPermission::GetResourceBaseInfo() const
{
    return m_resourceBaseInfo;
}

void CheckPermission::SetResourceBaseInfo(const ResourceBaseInfo& _resourceBaseInfo)
{
    m_resourceBaseInfo = _resourceBaseInfo;
    m_resourceBaseInfoHasBeenSet = true;
}

bool CheckPermission::ResourceBaseInfoHasBeenSet() const
{
    return m_resourceBaseInfoHasBeenSet;
}

