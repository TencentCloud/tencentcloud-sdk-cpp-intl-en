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

#include <tencentcloud/tcsas/v20250106/model/RetentionData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

RetentionData::RetentionData() :
    m_activeUserCountHasBeenSet(false),
    m_oneDayRetentionUsersHasBeenSet(false),
    m_twoDayRetentionUsersHasBeenSet(false),
    m_threeDayRetentionUsersHasBeenSet(false),
    m_fourDayRetentionUsersHasBeenSet(false),
    m_fiveDayRetentionUsersHasBeenSet(false),
    m_sixDayRetentionUsersHasBeenSet(false),
    m_sevenDayRetentionUsersHasBeenSet(false),
    m_fourteenDayRetentionUsersHasBeenSet(false),
    m_thirtyDayRetentionUsersHasBeenSet(false),
    m_newUserCountHasBeenSet(false),
    m_oneDayRetentionNewUsersHasBeenSet(false),
    m_twoDayRetentionNewUsersHasBeenSet(false),
    m_threeDayRetentionNewUsersHasBeenSet(false),
    m_fourDayRetentionNewUsersHasBeenSet(false),
    m_fiveDayRetentionNewUsersHasBeenSet(false),
    m_sixDayRetentionNewUsersHasBeenSet(false),
    m_sevenDayRetentionNewUsersHasBeenSet(false),
    m_fourteenDayRetentionNewUsersHasBeenSet(false),
    m_thirtyDayRetentionNewUsersHasBeenSet(false),
    m_dataTimeHasBeenSet(false)
{
}

