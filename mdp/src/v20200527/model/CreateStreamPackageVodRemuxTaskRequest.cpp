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

#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageVodRemuxTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

CreateStreamPackageVodRemuxTaskRequest::CreateStreamPackageVodRemuxTaskRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_inputFileInfoHasBeenSet(false),
    m_outputStorageHasBeenSet(false)
{
}

string CreateStreamPackageVodRemuxTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_inputFileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputFileInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputFileInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStreamPackageVodRemuxTaskRequest::GetName() const
{
    return m_name;
}

void CreateStreamPackageVodRemuxTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateStreamPackageVodRemuxTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateStreamPackageVodRemuxTaskRequest::GetType() const
{
    return m_type;
}

void CreateStreamPackageVodRemuxTaskRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateStreamPackageVodRemuxTaskRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

InputFileInfo CreateStreamPackageVodRemuxTaskRequest::GetInputFileInfo() const
{
    return m_inputFileInfo;
}

void CreateStreamPackageVodRemuxTaskRequest::SetInputFileInfo(const InputFileInfo& _inputFileInfo)
{
    m_inputFileInfo = _inputFileInfo;
    m_inputFileInfoHasBeenSet = true;
}

bool CreateStreamPackageVodRemuxTaskRequest::InputFileInfoHasBeenSet() const
{
    return m_inputFileInfoHasBeenSet;
}

OutputStorage CreateStreamPackageVodRemuxTaskRequest::GetOutputStorage() const
{
    return m_outputStorage;
}

void CreateStreamPackageVodRemuxTaskRequest::SetOutputStorage(const OutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool CreateStreamPackageVodRemuxTaskRequest::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}


