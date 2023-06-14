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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEBILLBANDWIDTHANDFLUXLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEBILLBANDWIDTHANDFLUXLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeBillBandwidthAndFluxList request structure.
                */
                class DescribeBillBandwidthAndFluxListRequest : public AbstractModel
                {
                public:
                    DescribeBillBandwidthAndFluxListRequest();
                    ~DescribeBillBandwidthAndFluxListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @return StartTime Start time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @param _startTime Start time point in the format of `yyyy-mm-dd HH:MM:SS`.
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
                     * 获取End time point in the format of yyyy-mm-dd HH:MM:SS. The difference between the start time and end time cannot be greater than 31 days. Data in the last 3 years can be queried.
                     * @return EndTime End time point in the format of yyyy-mm-dd HH:MM:SS. The difference between the start time and end time cannot be greater than 31 days. Data in the last 3 years can be queried.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time point in the format of yyyy-mm-dd HH:MM:SS. The difference between the start time and end time cannot be greater than 31 days. Data in the last 3 years can be queried.
                     * @param _endTime End time point in the format of yyyy-mm-dd HH:MM:SS. The difference between the start time and end time cannot be greater than 31 days. Data in the last 3 years can be queried.
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
                     * 获取LVB playback domain name. If this parameter is left empty, full data will be queried.
                     * @return PlayDomains LVB playback domain name. If this parameter is left empty, full data will be queried.
                     * 
                     */
                    std::vector<std::string> GetPlayDomains() const;

                    /**
                     * 设置LVB playback domain name. If this parameter is left empty, full data will be queried.
                     * @param _playDomains LVB playback domain name. If this parameter is left empty, full data will be queried.
                     * 
                     */
                    void SetPlayDomains(const std::vector<std::string>& _playDomains);

                    /**
                     * 判断参数 PlayDomains 是否已赋值
                     * @return PlayDomains 是否已赋值
                     * 
                     */
                    bool PlayDomainsHasBeenSet() const;

                    /**
                     * 获取Valid values:
Mainland: query data for Mainland China,
Oversea: query data for regions outside Mainland China,
Default: query data for all regions.
Note: LEB only supports querying data for all regions.
                     * @return MainlandOrOversea Valid values:
Mainland: query data for Mainland China,
Oversea: query data for regions outside Mainland China,
Default: query data for all regions.
Note: LEB only supports querying data for all regions.
                     * 
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置Valid values:
Mainland: query data for Mainland China,
Oversea: query data for regions outside Mainland China,
Default: query data for all regions.
Note: LEB only supports querying data for all regions.
                     * @param _mainlandOrOversea Valid values:
Mainland: query data for Mainland China,
Oversea: query data for regions outside Mainland China,
Default: query data for all regions.
Note: LEB only supports querying data for all regions.
                     * 
                     */
                    void SetMainlandOrOversea(const std::string& _mainlandOrOversea);

                    /**
                     * 判断参数 MainlandOrOversea 是否已赋值
                     * @return MainlandOrOversea 是否已赋值
                     * 
                     */
                    bool MainlandOrOverseaHasBeenSet() const;

                    /**
                     * 获取Data granularity. Valid values:
5: 5-minute granularity (the query time span should be within 1 day),
60: 1-hour granularity (the query time span should be within one month),
1440: 1-day granularity (the query time span should be within one month).
Default value: 5.
                     * @return Granularity Data granularity. Valid values:
5: 5-minute granularity (the query time span should be within 1 day),
60: 1-hour granularity (the query time span should be within one month),
1440: 1-day granularity (the query time span should be within one month).
Default value: 5.
                     * 
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置Data granularity. Valid values:
5: 5-minute granularity (the query time span should be within 1 day),
60: 1-hour granularity (the query time span should be within one month),
1440: 1-day granularity (the query time span should be within one month).
Default value: 5.
                     * @param _granularity Data granularity. Valid values:
5: 5-minute granularity (the query time span should be within 1 day),
60: 1-hour granularity (the query time span should be within one month),
1440: 1-day granularity (the query time span should be within one month).
Default value: 5.
                     * 
                     */
                    void SetGranularity(const uint64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                    /**
                     * 获取Service name. Valid values: LVB, LEB. The sum of LVB and LEB usage will be returned if this parameter is left empty.
                     * @return ServiceName Service name. Valid values: LVB, LEB. The sum of LVB and LEB usage will be returned if this parameter is left empty.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name. Valid values: LVB, LEB. The sum of LVB and LEB usage will be returned if this parameter is left empty.
                     * @param _serviceName Service name. Valid values: LVB, LEB. The sum of LVB and LEB usage will be returned if this parameter is left empty.
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Region. Valid values:
China Mainland
Asia Pacific I
Asia Pacific II
Asia Pacific III
Europe
North America
South America
Middle East
Africa
                     * @return RegionNames Region. Valid values:
China Mainland
Asia Pacific I
Asia Pacific II
Asia Pacific III
Europe
North America
South America
Middle East
Africa
                     * 
                     */
                    std::vector<std::string> GetRegionNames() const;

                    /**
                     * 设置Region. Valid values:
China Mainland
Asia Pacific I
Asia Pacific II
Asia Pacific III
Europe
North America
South America
Middle East
Africa
                     * @param _regionNames Region. Valid values:
China Mainland
Asia Pacific I
Asia Pacific II
Asia Pacific III
Europe
North America
South America
Middle East
Africa
                     * 
                     */
                    void SetRegionNames(const std::vector<std::string>& _regionNames);

                    /**
                     * 判断参数 RegionNames 是否已赋值
                     * @return RegionNames 是否已赋值
                     * 
                     */
                    bool RegionNamesHasBeenSet() const;

                private:

                    /**
                     * Start time point in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time point in the format of yyyy-mm-dd HH:MM:SS. The difference between the start time and end time cannot be greater than 31 days. Data in the last 3 years can be queried.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * LVB playback domain name. If this parameter is left empty, full data will be queried.
                     */
                    std::vector<std::string> m_playDomains;
                    bool m_playDomainsHasBeenSet;

                    /**
                     * Valid values:
Mainland: query data for Mainland China,
Oversea: query data for regions outside Mainland China,
Default: query data for all regions.
Note: LEB only supports querying data for all regions.
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                    /**
                     * Data granularity. Valid values:
5: 5-minute granularity (the query time span should be within 1 day),
60: 1-hour granularity (the query time span should be within one month),
1440: 1-day granularity (the query time span should be within one month).
Default value: 5.
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * Service name. Valid values: LVB, LEB. The sum of LVB and LEB usage will be returned if this parameter is left empty.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Region. Valid values:
China Mainland
Asia Pacific I
Asia Pacific II
Asia Pacific III
Europe
North America
South America
Middle East
Africa
                     */
                    std::vector<std::string> m_regionNames;
                    bool m_regionNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEBILLBANDWIDTHANDFLUXLISTREQUEST_H_
