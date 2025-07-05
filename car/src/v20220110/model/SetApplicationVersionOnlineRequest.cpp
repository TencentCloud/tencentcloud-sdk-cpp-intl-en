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

#include <tencentcloud/car/v20220110/model/SetApplicationVersionOnlineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

SetApplicationVersionOnlineRequest::SetApplicationVersionOnlineRequest() :
    m_applicationIdHasBeenSet(false),
    m_applicationVersionIdHasBeenSet(false)
{
}

string SetApplicationVersionOnlineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationVersionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetApplicationVersionOnlineRequest::GetApplicationId() const
{
    return m_applicationId;
}

void SetApplicationVersionOnlineRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool SetApplicationVersionOnlineRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string SetApplicationVersionOnlineRequest::GetApplicationVersionId() const
{
    return m_applicationVersionId;
}

void SetApplicationVersionOnlineRequest::SetApplicationVersionId(const string& _applicationVersionId)
{
    m_applicationVersionId = _applicationVersionId;
    m_applicationVersionIdHasBeenSet = true;
}

bool SetApplicationVersionOnlineRequest::ApplicationVersionIdHasBeenSet() const
{
    return m_applicationVersionIdHasBeenSet;
}


