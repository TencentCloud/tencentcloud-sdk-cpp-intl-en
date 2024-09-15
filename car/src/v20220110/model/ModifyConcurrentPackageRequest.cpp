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

#include <tencentcloud/car/v20220110/model/ModifyConcurrentPackageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

ModifyConcurrentPackageRequest::ModifyConcurrentPackageRequest() :
    m_concurrentIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string ModifyConcurrentPackageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_concurrentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_concurrentId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyConcurrentPackageRequest::GetConcurrentId() const
{
    return m_concurrentId;
}

void ModifyConcurrentPackageRequest::SetConcurrentId(const string& _concurrentId)
{
    m_concurrentId = _concurrentId;
    m_concurrentIdHasBeenSet = true;
}

bool ModifyConcurrentPackageRequest::ConcurrentIdHasBeenSet() const
{
    return m_concurrentIdHasBeenSet;
}

string ModifyConcurrentPackageRequest::GetName() const
{
    return m_name;
}

void ModifyConcurrentPackageRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyConcurrentPackageRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


