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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_RETENTIONDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_RETENTIONDATA_H_

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
                * Retention data
                */
                class RetentionData : public AbstractModel
                {
                public:
                    RetentionData();
                    ~RetentionData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of active users
                     * @return ActiveUserCount Number of active users
                     * 
                     */
                    int64_t GetActiveUserCount() const;

                    /**
                     * 设置Number of active users
                     * @param _activeUserCount Number of active users
                     * 
                     */
                    void SetActiveUserCount(const int64_t& _activeUserCount);

                    /**
                     * 判断参数 ActiveUserCount 是否已赋值
                     * @return ActiveUserCount 是否已赋值
                     * 
                     */
                    bool ActiveUserCountHasBeenSet() const;

                    /**
                     * 获取Day 1 retention of active users
                     * @return OneDayRetentionUsers Day 1 retention of active users
                     * 
                     */
                    int64_t GetOneDayRetentionUsers() const;

                    /**
                     * 设置Day 1 retention of active users
                     * @param _oneDayRetentionUsers Day 1 retention of active users
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
                     * 获取Day 2 retention of active users
                     * @return TwoDayRetentionUsers Day 2 retention of active users
                     * 
                     */
                    int64_t GetTwoDayRetentionUsers() const;

                    /**
                     * 设置Day 2 retention of active users
                     * @param _twoDayRetentionUsers Day 2 retention of active users
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
                     * 获取Day 3 retention of active users
                     * @return ThreeDayRetentionUsers Day 3 retention of active users
                     * 
                     */
                    int64_t GetThreeDayRetentionUsers() const;

                    /**
                     * 设置Day 3 retention of active users
                     * @param _threeDayRetentionUsers Day 3 retention of active users
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
                     * 获取Day 4 retention of active users
                     * @return FourDayRetentionUsers Day 4 retention of active users
                     * 
                     */
                    int64_t GetFourDayRetentionUsers() const;

                    /**
                     * 设置Day 4 retention of active users
                     * @param _fourDayRetentionUsers Day 4 retention of active users
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
                     * 获取Day 5 retention of active users
                     * @return FiveDayRetentionUsers Day 5 retention of active users
                     * 
                     */
                    int64_t GetFiveDayRetentionUsers() const;

                    /**
                     * 设置Day 5 retention of active users
                     * @param _fiveDayRetentionUsers Day 5 retention of active users
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
                     * 获取Day 6 retention of active users
                     * @return SixDayRetentionUsers Day 6 retention of active users
                     * 
                     */
                    int64_t GetSixDayRetentionUsers() const;

                    /**
                     * 设置Day 6 retention of active users
                     * @param _sixDayRetentionUsers Day 6 retention of active users
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
                     * 获取Day 7 retention of active users
                     * @return SevenDayRetentionUsers Day 7 retention of active users
                     * 
                     */
                    int64_t GetSevenDayRetentionUsers() const;

                    /**
                     * 设置Day 7 retention of active users
                     * @param _sevenDayRetentionUsers Day 7 retention of active users
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
                     * 获取Day 14 retention of active users
                     * @return FourteenDayRetentionUsers Day 14 retention of active users
                     * 
                     */
                    int64_t GetFourteenDayRetentionUsers() const;

                    /**
                     * 设置Day 14 retention of active users
                     * @param _fourteenDayRetentionUsers Day 14 retention of active users
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
                     * 获取Day 30 retention of active users
                     * @return ThirtyDayRetentionUsers Day 30 retention of active users
                     * 
                     */
                    int64_t GetThirtyDayRetentionUsers() const;

                    /**
                     * 设置Day 30 retention of active users
                     * @param _thirtyDayRetentionUsers Day 30 retention of active users
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
                     * 获取Number of new users
                     * @return NewUserCount Number of new users
                     * 
                     */
                    int64_t GetNewUserCount() const;

                    /**
                     * 设置Number of new users
                     * @param _newUserCount Number of new users
                     * 
                     */
                    void SetNewUserCount(const int64_t& _newUserCount);

                    /**
                     * 判断参数 NewUserCount 是否已赋值
                     * @return NewUserCount 是否已赋值
                     * 
                     */
                    bool NewUserCountHasBeenSet() const;

                    /**
                     * 获取Day 1 retention of new users
                     * @return OneDayRetentionNewUsers Day 1 retention of new users
                     * 
                     */
                    int64_t GetOneDayRetentionNewUsers() const;

                    /**
                     * 设置Day 1 retention of new users
                     * @param _oneDayRetentionNewUsers Day 1 retention of new users
                     * 
                     */
                    void SetOneDayRetentionNewUsers(const int64_t& _oneDayRetentionNewUsers);

                    /**
                     * 判断参数 OneDayRetentionNewUsers 是否已赋值
                     * @return OneDayRetentionNewUsers 是否已赋值
                     * 
                     */
                    bool OneDayRetentionNewUsersHasBeenSet() const;

                    /**
                     * 获取Day 2 retention of new users
                     * @return TwoDayRetentionNewUsers Day 2 retention of new users
                     * 
                     */
                    int64_t GetTwoDayRetentionNewUsers() const;

                    /**
                     * 设置Day 2 retention of new users
                     * @param _twoDayRetentionNewUsers Day 2 retention of new users
                     * 
                     */
                    void SetTwoDayRetentionNewUsers(const int64_t& _twoDayRetentionNewUsers);

                    /**
                     * 判断参数 TwoDayRetentionNewUsers 是否已赋值
                     * @return TwoDayRetentionNewUsers 是否已赋值
                     * 
                     */
                    bool TwoDayRetentionNewUsersHasBeenSet() const;

                    /**
                     * 获取Day 3 retention of new users
                     * @return ThreeDayRetentionNewUsers Day 3 retention of new users
                     * 
                     */
                    int64_t GetThreeDayRetentionNewUsers() const;

                    /**
                     * 设置Day 3 retention of new users
                     * @param _threeDayRetentionNewUsers Day 3 retention of new users
                     * 
                     */
                    void SetThreeDayRetentionNewUsers(const int64_t& _threeDayRetentionNewUsers);

                    /**
                     * 判断参数 ThreeDayRetentionNewUsers 是否已赋值
                     * @return ThreeDayRetentionNewUsers 是否已赋值
                     * 
                     */
                    bool ThreeDayRetentionNewUsersHasBeenSet() const;

                    /**
                     * 获取Day 4 retention of new users
                     * @return FourDayRetentionNewUsers Day 4 retention of new users
                     * 
                     */
                    int64_t GetFourDayRetentionNewUsers() const;

                    /**
                     * 设置Day 4 retention of new users
                     * @param _fourDayRetentionNewUsers Day 4 retention of new users
                     * 
                     */
                    void SetFourDayRetentionNewUsers(const int64_t& _fourDayRetentionNewUsers);

                    /**
                     * 判断参数 FourDayRetentionNewUsers 是否已赋值
                     * @return FourDayRetentionNewUsers 是否已赋值
                     * 
                     */
                    bool FourDayRetentionNewUsersHasBeenSet() const;

                    /**
                     * 获取Day 5 retention of new users
                     * @return FiveDayRetentionNewUsers Day 5 retention of new users
                     * 
                     */
                    int64_t GetFiveDayRetentionNewUsers() const;

                    /**
                     * 设置Day 5 retention of new users
                     * @param _fiveDayRetentionNewUsers Day 5 retention of new users
                     * 
                     */
                    void SetFiveDayRetentionNewUsers(const int64_t& _fiveDayRetentionNewUsers);

                    /**
                     * 判断参数 FiveDayRetentionNewUsers 是否已赋值
                     * @return FiveDayRetentionNewUsers 是否已赋值
                     * 
                     */
                    bool FiveDayRetentionNewUsersHasBeenSet() const;

                    /**
                     * 获取Day 6 retention of new users
                     * @return SixDayRetentionNewUsers Day 6 retention of new users
                     * 
                     */
                    int64_t GetSixDayRetentionNewUsers() const;

                    /**
                     * 设置Day 6 retention of new users
                     * @param _sixDayRetentionNewUsers Day 6 retention of new users
                     * 
                     */
                    void SetSixDayRetentionNewUsers(const int64_t& _sixDayRetentionNewUsers);

                    /**
                     * 判断参数 SixDayRetentionNewUsers 是否已赋值
                     * @return SixDayRetentionNewUsers 是否已赋值
                     * 
                     */
                    bool SixDayRetentionNewUsersHasBeenSet() const;

                    /**
                     * 获取Day 7 retention of new users
                     * @return SevenDayRetentionNewUsers Day 7 retention of new users
                     * 
                     */
                    int64_t GetSevenDayRetentionNewUsers() const;

                    /**
                     * 设置Day 7 retention of new users
                     * @param _sevenDayRetentionNewUsers Day 7 retention of new users
                     * 
                     */
                    void SetSevenDayRetentionNewUsers(const int64_t& _sevenDayRetentionNewUsers);

                    /**
                     * 判断参数 SevenDayRetentionNewUsers 是否已赋值
                     * @return SevenDayRetentionNewUsers 是否已赋值
                     * 
                     */
                    bool SevenDayRetentionNewUsersHasBeenSet() const;

                    /**
                     * 获取Day 14 retention of new users
                     * @return FourteenDayRetentionNewUsers Day 14 retention of new users
                     * 
                     */
                    int64_t GetFourteenDayRetentionNewUsers() const;

                    /**
                     * 设置Day 14 retention of new users
                     * @param _fourteenDayRetentionNewUsers Day 14 retention of new users
                     * 
                     */
                    void SetFourteenDayRetentionNewUsers(const int64_t& _fourteenDayRetentionNewUsers);

                    /**
                     * 判断参数 FourteenDayRetentionNewUsers 是否已赋值
                     * @return FourteenDayRetentionNewUsers 是否已赋值
                     * 
                     */
                    bool FourteenDayRetentionNewUsersHasBeenSet() const;

                    /**
                     * 获取Day 30 retention of new users
                     * @return ThirtyDayRetentionNewUsers Day 30 retention of new users
                     * 
                     */
                    int64_t GetThirtyDayRetentionNewUsers() const;

                    /**
                     * 设置Day 30 retention of new users
                     * @param _thirtyDayRetentionNewUsers Day 30 retention of new users
                     * 
                     */
                    void SetThirtyDayRetentionNewUsers(const int64_t& _thirtyDayRetentionNewUsers);

                    /**
                     * 判断参数 ThirtyDayRetentionNewUsers 是否已赋值
                     * @return ThirtyDayRetentionNewUsers 是否已赋值
                     * 
                     */
                    bool ThirtyDayRetentionNewUsersHasBeenSet() const;

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
                     * Number of active users
                     */
                    int64_t m_activeUserCount;
                    bool m_activeUserCountHasBeenSet;

                    /**
                     * Day 1 retention of active users
                     */
                    int64_t m_oneDayRetentionUsers;
                    bool m_oneDayRetentionUsersHasBeenSet;

                    /**
                     * Day 2 retention of active users
                     */
                    int64_t m_twoDayRetentionUsers;
                    bool m_twoDayRetentionUsersHasBeenSet;

                    /**
                     * Day 3 retention of active users
                     */
                    int64_t m_threeDayRetentionUsers;
                    bool m_threeDayRetentionUsersHasBeenSet;

                    /**
                     * Day 4 retention of active users
                     */
                    int64_t m_fourDayRetentionUsers;
                    bool m_fourDayRetentionUsersHasBeenSet;

                    /**
                     * Day 5 retention of active users
                     */
                    int64_t m_fiveDayRetentionUsers;
                    bool m_fiveDayRetentionUsersHasBeenSet;

                    /**
                     * Day 6 retention of active users
                     */
                    int64_t m_sixDayRetentionUsers;
                    bool m_sixDayRetentionUsersHasBeenSet;

                    /**
                     * Day 7 retention of active users
                     */
                    int64_t m_sevenDayRetentionUsers;
                    bool m_sevenDayRetentionUsersHasBeenSet;

                    /**
                     * Day 14 retention of active users
                     */
                    int64_t m_fourteenDayRetentionUsers;
                    bool m_fourteenDayRetentionUsersHasBeenSet;

                    /**
                     * Day 30 retention of active users
                     */
                    int64_t m_thirtyDayRetentionUsers;
                    bool m_thirtyDayRetentionUsersHasBeenSet;

                    /**
                     * Number of new users
                     */
                    int64_t m_newUserCount;
                    bool m_newUserCountHasBeenSet;

                    /**
                     * Day 1 retention of new users
                     */
                    int64_t m_oneDayRetentionNewUsers;
                    bool m_oneDayRetentionNewUsersHasBeenSet;

                    /**
                     * Day 2 retention of new users
                     */
                    int64_t m_twoDayRetentionNewUsers;
                    bool m_twoDayRetentionNewUsersHasBeenSet;

                    /**
                     * Day 3 retention of new users
                     */
                    int64_t m_threeDayRetentionNewUsers;
                    bool m_threeDayRetentionNewUsersHasBeenSet;

                    /**
                     * Day 4 retention of new users
                     */
                    int64_t m_fourDayRetentionNewUsers;
                    bool m_fourDayRetentionNewUsersHasBeenSet;

                    /**
                     * Day 5 retention of new users
                     */
                    int64_t m_fiveDayRetentionNewUsers;
                    bool m_fiveDayRetentionNewUsersHasBeenSet;

                    /**
                     * Day 6 retention of new users
                     */
                    int64_t m_sixDayRetentionNewUsers;
                    bool m_sixDayRetentionNewUsersHasBeenSet;

                    /**
                     * Day 7 retention of new users
                     */
                    int64_t m_sevenDayRetentionNewUsers;
                    bool m_sevenDayRetentionNewUsersHasBeenSet;

                    /**
                     * Day 14 retention of new users
                     */
                    int64_t m_fourteenDayRetentionNewUsers;
                    bool m_fourteenDayRetentionNewUsersHasBeenSet;

                    /**
                     * Day 30 retention of new users
                     */
                    int64_t m_thirtyDayRetentionNewUsers;
                    bool m_thirtyDayRetentionNewUsersHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_RETENTIONDATA_H_
