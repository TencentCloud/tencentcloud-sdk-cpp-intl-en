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

#include <tencentcloud/car/v20220110/model/ApplicationConcurrentPackage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

ApplicationConcurrentPackage::ApplicationConcurrentPackage() :
    m_concurrentIdHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationConcurrentPackage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConcurrentId") && !value["ConcurrentId"].IsNull())
    {
        if (!value["ConcurrentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationConcurrentPackage.ConcurrentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_concurrentId = string(value["ConcurrentId"].GetString());
        m_concurrentIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationConcurrentPackage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_concurrentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_concurrentId.c_str(), allocator).Move(), allocator);
    }

}


string ApplicationConcurrentPackage::GetConcurrentId() const
{
    return m_concurrentId;
}

void ApplicationConcurrentPackage::SetConcurrentId(const string& _concurrentId)
{
    m_concurrentId = _concurrentId;
    m_concurrentIdHasBeenSet = true;
}

bool ApplicationConcurrentPackage::ConcurrentIdHasBeenSet() const
{
    return m_concurrentIdHasBeenSet;
}

