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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETOTALINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETOTALINFOREQUEST_H_

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
                * DescribeLiveTranscodeTotalInfo request structure.
                */
                class DescribeLiveTranscodeTotalInfoRequest : public AbstractModel
                {
                public:
                    DescribeLiveTranscodeTotalInfoRequest();
                    ~DescribeLiveTranscodeTotalInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start time of the request, supports data query for the last three months, the gap between the start time and the end time cannot exceed three months. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format, for details, see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * @return StartTime The start time of the request, supports data query for the last three months, the gap between the start time and the end time cannot exceed three months. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format, for details, see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time of the request, supports data query for the last three months, the gap between the start time and the end time cannot exceed three months. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format, for details, see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * @param _startTime The start time of the request, supports data query for the last three months, the gap between the start time and the end time cannot exceed three months. Interface request supports two time formats:
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
                     * 获取The end time of the request, supports data query for the last three months, the gap between the start time and the end time cannot exceed three months. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format,for details,see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * @return EndTime The end time of the request, supports data query for the last three months, the gap between the start time and the end time cannot exceed three months. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format,for details,see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time of the request, supports data query for the last three months, the gap between the start time and the end time cannot exceed three months. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format,for details,see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     * @param _endTime The end time of the request, supports data query for the last three months, the gap between the start time and the end time cannot exceed three months. Interface request supports two time formats:
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
                     * 获取List of push domains to query. If this parameter is left empty, the data of all domains is queried.
If this parameter is specified, the data returned will be on an hourly basis.
                     * @return PushDomains List of push domains to query. If this parameter is left empty, the data of all domains is queried.
If this parameter is specified, the data returned will be on an hourly basis.
                     * 
                     */
                    std::vector<std::string> GetPushDomains() const;

                    /**
                     * 设置List of push domains to query. If this parameter is left empty, the data of all domains is queried.
If this parameter is specified, the data returned will be on an hourly basis.
                     * @param _pushDomains List of push domains to query. If this parameter is left empty, the data of all domains is queried.
If this parameter is specified, the data returned will be on an hourly basis.
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
                     * 获取Valid values:
`Mainland`: queries transcoding data in the Chinese mainland
`Oversea`: queries transcoding data outside the Chinese mainland
By default, the data both in and outside the Chinese mainland is queried.
                     * @return MainlandOrOversea Valid values:
`Mainland`: queries transcoding data in the Chinese mainland
`Oversea`: queries transcoding data outside the Chinese mainland
By default, the data both in and outside the Chinese mainland is queried.
                     * 
                     */
                    std::string GetMainlandOrOversea() const;

                    /**
                     * 设置Valid values:
`Mainland`: queries transcoding data in the Chinese mainland
`Oversea`: queries transcoding data outside the Chinese mainland
By default, the data both in and outside the Chinese mainland is queried.
                     * @param _mainlandOrOversea Valid values:
`Mainland`: queries transcoding data in the Chinese mainland
`Oversea`: queries transcoding data outside the Chinese mainland
By default, the data both in and outside the Chinese mainland is queried.
                     * 
                     */
                    void SetMainlandOrOversea(const std::string& _mainlandOrOversea);

                    /**
                     * 判断参数 MainlandOrOversea 是否已赋值
                     * @return MainlandOrOversea 是否已赋值
                     * 
                     */
                    bool MainlandOrOverseaHasBeenSet() const;

                private:

                    /**
                     * The start time of the request, supports data query for the last three months, the gap between the start time and the end time cannot exceed three months. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format, for details, see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time of the request, supports data query for the last three months, the gap between the start time and the end time cannot exceed three months. Interface request supports two time formats:
1) YYYY-MM-DDThh:mm:ssZ: ISO time format,for details,see [ISO Date Format Description](https://cloud.tencent.com/document/product/267/38543#:~:text=I- ,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)
2) YYYY-MM-DD hh:mm:ss: When using this format, it represents Beijing time by default.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * List of push domains to query. If this parameter is left empty, the data of all domains is queried.
If this parameter is specified, the data returned will be on an hourly basis.
                     */
                    std::vector<std::string> m_pushDomains;
                    bool m_pushDomainsHasBeenSet;

                    /**
                     * Valid values:
`Mainland`: queries transcoding data in the Chinese mainland
`Oversea`: queries transcoding data outside the Chinese mainland
By default, the data both in and outside the Chinese mainland is queried.
                     */
                    std::string m_mainlandOrOversea;
                    bool m_mainlandOrOverseaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODETOTALINFOREQUEST_H_
