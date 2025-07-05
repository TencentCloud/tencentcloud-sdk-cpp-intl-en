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

#include <tencentcloud/mdl/v20200326/model/DescribeStreamLiveTranscodeDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

DescribeStreamLiveTranscodeDetailRequest::DescribeStreamLiveTranscodeDetailRequest() :
    m_startDayTimeHasBeenSet(false),
    m_endDayTimeHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeStreamLiveTranscodeDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startDayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDayTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endDayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDayTime.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStreamLiveTranscodeDetailRequest::GetStartDayTime() const
{
    return m_startDayTime;
}

void DescribeStreamLiveTranscodeDetailRequest::SetStartDayTime(const string& _startDayTime)
{
    m_startDayTime = _startDayTime;
    m_startDayTimeHasBeenSet = true;
}

bool DescribeStreamLiveTranscodeDetailRequest::StartDayTimeHasBeenSet() const
{
    return m_startDayTimeHasBeenSet;
}

string DescribeStreamLiveTranscodeDetailRequest::GetEndDayTime() const
{
    return m_endDayTime;
}

void DescribeStreamLiveTranscodeDetailRequest::SetEndDayTime(const string& _endDayTime)
{
    m_endDayTime = _endDayTime;
    m_endDayTimeHasBeenSet = true;
}

bool DescribeStreamLiveTranscodeDetailRequest::EndDayTimeHasBeenSet() const
{
    return m_endDayTimeHasBeenSet;
}

string DescribeStreamLiveTranscodeDetailRequest::GetChannelId() const
{
    return m_channelId;
}

void DescribeStreamLiveTranscodeDetailRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DescribeStreamLiveTranscodeDetailRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t DescribeStreamLiveTranscodeDetailRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeStreamLiveTranscodeDetailRequest::SetPageNum(const int64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeStreamLiveTranscodeDetailRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

int64_t DescribeStreamLiveTranscodeDetailRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeStreamLiveTranscodeDetailRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeStreamLiveTranscodeDetailRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


