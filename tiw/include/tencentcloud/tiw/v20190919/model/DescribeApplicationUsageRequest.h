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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPPLICATIONUSAGEREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPPLICATIONUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeApplicationUsage request structure.
                */
                class DescribeApplicationUsageRequest : public AbstractModel
                {
                public:
                    DescribeApplicationUsageRequest();
                    ~DescribeApplicationUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of the query period. The start time point is included in the query period.
                     * @return BeginTime Start time of the query period. The start time point is included in the query period.
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time of the query period. The start time point is included in the query period.
                     * @param BeginTime Start time of the query period. The start time point is included in the query period.
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time of the query period. The end time point is not included in the query period.
                     * @return EndTime End time of the query period. The end time point is not included in the query period.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the query period. The end time point is not included in the query period.
                     * @param EndTime End time of the query period. The end time point is not included in the query period.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Subproduct name.
                     * @return SubProduct Subproduct name.
                     */
                    std::string GetSubProduct() const;

                    /**
                     * 设置Subproduct name.
                     * @param SubProduct Subproduct name.
                     */
                    void SetSubProduct(const std::string& _subProduct);

                    /**
                     * 判断参数 SubProduct 是否已赋值
                     * @return SubProduct 是否已赋值
                     */
                    bool SubProductHasBeenSet() const;

                    /**
                     * 获取Unit of time increment.
- MONTHLY: month
- DAILY: day
- MINUTELY: minute
                     * @return TimeLevel Unit of time increment.
- MONTHLY: month
- DAILY: day
- MINUTELY: minute
                     */
                    std::string GetTimeLevel() const;

                    /**
                     * 设置Unit of time increment.
- MONTHLY: month
- DAILY: day
- MINUTELY: minute
                     * @param TimeLevel Unit of time increment.
- MONTHLY: month
- DAILY: day
- MINUTELY: minute
                     */
                    void SetTimeLevel(const std::string& _timeLevel);

                    /**
                     * 判断参数 TimeLevel 是否已赋值
                     * @return TimeLevel 是否已赋值
                     */
                    bool TimeLevelHasBeenSet() const;

                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param SdkAppId SdkAppId of the whiteboard application.
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取true: Returns the weighted sum of raw usage data.
false: Returns the raw usage data.
                     * @return IsWeighted true: Returns the weighted sum of raw usage data.
false: Returns the raw usage data.
                     */
                    bool GetIsWeighted() const;

                    /**
                     * 设置true: Returns the weighted sum of raw usage data.
false: Returns the raw usage data.
                     * @param IsWeighted true: Returns the weighted sum of raw usage data.
false: Returns the raw usage data.
                     */
                    void SetIsWeighted(const bool& _isWeighted);

                    /**
                     * 判断参数 IsWeighted 是否已赋值
                     * @return IsWeighted 是否已赋值
                     */
                    bool IsWeightedHasBeenSet() const;

                private:

                    /**
                     * Start time of the query period. The start time point is included in the query period.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time of the query period. The end time point is not included in the query period.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Subproduct name.
                     */
                    std::string m_subProduct;
                    bool m_subProductHasBeenSet;

                    /**
                     * Unit of time increment.
- MONTHLY: month
- DAILY: day
- MINUTELY: minute
                     */
                    std::string m_timeLevel;
                    bool m_timeLevelHasBeenSet;

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * true: Returns the weighted sum of raw usage data.
false: Returns the raw usage data.
                     */
                    bool m_isWeighted;
                    bool m_isWeightedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPPLICATIONUSAGEREQUEST_H_
