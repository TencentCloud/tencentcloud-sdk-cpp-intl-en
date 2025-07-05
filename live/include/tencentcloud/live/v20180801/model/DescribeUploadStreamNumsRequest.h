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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEUPLOADSTREAMNUMSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEUPLOADSTREAMNUMSREQUEST_H_

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
                * DescribeUploadStreamNums request structure.
                */
                class DescribeUploadStreamNumsRequest : public AbstractModel
                {
                public:
                    DescribeUploadStreamNumsRequest();
                    ~DescribeUploadStreamNumsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start time of the request, supports data query for the last one month, the gap between the start time and the end time cannot exceed one month. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format, for details, see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * @return StartTime The start time of the request, supports data query for the last one month, the gap between the start time and the end time cannot exceed one month. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format, for details, see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time of the request, supports data query for the last one month, the gap between the start time and the end time cannot exceed one month. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format, for details, see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * @param _startTime The start time of the request, supports data query for the last one month, the gap between the start time and the end time cannot exceed one month. Interface request supports two time formats:
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
                     * 获取The end time of the request, supports data query for the last one month, the gap between the start time and the end time cannot exceed one month. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format,for details,see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * @return EndTime The end time of the request, supports data query for the last one month, the gap between the start time and the end time cannot exceed one month. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format,for details,see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time of the request, supports data query for the last one month, the gap between the start time and the end time cannot exceed one month. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format,for details,see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * @param _endTime The end time of the request, supports data query for the last one month, the gap between the start time and the end time cannot exceed one month. Interface request supports two time formats:
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
                     * 获取LVB domain names. If this parameter is left empty, data of all domain names will be queried.
                     * @return Domains LVB domain names. If this parameter is left empty, data of all domain names will be queried.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置LVB domain names. If this parameter is left empty, data of all domain names will be queried.
                     * @param _domains LVB domain names. If this parameter is left empty, data of all domain names will be queried.
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Time granularity of the data. Valid values:
5: 5-minute granularity (the query period is up to 1 day)
1440: 1-day granularity (the query period is up to 1 month)
Default value: 5
                     * @return Granularity Time granularity of the data. Valid values:
5: 5-minute granularity (the query period is up to 1 day)
1440: 1-day granularity (the query period is up to 1 month)
Default value: 5
                     * 
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置Time granularity of the data. Valid values:
5: 5-minute granularity (the query period is up to 1 day)
1440: 1-day granularity (the query period is up to 1 month)
Default value: 5
                     * @param _granularity Time granularity of the data. Valid values:
5: 5-minute granularity (the query period is up to 1 day)
1440: 1-day granularity (the query period is up to 1 month)
Default value: 5
                     * 
                     */
                    void SetGranularity(const uint64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                private:

                    /**
                     * The start time of the request, supports data query for the last one month, the gap between the start time and the end time cannot exceed one month. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format, for details, see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time of the request, supports data query for the last one month, the gap between the start time and the end time cannot exceed one month. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format,for details,see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * LVB domain names. If this parameter is left empty, data of all domain names will be queried.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Time granularity of the data. Valid values:
5: 5-minute granularity (the query period is up to 1 day)
1440: 1-day granularity (the query period is up to 1 month)
Default value: 5
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEUPLOADSTREAMNUMSREQUEST_H_
