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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESHIPPERTASKSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESHIPPERTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeShipperTasks request structure.
                */
                class DescribeShipperTasksRequest : public AbstractModel
                {
                public:
                    DescribeShipperTasksRequest();
                    ~DescribeShipperTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Shipping Rule Id.

-Obtain the ShipperId by [obtaining the shipping task list](https://www.tencentcloud.com/document/product/614/58745?from_cn_redirect=1).
                     * @return ShipperId Shipping Rule Id.

-Obtain the ShipperId by [obtaining the shipping task list](https://www.tencentcloud.com/document/product/614/58745?from_cn_redirect=1).
                     * 
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置Shipping Rule Id.

-Obtain the ShipperId by [obtaining the shipping task list](https://www.tencentcloud.com/document/product/614/58745?from_cn_redirect=1).
                     * @param _shipperId Shipping Rule Id.

-Obtain the ShipperId by [obtaining the shipping task list](https://www.tencentcloud.com/document/product/614/58745?from_cn_redirect=1).
                     * 
                     */
                    void SetShipperId(const std::string& _shipperId);

                    /**
                     * 判断参数 ShipperId 是否已赋值
                     * @return ShipperId 是否已赋值
                     * 
                     */
                    bool ShipperIdHasBeenSet() const;

                    /**
                     * 获取Start timestamp for the query. Supports queries within the most recent 3 days in ms.
StartTime must be less than EndTime
                     * @return StartTime Start timestamp for the query. Supports queries within the most recent 3 days in ms.
StartTime must be less than EndTime
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start timestamp for the query. Supports queries within the most recent 3 days in ms.
StartTime must be less than EndTime
                     * @param _startTime Start timestamp for the query. Supports queries within the most recent 3 days in ms.
StartTime must be less than EndTime
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end timestamp, in ms.
StartTime must be less than EndTime
                     * @return EndTime Query end timestamp, in ms.
StartTime must be less than EndTime
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Query end timestamp, in ms.
StartTime must be less than EndTime
                     * @param _endTime Query end timestamp, in ms.
StartTime must be less than EndTime
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Shipping Rule Id.

-Obtain the ShipperId by [obtaining the shipping task list](https://www.tencentcloud.com/document/product/614/58745?from_cn_redirect=1).
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * Start timestamp for the query. Supports queries within the most recent 3 days in ms.
StartTime must be less than EndTime
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end timestamp, in ms.
StartTime must be less than EndTime
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESHIPPERTASKSREQUEST_H_
