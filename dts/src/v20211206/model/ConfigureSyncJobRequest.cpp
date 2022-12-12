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

#include <tencentcloud/dts/v20211206/model/ConfigureSyncJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ConfigureSyncJobRequest::ConfigureSyncJobRequest() :
    m_jobIdHasBeenSet(false),
    m_srcAccessTypeHasBeenSet(false),
    m_srcInfoHasBeenSet(false),
    m_dstAccessTypeHasBeenSet(false),
    m_dstInfoHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_objectsHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_expectRunTimeHasBeenSet(false)
{
}

string ConfigureSyncJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcAccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dstAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstAccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_options.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_objectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Objects";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objects.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_runModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runMode.c_str(), allocator).Move(), allocator);
    }

    if (m_expectRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectRunTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expectRunTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ConfigureSyncJobRequest::GetJobId() const
{
    return m_jobId;
}

void ConfigureSyncJobRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ConfigureSyncJobRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string ConfigureSyncJobRequest::GetSrcAccessType() const
{
    return m_srcAccessType;
}

void ConfigureSyncJobRequest::SetSrcAccessType(const string& _srcAccessType)
{
    m_srcAccessType = _srcAccessType;
    m_srcAccessTypeHasBeenSet = true;
}

bool ConfigureSyncJobRequest::SrcAccessTypeHasBeenSet() const
{
    return m_srcAccessTypeHasBeenSet;
}

Endpoint ConfigureSyncJobRequest::GetSrcInfo() const
{
    return m_srcInfo;
}

void ConfigureSyncJobRequest::SetSrcInfo(const Endpoint& _srcInfo)
{
    m_srcInfo = _srcInfo;
    m_srcInfoHasBeenSet = true;
}

bool ConfigureSyncJobRequest::SrcInfoHasBeenSet() const
{
    return m_srcInfoHasBeenSet;
}

string ConfigureSyncJobRequest::GetDstAccessType() const
{
    return m_dstAccessType;
}

void ConfigureSyncJobRequest::SetDstAccessType(const string& _dstAccessType)
{
    m_dstAccessType = _dstAccessType;
    m_dstAccessTypeHasBeenSet = true;
}

bool ConfigureSyncJobRequest::DstAccessTypeHasBeenSet() const
{
    return m_dstAccessTypeHasBeenSet;
}

Endpoint ConfigureSyncJobRequest::GetDstInfo() const
{
    return m_dstInfo;
}

void ConfigureSyncJobRequest::SetDstInfo(const Endpoint& _dstInfo)
{
    m_dstInfo = _dstInfo;
    m_dstInfoHasBeenSet = true;
}

bool ConfigureSyncJobRequest::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}

Options ConfigureSyncJobRequest::GetOptions() const
{
    return m_options;
}

void ConfigureSyncJobRequest::SetOptions(const Options& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool ConfigureSyncJobRequest::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

Objects ConfigureSyncJobRequest::GetObjects() const
{
    return m_objects;
}

void ConfigureSyncJobRequest::SetObjects(const Objects& _objects)
{
    m_objects = _objects;
    m_objectsHasBeenSet = true;
}

bool ConfigureSyncJobRequest::ObjectsHasBeenSet() const
{
    return m_objectsHasBeenSet;
}

string ConfigureSyncJobRequest::GetJobName() const
{
    return m_jobName;
}

void ConfigureSyncJobRequest::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool ConfigureSyncJobRequest::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string ConfigureSyncJobRequest::GetRunMode() const
{
    return m_runMode;
}

void ConfigureSyncJobRequest::SetRunMode(const string& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool ConfigureSyncJobRequest::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

string ConfigureSyncJobRequest::GetExpectRunTime() const
{
    return m_expectRunTime;
}

void ConfigureSyncJobRequest::SetExpectRunTime(const string& _expectRunTime)
{
    m_expectRunTime = _expectRunTime;
    m_expectRunTimeHasBeenSet = true;
}

bool ConfigureSyncJobRequest::ExpectRunTimeHasBeenSet() const
{
    return m_expectRunTimeHasBeenSet;
}

