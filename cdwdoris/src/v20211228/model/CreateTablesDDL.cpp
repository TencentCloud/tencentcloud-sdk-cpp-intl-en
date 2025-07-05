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

#include <tencentcloud/cdwdoris/v20211228/model/CreateTablesDDL.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

CreateTablesDDL::CreateTablesDDL() :
    m_dbNameHasBeenSet(false),
    m_tablesDDLsHasBeenSet(false)
{
}

CoreInternalOutcome CreateTablesDDL::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTablesDDL.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("TablesDDLs") && !value["TablesDDLs"].IsNull())
    {
        if (!value["TablesDDLs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateTablesDDL.TablesDDLs` is not array type"));

        const rapidjson::Value &tmpValue = value["TablesDDLs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TablesDDL item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tablesDDLs.push_back(item);
        }
        m_tablesDDLsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateTablesDDL::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_tablesDDLsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablesDDLs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tablesDDLs.begin(); itr != m_tablesDDLs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CreateTablesDDL::GetDbName() const
{
    return m_dbName;
}

void CreateTablesDDL::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool CreateTablesDDL::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

vector<TablesDDL> CreateTablesDDL::GetTablesDDLs() const
{
    return m_tablesDDLs;
}

void CreateTablesDDL::SetTablesDDLs(const vector<TablesDDL>& _tablesDDLs)
{
    m_tablesDDLs = _tablesDDLs;
    m_tablesDDLsHasBeenSet = true;
}

bool CreateTablesDDL::TablesDDLsHasBeenSet() const
{
    return m_tablesDDLsHasBeenSet;
}

