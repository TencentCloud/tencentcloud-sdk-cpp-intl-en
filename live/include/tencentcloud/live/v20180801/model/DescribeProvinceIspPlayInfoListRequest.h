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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROVINCEISPPLAYINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROVINCEISPPLAYINFOLISTREQUEST_H_

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
                * DescribeProvinceIspPlayInfoList request structure.
                */
                class DescribeProvinceIspPlayInfoListRequest : public AbstractModel
                {
                public:
                    DescribeProvinceIspPlayInfoListRequest();
                    ~DescribeProvinceIspPlayInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start point in time (Beijing time).
Example: 2019-02-21 10:00:00.
                     * @return StartTime Start point in time (Beijing time).
Example: 2019-02-21 10:00:00.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start point in time (Beijing time).
Example: 2019-02-21 10:00:00.
                     * @param _startTime Start point in time (Beijing time).
Example: 2019-02-21 10:00:00.
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
                     * 获取End point in time (Beijing time).
Example: 2019-02-21 12:00:00.
Note: `EndTime` and `StartTime` only support querying data for the last day.
                     * @return EndTime End point in time (Beijing time).
Example: 2019-02-21 12:00:00.
Note: `EndTime` and `StartTime` only support querying data for the last day.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End point in time (Beijing time).
Example: 2019-02-21 12:00:00.
Note: `EndTime` and `StartTime` only support querying data for the last day.
                     * @param _endTime End point in time (Beijing time).
Example: 2019-02-21 12:00:00.
Note: `EndTime` and `StartTime` only support querying data for the last day.
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
                     * 获取Supported granularities:
1: 1-minute granularity (the query interval should be within 1 day)
                     * @return Granularity Supported granularities:
1: 1-minute granularity (the query interval should be within 1 day)
                     * 
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置Supported granularities:
1: 1-minute granularity (the query interval should be within 1 day)
                     * @param _granularity Supported granularities:
1: 1-minute granularity (the query interval should be within 1 day)
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
                     * 获取Statistical metric type:
"Bandwidth": bandwidth
"FluxPerSecond": average traffic
"Flux": traffic
"Request": number of requests
"Online": number of concurrent connections
                     * @return StatType Statistical metric type:
"Bandwidth": bandwidth
"FluxPerSecond": average traffic
"Flux": traffic
"Request": number of requests
"Online": number of concurrent connections
                     * 
                     */
                    std::string GetStatType() const;

                    /**
                     * 设置Statistical metric type:
"Bandwidth": bandwidth
"FluxPerSecond": average traffic
"Flux": traffic
"Request": number of requests
"Online": number of concurrent connections
                     * @param _statType Statistical metric type:
"Bandwidth": bandwidth
"FluxPerSecond": average traffic
"Flux": traffic
"Request": number of requests
"Online": number of concurrent connections
                     * 
                     */
                    void SetStatType(const std::string& _statType);

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     * 
                     */
                    bool StatTypeHasBeenSet() const;

                    /**
                     * 获取Playback domain name list.
                     * @return PlayDomains Playback domain name list.
                     * 
                     */
                    std::vector<std::string> GetPlayDomains() const;

                    /**
                     * 设置Playback domain name list.
                     * @param _playDomains Playback domain name list.
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
                     * 获取List of the districts to be queried, such as Beijing.
                     * @return ProvinceNames List of the districts to be queried, such as Beijing.
                     * 
                     */
                    std::vector<std::string> GetProvinceNames() const;

                    /**
                     * 设置List of the districts to be queried, such as Beijing.
                     * @param _provinceNames List of the districts to be queried, such as Beijing.
                     * 
                     */
                    void SetProvinceNames(const std::vector<std::string>& _provinceNames);

                    /**
                     * 判断参数 ProvinceNames 是否已赋值
                     * @return ProvinceNames 是否已赋值
                     * 
                     */
                    bool ProvinceNamesHasBeenSet() const;

                    /**
                     * 获取List of the ISPs to be queried, such as China Mobile. If this parameter is left empty, the data of all ISPs will be queried.
                     * @return IspNames List of the ISPs to be queried, such as China Mobile. If this parameter is left empty, the data of all ISPs will be queried.
                     * 
                     */
                    std::vector<std::string> GetIspNames() const;

                    /**
                     * 设置List of the ISPs to be queried, such as China Mobile. If this parameter is left empty, the data of all ISPs will be queried.
                     * @param _ispNames List of the ISPs to be queried, such as China Mobile. If this parameter is left empty, the data of all ISPs will be queried.
                     * 
                     */
                    void SetIspNames(const std::vector<std::string>& _ispNames);

                    /**
                     * 判断参数 IspNames 是否已赋值
                     * @return IspNames 是否已赋值
                     * 
                     */
                    bool IspNamesHasBeenSet() const;

                    /**
                     * 获取Region. Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China), China (data for China, including Hong Kong, Macao, and Taiwan), Foreign (data for regions outside China, excluding Hong Kong, Macao, and Taiwan), Global (default). If this parameter is left empty, data for all regions will be queried.
                     * @return MainlandOrOversea Region. Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China), China (data for China, including Hong Kong, Macao, and Taiwan), Foreign (data for regions outside China, excluding Hong Kong, Macao, and Taiwan), Global (default). If this parameter is left empty, data for all regions will be queried.
                     * 
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置Region. Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China), China (data for China, including Hong Kong, Macao, and Taiwan), Foreign (data for regions outside China, excluding Hong Kong, Macao, and Taiwan), Global (default). If this parameter is left empty, data for all regions will be queried.
                     * @param _mainlandOrOversea Region. Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China), China (data for China, including Hong Kong, Macao, and Taiwan), Foreign (data for regions outside China, excluding Hong Kong, Macao, and Taiwan), Global (default). If this parameter is left empty, data for all regions will be queried.
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
                     * 获取IP type:
"Ipv6": IPv6 data
Data of all IPs will be returned if this parameter is left empty.
                     * @return IpType IP type:
"Ipv6": IPv6 data
Data of all IPs will be returned if this parameter is left empty.
                     * 
                     */
                    std::string GetIpType() const;

                    /**
                     * 设置IP type:
"Ipv6": IPv6 data
Data of all IPs will be returned if this parameter is left empty.
                     * @param _ipType IP type:
"Ipv6": IPv6 data
Data of all IPs will be returned if this parameter is left empty.
                     * 
                     */
                    void SetIpType(const std::string& _ipType);

                    /**
                     * 判断参数 IpType 是否已赋值
                     * @return IpType 是否已赋值
                     * 
                     */
                    bool IpTypeHasBeenSet() const;

                private:

                    /**
                     * Start point in time (Beijing time).
Example: 2019-02-21 10:00:00.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End point in time (Beijing time).
Example: 2019-02-21 12:00:00.
Note: `EndTime` and `StartTime` only support querying data for the last day.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Supported granularities:
1: 1-minute granularity (the query interval should be within 1 day)
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * Statistical metric type:
"Bandwidth": bandwidth
"FluxPerSecond": average traffic
"Flux": traffic
"Request": number of requests
"Online": number of concurrent connections
                     */
                    std::string m_statType;
                    bool m_statTypeHasBeenSet;

                    /**
                     * Playback domain name list.
                     */
                    std::vector<std::string> m_playDomains;
                    bool m_playDomainsHasBeenSet;

                    /**
                     * List of the districts to be queried, such as Beijing.
                     */
                    std::vector<std::string> m_provinceNames;
                    bool m_provinceNamesHasBeenSet;

                    /**
                     * List of the ISPs to be queried, such as China Mobile. If this parameter is left empty, the data of all ISPs will be queried.
                     */
                    std::vector<std::string> m_ispNames;
                    bool m_ispNamesHasBeenSet;

                    /**
                     * Region. Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China), China (data for China, including Hong Kong, Macao, and Taiwan), Foreign (data for regions outside China, excluding Hong Kong, Macao, and Taiwan), Global (default). If this parameter is left empty, data for all regions will be queried.
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                    /**
                     * IP type:
"Ipv6": IPv6 data
Data of all IPs will be returned if this parameter is left empty.
                     */
                    std::string m_ipType;
                    bool m_ipTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROVINCEISPPLAYINFOLISTREQUEST_H_
