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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_SCHEDULESETTINGS_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_SCHEDULESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Settings of a scheduled invoker
                */
                class ScheduleSettings : public AbstractModel
                {
                public:
                    ScheduleSettings();
                    ~ScheduleSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execution policy:
<br><li>`ONCE`: Execute once
<br><li>`RECURRENCE`: Execute repeatedly
                     * @return Policy Execution policy:
<br><li>`ONCE`: Execute once
<br><li>`RECURRENCE`: Execute repeatedly
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置Execution policy:
<br><li>`ONCE`: Execute once
<br><li>`RECURRENCE`: Execute repeatedly
                     * @param _policy Execution policy:
<br><li>`ONCE`: Execute once
<br><li>`RECURRENCE`: Execute repeatedly
                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Trigger the crontab expression. This field is required if `Policy` is `RECURRENCE`. The crontab expression is parsed in UTC+8.
                     * @return Recurrence Trigger the crontab expression. This field is required if `Policy` is `RECURRENCE`. The crontab expression is parsed in UTC+8.
                     * 
                     */
                    std::string GetRecurrence() const;

                    /**
                     * 设置Trigger the crontab expression. This field is required if `Policy` is `RECURRENCE`. The crontab expression is parsed in UTC+8.
                     * @param _recurrence Trigger the crontab expression. This field is required if `Policy` is `RECURRENCE`. The crontab expression is parsed in UTC+8.
                     * 
                     */
                    void SetRecurrence(const std::string& _recurrence);

                    /**
                     * 判断参数 Recurrence 是否已赋值
                     * @return Recurrence 是否已赋值
                     * 
                     */
                    bool RecurrenceHasBeenSet() const;

                    /**
                     * 获取The next execution time of the invoker. This field is required if `Policy` is `ONCE`.
                     * @return InvokeTime The next execution time of the invoker. This field is required if `Policy` is `ONCE`.
                     * 
                     */
                    std::string GetInvokeTime() const;

                    /**
                     * 设置The next execution time of the invoker. This field is required if `Policy` is `ONCE`.
                     * @param _invokeTime The next execution time of the invoker. This field is required if `Policy` is `ONCE`.
                     * 
                     */
                    void SetInvokeTime(const std::string& _invokeTime);

                    /**
                     * 判断参数 InvokeTime 是否已赋值
                     * @return InvokeTime 是否已赋值
                     * 
                     */
                    bool InvokeTimeHasBeenSet() const;

                private:

                    /**
                     * Execution policy:
<br><li>`ONCE`: Execute once
<br><li>`RECURRENCE`: Execute repeatedly
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Trigger the crontab expression. This field is required if `Policy` is `RECURRENCE`. The crontab expression is parsed in UTC+8.
                     */
                    std::string m_recurrence;
                    bool m_recurrenceHasBeenSet;

                    /**
                     * The next execution time of the invoker. This field is required if `Policy` is `ONCE`.
                     */
                    std::string m_invokeTime;
                    bool m_invokeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_SCHEDULESETTINGS_H_
