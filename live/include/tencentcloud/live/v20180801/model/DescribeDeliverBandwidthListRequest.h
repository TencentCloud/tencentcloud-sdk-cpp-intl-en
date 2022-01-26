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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEDELIVERBANDWIDTHLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEDELIVERBANDWIDTHLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeDeliverBandwidthList request structure.
                */
                class DescribeDeliverBandwidthListRequest : public AbstractModel
                {
                public:
                    DescribeDeliverBandwidthListRequest();
                    ~DescribeDeliverBandwidthListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time in the format of "%Y-%m-%d %H:%M:%S".
                     * @return StartTime Start time in the format of "%Y-%m-%d %H:%M:%S".
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in the format of "%Y-%m-%d %H:%M:%S".
                     * @param StartTime Start time in the format of "%Y-%m-%d %H:%M:%S".
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time in the format of "%Y-%m-%d %H:%M:%S". Data in the last 3 months can be queried, and the query period is up to 1 month.
                     * @return EndTime End time in the format of "%Y-%m-%d %H:%M:%S". Data in the last 3 months can be queried, and the query period is up to 1 month.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format of "%Y-%m-%d %H:%M:%S". Data in the last 3 months can be queried, and the query period is up to 1 month.
                     * @param EndTime End time in the format of "%Y-%m-%d %H:%M:%S". Data in the last 3 months can be queried, and the query period is up to 1 month.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Start time in the format of "%Y-%m-%d %H:%M:%S".
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in the format of "%Y-%m-%d %H:%M:%S". Data in the last 3 months can be queried, and the query period is up to 1 month.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEDELIVERBANDWIDTHLISTREQUEST_H_
