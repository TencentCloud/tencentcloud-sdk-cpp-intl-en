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

#include <tencentcloud/rum/v20210622/model/DescribeDataPvUrlStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeDataPvUrlStatisticsRequest::DescribeDataPvUrlStatisticsRequest() :
    m_startTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_extSecondHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_versionNumHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_extThirdHasBeenSet(false),
    m_extFirstHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_isAbroadHasBeenSet(false),
    m_osHasBeenSet(false),
    m_browserHasBeenSet(false),
    m_envHasBeenSet(false),
    m_groupByTypeHasBeenSet(false),
    m_isNewDataHasBeenSet(false)
{
}

string DescribeDataPvUrlStatisticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_extSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtSecond";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extSecond.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionNum.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_extThirdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtThird";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extThird.c_str(), allocator).Move(), allocator);
    }

    if (m_extFirstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtFirst";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extFirst.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_device.c_str(), allocator).Move(), allocator);
    }

    if (m_isAbroadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAbroad";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isAbroad.c_str(), allocator).Move(), allocator);
    }

    if (m_osHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Os";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_os.c_str(), allocator).Move(), allocator);
    }

    if (m_browserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Browser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_browser.c_str(), allocator).Move(), allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }

    if (m_groupByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupByType, allocator);
    }

    if (m_isNewDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNewData, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDataPvUrlStatisticsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDataPvUrlStatisticsRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetType() const
{
    return m_type;
}

void DescribeDataPvUrlStatisticsRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DescribeDataPvUrlStatisticsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDataPvUrlStatisticsRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeDataPvUrlStatisticsRequest::GetID() const
{
    return m_iD;
}

void DescribeDataPvUrlStatisticsRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetExtSecond() const
{
    return m_extSecond;
}

void DescribeDataPvUrlStatisticsRequest::SetExtSecond(const string& _extSecond)
{
    m_extSecond = _extSecond;
    m_extSecondHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::ExtSecondHasBeenSet() const
{
    return m_extSecondHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetEngine() const
{
    return m_engine;
}

void DescribeDataPvUrlStatisticsRequest::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetIsp() const
{
    return m_isp;
}

void DescribeDataPvUrlStatisticsRequest::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetFrom() const
{
    return m_from;
}

void DescribeDataPvUrlStatisticsRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetLevel() const
{
    return m_level;
}

void DescribeDataPvUrlStatisticsRequest::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetBrand() const
{
    return m_brand;
}

void DescribeDataPvUrlStatisticsRequest::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetArea() const
{
    return m_area;
}

void DescribeDataPvUrlStatisticsRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetVersionNum() const
{
    return m_versionNum;
}

void DescribeDataPvUrlStatisticsRequest::SetVersionNum(const string& _versionNum)
{
    m_versionNum = _versionNum;
    m_versionNumHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::VersionNumHasBeenSet() const
{
    return m_versionNumHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeDataPvUrlStatisticsRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetExtThird() const
{
    return m_extThird;
}

void DescribeDataPvUrlStatisticsRequest::SetExtThird(const string& _extThird)
{
    m_extThird = _extThird;
    m_extThirdHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::ExtThirdHasBeenSet() const
{
    return m_extThirdHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetExtFirst() const
{
    return m_extFirst;
}

void DescribeDataPvUrlStatisticsRequest::SetExtFirst(const string& _extFirst)
{
    m_extFirst = _extFirst;
    m_extFirstHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::ExtFirstHasBeenSet() const
{
    return m_extFirstHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetNetType() const
{
    return m_netType;
}

void DescribeDataPvUrlStatisticsRequest::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetDevice() const
{
    return m_device;
}

void DescribeDataPvUrlStatisticsRequest::SetDevice(const string& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetIsAbroad() const
{
    return m_isAbroad;
}

void DescribeDataPvUrlStatisticsRequest::SetIsAbroad(const string& _isAbroad)
{
    m_isAbroad = _isAbroad;
    m_isAbroadHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::IsAbroadHasBeenSet() const
{
    return m_isAbroadHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetOs() const
{
    return m_os;
}

void DescribeDataPvUrlStatisticsRequest::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetBrowser() const
{
    return m_browser;
}

void DescribeDataPvUrlStatisticsRequest::SetBrowser(const string& _browser)
{
    m_browser = _browser;
    m_browserHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::BrowserHasBeenSet() const
{
    return m_browserHasBeenSet;
}

string DescribeDataPvUrlStatisticsRequest::GetEnv() const
{
    return m_env;
}

void DescribeDataPvUrlStatisticsRequest::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

int64_t DescribeDataPvUrlStatisticsRequest::GetGroupByType() const
{
    return m_groupByType;
}

void DescribeDataPvUrlStatisticsRequest::SetGroupByType(const int64_t& _groupByType)
{
    m_groupByType = _groupByType;
    m_groupByTypeHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::GroupByTypeHasBeenSet() const
{
    return m_groupByTypeHasBeenSet;
}

int64_t DescribeDataPvUrlStatisticsRequest::GetIsNewData() const
{
    return m_isNewData;
}

void DescribeDataPvUrlStatisticsRequest::SetIsNewData(const int64_t& _isNewData)
{
    m_isNewData = _isNewData;
    m_isNewDataHasBeenSet = true;
}

bool DescribeDataPvUrlStatisticsRequest::IsNewDataHasBeenSet() const
{
    return m_isNewDataHasBeenSet;
}


