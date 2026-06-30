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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMARKETQUALITYDATAREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMARKETQUALITYDATAREQUEST_H_

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
                * DescribeTRTCMarketQualityData request structure.
                */
                class DescribeTRTCMarketQualityDataRequest : public AbstractModel
                {
                public:
                    DescribeTRTCMarketQualityDataRequest();
                    ~DescribeTRTCMarketQualityDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User SdkAppId (for example: 1400xxxxxx).
                     * @return SdkAppId User SdkAppId (for example: 1400xxxxxx).
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置User SdkAppId (for example: 1400xxxxxx).
                     * @param _sdkAppId User SdkAppId (for example: 1400xxxxxx).
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
                     * 获取Query start time, and the format is YYYY-MM-DD. (query time range is based on the monitoring dashboard feature version. the basic version supports querying the last 30 days, and the advanced version supports querying the last 60 days).
                     * @return StartTime Query start time, and the format is YYYY-MM-DD. (query time range is based on the monitoring dashboard feature version. the basic version supports querying the last 30 days, and the advanced version supports querying the last 60 days).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time, and the format is YYYY-MM-DD. (query time range is based on the monitoring dashboard feature version. the basic version supports querying the last 30 days, and the advanced version supports querying the last 60 days).
                     * @param _startTime Query start time, and the format is YYYY-MM-DD. (query time range is based on the monitoring dashboard feature version. the basic version supports querying the last 30 days, and the advanced version supports querying the last 60 days).
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
                     * 获取Query end time in YYYY-MM-DD format.
                     * @return EndTime Query end time in YYYY-MM-DD format.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time in YYYY-MM-DD format.
                     * @param _endTime Query end time in YYYY-MM-DD format.
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
                     * 获取The granularity of returned data supports the following values:.
d: day. at this time, return the data of UTC time at zero point within a specified time range.
h: billed hourly. at this point, return the data of full hour UTC time within a specified time range.
                     * @return Period The granularity of returned data supports the following values:.
d: day. at this time, return the data of UTC time at zero point within a specified time range.
h: billed hourly. at this point, return the data of full hour UTC time within a specified time range.
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置The granularity of returned data supports the following values:.
d: day. at this time, return the data of UTC time at zero point within a specified time range.
h: billed hourly. at this point, return the data of full hour UTC time within a specified time range.
                     * @param _period The granularity of returned data supports the following values:.
d: day. at this time, return the data of UTC time at zero point within a specified time range.
h: billed hourly. at this point, return the data of full hour UTC time within a specified time range.
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Whether the returned data is a decimal.
                     * @return IsFloat Whether the returned data is a decimal.
                     * 
                     */
                    bool GetIsFloat() const;

                    /**
                     * 设置Whether the returned data is a decimal.
                     * @param _isFloat Whether the returned data is a decimal.
                     * 
                     */
                    void SetIsFloat(const bool& _isFloat);

                    /**
                     * 判断参数 IsFloat 是否已赋值
                     * @return IsFloat 是否已赋值
                     * 
                     */
                    bool IsFloatHasBeenSet() const;

                private:

                    /**
                     * User SdkAppId (for example: 1400xxxxxx).
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Query start time, and the format is YYYY-MM-DD. (query time range is based on the monitoring dashboard feature version. the basic version supports querying the last 30 days, and the advanced version supports querying the last 60 days).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time in YYYY-MM-DD format.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The granularity of returned data supports the following values:.
d: day. at this time, return the data of UTC time at zero point within a specified time range.
h: billed hourly. at this point, return the data of full hour UTC time within a specified time range.
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Whether the returned data is a decimal.
                     */
                    bool m_isFloat;
                    bool m_isFloatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCMARKETQUALITYDATAREQUEST_H_
