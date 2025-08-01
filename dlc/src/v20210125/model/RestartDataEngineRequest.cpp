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

#include <tencentcloud/dlc/v20210125/model/RestartDataEngineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

RestartDataEngineRequest::RestartDataEngineRequest() :
    m_dataEngineIdHasBeenSet(false),
    m_forcedOperationHasBeenSet(false)
{
}

string RestartDataEngineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_forcedOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForcedOperation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forcedOperation, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RestartDataEngineRequest::GetDataEngineId() const
{
    return m_dataEngineId;
}

void RestartDataEngineRequest::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool RestartDataEngineRequest::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

bool RestartDataEngineRequest::GetForcedOperation() const
{
    return m_forcedOperation;
}

void RestartDataEngineRequest::SetForcedOperation(const bool& _forcedOperation)
{
    m_forcedOperation = _forcedOperation;
    m_forcedOperationHasBeenSet = true;
}

bool RestartDataEngineRequest::ForcedOperationHasBeenSet() const
{
    return m_forcedOperationHasBeenSet;
}


