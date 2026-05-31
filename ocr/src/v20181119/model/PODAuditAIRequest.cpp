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

#include <tencentcloud/ocr/v20181119/model/PODAuditAIRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

PODAuditAIRequest::PODAuditAIRequest() :
    m_imageBase64ListHasBeenSet(false),
    m_imageUrlListHasBeenSet(false),
    m_waybillNumberHasBeenSet(false),
    m_signTypeHasBeenSet(false)
{
}

string PODAuditAIRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageBase64ListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64List";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageBase64List.begin(); itr != m_imageBase64List.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageUrlListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageUrlList.begin(); itr != m_imageUrlList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_waybillNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaybillNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_waybillNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_signTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_signType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> PODAuditAIRequest::GetImageBase64List() const
{
    return m_imageBase64List;
}

void PODAuditAIRequest::SetImageBase64List(const vector<string>& _imageBase64List)
{
    m_imageBase64List = _imageBase64List;
    m_imageBase64ListHasBeenSet = true;
}

bool PODAuditAIRequest::ImageBase64ListHasBeenSet() const
{
    return m_imageBase64ListHasBeenSet;
}

vector<string> PODAuditAIRequest::GetImageUrlList() const
{
    return m_imageUrlList;
}

void PODAuditAIRequest::SetImageUrlList(const vector<string>& _imageUrlList)
{
    m_imageUrlList = _imageUrlList;
    m_imageUrlListHasBeenSet = true;
}

bool PODAuditAIRequest::ImageUrlListHasBeenSet() const
{
    return m_imageUrlListHasBeenSet;
}

string PODAuditAIRequest::GetWaybillNumber() const
{
    return m_waybillNumber;
}

void PODAuditAIRequest::SetWaybillNumber(const string& _waybillNumber)
{
    m_waybillNumber = _waybillNumber;
    m_waybillNumberHasBeenSet = true;
}

bool PODAuditAIRequest::WaybillNumberHasBeenSet() const
{
    return m_waybillNumberHasBeenSet;
}

int64_t PODAuditAIRequest::GetSignType() const
{
    return m_signType;
}

void PODAuditAIRequest::SetSignType(const int64_t& _signType)
{
    m_signType = _signType;
    m_signTypeHasBeenSet = true;
}

bool PODAuditAIRequest::SignTypeHasBeenSet() const
{
    return m_signTypeHasBeenSet;
}


