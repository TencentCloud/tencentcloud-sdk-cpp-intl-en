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

#include <tencentcloud/tcsas/v20250106/model/ReportDataResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

ReportDataResult::ReportDataResult() :
    m_dataResultHasBeenSet(false),
    m_execSqlHasBeenSet(false),
    m_execTimeHasBeenSet(false),
    m_indexIdHasBeenSet(false)
{
}

CoreInternalOutcome ReportDataResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataResult") && !value["DataResult"].IsNull())
    {
        if (!value["DataResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportDataResult.DataResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataResult = string(value["DataResult"].GetString());
        m_dataResultHasBeenSet = true;
    }

    if (value.HasMember("ExecSql") && !value["ExecSql"].IsNull())
    {
        if (!value["ExecSql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportDataResult.ExecSql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execSql = string(value["ExecSql"].GetString());
        m_execSqlHasBeenSet = true;
    }

    if (value.HasMember("ExecTime") && !value["ExecTime"].IsNull())
    {
        if (!value["ExecTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportDataResult.ExecTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_execTime = value["ExecTime"].GetInt64();
        m_execTimeHasBeenSet = true;
    }

    if (value.HasMember("IndexId") && !value["IndexId"].IsNull())
    {
        if (!value["IndexId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportDataResult.IndexId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexId = string(value["IndexId"].GetString());
        m_indexIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportDataResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataResult.c_str(), allocator).Move(), allocator);
    }

    if (m_execSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecSql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execSql.c_str(), allocator).Move(), allocator);
    }

    if (m_execTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_execTime, allocator);
    }

    if (m_indexIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexId.c_str(), allocator).Move(), allocator);
    }

}


string ReportDataResult::GetDataResult() const
{
    return m_dataResult;
}

void ReportDataResult::SetDataResult(const string& _dataResult)
{
    m_dataResult = _dataResult;
    m_dataResultHasBeenSet = true;
}

bool ReportDataResult::DataResultHasBeenSet() const
{
    return m_dataResultHasBeenSet;
}

string ReportDataResult::GetExecSql() const
{
    return m_execSql;
}

void ReportDataResult::SetExecSql(const string& _execSql)
{
    m_execSql = _execSql;
    m_execSqlHasBeenSet = true;
}

bool ReportDataResult::ExecSqlHasBeenSet() const
{
    return m_execSqlHasBeenSet;
}

int64_t ReportDataResult::GetExecTime() const
{
    return m_execTime;
}

void ReportDataResult::SetExecTime(const int64_t& _execTime)
{
    m_execTime = _execTime;
    m_execTimeHasBeenSet = true;
}

bool ReportDataResult::ExecTimeHasBeenSet() const
{
    return m_execTimeHasBeenSet;
}

string ReportDataResult::GetIndexId() const
{
    return m_indexId;
}

void ReportDataResult::SetIndexId(const string& _indexId)
{
    m_indexId = _indexId;
    m_indexIdHasBeenSet = true;
}

bool ReportDataResult::IndexIdHasBeenSet() const
{
    return m_indexIdHasBeenSet;
}

