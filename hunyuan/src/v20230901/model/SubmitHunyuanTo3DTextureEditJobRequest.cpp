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

#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanTo3DTextureEditJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

SubmitHunyuanTo3DTextureEditJobRequest::SubmitHunyuanTo3DTextureEditJobRequest() :
    m_file3DHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_enablePBRHasBeenSet(false)
{
}

string SubmitHunyuanTo3DTextureEditJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_file3DHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File3D";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_file3D.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_image.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_enablePBRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePBR";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enablePBR, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


InputFile3D SubmitHunyuanTo3DTextureEditJobRequest::GetFile3D() const
{
    return m_file3D;
}

void SubmitHunyuanTo3DTextureEditJobRequest::SetFile3D(const InputFile3D& _file3D)
{
    m_file3D = _file3D;
    m_file3DHasBeenSet = true;
}

bool SubmitHunyuanTo3DTextureEditJobRequest::File3DHasBeenSet() const
{
    return m_file3DHasBeenSet;
}

ImageInfo SubmitHunyuanTo3DTextureEditJobRequest::GetImage() const
{
    return m_image;
}

void SubmitHunyuanTo3DTextureEditJobRequest::SetImage(const ImageInfo& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool SubmitHunyuanTo3DTextureEditJobRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string SubmitHunyuanTo3DTextureEditJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitHunyuanTo3DTextureEditJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitHunyuanTo3DTextureEditJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

bool SubmitHunyuanTo3DTextureEditJobRequest::GetEnablePBR() const
{
    return m_enablePBR;
}

void SubmitHunyuanTo3DTextureEditJobRequest::SetEnablePBR(const bool& _enablePBR)
{
    m_enablePBR = _enablePBR;
    m_enablePBRHasBeenSet = true;
}

bool SubmitHunyuanTo3DTextureEditJobRequest::EnablePBRHasBeenSet() const
{
    return m_enablePBRHasBeenSet;
}


