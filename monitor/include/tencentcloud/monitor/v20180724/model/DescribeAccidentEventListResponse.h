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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAccidentEventListAlarms.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAccidentEventList response structure.
                */
                class DescribeAccidentEventListResponse : public AbstractModel
                {
                public:
                    DescribeAccidentEventListResponse();
                    ~DescribeAccidentEventListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Platform event list.
Note: This field may return null, indicating that no valid value was found.
                     * @return Alarms Platform event list.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<DescribeAccidentEventListAlarms> GetAlarms() const;

                    /**
                     * 判断参数 Alarms 是否已赋值
                     * @return Alarms 是否已赋值
                     * 
                     */
                    bool AlarmsHasBeenSet() const;

                    /**
                     * 获取Total number of platform events.
Note: This field may return null, indicating that no valid value was found.
                     * @return Total Total number of platform events.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Platform event list.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribeAccidentEventListAlarms> m_alarms;
                    bool m_alarmsHasBeenSet;

                    /**
                     * Total number of platform events.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTRESPONSE_H_
