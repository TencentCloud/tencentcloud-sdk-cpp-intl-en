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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TIMESPOTCHECK_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TIMESPOTCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Detection policy for media quality inspection.
                */
                class TimeSpotCheck : public AbstractModel
                {
                public:
                    TimeSpotCheck();
                    ~TimeSpotCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Duration of each loop detection, in seconds. Value range:

 - Minimum value: 10.
 - Maximum value: 86400.

                     * @return CheckDuration Duration of each loop detection, in seconds. Value range:

 - Minimum value: 10.
 - Maximum value: 86400.

                     * 
                     */
                    uint64_t GetCheckDuration() const;

                    /**
                     * 设置Duration of each loop detection, in seconds. Value range:

 - Minimum value: 10.
 - Maximum value: 86400.

                     * @param _checkDuration Duration of each loop detection, in seconds. Value range:

 - Minimum value: 10.
 - Maximum value: 86400.

                     * 
                     */
                    void SetCheckDuration(const uint64_t& _checkDuration);

                    /**
                     * 判断参数 CheckDuration 是否已赋值
                     * @return CheckDuration 是否已赋值
                     * 
                     */
                    bool CheckDurationHasBeenSet() const;

                    /**
                     * 获取Detection interval, in seconds. It indicates the duration after a detection is completed and before the next detection is conducted. Value range:
 - Minimum value: 10.
 - Maximum value: 3600.
                     * @return CheckInterval Detection interval, in seconds. It indicates the duration after a detection is completed and before the next detection is conducted. Value range:
 - Minimum value: 10.
 - Maximum value: 3600.
                     * 
                     */
                    uint64_t GetCheckInterval() const;

                    /**
                     * 设置Detection interval, in seconds. It indicates the duration after a detection is completed and before the next detection is conducted. Value range:
 - Minimum value: 10.
 - Maximum value: 3600.
                     * @param _checkInterval Detection interval, in seconds. It indicates the duration after a detection is completed and before the next detection is conducted. Value range:
 - Minimum value: 10.
 - Maximum value: 3600.
                     * 
                     */
                    void SetCheckInterval(const uint64_t& _checkInterval);

                    /**
                     * 判断参数 CheckInterval 是否已赋值
                     * @return CheckInterval 是否已赋值
                     * 
                     */
                    bool CheckIntervalHasBeenSet() const;

                    /**
                     * 获取Skipped opening duration, in seconds. Value range:
 - Minimum value: 1.
 - Maximum value: 1800.
                     * @return SkipDuration Skipped opening duration, in seconds. Value range:
 - Minimum value: 1.
 - Maximum value: 1800.
                     * 
                     */
                    uint64_t GetSkipDuration() const;

                    /**
                     * 设置Skipped opening duration, in seconds. Value range:
 - Minimum value: 1.
 - Maximum value: 1800.
                     * @param _skipDuration Skipped opening duration, in seconds. Value range:
 - Minimum value: 1.
 - Maximum value: 1800.
                     * 
                     */
                    void SetSkipDuration(const uint64_t& _skipDuration);

                    /**
                     * 判断参数 SkipDuration 是否已赋值
                     * @return SkipDuration 是否已赋值
                     * 
                     */
                    bool SkipDurationHasBeenSet() const;

                    /**
                     * 获取Number of loops. Value range:
 - Minimum value: 0.
 - Maximum value: 1000.

If the value is 0 or not specified, it indicates that loops are executed until the video ends.
                     * @return CirclesNumber Number of loops. Value range:
 - Minimum value: 0.
 - Maximum value: 1000.

If the value is 0 or not specified, it indicates that loops are executed until the video ends.
                     * 
                     */
                    uint64_t GetCirclesNumber() const;

                    /**
                     * 设置Number of loops. Value range:
 - Minimum value: 0.
 - Maximum value: 1000.

If the value is 0 or not specified, it indicates that loops are executed until the video ends.
                     * @param _circlesNumber Number of loops. Value range:
 - Minimum value: 0.
 - Maximum value: 1000.

If the value is 0 or not specified, it indicates that loops are executed until the video ends.
                     * 
                     */
                    void SetCirclesNumber(const uint64_t& _circlesNumber);

                    /**
                     * 判断参数 CirclesNumber 是否已赋值
                     * @return CirclesNumber 是否已赋值
                     * 
                     */
                    bool CirclesNumberHasBeenSet() const;

                private:

                    /**
                     * Duration of each loop detection, in seconds. Value range:

 - Minimum value: 10.
 - Maximum value: 86400.

                     */
                    uint64_t m_checkDuration;
                    bool m_checkDurationHasBeenSet;

                    /**
                     * Detection interval, in seconds. It indicates the duration after a detection is completed and before the next detection is conducted. Value range:
 - Minimum value: 10.
 - Maximum value: 3600.
                     */
                    uint64_t m_checkInterval;
                    bool m_checkIntervalHasBeenSet;

                    /**
                     * Skipped opening duration, in seconds. Value range:
 - Minimum value: 1.
 - Maximum value: 1800.
                     */
                    uint64_t m_skipDuration;
                    bool m_skipDurationHasBeenSet;

                    /**
                     * Number of loops. Value range:
 - Minimum value: 0.
 - Maximum value: 1000.

If the value is 0 or not specified, it indicates that loops are executed until the video ends.
                     */
                    uint64_t m_circlesNumber;
                    bool m_circlesNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TIMESPOTCHECK_H_
