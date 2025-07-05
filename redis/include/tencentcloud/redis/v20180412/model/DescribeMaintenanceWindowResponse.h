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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEMAINTENANCEWINDOWRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEMAINTENANCEWINDOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeMaintenanceWindow response structure.
                */
                class DescribeMaintenanceWindowResponse : public AbstractModel
                {
                public:
                    DescribeMaintenanceWindowResponse();
                    ~DescribeMaintenanceWindowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of the maintenance window. Value range: any time point between 00:00 and 23:00, for example, 03:24.
                     * @return StartTime Start time of the maintenance window. Value range: any time point between 00:00 and 23:00, for example, 03:24.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the maintenance window.
- Value range: any time point between 00:00 and 23:00, for example, 04:24.
- The minimum maintenance duration is 30 minutes and the maximum is 3 hours.
- The end time should be later than the start time.
                     * @return EndTime End time of the maintenance window.
- Value range: any time point between 00:00 and 23:00, for example, 04:24.
- The minimum maintenance duration is 30 minutes and the maximum is 3 hours.
- The end time should be later than the start time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Start time of the maintenance window. Value range: any time point between 00:00 and 23:00, for example, 03:24.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the maintenance window.
- Value range: any time point between 00:00 and 23:00, for example, 04:24.
- The minimum maintenance duration is 30 minutes and the maximum is 3 hours.
- The end time should be later than the start time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEMAINTENANCEWINDOWRESPONSE_H_
