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

#include <tencentcloud/faceid/v20180301/model/CompareFaceLivenessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

CompareFaceLivenessRequest::CompareFaceLivenessRequest() :
    m_imageBase64HasBeenSet(false),
    m_videoBase64HasBeenSet(false),
    m_livenessTypeHasBeenSet(false),
    m_validateDataHasBeenSet(false)
{
}

string CompareFaceLivenessRequest::ToJsonString() const
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

    if (m_videoBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_livenessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivenessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_livenessType.c_str(), allocator).Move(), allocator);
    }

    if (m_validateDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidateData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validateData.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CompareFaceLivenessRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void CompareFaceLivenessRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool CompareFaceLivenessRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string CompareFaceLivenessRequest::GetVideoBase64() const
{
    return m_videoBase64;
}

void CompareFaceLivenessRequest::SetVideoBase64(const string& _videoBase64)
{
    m_videoBase64 = _videoBase64;
    m_videoBase64HasBeenSet = true;
}

bool CompareFaceLivenessRequest::VideoBase64HasBeenSet() const
{
    return m_videoBase64HasBeenSet;
}

string CompareFaceLivenessRequest::GetLivenessType() const
{
    return m_livenessType;
}

void CompareFaceLivenessRequest::SetLivenessType(const string& _livenessType)
{
    m_livenessType = _livenessType;
    m_livenessTypeHasBeenSet = true;
}

bool CompareFaceLivenessRequest::LivenessTypeHasBeenSet() const
{
    return m_livenessTypeHasBeenSet;
}

string CompareFaceLivenessRequest::GetValidateData() const
{
    return m_validateData;
}

void CompareFaceLivenessRequest::SetValidateData(const string& _validateData)
{
    m_validateData = _validateData;
    m_validateDataHasBeenSet = true;
}

bool CompareFaceLivenessRequest::ValidateDataHasBeenSet() const
{
    return m_validateDataHasBeenSet;
}


