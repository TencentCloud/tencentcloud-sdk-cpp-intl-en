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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UEBACUSTOMRULE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UEBACUSTOMRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/UebaEventContent.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * User behavior analysis custom policy structure
                */
                class UebaCustomRule : public AbstractModel
                {
                public:
                    UebaCustomRule();
                    ~UebaCustomRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy name.
                     * @return RuleName Policy name.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Policy name.
                     * @param _ruleName Policy name.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取1: Cloud account
2: Custom user
                     * @return UserType 1: Cloud account
2: Custom user
                     * 
                     */
                    int64_t GetUserType() const;

                    /**
                     * 设置1: Cloud account
2: Custom user
                     * @param _userType 1: Cloud account
2: Custom user
                     * 
                     */
                    void SetUserType(const int64_t& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取Occurrence time
1: 10 minutes
2: 1 hour
3: One day
4: One week
5: One month
                     * @return TimeInterval Occurrence time
1: 10 minutes
2: 1 hour
3: One day
4: One week
5: One month
                     * 
                     */
                    int64_t GetTimeInterval() const;

                    /**
                     * 设置Occurrence time
1: 10 minutes
2: 1 hour
3: One day
4: One week
5: One month
                     * @param _timeInterval Occurrence time
1: 10 minutes
2: 1 hour
3: One day
4: One week
5: One month
                     * 
                     */
                    void SetTimeInterval(const int64_t& _timeInterval);

                    /**
                     * 判断参数 TimeInterval 是否已赋值
                     * @return TimeInterval 是否已赋值
                     * 
                     */
                    bool TimeIntervalHasBeenSet() const;

                    /**
                     * 获取Event that occurred
                     * @return EventContent Event that occurred
                     * 
                     */
                    UebaEventContent GetEventContent() const;

                    /**
                     * 设置Event that occurred
                     * @param _eventContent Event that occurred
                     * 
                     */
                    void SetEventContent(const UebaEventContent& _eventContent);

                    /**
                     * 判断参数 EventContent 是否已赋值
                     * @return EventContent 是否已赋值
                     * 
                     */
                    bool EventContentHasBeenSet() const;

                    /**
                     * 获取Alarm name
                     * @return AlertName Alarm name
                     * 
                     */
                    std::string GetAlertName() const;

                    /**
                     * 设置Alarm name
                     * @param _alertName Alarm name
                     * 
                     */
                    void SetAlertName(const std::string& _alertName);

                    /**
                     * 判断参数 AlertName 是否已赋值
                     * @return AlertName 是否已赋值
                     * 
                     */
                    bool AlertNameHasBeenSet() const;

                    /**
                     * 获取Alarm type
0: Notification
1: Low risk
2: Medium risk
3: High risk
4: Critical
                     * @return AlterLevel Alarm type
0: Notification
1: Low risk
2: Medium risk
3: High risk
4: Critical
                     * 
                     */
                    int64_t GetAlterLevel() const;

                    /**
                     * 设置Alarm type
0: Notification
1: Low risk
2: Medium risk
3: High risk
4: Critical
                     * @param _alterLevel Alarm type
0: Notification
1: Low risk
2: Medium risk
3: High risk
4: Critical
                     * 
                     */
                    void SetAlterLevel(const int64_t& _alterLevel);

                    /**
                     * 判断参数 AlterLevel 是否已赋值
                     * @return AlterLevel 是否已赋值
                     * 
                     */
                    bool AlterLevelHasBeenSet() const;

                    /**
                     * 获取Operator.
                     * @return Operator Operator.
                     * 
                     */
                    std::vector<std::string> GetOperator() const;

                    /**
                     * 设置Operator.
                     * @param _operator Operator.
                     * 
                     */
                    void SetOperator(const std::vector<std::string>& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Operation object.
                     * @return OperateObject Operation object.
                     * 
                     */
                    std::vector<std::string> GetOperateObject() const;

                    /**
                     * 设置Operation object.
                     * @param _operateObject Operation object.
                     * 
                     */
                    void SetOperateObject(const std::vector<std::string>& _operateObject);

                    /**
                     * 判断参数 OperateObject 是否已赋值
                     * @return OperateObject 是否已赋值
                     * 
                     */
                    bool OperateObjectHasBeenSet() const;

                    /**
                     * 获取Operation method.
                     * @return OperateMethod Operation method.
                     * 
                     */
                    std::vector<std::string> GetOperateMethod() const;

                    /**
                     * 设置Operation method.
                     * @param _operateMethod Operation method.
                     * 
                     */
                    void SetOperateMethod(const std::vector<std::string>& _operateMethod);

                    /**
                     * 判断参数 OperateMethod 是否已赋值
                     * @return OperateMethod 是否已赋值
                     * 
                     */
                    bool OperateMethodHasBeenSet() const;

                    /**
                     * 获取Log type
                     * @return LogType Log type
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type
                     * @param _logType Log type
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Log Chinese name
                     * @return LogTypeStr Log Chinese name
                     * 
                     */
                    std::string GetLogTypeStr() const;

                    /**
                     * 设置Log Chinese name
                     * @param _logTypeStr Log Chinese name
                     * 
                     */
                    void SetLogTypeStr(const std::string& _logTypeStr);

                    /**
                     * 判断参数 LogTypeStr 是否已赋值
                     * @return LogTypeStr 是否已赋值
                     * 
                     */
                    bool LogTypeStrHasBeenSet() const;

                private:

                    /**
                     * Policy name.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 1: Cloud account
2: Custom user
                     */
                    int64_t m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * Occurrence time
1: 10 minutes
2: 1 hour
3: One day
4: One week
5: One month
                     */
                    int64_t m_timeInterval;
                    bool m_timeIntervalHasBeenSet;

                    /**
                     * Event that occurred
                     */
                    UebaEventContent m_eventContent;
                    bool m_eventContentHasBeenSet;

                    /**
                     * Alarm name
                     */
                    std::string m_alertName;
                    bool m_alertNameHasBeenSet;

                    /**
                     * Alarm type
0: Notification
1: Low risk
2: Medium risk
3: High risk
4: Critical
                     */
                    int64_t m_alterLevel;
                    bool m_alterLevelHasBeenSet;

                    /**
                     * Operator.
                     */
                    std::vector<std::string> m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Operation object.
                     */
                    std::vector<std::string> m_operateObject;
                    bool m_operateObjectHasBeenSet;

                    /**
                     * Operation method.
                     */
                    std::vector<std::string> m_operateMethod;
                    bool m_operateMethodHasBeenSet;

                    /**
                     * Log type
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Log Chinese name
                     */
                    std::string m_logTypeStr;
                    bool m_logTypeStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UEBACUSTOMRULE_H_
