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

#include <tencentcloud/tcsas/v20250106/model/MAUIndicatorCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

MAUIndicatorCard::MAUIndicatorCard() :
    m_comparisonRatioHasBeenSet(false),
    m_comparisonResultHasBeenSet(false),
    m_sourceMAUNumHasBeenSet(false),
    m_targetMAUNumHasBeenSet(false),
    m_flushTimeHasBeenSet(false)
{
}

CoreInternalOutcome MAUIndicatorCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComparisonRatio") && !value["ComparisonRatio"].IsNull())
    {
        if (!value["ComparisonRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MAUIndicatorCard.ComparisonRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comparisonRatio = string(value["ComparisonRatio"].GetString());
        m_comparisonRatioHasBeenSet = true;
    }

    if (value.HasMember("ComparisonResult") && !value["ComparisonResult"].IsNull())
    {
        if (!value["ComparisonResult"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MAUIndicatorCard.ComparisonResult` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_comparisonResult = value["ComparisonResult"].GetInt64();
        m_comparisonResultHasBeenSet = true;
    }

    if (value.HasMember("SourceMAUNum") && !value["SourceMAUNum"].IsNull())
    {
        if (!value["SourceMAUNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MAUIndicatorCard.SourceMAUNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceMAUNum = value["SourceMAUNum"].GetInt64();
        m_sourceMAUNumHasBeenSet = true;
    }

    if (value.HasMember("TargetMAUNum") && !value["TargetMAUNum"].IsNull())
    {
        if (!value["TargetMAUNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MAUIndicatorCard.TargetMAUNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetMAUNum = value["TargetMAUNum"].GetInt64();
        m_targetMAUNumHasBeenSet = true;
    }

    if (value.HasMember("FlushTime") && !value["FlushTime"].IsNull())
    {
        if (!value["FlushTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MAUIndicatorCard.FlushTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flushTime = value["FlushTime"].GetInt64();
        m_flushTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MAUIndicatorCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_comparisonRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComparisonRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comparisonRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_comparisonResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComparisonResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_comparisonResult, allocator);
    }

    if (m_sourceMAUNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceMAUNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceMAUNum, allocator);
    }

    if (m_targetMAUNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetMAUNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetMAUNum, allocator);
    }

    if (m_flushTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlushTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flushTime, allocator);
    }

}


string MAUIndicatorCard::GetComparisonRatio() const
{
    return m_comparisonRatio;
}

void MAUIndicatorCard::SetComparisonRatio(const string& _comparisonRatio)
{
    m_comparisonRatio = _comparisonRatio;
    m_comparisonRatioHasBeenSet = true;
}

bool MAUIndicatorCard::ComparisonRatioHasBeenSet() const
{
    return m_comparisonRatioHasBeenSet;
}

int64_t MAUIndicatorCard::GetComparisonResult() const
{
    return m_comparisonResult;
}

void MAUIndicatorCard::SetComparisonResult(const int64_t& _comparisonResult)
{
    m_comparisonResult = _comparisonResult;
    m_comparisonResultHasBeenSet = true;
}

bool MAUIndicatorCard::ComparisonResultHasBeenSet() const
{
    return m_comparisonResultHasBeenSet;
}

int64_t MAUIndicatorCard::GetSourceMAUNum() const
{
    return m_sourceMAUNum;
}

void MAUIndicatorCard::SetSourceMAUNum(const int64_t& _sourceMAUNum)
{
    m_sourceMAUNum = _sourceMAUNum;
    m_sourceMAUNumHasBeenSet = true;
}

bool MAUIndicatorCard::SourceMAUNumHasBeenSet() const
{
    return m_sourceMAUNumHasBeenSet;
}

int64_t MAUIndicatorCard::GetTargetMAUNum() const
{
    return m_targetMAUNum;
}

void MAUIndicatorCard::SetTargetMAUNum(const int64_t& _targetMAUNum)
{
    m_targetMAUNum = _targetMAUNum;
    m_targetMAUNumHasBeenSet = true;
}

bool MAUIndicatorCard::TargetMAUNumHasBeenSet() const
{
    return m_targetMAUNumHasBeenSet;
}

int64_t MAUIndicatorCard::GetFlushTime() const
{
    return m_flushTime;
}

void MAUIndicatorCard::SetFlushTime(const int64_t& _flushTime)
{
    m_flushTime = _flushTime;
    m_flushTimeHasBeenSet = true;
}

bool MAUIndicatorCard::FlushTimeHasBeenSet() const
{
    return m_flushTimeHasBeenSet;
}

