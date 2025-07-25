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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKRULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKRULE_H_

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
                * Standard blocking mode rule
                */
                class BruteAttackRule : public AbstractModel
                {
                public:
                    BruteAttackRule();
                    ~BruteAttackRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timeframe of the brute force event (unit: second)
                     * @return TimeRange Timeframe of the brute force event (unit: second)
                     * 
                     */
                    uint64_t GetTimeRange() const;

                    /**
                     * 设置Timeframe of the brute force event (unit: second)
                     * @param _timeRange Timeframe of the brute force event (unit: second)
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
                     * 获取Number of failed attempts during the brute force event
                     * @return LoginFailTimes Number of failed attempts during the brute force event
                     * 
                     */
                    uint64_t GetLoginFailTimes() const;

                    /**
                     * 设置Number of failed attempts during the brute force event
                     * @param _loginFailTimes Number of failed attempts during the brute force event
                     * 
                     */
                    void SetLoginFailTimes(const uint64_t& _loginFailTimes);

                    /**
                     * 判断参数 LoginFailTimes 是否已赋值
                     * @return LoginFailTimes 是否已赋值
                     * 
                     */
                    bool LoginFailTimesHasBeenSet() const;

                private:

                    /**
                     * Timeframe of the brute force event (unit: second)
                     */
                    uint64_t m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * Number of failed attempts during the brute force event
                     */
                    uint64_t m_loginFailTimes;
                    bool m_loginFailTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BRUTEATTACKRULE_H_
