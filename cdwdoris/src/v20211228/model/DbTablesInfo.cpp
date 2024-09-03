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

#include <tencentcloud/cdwdoris/v20211228/model/DbTablesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DbTablesInfo::DbTablesInfo() :
    m_dbNameHasBeenSet(false),
    m_tablesNameHasBeenSet(false)
{
}

CoreInternalOutcome DbTablesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbTablesInfo.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("TablesName") && !value["TablesName"].IsNull())
    {
        if (!value["TablesName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DbTablesInfo.TablesName` is not array type"));

        const rapidjson::Value &tmpValue = value["TablesName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tablesName.push_back((*itr).GetString());
        }
        m_tablesNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DbTablesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_tablesNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablesName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tablesName.begin(); itr != m_tablesName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DbTablesInfo::GetDbName() const
{
    return m_dbName;
}

void DbTablesInfo::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DbTablesInfo::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

vector<string> DbTablesInfo::GetTablesName() const
{
    return m_tablesName;
}

void DbTablesInfo::SetTablesName(const vector<string>& _tablesName)
{
    m_tablesName = _tablesName;
    m_tablesNameHasBeenSet = true;
}

bool DbTablesInfo::TablesNameHasBeenSet() const
{
    return m_tablesNameHasBeenSet;
}

