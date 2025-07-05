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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPLAYERRORCODESUMINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPLAYERRORCODESUMINFOLISTREQUEST_H_

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
                * DescribePlayErrorCodeSumInfoList request structure.
                */
                class DescribePlayErrorCodeSumInfoListRequest : public AbstractModel
                {
                public:
                    DescribePlayErrorCodeSumInfoListRequest();
                    ~DescribePlayErrorCodeSumInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start time of the request, supports data query for the last one day, the gap between the start time and the end time cannot exceed one day. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format, for details, see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * @return StartTime The start time of the request, supports data query for the last one day, the gap between the start time and the end time cannot exceed one day. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format, for details, see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time of the request, supports data query for the last one day, the gap between the start time and the end time cannot exceed one day. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format, for details, see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * @param _startTime The start time of the request, supports data query for the last one day, the gap between the start time and the end time cannot exceed one day. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format, for details, see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
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
                     * 获取The end time of the request, supports data query for the last one day, the gap between the start time and the end time cannot exceed one day. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format,for details,see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * @return EndTime The end time of the request, supports data query for the last one day, the gap between the start time and the end time cannot exceed one day. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format,for details,see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time of the request, supports data query for the last one day, the gap between the start time and the end time cannot exceed one day. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format,for details,see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * @param _endTime The end time of the request, supports data query for the last one day, the gap between the start time and the end time cannot exceed one day. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format,for details,see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
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
                     * 获取Playback domain name list. If this parameter is left empty, full data will be queried.
                     * @return PlayDomains Playback domain name list. If this parameter is left empty, full data will be queried.
                     * 
                     */
                    std::vector<std::string> GetPlayDomains() const;

                    /**
                     * 设置Playback domain name list. If this parameter is left empty, full data will be queried.
                     * @param _playDomains Playback domain name list. If this parameter is left empty, full data will be queried.
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
                     * 获取Number of pages. Value range: [1,1000]. Default value: 1.
                     * @return PageNum Number of pages. Value range: [1,1000]. Default value: 1.
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Number of pages. Value range: [1,1000]. Default value: 1.
                     * @param _pageNum Number of pages. Value range: [1,1000]. Default value: 1.
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Value range: [1,1000]. Default value: 20.
                     * @return PageSize Number of entries per page. Value range: [1,1000]. Default value: 20.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page. Value range: [1,1000]. Default value: 20.
                     * @param _pageSize Number of entries per page. Value range: [1,1000]. Default value: 20.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

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
                     * 获取Grouping parameter. Valid values: CountryProIsp (default value), Country (country/region). Grouping is made by country/region + district + ISP by default. Currently, districts and ISPs outside Mainland China cannot be recognized.
                     * @return GroupType Grouping parameter. Valid values: CountryProIsp (default value), Country (country/region). Grouping is made by country/region + district + ISP by default. Currently, districts and ISPs outside Mainland China cannot be recognized.
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置Grouping parameter. Valid values: CountryProIsp (default value), Country (country/region). Grouping is made by country/region + district + ISP by default. Currently, districts and ISPs outside Mainland China cannot be recognized.
                     * @param _groupType Grouping parameter. Valid values: CountryProIsp (default value), Country (country/region). Grouping is made by country/region + district + ISP by default. Currently, districts and ISPs outside Mainland China cannot be recognized.
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取Language used in the output field. Valid values: Chinese (default), English. Currently, country/region, district, and ISP parameters support multiple languages.
                     * @return OutLanguage Language used in the output field. Valid values: Chinese (default), English. Currently, country/region, district, and ISP parameters support multiple languages.
                     * 
                     */
                    std::string GetOutLanguage() const;

                    /**
                     * 设置Language used in the output field. Valid values: Chinese (default), English. Currently, country/region, district, and ISP parameters support multiple languages.
                     * @param _outLanguage Language used in the output field. Valid values: Chinese (default), English. Currently, country/region, district, and ISP parameters support multiple languages.
                     * 
                     */
                    void SetOutLanguage(const std::string& _outLanguage);

                    /**
                     * 判断参数 OutLanguage 是否已赋值
                     * @return OutLanguage 是否已赋值
                     * 
                     */
                    bool OutLanguageHasBeenSet() const;

                private:

                    /**
                     * The start time of the request, supports data query for the last one day, the gap between the start time and the end time cannot exceed one day. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format, for details, see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time of the request, supports data query for the last one day, the gap between the start time and the end time cannot exceed one day. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format,for details,see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Playback domain name list. If this parameter is left empty, full data will be queried.
                     */
                    std::vector<std::string> m_playDomains;
                    bool m_playDomainsHasBeenSet;

                    /**
                     * Number of pages. Value range: [1,1000]. Default value: 1.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of entries per page. Value range: [1,1000]. Default value: 20.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Region. Valid values: Mainland (data for Mainland China), Oversea (data for regions outside Mainland China), China (data for China, including Hong Kong, Macao, and Taiwan), Foreign (data for regions outside China, excluding Hong Kong, Macao, and Taiwan), Global (default). If this parameter is left empty, data for all regions will be queried.
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                    /**
                     * Grouping parameter. Valid values: CountryProIsp (default value), Country (country/region). Grouping is made by country/region + district + ISP by default. Currently, districts and ISPs outside Mainland China cannot be recognized.
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * Language used in the output field. Valid values: Chinese (default), English. Currently, country/region, district, and ISP parameters support multiple languages.
                     */
                    std::string m_outLanguage;
                    bool m_outLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPLAYERRORCODESUMINFOLISTREQUEST_H_
