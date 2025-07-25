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

#include <tencentcloud/dlc/v20210125/model/RollbackDataEngineImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

RollbackDataEngineImageRequest::RollbackDataEngineImageRequest() :
    m_dataEngineIdHasBeenSet(false),
    m_fromRecordIdHasBeenSet(false),
    m_toRecordIdHasBeenSet(false)
{
}

string RollbackDataEngineImageRequest::ToJsonString() const
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

    if (m_fromRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromRecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_toRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToRecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toRecordId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RollbackDataEngineImageRequest::GetDataEngineId() const
{
    return m_dataEngineId;
}

void RollbackDataEngineImageRequest::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool RollbackDataEngineImageRequest::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

string RollbackDataEngineImageRequest::GetFromRecordId() const
{
    return m_fromRecordId;
}

void RollbackDataEngineImageRequest::SetFromRecordId(const string& _fromRecordId)
{
    m_fromRecordId = _fromRecordId;
    m_fromRecordIdHasBeenSet = true;
}

bool RollbackDataEngineImageRequest::FromRecordIdHasBeenSet() const
{
    return m_fromRecordIdHasBeenSet;
}

string RollbackDataEngineImageRequest::GetToRecordId() const
{
    return m_toRecordId;
}

void RollbackDataEngineImageRequest::SetToRecordId(const string& _toRecordId)
{
    m_toRecordId = _toRecordId;
    m_toRecordIdHasBeenSet = true;
}

bool RollbackDataEngineImageRequest::ToRecordIdHasBeenSet() const
{
    return m_toRecordIdHasBeenSet;
}


