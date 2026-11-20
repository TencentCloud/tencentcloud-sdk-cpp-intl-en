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

#include <tencentcloud/ocr/v20181119/model/ExtractedFields.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ExtractedFields::ExtractedFields() :
    m_titleHasBeenSet(false),
    m_queryNoHasBeenSet(false),
    m_queryDateHasBeenSet(false),
    m_generateDateHasBeenSet(false),
    m_personInfoHasBeenSet(false),
    m_recordsHasBeenSet(false),
    m_queryPeriodStartHasBeenSet(false),
    m_queryPeriodEndHasBeenSet(false)
{
}

CoreInternalOutcome ExtractedFields::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractedFields.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("QueryNo") && !value["QueryNo"].IsNull())
    {
        if (!value["QueryNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractedFields.QueryNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryNo = string(value["QueryNo"].GetString());
        m_queryNoHasBeenSet = true;
    }

    if (value.HasMember("QueryDate") && !value["QueryDate"].IsNull())
    {
        if (!value["QueryDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractedFields.QueryDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryDate = string(value["QueryDate"].GetString());
        m_queryDateHasBeenSet = true;
    }

    if (value.HasMember("GenerateDate") && !value["GenerateDate"].IsNull())
    {
        if (!value["GenerateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractedFields.GenerateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_generateDate = string(value["GenerateDate"].GetString());
        m_generateDateHasBeenSet = true;
    }

    if (value.HasMember("PersonInfo") && !value["PersonInfo"].IsNull())
    {
        if (!value["PersonInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractedFields.PersonInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_personInfo.Deserialize(value["PersonInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personInfoHasBeenSet = true;
    }

    if (value.HasMember("Records") && !value["Records"].IsNull())
    {
        if (!value["Records"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtractedFields.Records` is not array type"));

        const rapidjson::Value &tmpValue = value["Records"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Record item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_records.push_back(item);
        }
        m_recordsHasBeenSet = true;
    }

    if (value.HasMember("QueryPeriodStart") && !value["QueryPeriodStart"].IsNull())
    {
        if (!value["QueryPeriodStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractedFields.QueryPeriodStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryPeriodStart = string(value["QueryPeriodStart"].GetString());
        m_queryPeriodStartHasBeenSet = true;
    }

    if (value.HasMember("QueryPeriodEnd") && !value["QueryPeriodEnd"].IsNull())
    {
        if (!value["QueryPeriodEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtractedFields.QueryPeriodEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryPeriodEnd = string(value["QueryPeriodEnd"].GetString());
        m_queryPeriodEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtractedFields::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_queryNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryNo.c_str(), allocator).Move(), allocator);
    }

    if (m_queryDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryDate.c_str(), allocator).Move(), allocator);
    }

    if (m_generateDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_generateDate.c_str(), allocator).Move(), allocator);
    }

    if (m_personInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_personInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_recordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Records";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_records.begin(); itr != m_records.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_queryPeriodStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryPeriodStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryPeriodStart.c_str(), allocator).Move(), allocator);
    }

    if (m_queryPeriodEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryPeriodEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryPeriodEnd.c_str(), allocator).Move(), allocator);
    }

}


string ExtractedFields::GetTitle() const
{
    return m_title;
}

void ExtractedFields::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ExtractedFields::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string ExtractedFields::GetQueryNo() const
{
    return m_queryNo;
}

void ExtractedFields::SetQueryNo(const string& _queryNo)
{
    m_queryNo = _queryNo;
    m_queryNoHasBeenSet = true;
}

bool ExtractedFields::QueryNoHasBeenSet() const
{
    return m_queryNoHasBeenSet;
}

string ExtractedFields::GetQueryDate() const
{
    return m_queryDate;
}

void ExtractedFields::SetQueryDate(const string& _queryDate)
{
    m_queryDate = _queryDate;
    m_queryDateHasBeenSet = true;
}

bool ExtractedFields::QueryDateHasBeenSet() const
{
    return m_queryDateHasBeenSet;
}

string ExtractedFields::GetGenerateDate() const
{
    return m_generateDate;
}

void ExtractedFields::SetGenerateDate(const string& _generateDate)
{
    m_generateDate = _generateDate;
    m_generateDateHasBeenSet = true;
}

bool ExtractedFields::GenerateDateHasBeenSet() const
{
    return m_generateDateHasBeenSet;
}

PersonInfo ExtractedFields::GetPersonInfo() const
{
    return m_personInfo;
}

void ExtractedFields::SetPersonInfo(const PersonInfo& _personInfo)
{
    m_personInfo = _personInfo;
    m_personInfoHasBeenSet = true;
}

bool ExtractedFields::PersonInfoHasBeenSet() const
{
    return m_personInfoHasBeenSet;
}

vector<Record> ExtractedFields::GetRecords() const
{
    return m_records;
}

void ExtractedFields::SetRecords(const vector<Record>& _records)
{
    m_records = _records;
    m_recordsHasBeenSet = true;
}

bool ExtractedFields::RecordsHasBeenSet() const
{
    return m_recordsHasBeenSet;
}

string ExtractedFields::GetQueryPeriodStart() const
{
    return m_queryPeriodStart;
}

void ExtractedFields::SetQueryPeriodStart(const string& _queryPeriodStart)
{
    m_queryPeriodStart = _queryPeriodStart;
    m_queryPeriodStartHasBeenSet = true;
}

bool ExtractedFields::QueryPeriodStartHasBeenSet() const
{
    return m_queryPeriodStartHasBeenSet;
}

string ExtractedFields::GetQueryPeriodEnd() const
{
    return m_queryPeriodEnd;
}

void ExtractedFields::SetQueryPeriodEnd(const string& _queryPeriodEnd)
{
    m_queryPeriodEnd = _queryPeriodEnd;
    m_queryPeriodEndHasBeenSet = true;
}

bool ExtractedFields::QueryPeriodEndHasBeenSet() const
{
    return m_queryPeriodEndHasBeenSet;
}

