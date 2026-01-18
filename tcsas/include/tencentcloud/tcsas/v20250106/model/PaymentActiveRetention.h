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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_PAYMENTACTIVERETENTION_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_PAYMENTACTIVERETENTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Payment active retention data
                */
                class PaymentActiveRetention : public AbstractModel
                {
                public:
                    PaymentActiveRetention();
                    ~PaymentActiveRetention() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Day 1 active retention of paying users
                     * @return OneDayRetentionUsers Day 1 active retention of paying users
                     * 
                     */
                    int64_t GetOneDayRetentionUsers() const;

                    /**
                     * 设置Day 1 active retention of paying users
                     * @param _oneDayRetentionUsers Day 1 active retention of paying users
                     * 
                     */
                    void SetOneDayRetentionUsers(const int64_t& _oneDayRetentionUsers);

                    /**
                     * 判断参数 OneDayRetentionUsers 是否已赋值
                     * @return OneDayRetentionUsers 是否已赋值
                     * 
                     */
                    bool OneDayRetentionUsersHasBeenSet() const;

                    /**
                     * 获取Day 2 active retention of paying users
                     * @return TwoDayRetentionUsers Day 2 active retention of paying users
                     * 
                     */
                    int64_t GetTwoDayRetentionUsers() const;

                    /**
                     * 设置Day 2 active retention of paying users
                     * @param _twoDayRetentionUsers Day 2 active retention of paying users
                     * 
                     */
                    void SetTwoDayRetentionUsers(const int64_t& _twoDayRetentionUsers);

                    /**
                     * 判断参数 TwoDayRetentionUsers 是否已赋值
                     * @return TwoDayRetentionUsers 是否已赋值
                     * 
                     */
                    bool TwoDayRetentionUsersHasBeenSet() const;

                    /**
                     * 获取Day 3 active retention of paying users
                     * @return ThreeDayRetentionUsers Day 3 active retention of paying users
                     * 
                     */
                    int64_t GetThreeDayRetentionUsers() const;

                    /**
                     * 设置Day 3 active retention of paying users
                     * @param _threeDayRetentionUsers Day 3 active retention of paying users
                     * 
                     */
                    void SetThreeDayRetentionUsers(const int64_t& _threeDayRetentionUsers);

                    /**
                     * 判断参数 ThreeDayRetentionUsers 是否已赋值
                     * @return ThreeDayRetentionUsers 是否已赋值
                     * 
                     */
                    bool ThreeDayRetentionUsersHasBeenSet() const;

                    /**
                     * 获取Day 4 active retention of paying users
                     * @return FourDayRetentionUsers Day 4 active retention of paying users
                     * 
                     */
                    int64_t GetFourDayRetentionUsers() const;

                    /**
                     * 设置Day 4 active retention of paying users
                     * @param _fourDayRetentionUsers Day 4 active retention of paying users
                     * 
                     */
                    void SetFourDayRetentionUsers(const int64_t& _fourDayRetentionUsers);

                    /**
                     * 判断参数 FourDayRetentionUsers 是否已赋值
                     * @return FourDayRetentionUsers 是否已赋值
                     * 
                     */
                    bool FourDayRetentionUsersHasBeenSet() const;

                    /**
                     * 获取Day 5 active retention of paying users
                     * @return FiveDayRetentionUsers Day 5 active retention of paying users
                     * 
                     */
                    int64_t GetFiveDayRetentionUsers() const;

                    /**
                     * 设置Day 5 active retention of paying users
                     * @param _fiveDayRetentionUsers Day 5 active retention of paying users
                     * 
                     */
                    void SetFiveDayRetentionUsers(const int64_t& _fiveDayRetentionUsers);

                    /**
                     * 判断参数 FiveDayRetentionUsers 是否已赋值
                     * @return FiveDayRetentionUsers 是否已赋值
                     * 
                     */
                    bool FiveDayRetentionUsersHasBeenSet() const;

                    /**
                     * 获取Day 6 active retention of paying users
                     * @return SixDayRetentionUsers Day 6 active retention of paying users
                     * 
                     */
                    int64_t GetSixDayRetentionUsers() const;

                    /**
                     * 设置Day 6 active retention of paying users
                     * @param _sixDayRetentionUsers Day 6 active retention of paying users
                     * 
                     */
                    void SetSixDayRetentionUsers(const int64_t& _sixDayRetentionUsers);

                    /**
                     * 判断参数 SixDayRetentionUsers 是否已赋值
                     * @return SixDayRetentionUsers 是否已赋值
                     * 
                     */
                    bool SixDayRetentionUsersHasBeenSet() const;

                    /**
                     * 获取Day 7 active retention of paying users
                     * @return SevenDayRetentionUsers Day 7 active retention of paying users
                     * 
                     */
                    int64_t GetSevenDayRetentionUsers() const;

                    /**
                     * 设置Day 7 active retention of paying users
                     * @param _sevenDayRetentionUsers Day 7 active retention of paying users
                     * 
                     */
                    void SetSevenDayRetentionUsers(const int64_t& _sevenDayRetentionUsers);

                    /**
                     * 判断参数 SevenDayRetentionUsers 是否已赋值
                     * @return SevenDayRetentionUsers 是否已赋值
                     * 
                     */
                    bool SevenDayRetentionUsersHasBeenSet() const;

                    /**
                     * 获取Day 14 active retention of paying users
                     * @return FourteenDayRetentionUsers Day 14 active retention of paying users
                     * 
                     */
                    int64_t GetFourteenDayRetentionUsers() const;

                    /**
                     * 设置Day 14 active retention of paying users
                     * @param _fourteenDayRetentionUsers Day 14 active retention of paying users
                     * 
                     */
                    void SetFourteenDayRetentionUsers(const int64_t& _fourteenDayRetentionUsers);

                    /**
                     * 判断参数 FourteenDayRetentionUsers 是否已赋值
                     * @return FourteenDayRetentionUsers 是否已赋值
                     * 
                     */
                    bool FourteenDayRetentionUsersHasBeenSet() const;

                    /**
                     * 获取Day 15 active retention of paying users
                     * @return FifteenDayRetentionUsers Day 15 active retention of paying users
                     * 
                     */
                    int64_t GetFifteenDayRetentionUsers() const;

                    /**
                     * 设置Day 15 active retention of paying users
                     * @param _fifteenDayRetentionUsers Day 15 active retention of paying users
                     * 
                     */
                    void SetFifteenDayRetentionUsers(const int64_t& _fifteenDayRetentionUsers);

                    /**
                     * 判断参数 FifteenDayRetentionUsers 是否已赋值
                     * @return FifteenDayRetentionUsers 是否已赋值
                     * 
                     */
                    bool FifteenDayRetentionUsersHasBeenSet() const;

                    /**
                     * 获取Day 30 active retention of paying users
                     * @return ThirtyDayRetentionUsers Day 30 active retention of paying users
                     * 
                     */
                    int64_t GetThirtyDayRetentionUsers() const;

                    /**
                     * 设置Day 30 active retention of paying users
                     * @param _thirtyDayRetentionUsers Day 30 active retention of paying users
                     * 
                     */
                    void SetThirtyDayRetentionUsers(const int64_t& _thirtyDayRetentionUsers);

                    /**
                     * 判断参数 ThirtyDayRetentionUsers 是否已赋值
                     * @return ThirtyDayRetentionUsers 是否已赋值
                     * 
                     */
                    bool ThirtyDayRetentionUsersHasBeenSet() const;

                    /**
                     * 获取Number of paying users
                     * @return PaymentUserNum Number of paying users
                     * 
                     */
                    int64_t GetPaymentUserNum() const;

                    /**
                     * 设置Number of paying users
                     * @param _paymentUserNum Number of paying users
                     * 
                     */
                    void SetPaymentUserNum(const int64_t& _paymentUserNum);

                    /**
                     * 判断参数 PaymentUserNum 是否已赋值
                     * @return PaymentUserNum 是否已赋值
                     * 
                     */
                    bool PaymentUserNumHasBeenSet() const;

                    /**
                     * 获取Data time in YYYYMMDD format
                     * @return DataTime Data time in YYYYMMDD format
                     * 
                     */
                    std::string GetDataTime() const;

                    /**
                     * 设置Data time in YYYYMMDD format
                     * @param _dataTime Data time in YYYYMMDD format
                     * 
                     */
                    void SetDataTime(const std::string& _dataTime);

                    /**
                     * 判断参数 DataTime 是否已赋值
                     * @return DataTime 是否已赋值
                     * 
                     */
                    bool DataTimeHasBeenSet() const;

                private:

                    /**
                     * Day 1 active retention of paying users
                     */
                    int64_t m_oneDayRetentionUsers;
                    bool m_oneDayRetentionUsersHasBeenSet;

                    /**
                     * Day 2 active retention of paying users
                     */
                    int64_t m_twoDayRetentionUsers;
                    bool m_twoDayRetentionUsersHasBeenSet;

                    /**
                     * Day 3 active retention of paying users
                     */
                    int64_t m_threeDayRetentionUsers;
                    bool m_threeDayRetentionUsersHasBeenSet;

                    /**
                     * Day 4 active retention of paying users
                     */
                    int64_t m_fourDayRetentionUsers;
                    bool m_fourDayRetentionUsersHasBeenSet;

                    /**
                     * Day 5 active retention of paying users
                     */
                    int64_t m_fiveDayRetentionUsers;
                    bool m_fiveDayRetentionUsersHasBeenSet;

                    /**
                     * Day 6 active retention of paying users
                     */
                    int64_t m_sixDayRetentionUsers;
                    bool m_sixDayRetentionUsersHasBeenSet;

                    /**
                     * Day 7 active retention of paying users
                     */
                    int64_t m_sevenDayRetentionUsers;
                    bool m_sevenDayRetentionUsersHasBeenSet;

                    /**
                     * Day 14 active retention of paying users
                     */
                    int64_t m_fourteenDayRetentionUsers;
                    bool m_fourteenDayRetentionUsersHasBeenSet;

                    /**
                     * Day 15 active retention of paying users
                     */
                    int64_t m_fifteenDayRetentionUsers;
                    bool m_fifteenDayRetentionUsersHasBeenSet;

                    /**
                     * Day 30 active retention of paying users
                     */
                    int64_t m_thirtyDayRetentionUsers;
                    bool m_thirtyDayRetentionUsersHasBeenSet;

                    /**
                     * Number of paying users
                     */
                    int64_t m_paymentUserNum;
                    bool m_paymentUserNumHasBeenSet;

                    /**
                     * Data time in YYYYMMDD format
                     */
                    std::string m_dataTime;
                    bool m_dataTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_PAYMENTACTIVERETENTION_H_
