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

#include <tencentcloud/tcss/v20201101/model/CreateComponentExportJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateComponentExportJobRequest::CreateComponentExportJobRequest() :
    m_imageIDHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_byHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_exportFieldHasBeenSet(false)
{
}

string CreateComponentExportJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageID.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_exportFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_exportField.begin(); itr != m_exportField.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateComponentExportJobRequest::GetImageID() const
{
    return m_imageID;
}

void CreateComponentExportJobRequest::SetImageID(const string& _imageID)
{
    m_imageID = _imageID;
    m_imageIDHasBeenSet = true;
}

bool CreateComponentExportJobRequest::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

uint64_t CreateComponentExportJobRequest::GetLimit() const
{
    return m_limit;
}

void CreateComponentExportJobRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool CreateComponentExportJobRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t CreateComponentExportJobRequest::GetOffset() const
{
    return m_offset;
}

void CreateComponentExportJobRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool CreateComponentExportJobRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<AssetFilters> CreateComponentExportJobRequest::GetFilters() const
{
    return m_filters;
}

void CreateComponentExportJobRequest::SetFilters(const vector<AssetFilters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool CreateComponentExportJobRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string CreateComponentExportJobRequest::GetBy() const
{
    return m_by;
}

void CreateComponentExportJobRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool CreateComponentExportJobRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

string CreateComponentExportJobRequest::GetOrder() const
{
    return m_order;
}

void CreateComponentExportJobRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool CreateComponentExportJobRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

vector<string> CreateComponentExportJobRequest::GetExportField() const
{
    return m_exportField;
}

void CreateComponentExportJobRequest::SetExportField(const vector<string>& _exportField)
{
    m_exportField = _exportField;
    m_exportFieldHasBeenSet = true;
}

bool CreateComponentExportJobRequest::ExportFieldHasBeenSet() const
{
    return m_exportFieldHasBeenSet;
}


