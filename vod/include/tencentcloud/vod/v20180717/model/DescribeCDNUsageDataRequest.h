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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNUSAGEDATAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNUSAGEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeCDNUsageData request structure.
                */
                class DescribeCDNUsageDataRequest : public AbstractModel
                {
                public:
                    DescribeCDNUsageDataRequest();
                    ~DescribeCDNUsageDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return StartTime Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _startTime Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取End date, which must be greater than the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return EndTime End date, which must be greater than the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End date, which must be greater than the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _endTime End date, which must be greater than the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取CDN statistics data type. Valid value:
<li>Flux: Traffic volume, unit: byte.</li>
<li>Bandwidth: bandwidth, in bps.</li>
                     * @return DataType CDN statistics data type. Valid value:
<li>Flux: Traffic volume, unit: byte.</li>
<li>Bandwidth: bandwidth, in bps.</li>
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置CDN statistics data type. Valid value:
<li>Flux: Traffic volume, unit: byte.</li>
<li>Bandwidth: bandwidth, in bps.</li>
                     * @param _dataType CDN statistics data type. Valid value:
<li>Flux: Traffic volume, unit: byte.</li>
<li>Bandwidth: bandwidth, in bps.</li>
                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Time granularity of usage data, unit: minute. Valid values:
<li>5: 5 minutes, return detailed data at a minute granularity for the specified query time.</li>
<li>60: Hourly granularity. Returns the data of 1-hour granularity within the specified query time.</li>
<li>1440: Day granularity. Returns data with day granularity within the specified query time.</li>
The default value is 1440, which returns data with day granularity.
                     * @return DataInterval Time granularity of usage data, unit: minute. Valid values:
<li>5: 5 minutes, return detailed data at a minute granularity for the specified query time.</li>
<li>60: Hourly granularity. Returns the data of 1-hour granularity within the specified query time.</li>
<li>1440: Day granularity. Returns data with day granularity within the specified query time.</li>
The default value is 1440, which returns data with day granularity.
                     * 
                     */
                    uint64_t GetDataInterval() const;

                    /**
                     * 设置Time granularity of usage data, unit: minute. Valid values:
<li>5: 5 minutes, return detailed data at a minute granularity for the specified query time.</li>
<li>60: Hourly granularity. Returns the data of 1-hour granularity within the specified query time.</li>
<li>1440: Day granularity. Returns data with day granularity within the specified query time.</li>
The default value is 1440, which returns data with day granularity.
                     * @param _dataInterval Time granularity of usage data, unit: minute. Valid values:
<li>5: 5 minutes, return detailed data at a minute granularity for the specified query time.</li>
<li>60: Hourly granularity. Returns the data of 1-hour granularity within the specified query time.</li>
<li>1440: Day granularity. Returns data with day granularity within the specified query time.</li>
The default value is 1440, which returns data with day granularity.
                     * 
                     */
                    void SetDataInterval(const uint64_t& _dataInterval);

                    /**
                     * 判断参数 DataInterval 是否已赋值
                     * @return DataInterval 是否已赋值
                     * 
                     */
                    bool DataIntervalHasBeenSet() const;

                    /**
                     * 获取Domain name list. Up to 20 domain names can be queried for usage data. Multiple values can be specified to query the superimposed usage data of these domains. Default returns the overlaid usage data of all domains.
                     * @return DomainNames Domain name list. Up to 20 domain names can be queried for usage data. Multiple values can be specified to query the superimposed usage data of these domains. Default returns the overlaid usage data of all domains.
                     * 
                     */
                    std::vector<std::string> GetDomainNames() const;

                    /**
                     * 设置Domain name list. Up to 20 domain names can be queried for usage data. Multiple values can be specified to query the superimposed usage data of these domains. Default returns the overlaid usage data of all domains.
                     * @param _domainNames Domain name list. Up to 20 domain names can be queried for usage data. Multiple values can be specified to query the superimposed usage data of these domains. Default returns the overlaid usage data of all domains.
                     * 
                     */
                    void SetDomainNames(const std::vector<std::string>& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     * 
                     */
                    bool DomainNamesHasBeenSet() const;

                private:

                    /**
                     * Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End date, which must be greater than the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * CDN statistics data type. Valid value:
<li>Flux: Traffic volume, unit: byte.</li>
<li>Bandwidth: bandwidth, in bps.</li>
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Time granularity of usage data, unit: minute. Valid values:
<li>5: 5 minutes, return detailed data at a minute granularity for the specified query time.</li>
<li>60: Hourly granularity. Returns the data of 1-hour granularity within the specified query time.</li>
<li>1440: Day granularity. Returns data with day granularity within the specified query time.</li>
The default value is 1440, which returns data with day granularity.
                     */
                    uint64_t m_dataInterval;
                    bool m_dataIntervalHasBeenSet;

                    /**
                     * Domain name list. Up to 20 domain names can be queried for usage data. Multiple values can be specified to query the superimposed usage data of these domains. Default returns the overlaid usage data of all domains.
                     */
                    std::vector<std::string> m_domainNames;
                    bool m_domainNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNUSAGEDATAREQUEST_H_
