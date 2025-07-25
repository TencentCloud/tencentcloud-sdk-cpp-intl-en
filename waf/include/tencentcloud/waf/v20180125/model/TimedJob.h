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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_TIMEDJOB_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_TIMEDJOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Rule-based scheduled task data structure
                */
                class TimedJob : public AbstractModel
                {
                public:
                    TimedJob();
                    ~TimedJob() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start timestamp, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartDateTime Start timestamp, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStartDateTime() const;

                    /**
                     * 设置Start timestamp, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startDateTime Start timestamp, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartDateTime(const uint64_t& _startDateTime);

                    /**
                     * 判断参数 StartDateTime 是否已赋值
                     * @return StartDateTime 是否已赋值
                     * 
                     */
                    bool StartDateTimeHasBeenSet() const;

                    /**
                     * 获取End timestamp, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndDateTime End timestamp, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEndDateTime() const;

                    /**
                     * 设置End timestamp, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endDateTime End timestamp, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndDateTime(const uint64_t& _endDateTime);

                    /**
                     * 判断参数 EndDateTime 是否已赋值
                     * @return EndDateTime 是否已赋值
                     * 
                     */
                    bool EndDateTimeHasBeenSet() const;

                private:

                    /**
                     * Start timestamp, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_startDateTime;
                    bool m_startDateTimeHasBeenSet;

                    /**
                     * End timestamp, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_endDateTime;
                    bool m_endDateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_TIMEDJOB_H_
