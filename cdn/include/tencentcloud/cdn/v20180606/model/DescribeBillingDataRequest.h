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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEBILLINGDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
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
                     * 获取Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * @return StartTime Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * @param _startTime Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
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
                     * 获取End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * @return EndTime End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * @param _endTime End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
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
                     * 获取Time granularity, which can be:
`min`: 1-minute granularity. The query period cannot exceed 24 hours.
`5min`: 5-minute granularity. The query range cannot exceed 31 days.
`hour`: 1-hour granularity. The query period cannot exceed 31 days.
`day`: 1-day granularity. The query period cannot exceed 31 days.

`min` is not supported if the `Area` field is `overseas`.
                     * @return Interval Time granularity, which can be:
`min`: 1-minute granularity. The query period cannot exceed 24 hours.
`5min`: 5-minute granularity. The query range cannot exceed 31 days.
`hour`: 1-hour granularity. The query period cannot exceed 31 days.
`day`: 1-day granularity. The query period cannot exceed 31 days.

`min` is not supported if the `Area` field is `overseas`.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time granularity, which can be:
`min`: 1-minute granularity. The query period cannot exceed 24 hours.
`5min`: 5-minute granularity. The query range cannot exceed 31 days.
`hour`: 1-hour granularity. The query period cannot exceed 31 days.
`day`: 1-day granularity. The query period cannot exceed 31 days.

`min` is not supported if the `Area` field is `overseas`.
                     * @param _interval Time granularity, which can be:
`min`: 1-minute granularity. The query period cannot exceed 24 hours.
`5min`: 5-minute granularity. The query range cannot exceed 31 days.
`hour`: 1-hour granularity. The query period cannot exceed 31 days.
`day`: 1-day granularity. The query period cannot exceed 31 days.

`min` is not supported if the `Area` field is `overseas`.
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Domain name whose billing data is to be queried
                     * @return Domain Domain name whose billing data is to be queried
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name whose billing data is to be queried
                     * @param _domain Domain name whose billing data is to be queried
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
If the `Domain` parameter is passed in, the `Proejct` parameter is ignored. Only the billing data of the specified domain name is returned. 
                     * @return Project Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
If the `Domain` parameter is passed in, the `Proejct` parameter is ignored. Only the billing data of the specified domain name is returned. 
                     * 
                     */
                    int64_t GetProject() const;

                    /**
                     * 设置Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
If the `Domain` parameter is passed in, the `Proejct` parameter is ignored. Only the billing data of the specified domain name is returned. 
                     * @param _project Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
If the `Domain` parameter is passed in, the `Proejct` parameter is ignored. Only the billing data of the specified domain name is returned. 
                     * 
                     */
                    void SetProject(const int64_t& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取Acceleration region whose billing data is to be queried:
`mainland`: Regions within the Chinese mainland
`overseas`: Regions outside the Chinese mainland
If this parameter is left empty, `mainland` will be used by default
                     * @return Area Acceleration region whose billing data is to be queried:
`mainland`: Regions within the Chinese mainland
`overseas`: Regions outside the Chinese mainland
If this parameter is left empty, `mainland` will be used by default
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region whose billing data is to be queried:
`mainland`: Regions within the Chinese mainland
`overseas`: Regions outside the Chinese mainland
If this parameter is left empty, `mainland` will be used by default
                     * @param _area Acceleration region whose billing data is to be queried:
`mainland`: Regions within the Chinese mainland
`overseas`: Regions outside the Chinese mainland
If this parameter is left empty, `mainland` will be used by default
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Country/region to be queried if `Area` is `overseas`
To view codes of provinces or countries/regions, see [Province Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E7.9C.81.E4.BB.BD.E6.98.A0.E5.B0.84)
If this parameter is left empty, all countries/regions will be queried
                     * @return District Country/region to be queried if `Area` is `overseas`
To view codes of provinces or countries/regions, see [Province Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E7.9C.81.E4.BB.BD.E6.98.A0.E5.B0.84)
If this parameter is left empty, all countries/regions will be queried
                     * 
                     */
                    int64_t GetDistrict() const;

                    /**
                     * 设置Country/region to be queried if `Area` is `overseas`
To view codes of provinces or countries/regions, see [Province Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E7.9C.81.E4.BB.BD.E6.98.A0.E5.B0.84)
If this parameter is left empty, all countries/regions will be queried
                     * @param _district Country/region to be queried if `Area` is `overseas`
To view codes of provinces or countries/regions, see [Province Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E7.9C.81.E4.BB.BD.E6.98.A0.E5.B0.84)
If this parameter is left empty, all countries/regions will be queried
                     * 
                     */
                    void SetDistrict(const int64_t& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取Billing statistics type
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
Default value: `bandwidth`
                     * @return Metric Billing statistics type
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
Default value: `bandwidth`
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Billing statistics type
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
Default value: `bandwidth`
                     * @param _metric Billing statistics type
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
Default value: `bandwidth`
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取Specifies the product to query, either `cdn` (default) or `ecdn`.
                     * @return Product Specifies the product to query, either `cdn` (default) or `ecdn`.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Specifies the product to query, either `cdn` (default) or `ecdn`.
                     * @param _product Specifies the product to query, either `cdn` (default) or `ecdn`.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取
                     * @return TimeZone 
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置
                     * @param _timeZone 
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Time granularity, which can be:
`min`: 1-minute granularity. The query period cannot exceed 24 hours.
`5min`: 5-minute granularity. The query range cannot exceed 31 days.
`hour`: 1-hour granularity. The query period cannot exceed 31 days.
`day`: 1-day granularity. The query period cannot exceed 31 days.

`min` is not supported if the `Area` field is `overseas`.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Domain name whose billing data is to be queried
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
If the `Domain` parameter is passed in, the `Proejct` parameter is ignored. Only the billing data of the specified domain name is returned. 
                     */
                    int64_t m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * Acceleration region whose billing data is to be queried:
`mainland`: Regions within the Chinese mainland
`overseas`: Regions outside the Chinese mainland
If this parameter is left empty, `mainland` will be used by default
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Country/region to be queried if `Area` is `overseas`
To view codes of provinces or countries/regions, see [Province Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E7.9C.81.E4.BB.BD.E6.98.A0.E5.B0.84)
If this parameter is left empty, all countries/regions will be queried
                     */
                    int64_t m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * Billing statistics type
`flux`: Bill by traffic
`bandwidth`: Bill by bandwidth
Default value: `bandwidth`
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Specifies the product to query, either `cdn` (default) or `ecdn`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
