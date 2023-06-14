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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBGPBIZTRENDREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBGPBIZTRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeBgpBizTrend request structure.
                */
                class DescribeBgpBizTrendRequest : public AbstractModel
                {
                public:
                    DescribeBgpBizTrendRequest();
                    ~DescribeBgpBizTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service code. `bgp-multip` indicates Anti-DDos Pro.
                     * @return Business Anti-DDoS service code. `bgp-multip` indicates Anti-DDos Pro.
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service code. `bgp-multip` indicates Anti-DDos Pro.
                     * @param _business Anti-DDoS service code. `bgp-multip` indicates Anti-DDos Pro.
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Beginning of the time range for the query, such as `2020-09-22 00:00:00`.
                     * @return StartTime Beginning of the time range for the query, such as `2020-09-22 00:00:00`.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Beginning of the time range for the query, such as `2020-09-22 00:00:00`.
                     * @param _startTime Beginning of the time range for the query, such as `2020-09-22 00:00:00`.
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
                     * 获取End of the time range for the query, such as `2020-09-22 00:00:00`.
                     * @return EndTime End of the time range for the query, such as `2020-09-22 00:00:00`.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End of the time range for the query, such as `2020-09-22 00:00:00`.
                     * @param _endTime End of the time range for the query, such as `2020-09-22 00:00:00`.
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
                     * 获取Statistical metric. Values: `intraffic`, `outtraffic`, `inpkg`, and `outpkg`.
                     * @return MetricName Statistical metric. Values: `intraffic`, `outtraffic`, `inpkg`, and `outpkg`.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Statistical metric. Values: `intraffic`, `outtraffic`, `inpkg`, and `outpkg`.
                     * @param _metricName Statistical metric. Values: `intraffic`, `outtraffic`, `inpkg`, and `outpkg`.
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取`0`: Fixed time. `1`: Custom time.
                     * @return Flag `0`: Fixed time. `1`: Custom time.
                     * 
                     */
                    uint64_t GetFlag() const;

                    /**
                     * 设置`0`: Fixed time. `1`: Custom time.
                     * @param _flag `0`: Fixed time. `1`: Custom time.
                     * 
                     */
                    void SetFlag(const uint64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service code. `bgp-multip` indicates Anti-DDos Pro.
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Beginning of the time range for the query, such as `2020-09-22 00:00:00`.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End of the time range for the query, such as `2020-09-22 00:00:00`.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Statistical metric. Values: `intraffic`, `outtraffic`, `inpkg`, and `outpkg`.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * `0`: Fixed time. `1`: Custom time.
                     */
                    uint64_t m_flag;
                    bool m_flagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBGPBIZTRENDREQUEST_H_
