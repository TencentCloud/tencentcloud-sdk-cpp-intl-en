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

#include <tencentcloud/mps/v20190612/model/DescribeSnapshotByTimeOffsetTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeSnapshotByTimeOffsetTemplatesRequest::DescribeSnapshotByTimeOffsetTemplatesRequest() :
    m_definitionsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string DescribeSnapshotByTimeOffsetTemplatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_definitions.begin(); itr != m_definitions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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


vector<uint64_t> DescribeSnapshotByTimeOffsetTemplatesRequest::GetDefinitions() const
{
    return m_definitions;
}

void DescribeSnapshotByTimeOffsetTemplatesRequest::SetDefinitions(const vector<uint64_t>& _definitions)
{
    m_definitions = _definitions;
    m_definitionsHasBeenSet = true;
}

bool DescribeSnapshotByTimeOffsetTemplatesRequest::DefinitionsHasBeenSet() const
{
    return m_definitionsHasBeenSet;
}

uint64_t DescribeSnapshotByTimeOffsetTemplatesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSnapshotByTimeOffsetTemplatesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSnapshotByTimeOffsetTemplatesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeSnapshotByTimeOffsetTemplatesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSnapshotByTimeOffsetTemplatesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSnapshotByTimeOffsetTemplatesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeSnapshotByTimeOffsetTemplatesRequest::GetType() const
{
    return m_type;
}

void DescribeSnapshotByTimeOffsetTemplatesRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeSnapshotByTimeOffsetTemplatesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeSnapshotByTimeOffsetTemplatesRequest::GetName() const
{
    return m_name;
}

void DescribeSnapshotByTimeOffsetTemplatesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeSnapshotByTimeOffsetTemplatesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


