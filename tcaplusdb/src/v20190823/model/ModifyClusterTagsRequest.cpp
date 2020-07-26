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

#include <tencentcloud/tcaplusdb/v20190823/model/ModifyClusterTagsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace rapidjson;
using namespace std;

ModifyClusterTagsRequest::ModifyClusterTagsRequest() :
    m_clusterIdHasBeenSet(false),
    m_replaceTagsHasBeenSet(false),
    m_deleteTagsHasBeenSet(false)
{
}

string ModifyClusterTagsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_replaceTagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReplaceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_replaceTags.begin(); itr != m_replaceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deleteTagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeleteTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deleteTags.begin(); itr != m_deleteTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterTagsRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterTagsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterTagsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<TagInfoUnit> ModifyClusterTagsRequest::GetReplaceTags() const
{
    return m_replaceTags;
}

void ModifyClusterTagsRequest::SetReplaceTags(const vector<TagInfoUnit>& _replaceTags)
{
    m_replaceTags = _replaceTags;
    m_replaceTagsHasBeenSet = true;
}

bool ModifyClusterTagsRequest::ReplaceTagsHasBeenSet() const
{
    return m_replaceTagsHasBeenSet;
}

vector<TagInfoUnit> ModifyClusterTagsRequest::GetDeleteTags() const
{
    return m_deleteTags;
}

void ModifyClusterTagsRequest::SetDeleteTags(const vector<TagInfoUnit>& _deleteTags)
{
    m_deleteTags = _deleteTags;
    m_deleteTagsHasBeenSet = true;
}

bool ModifyClusterTagsRequest::DeleteTagsHasBeenSet() const
{
    return m_deleteTagsHasBeenSet;
}


