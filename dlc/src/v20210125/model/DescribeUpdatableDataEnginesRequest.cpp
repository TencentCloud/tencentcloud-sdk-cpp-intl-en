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

#include <tencentcloud/dlc/v20210125/model/DescribeUpdatableDataEnginesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeUpdatableDataEnginesRequest::DescribeUpdatableDataEnginesRequest() :
    m_dataEngineConfigCommandHasBeenSet(false),
    m_useLakeFsHasBeenSet(false),
    m_customResultPathHasBeenSet(false)
{
}

string DescribeUpdatableDataEnginesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataEngineConfigCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineConfigCommand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineConfigCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_useLakeFsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseLakeFs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useLakeFs, allocator);
    }

    if (m_customResultPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomResultPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customResultPath.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUpdatableDataEnginesRequest::GetDataEngineConfigCommand() const
{
    return m_dataEngineConfigCommand;
}

void DescribeUpdatableDataEnginesRequest::SetDataEngineConfigCommand(const string& _dataEngineConfigCommand)
{
    m_dataEngineConfigCommand = _dataEngineConfigCommand;
    m_dataEngineConfigCommandHasBeenSet = true;
}

bool DescribeUpdatableDataEnginesRequest::DataEngineConfigCommandHasBeenSet() const
{
    return m_dataEngineConfigCommandHasBeenSet;
}

bool DescribeUpdatableDataEnginesRequest::GetUseLakeFs() const
{
    return m_useLakeFs;
}

void DescribeUpdatableDataEnginesRequest::SetUseLakeFs(const bool& _useLakeFs)
{
    m_useLakeFs = _useLakeFs;
    m_useLakeFsHasBeenSet = true;
}

bool DescribeUpdatableDataEnginesRequest::UseLakeFsHasBeenSet() const
{
    return m_useLakeFsHasBeenSet;
}

string DescribeUpdatableDataEnginesRequest::GetCustomResultPath() const
{
    return m_customResultPath;
}

void DescribeUpdatableDataEnginesRequest::SetCustomResultPath(const string& _customResultPath)
{
    m_customResultPath = _customResultPath;
    m_customResultPathHasBeenSet = true;
}

bool DescribeUpdatableDataEnginesRequest::CustomResultPathHasBeenSet() const
{
    return m_customResultPathHasBeenSet;
}


