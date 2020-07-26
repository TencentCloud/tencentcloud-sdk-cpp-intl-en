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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCREENSHOTSHEETNUMLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCREENSHOTSHEETNUMLISTREQUEST_H_

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
                * DescribeScreenShotSheetNumList request structure.
                */
                class DescribeScreenShotSheetNumListRequest : public AbstractModel
                {
                public:
                    DescribeScreenShotSheetNumListRequest();
                    ~DescribeScreenShotSheetNumListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time in UTC time in the format of `yyyy-mm-ddTHH:MM:SSZ`.
                     * @return StartTime Start time in UTC time in the format of `yyyy-mm-ddTHH:MM:SSZ`.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in UTC time in the format of `yyyy-mm-ddTHH:MM:SSZ`.
                     * @param StartTime Start time in UTC time in the format of `yyyy-mm-ddTHH:MM:SSZ`.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time in UTC time in the format of `yyyy-mm-ddTHH:MM:SSZ`. Data for the last year can be queried.
                     * @return EndTime End time in UTC time in the format of `yyyy-mm-ddTHH:MM:SSZ`. Data for the last year can be queried.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in UTC time in the format of `yyyy-mm-ddTHH:MM:SSZ`. Data for the last year can be queried.
                     * @param EndTime End time in UTC time in the format of `yyyy-mm-ddTHH:MM:SSZ`. Data for the last year can be queried.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Region information. Valid values: Mainland, Oversea. The former is to query data within Mainland China, while the latter outside Mainland China. If this parameter is left empty, data of all regions will be queried.
                     * @return Zone Region information. Valid values: Mainland, Oversea. The former is to query data within Mainland China, while the latter outside Mainland China. If this parameter is left empty, data of all regions will be queried.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region information. Valid values: Mainland, Oversea. The former is to query data within Mainland China, while the latter outside Mainland China. If this parameter is left empty, data of all regions will be queried.
                     * @param Zone Region information. Valid values: Mainland, Oversea. The former is to query data within Mainland China, while the latter outside Mainland China. If this parameter is left empty, data of all regions will be queried.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Push domain name (data at the domain name level after November 1, 2019 can be queried).
                     * @return PushDomains Push domain name (data at the domain name level after November 1, 2019 can be queried).
                     */
                    std::vector<std::string> GetPushDomains() const;

                    /**
                     * 设置Push domain name (data at the domain name level after November 1, 2019 can be queried).
                     * @param PushDomains Push domain name (data at the domain name level after November 1, 2019 can be queried).
                     */
                    void SetPushDomains(const std::vector<std::string>& _pushDomains);

                    /**
                     * 判断参数 PushDomains 是否已赋值
                     * @return PushDomains 是否已赋值
                     */
                    bool PushDomainsHasBeenSet() const;

                    /**
                     * 获取Data dimension. The data has a delay of one and a half hours. Valid values: 1. Minute (5-minute granularity, which supports a maximum query time range of 31 days); 2. Day (1-day granularity, which is the default value and supports a maximum query time range of 186 days).
                     * @return Granularity Data dimension. The data has a delay of one and a half hours. Valid values: 1. Minute (5-minute granularity, which supports a maximum query time range of 31 days); 2. Day (1-day granularity, which is the default value and supports a maximum query time range of 186 days).
                     */
                    std::string GetGranularity() const;

                    /**
                     * 设置Data dimension. The data has a delay of one and a half hours. Valid values: 1. Minute (5-minute granularity, which supports a maximum query time range of 31 days); 2. Day (1-day granularity, which is the default value and supports a maximum query time range of 186 days).
                     * @param Granularity Data dimension. The data has a delay of one and a half hours. Valid values: 1. Minute (5-minute granularity, which supports a maximum query time range of 31 days); 2. Day (1-day granularity, which is the default value and supports a maximum query time range of 186 days).
                     */
                    void SetGranularity(const std::string& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     */
                    bool GranularityHasBeenSet() const;

                private:

                    /**
                     * Start time in UTC time in the format of `yyyy-mm-ddTHH:MM:SSZ`.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in UTC time in the format of `yyyy-mm-ddTHH:MM:SSZ`. Data for the last year can be queried.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Region information. Valid values: Mainland, Oversea. The former is to query data within Mainland China, while the latter outside Mainland China. If this parameter is left empty, data of all regions will be queried.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Push domain name (data at the domain name level after November 1, 2019 can be queried).
                     */
                    std::vector<std::string> m_pushDomains;
                    bool m_pushDomainsHasBeenSet;

                    /**
                     * Data dimension. The data has a delay of one and a half hours. Valid values: 1. Minute (5-minute granularity, which supports a maximum query time range of 31 days); 2. Day (1-day granularity, which is the default value and supports a maximum query time range of 186 days).
                     */
                    std::string m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCREENSHOTSHEETNUMLISTREQUEST_H_
