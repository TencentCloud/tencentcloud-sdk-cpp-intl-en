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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMARKETSCALEDATAREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMARKETSCALEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeTRTCMarketScaleData request structure.
                */
                class DescribeTRTCMarketScaleDataRequest : public AbstractModel
                {
                public:
                    DescribeTRTCMarketScaleDataRequest();
                    ~DescribeTRTCMarketScaleDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User SDKAppId
                     * @return SdkAppId User SDKAppId
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置User SDKAppId
                     * @param _sdkAppId User SDKAppId
                     * 
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Query start time, format is YYYY-MM-DD. (The query time range depends on the monitoring dashboard function version, the premium edition can query up to 60 days)
                     * @return StartTime Query start time, format is YYYY-MM-DD. (The query time range depends on the monitoring dashboard function version, the premium edition can query up to 60 days)
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time, format is YYYY-MM-DD. (The query time range depends on the monitoring dashboard function version, the premium edition can query up to 60 days)
                     * @param _startTime Query start time, format is YYYY-MM-DD. (The query time range depends on the monitoring dashboard function version, the premium edition can query up to 60 days)
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
                     * 获取Query end time, format is YYYY-MM-DD.
                     * @return EndTime Query end time, format is YYYY-MM-DD.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time, format is YYYY-MM-DD.
                     * @param _endTime Query end time, format is YYYY-MM-DD.
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
                     * 获取The granularity of the returned data, which can be set to the following values:
 d: by day. This returns data for the entire UTC day of the query time range.
 h: by hour. This returns data for the entire UTC hour of the query time range.
                     * @return Period The granularity of the returned data, which can be set to the following values:
 d: by day. This returns data for the entire UTC day of the query time range.
 h: by hour. This returns data for the entire UTC hour of the query time range.
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置The granularity of the returned data, which can be set to the following values:
 d: by day. This returns data for the entire UTC day of the query time range.
 h: by hour. This returns data for the entire UTC hour of the query time range.
                     * @param _period The granularity of the returned data, which can be set to the following values:
 d: by day. This returns data for the entire UTC day of the query time range.
 h: by hour. This returns data for the entire UTC hour of the query time range.
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * User SDKAppId
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Query start time, format is YYYY-MM-DD. (The query time range depends on the monitoring dashboard function version, the premium edition can query up to 60 days)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time, format is YYYY-MM-DD.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The granularity of the returned data, which can be set to the following values:
 d: by day. This returns data for the entire UTC day of the query time range.
 h: by hour. This returns data for the entire UTC hour of the query time range.
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMARKETSCALEDATAREQUEST_H_
