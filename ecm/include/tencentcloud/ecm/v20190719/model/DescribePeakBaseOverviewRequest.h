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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKBASEOVERVIEWREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKBASEOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribePeakBaseOverview request structure.
                */
                class DescribePeakBaseOverviewRequest : public AbstractModel
                {
                public:
                    DescribePeakBaseOverviewRequest();
                    ~DescribePeakBaseOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time (xxxx-xx-xx), such as `2019-08-14`. It is 7 days ago by default and should not be more than 90 days ago.
                     * @return StartTime Start time (xxxx-xx-xx), such as `2019-08-14`. It is 7 days ago by default and should not be more than 90 days ago.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time (xxxx-xx-xx), such as `2019-08-14`. It is 7 days ago by default and should not be more than 90 days ago.
                     * @param _startTime Start time (xxxx-xx-xx), such as `2019-08-14`. It is 7 days ago by default and should not be more than 90 days ago.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time (xxxx-xx-xx), such as `2019-08-14`. It is yesterday by default and should not be more than 90 days ago. When the time period between the start time and end time is within 30 days, data at the 1-hour granularity will be returned; otherwise, data at the 3-hour granularity will be returned.
                     * @return EndTime End time (xxxx-xx-xx), such as `2019-08-14`. It is yesterday by default and should not be more than 90 days ago. When the time period between the start time and end time is within 30 days, data at the 1-hour granularity will be returned; otherwise, data at the 3-hour granularity will be returned.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time (xxxx-xx-xx), such as `2019-08-14`. It is yesterday by default and should not be more than 90 days ago. When the time period between the start time and end time is within 30 days, data at the 1-hour granularity will be returned; otherwise, data at the 3-hour granularity will be returned.
                     * @param _endTime End time (xxxx-xx-xx), such as `2019-08-14`. It is yesterday by default and should not be more than 90 days ago. When the time period between the start time and end time is within 30 days, data at the 1-hour granularity will be returned; otherwise, data at the 3-hour granularity will be returned.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Start time (xxxx-xx-xx), such as `2019-08-14`. It is 7 days ago by default and should not be more than 90 days ago.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time (xxxx-xx-xx), such as `2019-08-14`. It is yesterday by default and should not be more than 90 days ago. When the time period between the start time and end time is within 30 days, data at the 1-hour granularity will be returned; otherwise, data at the 3-hour granularity will be returned.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPEAKBASEOVERVIEWREQUEST_H_
