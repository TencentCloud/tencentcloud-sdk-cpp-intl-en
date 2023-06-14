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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListEvents.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListOverView.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeProductEventList response structure.
                */
                class DescribeProductEventListResponse : public AbstractModel
                {
                public:
                    DescribeProductEventListResponse();
                    ~DescribeProductEventListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Event list
Note: This field may return null, indicating that no valid value was found.
                     * @return Events Event list
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<DescribeProductEventListEvents> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取Event statistics.
                     * @return OverView Event statistics.
                     * 
                     */
                    DescribeProductEventListOverView GetOverView() const;

                    /**
                     * 判断参数 OverView 是否已赋值
                     * @return OverView 是否已赋值
                     * 
                     */
                    bool OverViewHasBeenSet() const;

                    /**
                     * 获取Total number of events.
Note: This field may return null, indicating that no valid value was found.
                     * @return Total Total number of events.
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
                     * Event list
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribeProductEventListEvents> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * Event statistics.
                     */
                    DescribeProductEventListOverView m_overView;
                    bool m_overViewHasBeenSet;

                    /**
                     * Total number of events.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTRESPONSE_H_
