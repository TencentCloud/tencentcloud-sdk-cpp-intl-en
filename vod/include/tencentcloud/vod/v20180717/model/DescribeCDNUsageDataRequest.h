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
                     * 获取Start date in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @return StartTime Start date in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start date in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @param StartTime Start date in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End date in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). The end date must be after the start date.
                     * @return EndTime End date in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). The end date must be after the start date.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End date in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). The end date must be after the start date.
                     * @param EndTime End date in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). The end date must be after the start date.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取CDN statistics type. Valid values:
<li>Flux: traffic in bytes.</li>
<li>Bandwidth: bandwidth in bps.</li>
                     * @return DataType CDN statistics type. Valid values:
<li>Flux: traffic in bytes.</li>
<li>Bandwidth: bandwidth in bps.</li>
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置CDN statistics type. Valid values:
<li>Flux: traffic in bytes.</li>
<li>Bandwidth: bandwidth in bps.</li>
                     * @param DataType CDN statistics type. Valid values:
<li>Flux: traffic in bytes.</li>
<li>Bandwidth: bandwidth in bps.</li>
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取Time granularity of usage data in minutes. Valid values:
<li>5: 5-minute granularity, which returns the details at the 5-minute granularity within the specified time range.</li>
<li>60: 1-hour granularity, which returns the details at the 1-hour granularity within the specified time range.</li>
<li>1440: 1-day granularity, which returns the details at the 1-day granularity within the specified time range.</li>
Default value: 1440. Data at the 1-day granularity will be returned.
When the value of this field is 1, the total usage of all subapplications (including primary application) are queried by an admin.
                     * @return DataInterval Time granularity of usage data in minutes. Valid values:
<li>5: 5-minute granularity, which returns the details at the 5-minute granularity within the specified time range.</li>
<li>60: 1-hour granularity, which returns the details at the 1-hour granularity within the specified time range.</li>
<li>1440: 1-day granularity, which returns the details at the 1-day granularity within the specified time range.</li>
Default value: 1440. Data at the 1-day granularity will be returned.
When the value of this field is 1, the total usage of all subapplications (including primary application) are queried by an admin.
                     */
                    uint64_t GetDataInterval() const;

                    /**
                     * 设置Time granularity of usage data in minutes. Valid values:
<li>5: 5-minute granularity, which returns the details at the 5-minute granularity within the specified time range.</li>
<li>60: 1-hour granularity, which returns the details at the 1-hour granularity within the specified time range.</li>
<li>1440: 1-day granularity, which returns the details at the 1-day granularity within the specified time range.</li>
Default value: 1440. Data at the 1-day granularity will be returned.
When the value of this field is 1, the total usage of all subapplications (including primary application) are queried by an admin.
                     * @param DataInterval Time granularity of usage data in minutes. Valid values:
<li>5: 5-minute granularity, which returns the details at the 5-minute granularity within the specified time range.</li>
<li>60: 1-hour granularity, which returns the details at the 1-hour granularity within the specified time range.</li>
<li>1440: 1-day granularity, which returns the details at the 1-day granularity within the specified time range.</li>
Default value: 1440. Data at the 1-day granularity will be returned.
When the value of this field is 1, the total usage of all subapplications (including primary application) are queried by an admin.
                     */
                    void SetDataInterval(const uint64_t& _dataInterval);

                    /**
                     * 判断参数 DataInterval 是否已赋值
                     * @return DataInterval 是否已赋值
                     */
                    bool DataIntervalHasBeenSet() const;

                    /**
                     * 获取List of domain names. The usage data of up to 20 domain names can be queried at a time. You can specify multiple domain names and query their combined usage data. The usage data of all domain names will be returned by default.
                     * @return DomainNames List of domain names. The usage data of up to 20 domain names can be queried at a time. You can specify multiple domain names and query their combined usage data. The usage data of all domain names will be returned by default.
                     */
                    std::vector<std::string> GetDomainNames() const;

                    /**
                     * 设置List of domain names. The usage data of up to 20 domain names can be queried at a time. You can specify multiple domain names and query their combined usage data. The usage data of all domain names will be returned by default.
                     * @param DomainNames List of domain names. The usage data of up to 20 domain names can be queried at a time. You can specify multiple domain names and query their combined usage data. The usage data of all domain names will be returned by default.
                     */
                    void SetDomainNames(const std::vector<std::string>& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     */
                    bool DomainNamesHasBeenSet() const;

                    /**
                     * 获取ID of a [subapplication](/document/product/266/14574) in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
When the value of this field is 1, the total usage of all subapplications (including primary application) are queried by an admin. In this case, only 1-day granularity is supported.
                     * @return SubAppId ID of a [subapplication](/document/product/266/14574) in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
When the value of this field is 1, the total usage of all subapplications (including primary application) are queried by an admin. In this case, only 1-day granularity is supported.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置ID of a [subapplication](/document/product/266/14574) in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
When the value of this field is 1, the total usage of all subapplications (including primary application) are queried by an admin. In this case, only 1-day granularity is supported.
                     * @param SubAppId ID of a [subapplication](/document/product/266/14574) in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
When the value of this field is 1, the total usage of all subapplications (including primary application) are queried by an admin. In this case, only 1-day granularity is supported.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Start date in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End date in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). The end date must be after the start date.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * CDN statistics type. Valid values:
<li>Flux: traffic in bytes.</li>
<li>Bandwidth: bandwidth in bps.</li>
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * Time granularity of usage data in minutes. Valid values:
<li>5: 5-minute granularity, which returns the details at the 5-minute granularity within the specified time range.</li>
<li>60: 1-hour granularity, which returns the details at the 1-hour granularity within the specified time range.</li>
<li>1440: 1-day granularity, which returns the details at the 1-day granularity within the specified time range.</li>
Default value: 1440. Data at the 1-day granularity will be returned.
When the value of this field is 1, the total usage of all subapplications (including primary application) are queried by an admin.
                     */
                    uint64_t m_dataInterval;
                    bool m_dataIntervalHasBeenSet;

                    /**
                     * List of domain names. The usage data of up to 20 domain names can be queried at a time. You can specify multiple domain names and query their combined usage data. The usage data of all domain names will be returned by default.
                     */
                    std::vector<std::string> m_domainNames;
                    bool m_domainNamesHasBeenSet;

                    /**
                     * ID of a [subapplication](/document/product/266/14574) in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
When the value of this field is 1, the total usage of all subapplications (including primary application) are queried by an admin. In this case, only 1-day granularity is supported.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNUSAGEDATAREQUEST_H_
