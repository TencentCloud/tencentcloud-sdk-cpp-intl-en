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

#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPVersionCompileTaskSubSimpleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeMNPVersionCompileTaskSubSimpleInfo::DescribeMNPVersionCompileTaskSubSimpleInfo() :
    m_pkgNameHasBeenSet(false),
    m_pathPrefixHasBeenSet(false),
    m_pkgSizeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNPVersionCompileTaskSubSimpleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PkgName") && !value["PkgName"].IsNull())
    {
        if (!value["PkgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskSubSimpleInfo.PkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgName = string(value["PkgName"].GetString());
        m_pkgNameHasBeenSet = true;
    }

    if (value.HasMember("PathPrefix") && !value["PathPrefix"].IsNull())
    {
        if (!value["PathPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskSubSimpleInfo.PathPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathPrefix = string(value["PathPrefix"].GetString());
        m_pathPrefixHasBeenSet = true;
    }

    if (value.HasMember("PkgSize") && !value["PkgSize"].IsNull())
    {
        if (!value["PkgSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionCompileTaskSubSimpleInfo.PkgSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pkgSize = value["PkgSize"].GetInt64();
        m_pkgSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNPVersionCompileTaskSubSimpleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_pathPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pkgSize, allocator);
    }

}


string DescribeMNPVersionCompileTaskSubSimpleInfo::GetPkgName() const
{
    return m_pkgName;
}

void DescribeMNPVersionCompileTaskSubSimpleInfo::SetPkgName(const string& _pkgName)
{
    m_pkgName = _pkgName;
    m_pkgNameHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskSubSimpleInfo::PkgNameHasBeenSet() const
{
    return m_pkgNameHasBeenSet;
}

string DescribeMNPVersionCompileTaskSubSimpleInfo::GetPathPrefix() const
{
    return m_pathPrefix;
}

void DescribeMNPVersionCompileTaskSubSimpleInfo::SetPathPrefix(const string& _pathPrefix)
{
    m_pathPrefix = _pathPrefix;
    m_pathPrefixHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskSubSimpleInfo::PathPrefixHasBeenSet() const
{
    return m_pathPrefixHasBeenSet;
}

int64_t DescribeMNPVersionCompileTaskSubSimpleInfo::GetPkgSize() const
{
    return m_pkgSize;
}

void DescribeMNPVersionCompileTaskSubSimpleInfo::SetPkgSize(const int64_t& _pkgSize)
{
    m_pkgSize = _pkgSize;
    m_pkgSizeHasBeenSet = true;
}

bool DescribeMNPVersionCompileTaskSubSimpleInfo::PkgSizeHasBeenSet() const
{
    return m_pkgSizeHasBeenSet;
}

