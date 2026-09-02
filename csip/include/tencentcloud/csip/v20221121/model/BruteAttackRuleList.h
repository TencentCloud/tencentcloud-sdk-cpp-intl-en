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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BRUTEATTACKRULELIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BRUTEATTACKRULELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * List of rules for determining brute force cracking
                */
                class BruteAttackRuleList : public AbstractModel
                {
                public:
                    BruteAttackRuleList();
                    ~BruteAttackRuleList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Time range of the brute force cracking event (unit: second)</p>
                     * @return TimeRange <p>Time range of the brute force cracking event (unit: second)</p>
                     * 
                     */
                    uint64_t GetTimeRange() const;

                    /**
                     * 设置<p>Time range of the brute force cracking event (unit: second)</p>
                     * @param _timeRange <p>Time range of the brute force cracking event (unit: second)</p>
                     * 
                     */
                    void SetTimeRange(const uint64_t& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取<p>Number of failed blasting incidents</p>
                     * @return LoginFailTimes <p>Number of failed blasting incidents</p>
                     * 
                     */
                    uint64_t GetLoginFailTimes() const;

                    /**
                     * 设置<p>Number of failed blasting incidents</p>
                     * @param _loginFailTimes <p>Number of failed blasting incidents</p>
                     * 
                     */
                    void SetLoginFailTimes(const uint64_t& _loginFailTimes);

                    /**
                     * 判断参数 LoginFailTimes 是否已赋值
                     * @return LoginFailTimes 是否已赋值
                     * 
                     */
                    bool LoginFailTimesHasBeenSet() const;

                    /**
                     * 获取<p>Whether the rule is empty. If yes, fill in the default rule.</p>
                     * @return Enable <p>Whether the rule is empty. If yes, fill in the default rule.</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>Whether the rule is empty. If yes, fill in the default rule.</p>
                     * @param _enable <p>Whether the rule is empty. If yes, fill in the default rule.</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Occurrence time range of brute force cracking events, in seconds (default rule)</p>
                     * @return TimeRangeDefault <p>Occurrence time range of brute force cracking events, in seconds (default rule)</p>
                     * 
                     */
                    uint64_t GetTimeRangeDefault() const;

                    /**
                     * 设置<p>Occurrence time range of brute force cracking events, in seconds (default rule)</p>
                     * @param _timeRangeDefault <p>Occurrence time range of brute force cracking events, in seconds (default rule)</p>
                     * 
                     */
                    void SetTimeRangeDefault(const uint64_t& _timeRangeDefault);

                    /**
                     * 判断参数 TimeRangeDefault 是否已赋值
                     * @return TimeRangeDefault 是否已赋值
                     * 
                     */
                    bool TimeRangeDefaultHasBeenSet() const;

                    /**
                     * 获取<p>Number of failed blasting incidents (default rule)</p>
                     * @return LoginFailTimesDefault <p>Number of failed blasting incidents (default rule)</p>
                     * 
                     */
                    uint64_t GetLoginFailTimesDefault() const;

                    /**
                     * 设置<p>Number of failed blasting incidents (default rule)</p>
                     * @param _loginFailTimesDefault <p>Number of failed blasting incidents (default rule)</p>
                     * 
                     */
                    void SetLoginFailTimesDefault(const uint64_t& _loginFailTimesDefault);

                    /**
                     * 判断参数 LoginFailTimesDefault 是否已赋值
                     * @return LoginFailTimesDefault 是否已赋值
                     * 
                     */
                    bool LoginFailTimesDefaultHasBeenSet() const;

                private:

                    /**
                     * <p>Time range of the brute force cracking event (unit: second)</p>
                     */
                    uint64_t m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * <p>Number of failed blasting incidents</p>
                     */
                    uint64_t m_loginFailTimes;
                    bool m_loginFailTimesHasBeenSet;

                    /**
                     * <p>Whether the rule is empty. If yes, fill in the default rule.</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Occurrence time range of brute force cracking events, in seconds (default rule)</p>
                     */
                    uint64_t m_timeRangeDefault;
                    bool m_timeRangeDefaultHasBeenSet;

                    /**
                     * <p>Number of failed blasting incidents (default rule)</p>
                     */
                    uint64_t m_loginFailTimesDefault;
                    bool m_loginFailTimesDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BRUTEATTACKRULELIST_H_
