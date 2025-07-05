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

#include <tencentcloud/cdwdoris/v20211228/model/Rows.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

Rows::Rows() :
    m_dataRowHasBeenSet(false)
{
}

CoreInternalOutcome Rows::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataRow") && !value["DataRow"].IsNull())
    {
        if (!value["DataRow"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rows.DataRow` is not array type"));

        const rapidjson::Value &tmpValue = value["DataRow"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataRow.push_back((*itr).GetString());
        }
        m_dataRowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Rows::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataRowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataRow.begin(); itr != m_dataRow.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> Rows::GetDataRow() const
{
    return m_dataRow;
}

void Rows::SetDataRow(const vector<string>& _dataRow)
{
    m_dataRow = _dataRow;
    m_dataRowHasBeenSet = true;
}

bool Rows::DataRowHasBeenSet() const
{
    return m_dataRowHasBeenSet;
}

