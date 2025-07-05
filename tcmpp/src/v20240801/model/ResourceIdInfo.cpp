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

#include <tencentcloud/tcmpp/v20240801/model/ResourceIdInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

ResourceIdInfo::ResourceIdInfo() :
    m_resourceIdHasBeenSet(false)
{
}

CoreInternalOutcome ResourceIdInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceIdInfo.ResourceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = value["ResourceId"].GetInt64();
        m_resourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceIdInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceId, allocator);
    }

}


int64_t ResourceIdInfo::GetResourceId() const
{
    return m_resourceId;
}

void ResourceIdInfo::SetResourceId(const int64_t& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourceIdInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

