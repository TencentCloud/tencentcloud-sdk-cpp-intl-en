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

#include <tencentcloud/cdwdoris/v20211228/model/TablesDDL.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

TablesDDL::TablesDDL() :
    m_tableNameHasBeenSet(false),
    m_dDLInfoHasBeenSet(false)
{
}

CoreInternalOutcome TablesDDL::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TablesDDL.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("DDLInfo") && !value["DDLInfo"].IsNull())
    {
        if (!value["DDLInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TablesDDL.DDLInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dDLInfo = string(value["DDLInfo"].GetString());
        m_dDLInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TablesDDL::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_dDLInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDLInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dDLInfo.c_str(), allocator).Move(), allocator);
    }

}


string TablesDDL::GetTableName() const
{
    return m_tableName;
}

void TablesDDL::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TablesDDL::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TablesDDL::GetDDLInfo() const
{
    return m_dDLInfo;
}

void TablesDDL::SetDDLInfo(const string& _dDLInfo)
{
    m_dDLInfo = _dDLInfo;
    m_dDLInfoHasBeenSet = true;
}

bool TablesDDL::DDLInfoHasBeenSet() const
{
    return m_dDLInfoHasBeenSet;
}

