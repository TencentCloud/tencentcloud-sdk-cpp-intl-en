/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKRULELIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKRULELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
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
                     * 获取Timeframe of the brute force cracking event (unit: second)
                     * @return TimeRange Timeframe of the brute force cracking event (unit: second)
                     * 
                     */
                    uint64_t GetTimeRange() const;

                    /**
                     * 设置Timeframe of the brute force cracking event (unit: second)
                     * @param _timeRange Timeframe of the brute force cracking event (unit: second)
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
                     * 获取Number of failed attempts during the brute force cracking event
                     * @return LoginFailTimes Number of failed attempts during the brute force cracking event
                     * 
                     */
                    uint64_t GetLoginFailTimes() const;

                    /**
                     * 设置Number of failed attempts during the brute force cracking event
                     * @param _loginFailTimes Number of failed attempts during the brute force cracking event
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
                     * 获取Whether the rule is empty. If yes, fill in the default rule.
                     * @return Enable Whether the rule is empty. If yes, fill in the default rule.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Whether the rule is empty. If yes, fill in the default rule.
                     * @param _enable Whether the rule is empty. If yes, fill in the default rule.
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
                     * 获取Occurrence time range of brute force cracking events, in seconds (default rule)
                     * @return TimeRangeDefault Occurrence time range of brute force cracking events, in seconds (default rule)
                     * 
                     */
                    uint64_t GetTimeRangeDefault() const;

                    /**
                     * 设置Occurrence time range of brute force cracking events, in seconds (default rule)
                     * @param _timeRangeDefault Occurrence time range of brute force cracking events, in seconds (default rule)
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
                     * 获取Number of failed brute force cracking events (default rule)
                     * @return LoginFailTimesDefault Number of failed brute force cracking events (default rule)
                     * 
                     */
                    uint64_t GetLoginFailTimesDefault() const;

                    /**
                     * 设置Number of failed brute force cracking events (default rule)
                     * @param _loginFailTimesDefault Number of failed brute force cracking events (default rule)
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
                     * Timeframe of the brute force cracking event (unit: second)
                     */
                    uint64_t m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * Number of failed attempts during the brute force cracking event
                     */
                    uint64_t m_loginFailTimes;
                    bool m_loginFailTimesHasBeenSet;

                    /**
                     * Whether the rule is empty. If yes, fill in the default rule.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Occurrence time range of brute force cracking events, in seconds (default rule)
                     */
                    uint64_t m_timeRangeDefault;
                    bool m_timeRangeDefaultHasBeenSet;

                    /**
                     * Number of failed brute force cracking events (default rule)
                     */
                    uint64_t m_loginFailTimesDefault;
                    bool m_loginFailTimesDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKRULELIST_H_
