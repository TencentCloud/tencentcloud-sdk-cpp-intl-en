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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETSENDINFODTO_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETSENDINFODTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Budget reminder
                */
                class BudgetSendInfoDto : public AbstractModel
                {
                public:
                    BudgetSendInfoDto();
                    ~BudgetSendInfoDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Notification cycle, separated by commas.
Enumeration values:
Monday:1
Tuesday:2
Sunday: 7
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WeekDays Notification cycle, separated by commas.
Enumeration values:
Monday:1
Tuesday:2
Sunday: 7
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetWeekDays() const;

                    /**
                     * 设置Notification cycle, separated by commas.
Enumeration values:
Monday:1
Tuesday:2
Sunday: 7
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weekDays Notification cycle, separated by commas.
Enumeration values:
Monday:1
Tuesday:2
Sunday: 7
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeekDays(const std::vector<uint64_t>& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取Reception type.
Enumeration values:
UIN default mode
USER
GROUP User group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReceiverType Reception type.
Enumeration values:
UIN default mode
USER
GROUP User group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置Reception type.
Enumeration values:
UIN default mode
USER
GROUP User group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _receiverType Reception type.
Enumeration values:
UIN default mode
USER
GROUP User group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     * 
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取Sending and receiving window HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Sending and receiving window HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Sending and receiving window HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Sending and receiving window HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Budget configuration id (budget name)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BudgetId Budget configuration id (budget name)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBudgetId() const;

                    /**
                     * 设置Budget configuration id (budget name)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _budgetId Budget configuration id (budget name)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBudgetId(const int64_t& _budgetId);

                    /**
                     * 判断参数 BudgetId 是否已赋值
                     * @return BudgetId 是否已赋值
                     * 
                     */
                    bool BudgetIdHasBeenSet() const;

                    /**
                     * 获取receiving channel, separated by commas
Enumeration values:
TITLE
Message Center
mail
SMS
WECHAT
VOICE
WeCom
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NoticeWays receiving channel, separated by commas
Enumeration values:
TITLE
Message Center
mail
SMS
WECHAT
VOICE
WeCom
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetNoticeWays() const;

                    /**
                     * 设置receiving channel, separated by commas
Enumeration values:
TITLE
Message Center
mail
SMS
WECHAT
VOICE
WeCom
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _noticeWays receiving channel, separated by commas
Enumeration values:
TITLE
Message Center
mail
SMS
WECHAT
VOICE
WeCom
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNoticeWays(const std::vector<std::string>& _noticeWays);

                    /**
                     * 判断参数 NoticeWays 是否已赋值
                     * @return NoticeWays 是否已赋值
                     * 
                     */
                    bool NoticeWaysHasBeenSet() const;

                    /**
                     * 获取Send start window HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Send start window HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Send start window HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Send start window HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取user id, user group id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReceiverIds user id, user group id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetReceiverIds() const;

                    /**
                     * 设置user id, user group id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _receiverIds user id, user group id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReceiverIds(const std::vector<uint64_t>& _receiverIds);

                    /**
                     * 判断参数 ReceiverIds 是否已赋值
                     * @return ReceiverIds 是否已赋值
                     * 
                     */
                    bool ReceiverIdsHasBeenSet() const;

                private:

                    /**
                     * Notification cycle, separated by commas.
Enumeration values:
Monday:1
Tuesday:2
Sunday: 7
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * Reception type.
Enumeration values:
UIN default mode
USER
GROUP User group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * Sending and receiving window HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Budget configuration id (budget name)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_budgetId;
                    bool m_budgetIdHasBeenSet;

                    /**
                     * receiving channel, separated by commas
Enumeration values:
TITLE
Message Center
mail
SMS
WECHAT
VOICE
WeCom
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_noticeWays;
                    bool m_noticeWaysHasBeenSet;

                    /**
                     * Send start window HH:mm:ss
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * user id, user group id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_receiverIds;
                    bool m_receiverIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETSENDINFODTO_H_
