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

#include <tencentcloud/ssl/v20191205/model/COSInstanceList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

COSInstanceList::COSInstanceList() :
    m_regionHasBeenSet(false),
    m_instanceListHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome COSInstanceList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `COSInstanceList.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("InstanceList") && !value["InstanceList"].IsNull())
    {
        if (!value["InstanceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `COSInstanceList.InstanceList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosInstanceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceList.push_back(item);
        }
        m_instanceListHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `COSInstanceList.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `COSInstanceList.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void COSInstanceList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceList.begin(); itr != m_instanceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

}


string COSInstanceList::GetRegion() const
{
    return m_region;
}

void COSInstanceList::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool COSInstanceList::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<CosInstanceDetail> COSInstanceList::GetInstanceList() const
{
    return m_instanceList;
}

void COSInstanceList::SetInstanceList(const vector<CosInstanceDetail>& _instanceList)
{
    m_instanceList = _instanceList;
    m_instanceListHasBeenSet = true;
}

bool COSInstanceList::InstanceListHasBeenSet() const
{
    return m_instanceListHasBeenSet;
}

int64_t COSInstanceList::GetTotalCount() const
{
    return m_totalCount;
}

void COSInstanceList::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool COSInstanceList::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

string COSInstanceList::GetError() const
{
    return m_error;
}

void COSInstanceList::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool COSInstanceList::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

