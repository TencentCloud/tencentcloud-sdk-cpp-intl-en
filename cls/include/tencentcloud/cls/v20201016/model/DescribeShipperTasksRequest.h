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
                     * 获取Shipping rule ID
                     * @return ShipperId Shipping rule ID
                     * 
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置Shipping rule ID
                     * @param _shipperId Shipping rule ID
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
                     * 获取Query start timestamp in milliseconds, which can be within the last three days
                     * @return StartTime Query start timestamp in milliseconds, which can be within the last three days
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Query start timestamp in milliseconds, which can be within the last three days
                     * @param _startTime Query start timestamp in milliseconds, which can be within the last three days
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
                     * 获取Query end timestamp in milliseconds
                     * @return EndTime Query end timestamp in milliseconds
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Query end timestamp in milliseconds
                     * @param _endTime Query end timestamp in milliseconds
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
                     * Shipping rule ID
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * Query start timestamp in milliseconds, which can be within the last three days
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end timestamp in milliseconds
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESHIPPERTASKSREQUEST_H_
