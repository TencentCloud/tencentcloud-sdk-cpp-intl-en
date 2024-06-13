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

#include <tencentcloud/ocr/v20181119/model/RecognizeSingaporeIDCardOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeSingaporeIDCardOCRRequest::RecognizeSingaporeIDCardOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_returnHeadImageHasBeenSet(false)
{
}

string RecognizeSingaporeIDCardOCRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_returnHeadImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnHeadImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_returnHeadImage, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RecognizeSingaporeIDCardOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void RecognizeSingaporeIDCardOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool RecognizeSingaporeIDCardOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string RecognizeSingaporeIDCardOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void RecognizeSingaporeIDCardOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool RecognizeSingaporeIDCardOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

bool RecognizeSingaporeIDCardOCRRequest::GetReturnHeadImage() const
{
    return m_returnHeadImage;
}

void RecognizeSingaporeIDCardOCRRequest::SetReturnHeadImage(const bool& _returnHeadImage)
{
    m_returnHeadImage = _returnHeadImage;
    m_returnHeadImageHasBeenSet = true;
}

bool RecognizeSingaporeIDCardOCRRequest::ReturnHeadImageHasBeenSet() const
{
    return m_returnHeadImageHasBeenSet;
}


