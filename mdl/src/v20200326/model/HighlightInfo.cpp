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

#include <tencentcloud/mdl/v20200326/model/HighlightInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

HighlightInfo::HighlightInfo() :
    m_highlightEnabledHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_filenameHasBeenSet(false),
    m_timestampFormatHasBeenSet(false),
    m_audioSelectorNamesHasBeenSet(false)
{
}

CoreInternalOutcome HighlightInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HighlightEnabled") && !value["HighlightEnabled"].IsNull())
    {
        if (!value["HighlightEnabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightInfo.HighlightEnabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highlightEnabled = value["HighlightEnabled"].GetUint64();
        m_highlightEnabledHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Filename") && !value["Filename"].IsNull())
    {
        if (!value["Filename"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightInfo.Filename` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filename = string(value["Filename"].GetString());
        m_filenameHasBeenSet = true;
    }

    if (value.HasMember("TimestampFormat") && !value["TimestampFormat"].IsNull())
    {
        if (!value["TimestampFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighlightInfo.TimestampFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestampFormat = string(value["TimestampFormat"].GetString());
        m_timestampFormatHasBeenSet = true;
    }

    if (value.HasMember("AudioSelectorNames") && !value["AudioSelectorNames"].IsNull())
    {
        if (!value["AudioSelectorNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HighlightInfo.AudioSelectorNames` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioSelectorNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_audioSelectorNames.push_back((*itr).GetString());
        }
        m_audioSelectorNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HighlightInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_highlightEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighlightEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highlightEnabled, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_filenameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filename";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filename.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimestampFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestampFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_audioSelectorNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSelectorNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_audioSelectorNames.begin(); itr != m_audioSelectorNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t HighlightInfo::GetHighlightEnabled() const
{
    return m_highlightEnabled;
}

void HighlightInfo::SetHighlightEnabled(const uint64_t& _highlightEnabled)
{
    m_highlightEnabled = _highlightEnabled;
    m_highlightEnabledHasBeenSet = true;
}

bool HighlightInfo::HighlightEnabledHasBeenSet() const
{
    return m_highlightEnabledHasBeenSet;
}

string HighlightInfo::GetType() const
{
    return m_type;
}

void HighlightInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HighlightInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string HighlightInfo::GetRegion() const
{
    return m_region;
}

void HighlightInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool HighlightInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string HighlightInfo::GetBucket() const
{
    return m_bucket;
}

void HighlightInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool HighlightInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string HighlightInfo::GetPath() const
{
    return m_path;
}

void HighlightInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool HighlightInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string HighlightInfo::GetFilename() const
{
    return m_filename;
}

void HighlightInfo::SetFilename(const string& _filename)
{
    m_filename = _filename;
    m_filenameHasBeenSet = true;
}

bool HighlightInfo::FilenameHasBeenSet() const
{
    return m_filenameHasBeenSet;
}

string HighlightInfo::GetTimestampFormat() const
{
    return m_timestampFormat;
}

void HighlightInfo::SetTimestampFormat(const string& _timestampFormat)
{
    m_timestampFormat = _timestampFormat;
    m_timestampFormatHasBeenSet = true;
}

bool HighlightInfo::TimestampFormatHasBeenSet() const
{
    return m_timestampFormatHasBeenSet;
}

vector<string> HighlightInfo::GetAudioSelectorNames() const
{
    return m_audioSelectorNames;
}

void HighlightInfo::SetAudioSelectorNames(const vector<string>& _audioSelectorNames)
{
    m_audioSelectorNames = _audioSelectorNames;
    m_audioSelectorNamesHasBeenSet = true;
}

bool HighlightInfo::AudioSelectorNamesHasBeenSet() const
{
    return m_audioSelectorNamesHasBeenSet;
}

