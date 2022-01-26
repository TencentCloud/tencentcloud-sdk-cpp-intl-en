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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBIZTRENDREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBIZTRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/ProtocolPort.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeBizTrend request structure.
                */
                class DescribeBizTrendRequest : public AbstractModel
                {
                public:
                    DescribeBizTrendRequest();
                    ~DescribeBizTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Statistical method. Valid values: `max`, `min`, `avg`, `sum`. It can only be `max` if the statistical dimension is traffic rate or packet rate.
                     * @return Statistics Statistical method. Valid values: `max`, `min`, `avg`, `sum`. It can only be `max` if the statistical dimension is traffic rate or packet rate.
                     */
                    std::string GetStatistics() const;

                    /**
                     * 设置Statistical method. Valid values: `max`, `min`, `avg`, `sum`. It can only be `max` if the statistical dimension is traffic rate or packet rate.
                     * @param Statistics Statistical method. Valid values: `max`, `min`, `avg`, `sum`. It can only be `max` if the statistical dimension is traffic rate or packet rate.
                     */
                    void SetStatistics(const std::string& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     * @return Business Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     * @param Business Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Sampling interval. Valid values: `300`, `1800`, `3600`, `21600`, `86400`
                     * @return Period Sampling interval. Valid values: `300`, `1800`, `3600`, `21600`, `86400`
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Sampling interval. Valid values: `300`, `1800`, `3600`, `21600`, `86400`
                     * @param Period Sampling interval. Valid values: `300`, `1800`, `3600`, `21600`, `86400`
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Beginning of the time range for the query, such as `2020-09-22 00:00:00`.
                     * @return StartTime Beginning of the time range for the query, such as `2020-09-22 00:00:00`.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Beginning of the time range for the query, such as `2020-09-22 00:00:00`.
                     * @param StartTime Beginning of the time range for the query, such as `2020-09-22 00:00:00`.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End of the time range for the query, such as `2020-09-22 00:00:00`.
                     * @return EndTime End of the time range for the query, such as `2020-09-22 00:00:00`.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End of the time range for the query, such as `2020-09-22 00:00:00`.
                     * @param EndTime End of the time range for the query, such as `2020-09-22 00:00:00`.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return Id Instance ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置Instance ID
                     * @param Id Instance ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Metric. Valid values: `connum`, `new_conn`, `inactive_conn`, `intraffic`, `outtraffic`, `inpkg`, `outpkg`, `qps`
                     * @return MetricName Metric. Valid values: `connum`, `new_conn`, `inactive_conn`, `intraffic`, `outtraffic`, `inpkg`, `outpkg`, `qps`
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric. Valid values: `connum`, `new_conn`, `inactive_conn`, `intraffic`, `outtraffic`, `inpkg`, `outpkg`, `qps`
                     * @param MetricName Metric. Valid values: `connum`, `new_conn`, `inactive_conn`, `intraffic`, `outtraffic`, `inpkg`, `outpkg`, `qps`
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取You can query data by specifying a domain name when the metric is `qps`.
                     * @return Domain You can query data by specifying a domain name when the metric is `qps`.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置You can query data by specifying a domain name when the metric is `qps`.
                     * @param Domain You can query data by specifying a domain name when the metric is `qps`.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Protocol and port list, which is valid when the metric is `connum`, `new_conn` or `inactive_conn`. Valid protocols: `TCP`, `UDP`, `HTTP`, `HTTPS`
                     * @return ProtoInfo Protocol and port list, which is valid when the metric is `connum`, `new_conn` or `inactive_conn`. Valid protocols: `TCP`, `UDP`, `HTTP`, `HTTPS`
                     */
                    std::vector<ProtocolPort> GetProtoInfo() const;

                    /**
                     * 设置Protocol and port list, which is valid when the metric is `connum`, `new_conn` or `inactive_conn`. Valid protocols: `TCP`, `UDP`, `HTTP`, `HTTPS`
                     * @param ProtoInfo Protocol and port list, which is valid when the metric is `connum`, `new_conn` or `inactive_conn`. Valid protocols: `TCP`, `UDP`, `HTTP`, `HTTPS`
                     */
                    void SetProtoInfo(const std::vector<ProtocolPort>& _protoInfo);

                    /**
                     * 判断参数 ProtoInfo 是否已赋值
                     * @return ProtoInfo 是否已赋值
                     */
                    bool ProtoInfoHasBeenSet() const;

                private:

                    /**
                     * Statistical method. Valid values: `max`, `min`, `avg`, `sum`. It can only be `max` if the statistical dimension is traffic rate or packet rate.
                     */
                    std::string m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Sampling interval. Valid values: `300`, `1800`, `3600`, `21600`, `86400`
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

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
                     * Instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Metric. Valid values: `connum`, `new_conn`, `inactive_conn`, `intraffic`, `outtraffic`, `inpkg`, `outpkg`, `qps`
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * You can query data by specifying a domain name when the metric is `qps`.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Protocol and port list, which is valid when the metric is `connum`, `new_conn` or `inactive_conn`. Valid protocols: `TCP`, `UDP`, `HTTP`, `HTTPS`
                     */
                    std::vector<ProtocolPort> m_protoInfo;
                    bool m_protoInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBIZTRENDREQUEST_H_
