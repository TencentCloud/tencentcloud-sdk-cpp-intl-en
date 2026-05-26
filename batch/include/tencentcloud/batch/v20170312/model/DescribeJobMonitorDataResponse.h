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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATARESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/DataPointView.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeJobMonitorData response structure.
                */
                class DescribeJobMonitorDataResponse : public AbstractModel
                {
                public:
                    DescribeJobMonitorDataResponse();
                    ~DescribeJobMonitorDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Monitoring data granularity, measurement unit: second. Time granularity changes with the query time range. The smaller the query time range, the smaller the time granularity.
                     * @return Period Monitoring data granularity, measurement unit: second. Time granularity changes with the query time range. The smaller the query time range, the smaller the time granularity.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取The collected data is monitored. Timestamps and corresponding values have a one-to-one relationship. If the querying task retries and the collection time period involves multiple instances, values during specific periods are null, indicating no instance existence at the corresponding time and no corresponding monitoring data. The maximum number of null values between adjacent monitoring time periods is 10.
                     * @return DataPoints The collected data is monitored. Timestamps and corresponding values have a one-to-one relationship. If the querying task retries and the collection time period involves multiple instances, values during specific periods are null, indicating no instance existence at the corresponding time and no corresponding monitoring data. The maximum number of null values between adjacent monitoring time periods is 10.
                     * 
                     */
                    DataPointView GetDataPoints() const;

                    /**
                     * 判断参数 DataPoints 是否已赋值
                     * @return DataPoints 是否已赋值
                     * 
                     */
                    bool DataPointsHasBeenSet() const;

                private:

                    /**
                     * Monitoring data granularity, measurement unit: second. Time granularity changes with the query time range. The smaller the query time range, the smaller the time granularity.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * The collected data is monitored. Timestamps and corresponding values have a one-to-one relationship. If the querying task retries and the collection time period involves multiple instances, values during specific periods are null, indicating no instance existence at the corresponding time and no corresponding monitoring data. The maximum number of null values between adjacent monitoring time periods is 10.
                     */
                    DataPointView m_dataPoints;
                    bool m_dataPointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATARESPONSE_H_