CoreInternalOutcome RetentionData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActiveUserCount") && !value["ActiveUserCount"].IsNull())
    {
        if (!value["ActiveUserCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.ActiveUserCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeUserCount = value["ActiveUserCount"].GetInt64();
        m_activeUserCountHasBeenSet = true;
    }

    if (value.HasMember("OneDayRetentionUsers") && !value["OneDayRetentionUsers"].IsNull())
    {
        if (!value["OneDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.OneDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oneDayRetentionUsers = value["OneDayRetentionUsers"].GetInt64();
        m_oneDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("TwoDayRetentionUsers") && !value["TwoDayRetentionUsers"].IsNull())
    {
        if (!value["TwoDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.TwoDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_twoDayRetentionUsers = value["TwoDayRetentionUsers"].GetInt64();
        m_twoDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("ThreeDayRetentionUsers") && !value["ThreeDayRetentionUsers"].IsNull())
    {
        if (!value["ThreeDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.ThreeDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_threeDayRetentionUsers = value["ThreeDayRetentionUsers"].GetInt64();
        m_threeDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("FourDayRetentionUsers") && !value["FourDayRetentionUsers"].IsNull())
    {
        if (!value["FourDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.FourDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fourDayRetentionUsers = value["FourDayRetentionUsers"].GetInt64();
        m_fourDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("FiveDayRetentionUsers") && !value["FiveDayRetentionUsers"].IsNull())
    {
        if (!value["FiveDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.FiveDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fiveDayRetentionUsers = value["FiveDayRetentionUsers"].GetInt64();
        m_fiveDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("SixDayRetentionUsers") && !value["SixDayRetentionUsers"].IsNull())
    {
        if (!value["SixDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.SixDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sixDayRetentionUsers = value["SixDayRetentionUsers"].GetInt64();
        m_sixDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("SevenDayRetentionUsers") && !value["SevenDayRetentionUsers"].IsNull())
    {
        if (!value["SevenDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.SevenDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sevenDayRetentionUsers = value["SevenDayRetentionUsers"].GetInt64();
        m_sevenDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("FourteenDayRetentionUsers") && !value["FourteenDayRetentionUsers"].IsNull())
    {
        if (!value["FourteenDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.FourteenDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fourteenDayRetentionUsers = value["FourteenDayRetentionUsers"].GetInt64();
        m_fourteenDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("ThirtyDayRetentionUsers") && !value["ThirtyDayRetentionUsers"].IsNull())
    {
        if (!value["ThirtyDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.ThirtyDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_thirtyDayRetentionUsers = value["ThirtyDayRetentionUsers"].GetInt64();
        m_thirtyDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("NewUserCount") && !value["NewUserCount"].IsNull())
    {
        if (!value["NewUserCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.NewUserCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newUserCount = value["NewUserCount"].GetInt64();
        m_newUserCountHasBeenSet = true;
    }

    if (value.HasMember("OneDayRetentionNewUsers") && !value["OneDayRetentionNewUsers"].IsNull())
    {
        if (!value["OneDayRetentionNewUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.OneDayRetentionNewUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oneDayRetentionNewUsers = value["OneDayRetentionNewUsers"].GetInt64();
        m_oneDayRetentionNewUsersHasBeenSet = true;
    }

    if (value.HasMember("TwoDayRetentionNewUsers") && !value["TwoDayRetentionNewUsers"].IsNull())
    {
        if (!value["TwoDayRetentionNewUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.TwoDayRetentionNewUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_twoDayRetentionNewUsers = value["TwoDayRetentionNewUsers"].GetInt64();
        m_twoDayRetentionNewUsersHasBeenSet = true;
    }

    if (value.HasMember("ThreeDayRetentionNewUsers") && !value["ThreeDayRetentionNewUsers"].IsNull())
    {
        if (!value["ThreeDayRetentionNewUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.ThreeDayRetentionNewUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_threeDayRetentionNewUsers = value["ThreeDayRetentionNewUsers"].GetInt64();
        m_threeDayRetentionNewUsersHasBeenSet = true;
    }

    if (value.HasMember("FourDayRetentionNewUsers") && !value["FourDayRetentionNewUsers"].IsNull())
    {
        if (!value["FourDayRetentionNewUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.FourDayRetentionNewUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fourDayRetentionNewUsers = value["FourDayRetentionNewUsers"].GetInt64();
        m_fourDayRetentionNewUsersHasBeenSet = true;
    }

    if (value.HasMember("FiveDayRetentionNewUsers") && !value["FiveDayRetentionNewUsers"].IsNull())
    {
        if (!value["FiveDayRetentionNewUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.FiveDayRetentionNewUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fiveDayRetentionNewUsers = value["FiveDayRetentionNewUsers"].GetInt64();
        m_fiveDayRetentionNewUsersHasBeenSet = true;
    }

    if (value.HasMember("SixDayRetentionNewUsers") && !value["SixDayRetentionNewUsers"].IsNull())
    {
        if (!value["SixDayRetentionNewUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.SixDayRetentionNewUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sixDayRetentionNewUsers = value["SixDayRetentionNewUsers"].GetInt64();
        m_sixDayRetentionNewUsersHasBeenSet = true;
    }

    if (value.HasMember("SevenDayRetentionNewUsers") && !value["SevenDayRetentionNewUsers"].IsNull())
    {
        if (!value["SevenDayRetentionNewUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.SevenDayRetentionNewUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sevenDayRetentionNewUsers = value["SevenDayRetentionNewUsers"].GetInt64();
        m_sevenDayRetentionNewUsersHasBeenSet = true;
    }

    if (value.HasMember("FourteenDayRetentionNewUsers") && !value["FourteenDayRetentionNewUsers"].IsNull())
    {
        if (!value["FourteenDayRetentionNewUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.FourteenDayRetentionNewUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fourteenDayRetentionNewUsers = value["FourteenDayRetentionNewUsers"].GetInt64();
        m_fourteenDayRetentionNewUsersHasBeenSet = true;
    }

    if (value.HasMember("ThirtyDayRetentionNewUsers") && !value["ThirtyDayRetentionNewUsers"].IsNull())
    {
        if (!value["ThirtyDayRetentionNewUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.ThirtyDayRetentionNewUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_thirtyDayRetentionNewUsers = value["ThirtyDayRetentionNewUsers"].GetInt64();
        m_thirtyDayRetentionNewUsersHasBeenSet = true;
    }

    if (value.HasMember("DataTime") && !value["DataTime"].IsNull())
    {
        if (!value["DataTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionData.DataTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTime = string(value["DataTime"].GetString());
        m_dataTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RetentionData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activeUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeUserCount, allocator);
    }

    if (m_oneDayRetentionUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OneDayRetentionUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oneDayRetentionUsers, allocator);
    }

    if (m_twoDayRetentionUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TwoDayRetentionUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_twoDayRetentionUsers, allocator);
    }

    if (m_threeDayRetentionUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreeDayRetentionUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threeDayRetentionUsers, allocator);
    }

    if (m_fourDayRetentionUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FourDayRetentionUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fourDayRetentionUsers, allocator);
    }

    if (m_fiveDayRetentionUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FiveDayRetentionUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fiveDayRetentionUsers, allocator);
    }

    if (m_sixDayRetentionUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SixDayRetentionUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sixDayRetentionUsers, allocator);
    }

    if (m_sevenDayRetentionUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SevenDayRetentionUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sevenDayRetentionUsers, allocator);
    }

    if (m_fourteenDayRetentionUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FourteenDayRetentionUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fourteenDayRetentionUsers, allocator);
    }

    if (m_thirtyDayRetentionUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirtyDayRetentionUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thirtyDayRetentionUsers, allocator);
    }

    if (m_newUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newUserCount, allocator);
    }

    if (m_oneDayRetentionNewUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OneDayRetentionNewUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oneDayRetentionNewUsers, allocator);
    }

    if (m_twoDayRetentionNewUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TwoDayRetentionNewUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_twoDayRetentionNewUsers, allocator);
    }

    if (m_threeDayRetentionNewUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreeDayRetentionNewUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threeDayRetentionNewUsers, allocator);
    }

    if (m_fourDayRetentionNewUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FourDayRetentionNewUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fourDayRetentionNewUsers, allocator);
    }

    if (m_fiveDayRetentionNewUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FiveDayRetentionNewUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fiveDayRetentionNewUsers, allocator);
    }

    if (m_sixDayRetentionNewUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SixDayRetentionNewUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sixDayRetentionNewUsers, allocator);
    }

    if (m_sevenDayRetentionNewUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SevenDayRetentionNewUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sevenDayRetentionNewUsers, allocator);
    }

    if (m_fourteenDayRetentionNewUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FourteenDayRetentionNewUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fourteenDayRetentionNewUsers, allocator);
    }

    if (m_thirtyDayRetentionNewUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirtyDayRetentionNewUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thirtyDayRetentionNewUsers, allocator);
    }

    if (m_dataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t RetentionData::GetActiveUserCount() const
{
    return m_activeUserCount;
}

void RetentionData::SetActiveUserCount(const int64_t& _activeUserCount)
{
    m_activeUserCount = _activeUserCount;
    m_activeUserCountHasBeenSet = true;
}

bool RetentionData::ActiveUserCountHasBeenSet() const
{
    return m_activeUserCountHasBeenSet;
}

int64_t RetentionData::GetOneDayRetentionUsers() const
{
    return m_oneDayRetentionUsers;
}

void RetentionData::SetOneDayRetentionUsers(const int64_t& _oneDayRetentionUsers)
{
    m_oneDayRetentionUsers = _oneDayRetentionUsers;
    m_oneDayRetentionUsersHasBeenSet = true;
}

bool RetentionData::OneDayRetentionUsersHasBeenSet() const
{
    return m_oneDayRetentionUsersHasBeenSet;
}

int64_t RetentionData::GetTwoDayRetentionUsers() const
{
    return m_twoDayRetentionUsers;
}

void RetentionData::SetTwoDayRetentionUsers(const int64_t& _twoDayRetentionUsers)
{
    m_twoDayRetentionUsers = _twoDayRetentionUsers;
    m_twoDayRetentionUsersHasBeenSet = true;
}

bool RetentionData::TwoDayRetentionUsersHasBeenSet() const
{
    return m_twoDayRetentionUsersHasBeenSet;
}

int64_t RetentionData::GetThreeDayRetentionUsers() const
{
    return m_threeDayRetentionUsers;
}

void RetentionData::SetThreeDayRetentionUsers(const int64_t& _threeDayRetentionUsers)
{
    m_threeDayRetentionUsers = _threeDayRetentionUsers;
    m_threeDayRetentionUsersHasBeenSet = true;
}

bool RetentionData::ThreeDayRetentionUsersHasBeenSet() const
{
    return m_threeDayRetentionUsersHasBeenSet;
}

int64_t RetentionData::GetFourDayRetentionUsers() const
{
    return m_fourDayRetentionUsers;
}

void RetentionData::SetFourDayRetentionUsers(const int64_t& _fourDayRetentionUsers)
{
    m_fourDayRetentionUsers = _fourDayRetentionUsers;
    m_fourDayRetentionUsersHasBeenSet = true;
}

bool RetentionData::FourDayRetentionUsersHasBeenSet() const
{
    return m_fourDayRetentionUsersHasBeenSet;
}

int64_t RetentionData::GetFiveDayRetentionUsers() const
{
    return m_fiveDayRetentionUsers;
}

void RetentionData::SetFiveDayRetentionUsers(const int64_t& _fiveDayRetentionUsers)
{
    m_fiveDayRetentionUsers = _fiveDayRetentionUsers;
    m_fiveDayRetentionUsersHasBeenSet = true;
}

bool RetentionData::FiveDayRetentionUsersHasBeenSet() const
{
    return m_fiveDayRetentionUsersHasBeenSet;
}

int64_t RetentionData::GetSixDayRetentionUsers() const
{
    return m_sixDayRetentionUsers;
}

void RetentionData::SetSixDayRetentionUsers(const int64_t& _sixDayRetentionUsers)
{
    m_sixDayRetentionUsers = _sixDayRetentionUsers;
    m_sixDayRetentionUsersHasBeenSet = true;
}

bool RetentionData::SixDayRetentionUsersHasBeenSet() const
{
    return m_sixDayRetentionUsersHasBeenSet;
}

int64_t RetentionData::GetSevenDayRetentionUsers() const
{
    return m_sevenDayRetentionUsers;
}

void RetentionData::SetSevenDayRetentionUsers(const int64_t& _sevenDayRetentionUsers)
{
    m_sevenDayRetentionUsers = _sevenDayRetentionUsers;
    m_sevenDayRetentionUsersHasBeenSet = true;
}

bool RetentionData::SevenDayRetentionUsersHasBeenSet() const
{
    return m_sevenDayRetentionUsersHasBeenSet;
}

int64_t RetentionData::GetFourteenDayRetentionUsers() const
{
    return m_fourteenDayRetentionUsers;
}

void RetentionData::SetFourteenDayRetentionUsers(const int64_t& _fourteenDayRetentionUsers)
{
    m_fourteenDayRetentionUsers = _fourteenDayRetentionUsers;
    m_fourteenDayRetentionUsersHasBeenSet = true;
}

bool RetentionData::FourteenDayRetentionUsersHasBeenSet() const
{
    return m_fourteenDayRetentionUsersHasBeenSet;
}

int64_t RetentionData::GetThirtyDayRetentionUsers() const
{
    return m_thirtyDayRetentionUsers;
}

void RetentionData::SetThirtyDayRetentionUsers(const int64_t& _thirtyDayRetentionUsers)
{
    m_thirtyDayRetentionUsers = _thirtyDayRetentionUsers;
    m_thirtyDayRetentionUsersHasBeenSet = true;
}

bool RetentionData::ThirtyDayRetentionUsersHasBeenSet() const
{
    return m_thirtyDayRetentionUsersHasBeenSet;
}

int64_t RetentionData::GetNewUserCount() const
{
    return m_newUserCount;
}

void RetentionData::SetNewUserCount(const int64_t& _newUserCount)
{
    m_newUserCount = _newUserCount;
    m_newUserCountHasBeenSet = true;
}

bool RetentionData::NewUserCountHasBeenSet() const
{
    return m_newUserCountHasBeenSet;
}

int64_t RetentionData::GetOneDayRetentionNewUsers() const
{
    return m_oneDayRetentionNewUsers;
}

void RetentionData::SetOneDayRetentionNewUsers(const int64_t& _oneDayRetentionNewUsers)
{
    m_oneDayRetentionNewUsers = _oneDayRetentionNewUsers;
    m_oneDayRetentionNewUsersHasBeenSet = true;
}

bool RetentionData::OneDayRetentionNewUsersHasBeenSet() const
{
    return m_oneDayRetentionNewUsersHasBeenSet;
}

int64_t RetentionData::GetTwoDayRetentionNewUsers() const
{
    return m_twoDayRetentionNewUsers;
}

void RetentionData::SetTwoDayRetentionNewUsers(const int64_t& _twoDayRetentionNewUsers)
{
    m_twoDayRetentionNewUsers = _twoDayRetentionNewUsers;
    m_twoDayRetentionNewUsersHasBeenSet = true;
}

bool RetentionData::TwoDayRetentionNewUsersHasBeenSet() const
{
    return m_twoDayRetentionNewUsersHasBeenSet;
}

int64_t RetentionData::GetThreeDayRetentionNewUsers() const
{
    return m_threeDayRetentionNewUsers;
}

void RetentionData::SetThreeDayRetentionNewUsers(const int64_t& _threeDayRetentionNewUsers)
{
    m_threeDayRetentionNewUsers = _threeDayRetentionNewUsers;
    m_threeDayRetentionNewUsersHasBeenSet = true;
}

bool RetentionData::ThreeDayRetentionNewUsersHasBeenSet() const
{
    return m_threeDayRetentionNewUsersHasBeenSet;
}

int64_t RetentionData::GetFourDayRetentionNewUsers() const
{
    return m_fourDayRetentionNewUsers;
}

void RetentionData::SetFourDayRetentionNewUsers(const int64_t& _fourDayRetentionNewUsers)
{
    m_fourDayRetentionNewUsers = _fourDayRetentionNewUsers;
    m_fourDayRetentionNewUsersHasBeenSet = true;
}

bool RetentionData::FourDayRetentionNewUsersHasBeenSet() const
{
    return m_fourDayRetentionNewUsersHasBeenSet;
}

int64_t RetentionData::GetFiveDayRetentionNewUsers() const
{
    return m_fiveDayRetentionNewUsers;
}

void RetentionData::SetFiveDayRetentionNewUsers(const int64_t& _fiveDayRetentionNewUsers)
{
    m_fiveDayRetentionNewUsers = _fiveDayRetentionNewUsers;
    m_fiveDayRetentionNewUsersHasBeenSet = true;
}

bool RetentionData::FiveDayRetentionNewUsersHasBeenSet() const
{
    return m_fiveDayRetentionNewUsersHasBeenSet;
}

int64_t RetentionData::GetSixDayRetentionNewUsers() const
{
    return m_sixDayRetentionNewUsers;
}

void RetentionData::SetSixDayRetentionNewUsers(const int64_t& _sixDayRetentionNewUsers)
{
    m_sixDayRetentionNewUsers = _sixDayRetentionNewUsers;
    m_sixDayRetentionNewUsersHasBeenSet = true;
}

bool RetentionData::SixDayRetentionNewUsersHasBeenSet() const
{
    return m_sixDayRetentionNewUsersHasBeenSet;
}

int64_t RetentionData::GetSevenDayRetentionNewUsers() const
{
    return m_sevenDayRetentionNewUsers;
}

void RetentionData::SetSevenDayRetentionNewUsers(const int64_t& _sevenDayRetentionNewUsers)
{
    m_sevenDayRetentionNewUsers = _sevenDayRetentionNewUsers;
    m_sevenDayRetentionNewUsersHasBeenSet = true;
}

bool RetentionData::SevenDayRetentionNewUsersHasBeenSet() const
{
    return m_sevenDayRetentionNewUsersHasBeenSet;
}

int64_t RetentionData::GetFourteenDayRetentionNewUsers() const
{
    return m_fourteenDayRetentionNewUsers;
}

void RetentionData::SetFourteenDayRetentionNewUsers(const int64_t& _fourteenDayRetentionNewUsers)
{
    m_fourteenDayRetentionNewUsers = _fourteenDayRetentionNewUsers;
    m_fourteenDayRetentionNewUsersHasBeenSet = true;
}

bool RetentionData::FourteenDayRetentionNewUsersHasBeenSet() const
{
    return m_fourteenDayRetentionNewUsersHasBeenSet;
}

int64_t RetentionData::GetThirtyDayRetentionNewUsers() const
{
    return m_thirtyDayRetentionNewUsers;
}

void RetentionData::SetThirtyDayRetentionNewUsers(const int64_t& _thirtyDayRetentionNewUsers)
{
    m_thirtyDayRetentionNewUsers = _thirtyDayRetentionNewUsers;
    m_thirtyDayRetentionNewUsersHasBeenSet = true;
}

bool RetentionData::ThirtyDayRetentionNewUsersHasBeenSet() const
{
    return m_thirtyDayRetentionNewUsersHasBeenSet;
}

string RetentionData::GetDataTime() const
{
    return m_dataTime;
}

void RetentionData::SetDataTime(const string& _dataTime)
{
    m_dataTime = _dataTime;
    m_dataTimeHasBeenSet = true;
}

bool RetentionData::DataTimeHasBeenSet() const
{
    return m_dataTimeHasBeenSet;
}

