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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPSTATISTICSREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeAppStatistics request structure.
                */
                class DescribeAppStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeAppStatisticsRequest();
                    ~DescribeAppStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取GME application ID
                     * @return BizId GME application ID
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置GME application ID
                     * @param _bizId GME application ID
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取Data start date (GMT+8) in the format of yyyy-mm-dd, such as 2018-07-13.
                     * @return StartDate Data start date (GMT+8) in the format of yyyy-mm-dd, such as 2018-07-13.
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置Data start date (GMT+8) in the format of yyyy-mm-dd, such as 2018-07-13.
                     * @param _startDate Data start date (GMT+8) in the format of yyyy-mm-dd, such as 2018-07-13.
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取Data end date (GMT+8) in the format of yyyy-mm-dd, such as 2018-07-13.
                     * @return EndDate Data end date (GMT+8) in the format of yyyy-mm-dd, such as 2018-07-13.
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置Data end date (GMT+8) in the format of yyyy-mm-dd, such as 2018-07-13.
                     * @param _endDate Data end date (GMT+8) in the format of yyyy-mm-dd, such as 2018-07-13.
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取List of services to be queried. Valid values: `RealTimeSpeech`, `VoiceMessage`, `VoiceFilter`, `SpeechToText`.
                     * @return Services List of services to be queried. Valid values: `RealTimeSpeech`, `VoiceMessage`, `VoiceFilter`, `SpeechToText`.
                     * 
                     */
                    std::vector<std::string> GetServices() const;

                    /**
                     * 设置List of services to be queried. Valid values: `RealTimeSpeech`, `VoiceMessage`, `VoiceFilter`, `SpeechToText`.
                     * @param _services List of services to be queried. Valid values: `RealTimeSpeech`, `VoiceMessage`, `VoiceFilter`, `SpeechToText`.
                     * 
                     */
                    void SetServices(const std::vector<std::string>& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                private:

                    /**
                     * GME application ID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * Data start date (GMT+8) in the format of yyyy-mm-dd, such as 2018-07-13.
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * Data end date (GMT+8) in the format of yyyy-mm-dd, such as 2018-07-13.
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * List of services to be queried. Valid values: `RealTimeSpeech`, `VoiceMessage`, `VoiceFilter`, `SpeechToText`.
                     */
                    std::vector<std::string> m_services;
                    bool m_servicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPSTATISTICSREQUEST_H_
