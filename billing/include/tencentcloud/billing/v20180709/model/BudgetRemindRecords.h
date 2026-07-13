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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETREMINDRECORDS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETREMINDRECORDS_H_

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
                * Budget History Details
                */
                class BudgetRemindRecords : public AbstractModel
                {
                public:
                    BudgetRemindRecords();
                    ~BudgetRemindRecords() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取budget period
                     * @return DateDesc budget period
                     * 
                     */
                    std::string GetDateDesc() const;

                    /**
                     * 设置budget period
                     * @param _dateDesc budget period
                     * 
                     */
                    void SetDateDesc(const std::string& _dateDesc);

                    /**
                     * 判断参数 DateDesc 是否已赋值
                     * @return DateDesc 是否已赋值
                     * 
                     */
                    bool DateDescHasBeenSet() const;

                    /**
                     * 获取actual fee
                     * @return RealCost actual fee
                     * 
                     */
                    std::string GetRealCost() const;

                    /**
                     * 设置actual fee
                     * @param _realCost actual fee
                     * 
                     */
                    void SetRealCost(const std::string& _realCost);

                    /**
                     * 判断参数 RealCost 是否已赋值
                     * @return RealCost 是否已赋值
                     * 
                     */
                    bool RealCostHasBeenSet() const;

                    /**
                     * 获取Budget amount limit
                     * @return BudgetQuota Budget amount limit
                     * 
                     */
                    std::string GetBudgetQuota() const;

                    /**
                     * 设置Budget amount limit
                     * @param _budgetQuota Budget amount limit
                     * 
                     */
                    void SetBudgetQuota(const std::string& _budgetQuota);

                    /**
                     * 判断参数 BudgetQuota 是否已赋值
                     * @return BudgetQuota 是否已赋值
                     * 
                     */
                    bool BudgetQuotaHasBeenSet() const;

                    /**
                     * 获取Reminder type.
Enumeration values:
BUDGET reminder
Fluctuation alert
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlarmType Reminder type.
Enumeration values:
BUDGET reminder
Fluctuation alert
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlarmType() const;

                    /**
                     * 设置Reminder type.
Enumeration values:
BUDGET reminder
Fluctuation alert
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alarmType Reminder type.
Enumeration values:
BUDGET reminder
Fluctuation alert
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取message content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MessageContent message content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessageContent() const;

                    /**
                     * 设置message content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _messageContent message content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessageContent(const std::string& _messageContent);

                    /**
                     * 判断参数 MessageContent 是否已赋值
                     * @return MessageContent 是否已赋值
                     * 
                     */
                    bool MessageContentHasBeenSet() const;

                    /**
                     * 获取Send time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SendTime Send time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSendTime() const;

                    /**
                     * 设置Send time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sendTime Send time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSendTime(const int64_t& _sendTime);

                    /**
                     * 判断参数 SendTime 是否已赋值
                     * @return SendTime 是否已赋值
                     * 
                     */
                    bool SendTimeHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * budget period
                     */
                    std::string m_dateDesc;
                    bool m_dateDescHasBeenSet;

                    /**
                     * actual fee
                     */
                    std::string m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * Budget amount limit
                     */
                    std::string m_budgetQuota;
                    bool m_budgetQuotaHasBeenSet;

                    /**
                     * Reminder type.
Enumeration values:
BUDGET reminder
Fluctuation alert
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * message content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_messageContent;
                    bool m_messageContentHasBeenSet;

                    /**
                     * Send time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sendTime;
                    bool m_sendTimeHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETREMINDRECORDS_H_
