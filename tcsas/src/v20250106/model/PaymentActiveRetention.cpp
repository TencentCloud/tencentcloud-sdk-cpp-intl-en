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

#include <tencentcloud/tcsas/v20250106/model/PaymentActiveRetention.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

PaymentActiveRetention::PaymentActiveRetention() :
    m_oneDayRetentionUsersHasBeenSet(false),
    m_twoDayRetentionUsersHasBeenSet(false),
    m_threeDayRetentionUsersHasBeenSet(false),
    m_fourDayRetentionUsersHasBeenSet(false),
    m_fiveDayRetentionUsersHasBeenSet(false),
    m_sixDayRetentionUsersHasBeenSet(false),
    m_sevenDayRetentionUsersHasBeenSet(false),
    m_fourteenDayRetentionUsersHasBeenSet(false),
    m_fifteenDayRetentionUsersHasBeenSet(false),
    m_thirtyDayRetentionUsersHasBeenSet(false),
    m_paymentUserNumHasBeenSet(false),
    m_dataTimeHasBeenSet(false)
{
}

CoreInternalOutcome PaymentActiveRetention::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OneDayRetentionUsers") && !value["OneDayRetentionUsers"].IsNull())
    {
        if (!value["OneDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentActiveRetention.OneDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oneDayRetentionUsers = value["OneDayRetentionUsers"].GetInt64();
        m_oneDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("TwoDayRetentionUsers") && !value["TwoDayRetentionUsers"].IsNull())
    {
        if (!value["TwoDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentActiveRetention.TwoDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_twoDayRetentionUsers = value["TwoDayRetentionUsers"].GetInt64();
        m_twoDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("ThreeDayRetentionUsers") && !value["ThreeDayRetentionUsers"].IsNull())
    {
        if (!value["ThreeDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentActiveRetention.ThreeDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_threeDayRetentionUsers = value["ThreeDayRetentionUsers"].GetInt64();
        m_threeDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("FourDayRetentionUsers") && !value["FourDayRetentionUsers"].IsNull())
    {
        if (!value["FourDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentActiveRetention.FourDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fourDayRetentionUsers = value["FourDayRetentionUsers"].GetInt64();
        m_fourDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("FiveDayRetentionUsers") && !value["FiveDayRetentionUsers"].IsNull())
    {
        if (!value["FiveDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentActiveRetention.FiveDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fiveDayRetentionUsers = value["FiveDayRetentionUsers"].GetInt64();
        m_fiveDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("SixDayRetentionUsers") && !value["SixDayRetentionUsers"].IsNull())
    {
        if (!value["SixDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentActiveRetention.SixDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sixDayRetentionUsers = value["SixDayRetentionUsers"].GetInt64();
        m_sixDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("SevenDayRetentionUsers") && !value["SevenDayRetentionUsers"].IsNull())
    {
        if (!value["SevenDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentActiveRetention.SevenDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sevenDayRetentionUsers = value["SevenDayRetentionUsers"].GetInt64();
        m_sevenDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("FourteenDayRetentionUsers") && !value["FourteenDayRetentionUsers"].IsNull())
    {
        if (!value["FourteenDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentActiveRetention.FourteenDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fourteenDayRetentionUsers = value["FourteenDayRetentionUsers"].GetInt64();
        m_fourteenDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("FifteenDayRetentionUsers") && !value["FifteenDayRetentionUsers"].IsNull())
    {
        if (!value["FifteenDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentActiveRetention.FifteenDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fifteenDayRetentionUsers = value["FifteenDayRetentionUsers"].GetInt64();
        m_fifteenDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("ThirtyDayRetentionUsers") && !value["ThirtyDayRetentionUsers"].IsNull())
    {
        if (!value["ThirtyDayRetentionUsers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentActiveRetention.ThirtyDayRetentionUsers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_thirtyDayRetentionUsers = value["ThirtyDayRetentionUsers"].GetInt64();
        m_thirtyDayRetentionUsersHasBeenSet = true;
    }

    if (value.HasMember("PaymentUserNum") && !value["PaymentUserNum"].IsNull())
    {
        if (!value["PaymentUserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentActiveRetention.PaymentUserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paymentUserNum = value["PaymentUserNum"].GetInt64();
        m_paymentUserNumHasBeenSet = true;
    }

    if (value.HasMember("DataTime") && !value["DataTime"].IsNull())
    {
        if (!value["DataTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PaymentActiveRetention.DataTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTime = string(value["DataTime"].GetString());
        m_dataTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PaymentActiveRetention::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_fifteenDayRetentionUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FifteenDayRetentionUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fifteenDayRetentionUsers, allocator);
    }

    if (m_thirtyDayRetentionUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirtyDayRetentionUsers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thirtyDayRetentionUsers, allocator);
    }

    if (m_paymentUserNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentUserNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paymentUserNum, allocator);
    }

    if (m_dataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t PaymentActiveRetention::GetOneDayRetentionUsers() const
{
    return m_oneDayRetentionUsers;
}

void PaymentActiveRetention::SetOneDayRetentionUsers(const int64_t& _oneDayRetentionUsers)
{
    m_oneDayRetentionUsers = _oneDayRetentionUsers;
    m_oneDayRetentionUsersHasBeenSet = true;
}

bool PaymentActiveRetention::OneDayRetentionUsersHasBeenSet() const
{
    return m_oneDayRetentionUsersHasBeenSet;
}

int64_t PaymentActiveRetention::GetTwoDayRetentionUsers() const
{
    return m_twoDayRetentionUsers;
}

void PaymentActiveRetention::SetTwoDayRetentionUsers(const int64_t& _twoDayRetentionUsers)
{
    m_twoDayRetentionUsers = _twoDayRetentionUsers;
    m_twoDayRetentionUsersHasBeenSet = true;
}

bool PaymentActiveRetention::TwoDayRetentionUsersHasBeenSet() const
{
    return m_twoDayRetentionUsersHasBeenSet;
}

int64_t PaymentActiveRetention::GetThreeDayRetentionUsers() const
{
    return m_threeDayRetentionUsers;
}

void PaymentActiveRetention::SetThreeDayRetentionUsers(const int64_t& _threeDayRetentionUsers)
{
    m_threeDayRetentionUsers = _threeDayRetentionUsers;
    m_threeDayRetentionUsersHasBeenSet = true;
}

bool PaymentActiveRetention::ThreeDayRetentionUsersHasBeenSet() const
{
    return m_threeDayRetentionUsersHasBeenSet;
}

int64_t PaymentActiveRetention::GetFourDayRetentionUsers() const
{
    return m_fourDayRetentionUsers;
}

void PaymentActiveRetention::SetFourDayRetentionUsers(const int64_t& _fourDayRetentionUsers)
{
    m_fourDayRetentionUsers = _fourDayRetentionUsers;
    m_fourDayRetentionUsersHasBeenSet = true;
}

bool PaymentActiveRetention::FourDayRetentionUsersHasBeenSet() const
{
    return m_fourDayRetentionUsersHasBeenSet;
}

int64_t PaymentActiveRetention::GetFiveDayRetentionUsers() const
{
    return m_fiveDayRetentionUsers;
}

void PaymentActiveRetention::SetFiveDayRetentionUsers(const int64_t& _fiveDayRetentionUsers)
{
    m_fiveDayRetentionUsers = _fiveDayRetentionUsers;
    m_fiveDayRetentionUsersHasBeenSet = true;
}

bool PaymentActiveRetention::FiveDayRetentionUsersHasBeenSet() const
{
    return m_fiveDayRetentionUsersHasBeenSet;
}

int64_t PaymentActiveRetention::GetSixDayRetentionUsers() const
{
    return m_sixDayRetentionUsers;
}

void PaymentActiveRetention::SetSixDayRetentionUsers(const int64_t& _sixDayRetentionUsers)
{
    m_sixDayRetentionUsers = _sixDayRetentionUsers;
    m_sixDayRetentionUsersHasBeenSet = true;
}

bool PaymentActiveRetention::SixDayRetentionUsersHasBeenSet() const
{
    return m_sixDayRetentionUsersHasBeenSet;
}

int64_t PaymentActiveRetention::GetSevenDayRetentionUsers() const
{
    return m_sevenDayRetentionUsers;
}

void PaymentActiveRetention::SetSevenDayRetentionUsers(const int64_t& _sevenDayRetentionUsers)
{
    m_sevenDayRetentionUsers = _sevenDayRetentionUsers;
    m_sevenDayRetentionUsersHasBeenSet = true;
}

bool PaymentActiveRetention::SevenDayRetentionUsersHasBeenSet() const
{
    return m_sevenDayRetentionUsersHasBeenSet;
}

int64_t PaymentActiveRetention::GetFourteenDayRetentionUsers() const
{
    return m_fourteenDayRetentionUsers;
}

void PaymentActiveRetention::SetFourteenDayRetentionUsers(const int64_t& _fourteenDayRetentionUsers)
{
    m_fourteenDayRetentionUsers = _fourteenDayRetentionUsers;
    m_fourteenDayRetentionUsersHasBeenSet = true;
}

bool PaymentActiveRetention::FourteenDayRetentionUsersHasBeenSet() const
{
    return m_fourteenDayRetentionUsersHasBeenSet;
}

int64_t PaymentActiveRetention::GetFifteenDayRetentionUsers() const
{
    return m_fifteenDayRetentionUsers;
}

void PaymentActiveRetention::SetFifteenDayRetentionUsers(const int64_t& _fifteenDayRetentionUsers)
{
    m_fifteenDayRetentionUsers = _fifteenDayRetentionUsers;
    m_fifteenDayRetentionUsersHasBeenSet = true;
}

bool PaymentActiveRetention::FifteenDayRetentionUsersHasBeenSet() const
{
    return m_fifteenDayRetentionUsersHasBeenSet;
}

int64_t PaymentActiveRetention::GetThirtyDayRetentionUsers() const
{
    return m_thirtyDayRetentionUsers;
}

void PaymentActiveRetention::SetThirtyDayRetentionUsers(const int64_t& _thirtyDayRetentionUsers)
{
    m_thirtyDayRetentionUsers = _thirtyDayRetentionUsers;
    m_thirtyDayRetentionUsersHasBeenSet = true;
}

bool PaymentActiveRetention::ThirtyDayRetentionUsersHasBeenSet() const
{
    return m_thirtyDayRetentionUsersHasBeenSet;
}

int64_t PaymentActiveRetention::GetPaymentUserNum() const
{
    return m_paymentUserNum;
}

void PaymentActiveRetention::SetPaymentUserNum(const int64_t& _paymentUserNum)
{
    m_paymentUserNum = _paymentUserNum;
    m_paymentUserNumHasBeenSet = true;
}

bool PaymentActiveRetention::PaymentUserNumHasBeenSet() const
{
    return m_paymentUserNumHasBeenSet;
}

string PaymentActiveRetention::GetDataTime() const
{
    return m_dataTime;
}

void PaymentActiveRetention::SetDataTime(const string& _dataTime)
{
    m_dataTime = _dataTime;
    m_dataTimeHasBeenSet = true;
}

bool PaymentActiveRetention::DataTimeHasBeenSet() const
{
    return m_dataTimeHasBeenSet;
}

