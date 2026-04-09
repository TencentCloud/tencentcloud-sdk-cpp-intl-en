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

#include <tencentcloud/hunyuan/v20230901/model/SubmitConvert3DFormatJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

SubmitConvert3DFormatJobRequest::SubmitConvert3DFormatJobRequest() :
    m_fileHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

string SubmitConvert3DFormatJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_file.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


InputFile3D SubmitConvert3DFormatJobRequest::GetFile() const
{
    return m_file;
}

void SubmitConvert3DFormatJobRequest::SetFile(const InputFile3D& _file)
{
    m_file = _file;
    m_fileHasBeenSet = true;
}

bool SubmitConvert3DFormatJobRequest::FileHasBeenSet() const
{
    return m_fileHasBeenSet;
}

string SubmitConvert3DFormatJobRequest::GetFormat() const
{
    return m_format;
}

void SubmitConvert3DFormatJobRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool SubmitConvert3DFormatJobRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}


