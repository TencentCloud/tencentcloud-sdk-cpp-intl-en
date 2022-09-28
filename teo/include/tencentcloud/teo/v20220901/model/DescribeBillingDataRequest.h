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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BillingDataFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeBillingData request structure.
                */
                class DescribeBillingDataRequest : public AbstractModel
                {
                public:
                    DescribeBillingDataRequest();
                    ~DescribeBillingDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param StartTime Start time.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param EndTime End time.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Time granularity. Values:
<ul>
<li>`min`: One minute</li>
<li>`5min`: Five minutes</li>
<li>`hour`: One hour</li>
<li>`day`: One day</li>
</ul>
                     * @return Interval Time granularity. Values:
<ul>
<li>`min`: One minute</li>
<li>`5min`: Five minutes</li>
<li>`hour`: One hour</li>
<li>`day`: One day</li>
</ul>
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time granularity. Values:
<ul>
<li>`min`: One minute</li>
<li>`5min`: Five minutes</li>
<li>`hour`: One hour</li>
<li>`day`: One day</li>
</ul>
                     * @param Interval Time granularity. Values:
<ul>
<li>`min`: One minute</li>
<li>`5min`: Five minutes</li>
<li>`hour`: One hour</li>
<li>`day`: One day</li>
</ul>
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Metric item. Values:
<ul>
<li>`acc_flux`: Content acceleration traffic;</li>
<li>`quic_request`: QUIC requests;</li>
<li>`sec_flux`: Security traffic;</li>
<li>`sec_request_clean`: Clean security requests.</li>
</ul>
                     * @return MetricName Metric item. Values:
<ul>
<li>`acc_flux`: Content acceleration traffic;</li>
<li>`quic_request`: QUIC requests;</li>
<li>`sec_flux`: Security traffic;</li>
<li>`sec_request_clean`: Clean security requests.</li>
</ul>
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric item. Values:
<ul>
<li>`acc_flux`: Content acceleration traffic;</li>
<li>`quic_request`: QUIC requests;</li>
<li>`sec_flux`: Security traffic;</li>
<li>`sec_request_clean`: Clean security requests.</li>
</ul>
                     * @param MetricName Metric item. Values:
<ul>
<li>`acc_flux`: Content acceleration traffic;</li>
<li>`quic_request`: QUIC requests;</li>
<li>`sec_flux`: Security traffic;</li>
<li>`sec_request_clean`: Clean security requests.</li>
</ul>
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Filter item. Values:
<ul>
<li>`zone`: Site;</li>
<li>`plan`: Service plan;</li>
<li>`service`: L4 or L7;</li>
<li>`tagKey`: Tag key;</li>
<li>`tagValue`: Tag value.</li>
</ul>
                     * @return Filters Filter item. Values:
<ul>
<li>`zone`: Site;</li>
<li>`plan`: Service plan;</li>
<li>`service`: L4 or L7;</li>
<li>`tagKey`: Tag key;</li>
<li>`tagValue`: Tag value.</li>
</ul>
                     */
                    std::vector<BillingDataFilter> GetFilters() const;

                    /**
                     * 设置Filter item. Values:
<ul>
<li>`zone`: Site;</li>
<li>`plan`: Service plan;</li>
<li>`service`: L4 or L7;</li>
<li>`tagKey`: Tag key;</li>
<li>`tagValue`: Tag value.</li>
</ul>
                     * @param Filters Filter item. Values:
<ul>
<li>`zone`: Site;</li>
<li>`plan`: Service plan;</li>
<li>`service`: L4 or L7;</li>
<li>`tagKey`: Tag key;</li>
<li>`tagValue`: Tag value.</li>
</ul>
                     */
                    void SetFilters(const std::vector<BillingDataFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Time granularity. Values:
<ul>
<li>`min`: One minute</li>
<li>`5min`: Five minutes</li>
<li>`hour`: One hour</li>
<li>`day`: One day</li>
</ul>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Metric item. Values:
<ul>
<li>`acc_flux`: Content acceleration traffic;</li>
<li>`quic_request`: QUIC requests;</li>
<li>`sec_flux`: Security traffic;</li>
<li>`sec_request_clean`: Clean security requests.</li>
</ul>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Filter item. Values:
<ul>
<li>`zone`: Site;</li>
<li>`plan`: Service plan;</li>
<li>`service`: L4 or L7;</li>
<li>`tagKey`: Tag key;</li>
<li>`tagValue`: Tag value.</li>
</ul>
                     */
                    std::vector<BillingDataFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
