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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPUSHBANDWIDTHANDFLUXLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPUSHBANDWIDTHANDFLUXLISTREQUEST_H_

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
                * DescribePushBandwidthAndFluxList request structure.
                */
                class DescribePushBandwidthAndFluxListRequest : public AbstractModel
                {
                public:
                    DescribePushBandwidthAndFluxListRequest();
                    ~DescribePushBandwidthAndFluxListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query start time point, accurate to minute granularity. The interface query supports two time formats:

YYYY-MM-DDThh:mm:ssZ: UTC time format, refer to ISO date format descriptionfor details.

YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.

Queries for the most recent two months are supported. The span between query start and end time cannot exceed 31 days.
                     * @return StartTime Query start time point, accurate to minute granularity. The interface query supports two time formats:

YYYY-MM-DDThh:mm:ssZ: UTC time format, refer to ISO date format descriptionfor details.

YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.

Queries for the most recent two months are supported. The span between query start and end time cannot exceed 31 days.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time point, accurate to minute granularity. The interface query supports two time formats:

YYYY-MM-DDThh:mm:ssZ: UTC time format, refer to ISO date format descriptionfor details.

YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.

Queries for the most recent two months are supported. The span between query start and end time cannot exceed 31 days.
                     * @param _startTime Query start time point, accurate to minute granularity. The interface query supports two time formats:

YYYY-MM-DDThh:mm:ssZ: UTC time format, refer to ISO date format descriptionfor details.

YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.

Queries for the most recent two months are supported. The span between query start and end time cannot exceed 31 days.
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
                     * 获取Query end time point, accurate to minute granularity. The interface query supports two time formats:

YYYY-MM-DDThh:mm:ssZ: UTC time format, refer to ISO date format descriptionfor details.

YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.

Queries for the most recent two months are supported. The span between query start and end time cannot exceed 31 days.
                     * @return EndTime Query end time point, accurate to minute granularity. The interface query supports two time formats:

YYYY-MM-DDThh:mm:ssZ: UTC time format, refer to ISO date format descriptionfor details.

YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.

Queries for the most recent two months are supported. The span between query start and end time cannot exceed 31 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time point, accurate to minute granularity. The interface query supports two time formats:

YYYY-MM-DDThh:mm:ssZ: UTC time format, refer to ISO date format descriptionfor details.

YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.

Queries for the most recent two months are supported. The span between query start and end time cannot exceed 31 days.
                     * @param _endTime Query end time point, accurate to minute granularity. The interface query supports two time formats:

YYYY-MM-DDThh:mm:ssZ: UTC time format, refer to ISO date format descriptionfor details.

YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.

Queries for the most recent two months are supported. The span between query start and end time cannot exceed 31 days.
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
                     * 获取Domain name, you can fill in multiple. If left blank, it represents the overall data.
                     * @return PushDomains Domain name, you can fill in multiple. If left blank, it represents the overall data.
                     * 
                     */
                    std::vector<std::string> GetPushDomains() const;

                    /**
                     * 设置Domain name, you can fill in multiple. If left blank, it represents the overall data.
                     * @param _pushDomains Domain name, you can fill in multiple. If left blank, it represents the overall data.
                     * 
                     */
                    void SetPushDomains(const std::vector<std::string>& _pushDomains);

                    /**
                     * 判断参数 PushDomains 是否已赋值
                     * @return PushDomains 是否已赋值
                     * 
                     */
                    bool PushDomainsHasBeenSet() const;

                    /**
                     * 获取Optional values: Mainland: Query data for Mainland China (domestic). Oversea: Query data for international/regions such as Hong Kong, Macao, Taiwan (overseas). If left blank, it defaults to querying global data (domestic + overseas).
                     * @return MainlandOrOversea Optional values: Mainland: Query data for Mainland China (domestic). Oversea: Query data for international/regions such as Hong Kong, Macao, Taiwan (overseas). If left blank, it defaults to querying global data (domestic + overseas).
                     * 
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置Optional values: Mainland: Query data for Mainland China (domestic). Oversea: Query data for international/regions such as Hong Kong, Macao, Taiwan (overseas). If left blank, it defaults to querying global data (domestic + overseas).
                     * @param _mainlandOrOversea Optional values: Mainland: Query data for Mainland China (domestic). Oversea: Query data for international/regions such as Hong Kong, Macao, Taiwan (overseas). If left blank, it defaults to querying global data (domestic + overseas).
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
                     * 获取Data granularity, supports the following granularities: 5: 5-minute granularity (span cannot exceed 1 day), 60: 1-hour granularity (span cannot exceed 1 month), 1440: daily granularity (span cannot exceed 1 month). Default value: 5.
                     * @return Granularity Data granularity, supports the following granularities: 5: 5-minute granularity (span cannot exceed 1 day), 60: 1-hour granularity (span cannot exceed 1 month), 1440: daily granularity (span cannot exceed 1 month). Default value: 5.
                     * 
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置Data granularity, supports the following granularities: 5: 5-minute granularity (span cannot exceed 1 day), 60: 1-hour granularity (span cannot exceed 1 month), 1440: daily granularity (span cannot exceed 1 month). Default value: 5.
                     * @param _granularity Data granularity, supports the following granularities: 5: 5-minute granularity (span cannot exceed 1 day), 60: 1-hour granularity (span cannot exceed 1 month), 1440: daily granularity (span cannot exceed 1 month). Default value: 5.
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
                     * 获取Region, mapping table as follows: China Mainland: Mainland China, Asia Pacific I: Asia Pacific Region 1, Asia Pacific II: Asia Pacific Region 2, Asia Pacific III: Asia Pacific Region 3, Europe: Europe, North America: North America, South America: South America, Middle East: Middle East, Africa: Africa.
                     * @return RegionNames Region, mapping table as follows: China Mainland: Mainland China, Asia Pacific I: Asia Pacific Region 1, Asia Pacific II: Asia Pacific Region 2, Asia Pacific III: Asia Pacific Region 3, Europe: Europe, North America: North America, South America: South America, Middle East: Middle East, Africa: Africa.
                     * 
                     */
                    std::vector<std::string> GetRegionNames() const;

                    /**
                     * 设置Region, mapping table as follows: China Mainland: Mainland China, Asia Pacific I: Asia Pacific Region 1, Asia Pacific II: Asia Pacific Region 2, Asia Pacific III: Asia Pacific Region 3, Europe: Europe, North America: North America, South America: South America, Middle East: Middle East, Africa: Africa.
                     * @param _regionNames Region, mapping table as follows: China Mainland: Mainland China, Asia Pacific I: Asia Pacific Region 1, Asia Pacific II: Asia Pacific Region 2, Asia Pacific III: Asia Pacific Region 3, Europe: Europe, North America: North America, South America: South America, Middle East: Middle East, Africa: Africa.
                     * 
                     */
                    void SetRegionNames(const std::vector<std::string>& _regionNames);

                    /**
                     * 判断参数 RegionNames 是否已赋值
                     * @return RegionNames 是否已赋值
                     * 
                     */
                    bool RegionNamesHasBeenSet() const;

                    /**
                     * 获取Country, the mapping table is referenced as follows in the document: https://cloud.tencent.com/document/product/267/34019.
                     * @return CountryNames Country, the mapping table is referenced as follows in the document: https://cloud.tencent.com/document/product/267/34019.
                     * 
                     */
                    std::vector<std::string> GetCountryNames() const;

                    /**
                     * 设置Country, the mapping table is referenced as follows in the document: https://cloud.tencent.com/document/product/267/34019.
                     * @param _countryNames Country, the mapping table is referenced as follows in the document: https://cloud.tencent.com/document/product/267/34019.
                     * 
                     */
                    void SetCountryNames(const std::vector<std::string>& _countryNames);

                    /**
                     * 判断参数 CountryNames 是否已赋值
                     * @return CountryNames 是否已赋值
                     * 
                     */
                    bool CountryNamesHasBeenSet() const;

                private:

                    /**
                     * Query start time point, accurate to minute granularity. The interface query supports two time formats:

YYYY-MM-DDThh:mm:ssZ: UTC time format, refer to ISO date format descriptionfor details.

YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.

Queries for the most recent two months are supported. The span between query start and end time cannot exceed 31 days.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time point, accurate to minute granularity. The interface query supports two time formats:

YYYY-MM-DDThh:mm:ssZ: UTC time format, refer to ISO date format descriptionfor details.

YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.

Queries for the most recent two months are supported. The span between query start and end time cannot exceed 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Domain name, you can fill in multiple. If left blank, it represents the overall data.
                     */
                    std::vector<std::string> m_pushDomains;
                    bool m_pushDomainsHasBeenSet;

                    /**
                     * Optional values: Mainland: Query data for Mainland China (domestic). Oversea: Query data for international/regions such as Hong Kong, Macao, Taiwan (overseas). If left blank, it defaults to querying global data (domestic + overseas).
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                    /**
                     * Data granularity, supports the following granularities: 5: 5-minute granularity (span cannot exceed 1 day), 60: 1-hour granularity (span cannot exceed 1 month), 1440: daily granularity (span cannot exceed 1 month). Default value: 5.
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * Region, mapping table as follows: China Mainland: Mainland China, Asia Pacific I: Asia Pacific Region 1, Asia Pacific II: Asia Pacific Region 2, Asia Pacific III: Asia Pacific Region 3, Europe: Europe, North America: North America, South America: South America, Middle East: Middle East, Africa: Africa.
                     */
                    std::vector<std::string> m_regionNames;
                    bool m_regionNamesHasBeenSet;

                    /**
                     * Country, the mapping table is referenced as follows in the document: https://cloud.tencent.com/document/product/267/34019.
                     */
                    std::vector<std::string> m_countryNames;
                    bool m_countryNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPUSHBANDWIDTHANDFLUXLISTREQUEST_H_
