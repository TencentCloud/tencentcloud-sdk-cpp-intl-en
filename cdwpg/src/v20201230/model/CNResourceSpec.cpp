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

#include <tencentcloud/cdwpg/v20201230/model/CNResourceSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

CNResourceSpec::CNResourceSpec() :
    m_typeHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_countHasBeenSet(false),
    m_diskSpecHasBeenSet(false)
{
}

CoreInternalOutcome CNResourceSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNResourceSpec.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNResourceSpec.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CNResourceSpec.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("DiskSpec") && !value["DiskSpec"].IsNull())
    {
        if (!value["DiskSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CNResourceSpec.DiskSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diskSpec.Deserialize(value["DiskSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diskSpecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNResourceSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_diskSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diskSpec.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CNResourceSpec::GetType() const
{
    return m_type;
}

void CNResourceSpec::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CNResourceSpec::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CNResourceSpec::GetSpecName() const
{
    return m_specName;
}

void CNResourceSpec::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool CNResourceSpec::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

int64_t CNResourceSpec::GetCount() const
{
    return m_count;
}

void CNResourceSpec::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CNResourceSpec::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

CBSSpec CNResourceSpec::GetDiskSpec() const
{
    return m_diskSpec;
}

void CNResourceSpec::SetDiskSpec(const CBSSpec& _diskSpec)
{
    m_diskSpec = _diskSpec;
    m_diskSpecHasBeenSet = true;
}

bool CNResourceSpec::DiskSpecHasBeenSet() const
{
    return m_diskSpecHasBeenSet;
}

