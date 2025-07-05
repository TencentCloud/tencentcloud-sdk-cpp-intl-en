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

#include <tencentcloud/dlc/v20210125/model/ExternalDataConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ExternalDataConfiguration::ExternalDataConfiguration() :
    m_sdsHasBeenSet(false),
    m_viewOriginalTextHasBeenSet(false),
    m_viewExpandedTextHasBeenSet(false),
    m_retentionHasBeenSet(false),
    m_lifeTimeHasBeenSet(false),
    m_partitionsHasBeenSet(false)
{
}

CoreInternalOutcome ExternalDataConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sds") && !value["Sds"].IsNull())
    {
        if (!value["Sds"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDataConfiguration.Sds` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sds.Deserialize(value["Sds"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sdsHasBeenSet = true;
    }

    if (value.HasMember("ViewOriginalText") && !value["ViewOriginalText"].IsNull())
    {
        if (!value["ViewOriginalText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDataConfiguration.ViewOriginalText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewOriginalText = string(value["ViewOriginalText"].GetString());
        m_viewOriginalTextHasBeenSet = true;
    }

    if (value.HasMember("ViewExpandedText") && !value["ViewExpandedText"].IsNull())
    {
        if (!value["ViewExpandedText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDataConfiguration.ViewExpandedText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewExpandedText = string(value["ViewExpandedText"].GetString());
        m_viewExpandedTextHasBeenSet = true;
    }

    if (value.HasMember("Retention") && !value["Retention"].IsNull())
    {
        if (!value["Retention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDataConfiguration.Retention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retention = value["Retention"].GetInt64();
        m_retentionHasBeenSet = true;
    }

    if (value.HasMember("LifeTime") && !value["LifeTime"].IsNull())
    {
        if (!value["LifeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalDataConfiguration.LifeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeTime = value["LifeTime"].GetInt64();
        m_lifeTimeHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExternalDataConfiguration.Partitions` is not array type"));

        const rapidjson::Value &tmpValue = value["Partitions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DMSPartition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitions.push_back(item);
        }
        m_partitionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalDataConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sds.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_viewOriginalTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewOriginalText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewOriginalText.c_str(), allocator).Move(), allocator);
    }

    if (m_viewExpandedTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewExpandedText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewExpandedText.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retention, allocator);
    }

    if (m_lifeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeTime, allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitions.begin(); itr != m_partitions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


DMSSds ExternalDataConfiguration::GetSds() const
{
    return m_sds;
}

void ExternalDataConfiguration::SetSds(const DMSSds& _sds)
{
    m_sds = _sds;
    m_sdsHasBeenSet = true;
}

bool ExternalDataConfiguration::SdsHasBeenSet() const
{
    return m_sdsHasBeenSet;
}

string ExternalDataConfiguration::GetViewOriginalText() const
{
    return m_viewOriginalText;
}

void ExternalDataConfiguration::SetViewOriginalText(const string& _viewOriginalText)
{
    m_viewOriginalText = _viewOriginalText;
    m_viewOriginalTextHasBeenSet = true;
}

bool ExternalDataConfiguration::ViewOriginalTextHasBeenSet() const
{
    return m_viewOriginalTextHasBeenSet;
}

string ExternalDataConfiguration::GetViewExpandedText() const
{
    return m_viewExpandedText;
}

void ExternalDataConfiguration::SetViewExpandedText(const string& _viewExpandedText)
{
    m_viewExpandedText = _viewExpandedText;
    m_viewExpandedTextHasBeenSet = true;
}

bool ExternalDataConfiguration::ViewExpandedTextHasBeenSet() const
{
    return m_viewExpandedTextHasBeenSet;
}

int64_t ExternalDataConfiguration::GetRetention() const
{
    return m_retention;
}

void ExternalDataConfiguration::SetRetention(const int64_t& _retention)
{
    m_retention = _retention;
    m_retentionHasBeenSet = true;
}

bool ExternalDataConfiguration::RetentionHasBeenSet() const
{
    return m_retentionHasBeenSet;
}

int64_t ExternalDataConfiguration::GetLifeTime() const
{
    return m_lifeTime;
}

void ExternalDataConfiguration::SetLifeTime(const int64_t& _lifeTime)
{
    m_lifeTime = _lifeTime;
    m_lifeTimeHasBeenSet = true;
}

bool ExternalDataConfiguration::LifeTimeHasBeenSet() const
{
    return m_lifeTimeHasBeenSet;
}

vector<DMSPartition> ExternalDataConfiguration::GetPartitions() const
{
    return m_partitions;
}

void ExternalDataConfiguration::SetPartitions(const vector<DMSPartition>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool ExternalDataConfiguration::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

