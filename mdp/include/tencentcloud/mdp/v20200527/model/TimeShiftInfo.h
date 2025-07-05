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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_TIMESHIFTINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_TIMESHIFTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Linearly assembled channel time-shift configuration information.
                */
                class TimeShiftInfo : public AbstractModel
                {
                public:
                    TimeShiftInfo();
                    ~TimeShiftInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Lookback window, in seconds.
                     * @return TimeWindows Lookback window, in seconds.
                     * 
                     */
                    uint64_t GetTimeWindows() const;

                    /**
                     * 设置Lookback window, in seconds.
                     * @param _timeWindows Lookback window, in seconds.
                     * 
                     */
                    void SetTimeWindows(const uint64_t& _timeWindows);

                    /**
                     * 判断参数 TimeWindows 是否已赋值
                     * @return TimeWindows 是否已赋值
                     * 
                     */
                    bool TimeWindowsHasBeenSet() const;

                private:

                    /**
                     * Lookback window, in seconds.
                     */
                    uint64_t m_timeWindows;
                    bool m_timeWindowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_TIMESHIFTINFO_H_
