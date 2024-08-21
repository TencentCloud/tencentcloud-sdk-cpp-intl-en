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

#include <tencentcloud/dlc/v20210125/model/DMSSourceDatabaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DMSSourceDatabaseInfo::DMSSourceDatabaseInfo() :
    m_sourceDatabaseNameHasBeenSet(false),
    m_sourceTableNameListHasBeenSet(false)
{
}

CoreInternalOutcome DMSSourceDatabaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceDatabaseName") && !value["SourceDatabaseName"].IsNull())
    {
        if (!value["SourceDatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSSourceDatabaseInfo.SourceDatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDatabaseName = string(value["SourceDatabaseName"].GetString());
        m_sourceDatabaseNameHasBeenSet = true;
    }

    if (value.HasMember("SourceTableNameList") && !value["SourceTableNameList"].IsNull())
    {
        if (!value["SourceTableNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DMSSourceDatabaseInfo.SourceTableNameList` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceTableNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceTableNameList.push_back((*itr).GetString());
        }
        m_sourceTableNameListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DMSSourceDatabaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceDatabaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTableNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTableNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceTableNameList.begin(); itr != m_sourceTableNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DMSSourceDatabaseInfo::GetSourceDatabaseName() const
{
    return m_sourceDatabaseName;
}

void DMSSourceDatabaseInfo::SetSourceDatabaseName(const string& _sourceDatabaseName)
{
    m_sourceDatabaseName = _sourceDatabaseName;
    m_sourceDatabaseNameHasBeenSet = true;
}

bool DMSSourceDatabaseInfo::SourceDatabaseNameHasBeenSet() const
{
    return m_sourceDatabaseNameHasBeenSet;
}

vector<string> DMSSourceDatabaseInfo::GetSourceTableNameList() const
{
    return m_sourceTableNameList;
}

void DMSSourceDatabaseInfo::SetSourceTableNameList(const vector<string>& _sourceTableNameList)
{
    m_sourceTableNameList = _sourceTableNameList;
    m_sourceTableNameListHasBeenSet = true;
}

bool DMSSourceDatabaseInfo::SourceTableNameListHasBeenSet() const
{
    return m_sourceTableNameListHasBeenSet;
}

