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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDEALSBYCONDREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDEALSBYCONDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDealsByCond request structure.
                */
                class DescribeDealsByCondRequest : public AbstractModel
                {
                public:
                    DescribeDealsByCondRequest();
                    ~DescribeDealsByCondRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time 
Example :2016-01-01 00:00:00
                     * @return StartTime Start time 
Example :2016-01-01 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time 
Example :2016-01-01 00:00:00
                     * @param _startTime Start time 
Example :2016-01-01 00:00:00
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
                     * 获取End time 
Example:2016-02-01 00:00:00. 
It is recommended that the span does not exceed 3 months.
                     * @return EndTime End time 
Example:2016-02-01 00:00:00. 
It is recommended that the span does not exceed 3 months.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time 
Example:2016-02-01 00:00:00. 
It is recommended that the span does not exceed 3 months.
                     * @param _endTime End time 
Example:2016-02-01 00:00:00. 
It is recommended that the span does not exceed 3 months.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The number of records per page. The default is 20, and the maximum is 1,000.
                     * @return Limit The number of records per page. The default is 20, and the maximum is 1,000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of records per page. The default is 20, and the maximum is 1,000.
                     * @param _limit The number of records per page. The default is 20, and the maximum is 1,000.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The page number the records start from, starting from 0. The default is 0.
                     * @return Offset The page number the records start from, starting from 0. The default is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The page number the records start from, starting from 0. The default is 0.
                     * @param _offset The page number the records start from, starting from 0. The default is 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Order status, default is 4 (successful order)
Status of the order
1: unpaid
2: paid 
3: shipment in progress
4: shipped
5`: Shipment Failed
6`: Refunded
7`: Ticket closed
8`: Order expired
9`: Order invalid
10: product invalidated
11: third-party payment refused
12: payment in process
                     * @return Status Order status, default is 4 (successful order)
Status of the order
1: unpaid
2: paid 
3: shipment in progress
4: shipped
5`: Shipment Failed
6`: Refunded
7`: Ticket closed
8`: Order expired
9`: Order invalid
10: product invalidated
11: third-party payment refused
12: payment in process
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Order status, default is 4 (successful order)
Status of the order
1: unpaid
2: paid 
3: shipment in progress
4: shipped
5`: Shipment Failed
6`: Refunded
7`: Ticket closed
8`: Order expired
9`: Order invalid
10: product invalidated
11: third-party payment refused
12: payment in process
                     * @param _status Order status, default is 4 (successful order)
Status of the order
1: unpaid
2: paid 
3: shipment in progress
4: shipped
5`: Shipment Failed
6`: Refunded
7`: Ticket closed
8`: Order expired
9`: Order invalid
10: product invalidated
11: third-party payment refused
12: payment in process
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Sub-order number
Example: 202202021234567
                     * @return OrderId Sub-order number
Example: 202202021234567
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置Sub-order number
Example: 202202021234567
                     * @param _orderId Sub-order number
Example: 202202021234567
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取Large order number.
Example: 202202021234566
                     * @return BigDealId Large order number.
Example: 202202021234566
                     * 
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 设置Large order number.
Example: 202202021234566
                     * @param _bigDealId Large order number.
Example: 202202021234566
                     * 
                     */
                    void SetBigDealId(const std::string& _bigDealId);

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     * 
                     */
                    bool BigDealIdHasBeenSet() const;

                    /**
                     * 获取Resource ID
Example:ins-a2bb34
                     * @return ResourceId Resource ID
Example:ins-a2bb34
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
Example:ins-a2bb34
                     * @param _resourceId Resource ID
Example:ins-a2bb34
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * Start time 
Example :2016-01-01 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time 
Example:2016-02-01 00:00:00. 
It is recommended that the span does not exceed 3 months.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The number of records per page. The default is 20, and the maximum is 1,000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The page number the records start from, starting from 0. The default is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Order status, default is 4 (successful order)
Status of the order
1: unpaid
2: paid 
3: shipment in progress
4: shipped
5`: Shipment Failed
6`: Refunded
7`: Ticket closed
8`: Order expired
9`: Order invalid
10: product invalidated
11: third-party payment refused
12: payment in process
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Sub-order number
Example: 202202021234567
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Large order number.
Example: 202202021234566
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                    /**
                     * Resource ID
Example:ins-a2bb34
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDEALSBYCONDREQUEST_H_
