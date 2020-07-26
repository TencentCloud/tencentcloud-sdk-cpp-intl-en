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

#include <tencentcloud/dts/v20180330/model/DescribeMigrateJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

DescribeMigrateJobsRequest::DescribeMigrateJobsRequest() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_orderSeqHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeMigrateJobsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_orderSeqHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderSeq";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderSeq.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMigrateJobsRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeMigrateJobsRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeMigrateJobsRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeMigrateJobsRequest::GetJobName() const
{
    return m_jobName;
}

void DescribeMigrateJobsRequest::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool DescribeMigrateJobsRequest::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string DescribeMigrateJobsRequest::GetOrder() const
{
    return m_order;
}

void DescribeMigrateJobsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeMigrateJobsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeMigrateJobsRequest::GetOrderSeq() const
{
    return m_orderSeq;
}

void DescribeMigrateJobsRequest::SetOrderSeq(const string& _orderSeq)
{
    m_orderSeq = _orderSeq;
    m_orderSeqHasBeenSet = true;
}

bool DescribeMigrateJobsRequest::OrderSeqHasBeenSet() const
{
    return m_orderSeqHasBeenSet;
}

uint64_t DescribeMigrateJobsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeMigrateJobsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeMigrateJobsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeMigrateJobsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMigrateJobsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMigrateJobsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


