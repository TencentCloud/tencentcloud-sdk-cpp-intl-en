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

#include <tencentcloud/car/v20220110/model/UnbindConcurrentPackagesFromProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

UnbindConcurrentPackagesFromProjectRequest::UnbindConcurrentPackagesFromProjectRequest() :
    m_concurrentIdsHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string UnbindConcurrentPackagesFromProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_concurrentIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrentIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_concurrentIds.begin(); itr != m_concurrentIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> UnbindConcurrentPackagesFromProjectRequest::GetConcurrentIds() const
{
    return m_concurrentIds;
}

void UnbindConcurrentPackagesFromProjectRequest::SetConcurrentIds(const vector<string>& _concurrentIds)
{
    m_concurrentIds = _concurrentIds;
    m_concurrentIdsHasBeenSet = true;
}

bool UnbindConcurrentPackagesFromProjectRequest::ConcurrentIdsHasBeenSet() const
{
    return m_concurrentIdsHasBeenSet;
}

string UnbindConcurrentPackagesFromProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void UnbindConcurrentPackagesFromProjectRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UnbindConcurrentPackagesFromProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


