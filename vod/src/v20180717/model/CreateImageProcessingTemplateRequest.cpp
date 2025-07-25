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

#include <tencentcloud/vod/v20180717/model/CreateImageProcessingTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateImageProcessingTemplateRequest::CreateImageProcessingTemplateRequest() :
    m_operationsHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string CreateImageProcessingTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_operations.begin(); itr != m_operations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<ImageOperation> CreateImageProcessingTemplateRequest::GetOperations() const
{
    return m_operations;
}

void CreateImageProcessingTemplateRequest::SetOperations(const vector<ImageOperation>& _operations)
{
    m_operations = _operations;
    m_operationsHasBeenSet = true;
}

bool CreateImageProcessingTemplateRequest::OperationsHasBeenSet() const
{
    return m_operationsHasBeenSet;
}

uint64_t CreateImageProcessingTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateImageProcessingTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateImageProcessingTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateImageProcessingTemplateRequest::GetName() const
{
    return m_name;
}

void CreateImageProcessingTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateImageProcessingTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateImageProcessingTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateImageProcessingTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateImageProcessingTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


