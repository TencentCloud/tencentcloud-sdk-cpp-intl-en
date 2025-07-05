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

#include <tencentcloud/cdwdoris/v20211228/model/RangeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

RangeInfo::RangeInfo() :
    m_rangeTypeHasBeenSet(false),
    m_partitionNameHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_rightHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_stepLengthHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

CoreInternalOutcome RangeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RangeType") && !value["RangeType"].IsNull())
    {
        if (!value["RangeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RangeInfo.RangeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rangeType = string(value["RangeType"].GetString());
        m_rangeTypeHasBeenSet = true;
    }

    if (value.HasMember("PartitionName") && !value["PartitionName"].IsNull())
    {
        if (!value["PartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RangeInfo.PartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionName = string(value["PartitionName"].GetString());
        m_partitionNameHasBeenSet = true;
    }

    if (value.HasMember("Left") && !value["Left"].IsNull())
    {
        if (!value["Left"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RangeInfo.Left` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_left = string(value["Left"].GetString());
        m_leftHasBeenSet = true;
    }

    if (value.HasMember("Right") && !value["Right"].IsNull())
    {
        if (!value["Right"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RangeInfo.Right` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_right = string(value["Right"].GetString());
        m_rightHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RangeInfo.Max` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_max = string(value["Max"].GetString());
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("StepLength") && !value["StepLength"].IsNull())
    {
        if (!value["StepLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RangeInfo.StepLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stepLength = value["StepLength"].GetInt64();
        m_stepLengthHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RangeInfo.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RangeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rangeType.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_leftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Left";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_left.c_str(), allocator).Move(), allocator);
    }

    if (m_rightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Right";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_right.c_str(), allocator).Move(), allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_max.c_str(), allocator).Move(), allocator);
    }

    if (m_stepLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepLength, allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

}


string RangeInfo::GetRangeType() const
{
    return m_rangeType;
}

void RangeInfo::SetRangeType(const string& _rangeType)
{
    m_rangeType = _rangeType;
    m_rangeTypeHasBeenSet = true;
}

bool RangeInfo::RangeTypeHasBeenSet() const
{
    return m_rangeTypeHasBeenSet;
}

string RangeInfo::GetPartitionName() const
{
    return m_partitionName;
}

void RangeInfo::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool RangeInfo::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

string RangeInfo::GetLeft() const
{
    return m_left;
}

void RangeInfo::SetLeft(const string& _left)
{
    m_left = _left;
    m_leftHasBeenSet = true;
}

bool RangeInfo::LeftHasBeenSet() const
{
    return m_leftHasBeenSet;
}

string RangeInfo::GetRight() const
{
    return m_right;
}

void RangeInfo::SetRight(const string& _right)
{
    m_right = _right;
    m_rightHasBeenSet = true;
}

bool RangeInfo::RightHasBeenSet() const
{
    return m_rightHasBeenSet;
}

string RangeInfo::GetMax() const
{
    return m_max;
}

void RangeInfo::SetMax(const string& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool RangeInfo::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

int64_t RangeInfo::GetStepLength() const
{
    return m_stepLength;
}

void RangeInfo::SetStepLength(const int64_t& _stepLength)
{
    m_stepLength = _stepLength;
    m_stepLengthHasBeenSet = true;
}

bool RangeInfo::StepLengthHasBeenSet() const
{
    return m_stepLengthHasBeenSet;
}

string RangeInfo::GetUnit() const
{
    return m_unit;
}

void RangeInfo::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool RangeInfo::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

