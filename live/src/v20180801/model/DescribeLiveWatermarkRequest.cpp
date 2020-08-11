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

#include <tencentcloud/live/v20180801/model/DescribeLiveWatermarkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

DescribeLiveWatermarkRequest::DescribeLiveWatermarkRequest() :
    m_watermarkIdHasBeenSet(false)
{
}

string DescribeLiveWatermarkRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_watermarkIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WatermarkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_watermarkId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeLiveWatermarkRequest::GetWatermarkId() const
{
    return m_watermarkId;
}

void DescribeLiveWatermarkRequest::SetWatermarkId(const uint64_t& _watermarkId)
{
    m_watermarkId = _watermarkId;
    m_watermarkIdHasBeenSet = true;
}

bool DescribeLiveWatermarkRequest::WatermarkIdHasBeenSet() const
{
    return m_watermarkIdHasBeenSet;
}

