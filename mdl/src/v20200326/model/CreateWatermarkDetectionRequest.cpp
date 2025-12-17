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

#include <tencentcloud/mdl/v20200326/model/CreateWatermarkDetectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

CreateWatermarkDetectionRequest::CreateWatermarkDetectionRequest() :
    m_typeHasBeenSet(false),
    m_inputInfoHasBeenSet(false),
    m_inputFileInfoHasBeenSet(false),
    m_taskNotifyConfigHasBeenSet(false)
{
}

string CreateWatermarkDetectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_inputFileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputFileInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputFileInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskNotifyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNotifyConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskNotifyConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWatermarkDetectionRequest::GetType() const
{
    return m_type;
}

void CreateWatermarkDetectionRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateWatermarkDetectionRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

AbWatermarkInputInfo CreateWatermarkDetectionRequest::GetInputInfo() const
{
    return m_inputInfo;
}

void CreateWatermarkDetectionRequest::SetInputInfo(const AbWatermarkInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool CreateWatermarkDetectionRequest::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

InputFileInfo CreateWatermarkDetectionRequest::GetInputFileInfo() const
{
    return m_inputFileInfo;
}

void CreateWatermarkDetectionRequest::SetInputFileInfo(const InputFileInfo& _inputFileInfo)
{
    m_inputFileInfo = _inputFileInfo;
    m_inputFileInfoHasBeenSet = true;
}

bool CreateWatermarkDetectionRequest::InputFileInfoHasBeenSet() const
{
    return m_inputFileInfoHasBeenSet;
}

TaskNotifyConfig CreateWatermarkDetectionRequest::GetTaskNotifyConfig() const
{
    return m_taskNotifyConfig;
}

void CreateWatermarkDetectionRequest::SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig)
{
    m_taskNotifyConfig = _taskNotifyConfig;
    m_taskNotifyConfigHasBeenSet = true;
}

bool CreateWatermarkDetectionRequest::TaskNotifyConfigHasBeenSet() const
{
    return m_taskNotifyConfigHasBeenSet;
}


