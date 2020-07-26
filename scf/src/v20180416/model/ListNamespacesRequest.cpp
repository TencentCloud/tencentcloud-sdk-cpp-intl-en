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

#include <tencentcloud/scf/v20180416/model/ListNamespacesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

ListNamespacesRequest::ListNamespacesRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderbyHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string ListNamespacesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_orderbyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Orderby";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderby.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_order.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ListNamespacesRequest::GetLimit() const
{
    return m_limit;
}

void ListNamespacesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListNamespacesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t ListNamespacesRequest::GetOffset() const
{
    return m_offset;
}

void ListNamespacesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListNamespacesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string ListNamespacesRequest::GetOrderby() const
{
    return m_orderby;
}

void ListNamespacesRequest::SetOrderby(const string& _orderby)
{
    m_orderby = _orderby;
    m_orderbyHasBeenSet = true;
}

bool ListNamespacesRequest::OrderbyHasBeenSet() const
{
    return m_orderbyHasBeenSet;
}

string ListNamespacesRequest::GetOrder() const
{
    return m_order;
}

void ListNamespacesRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool ListNamespacesRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


