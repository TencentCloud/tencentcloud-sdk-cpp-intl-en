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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWDAILYUSAGEREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWDAILYUSAGEREQUEST_H_

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
                * DescribeTIWDailyUsage request structure.
                */
                class DescribeTIWDailyUsageRequest : public AbstractModel
                {
                public:
                    DescribeTIWDailyUsageRequest();
                    ~DescribeTIWDailyUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param _sdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Subproduct usage to be queried. The following parameters are supported:
- sp_tiw_board: The duration of use of whiteboards, in minutes.
- sp_tiw_dt: The number of pages dynamically transcoded.
- sp_tiw_st: The number of pages statically transcoded.
- sp_tiw_ric: The duration of real-time recording, in minutes.

Note: Dynamic transcoding multiplies the number of pages of a document by eight times. Static transcoding does not change the number of pages of a document.
                     * @return SubProduct Subproduct usage to be queried. The following parameters are supported:
- sp_tiw_board: The duration of use of whiteboards, in minutes.
- sp_tiw_dt: The number of pages dynamically transcoded.
- sp_tiw_st: The number of pages statically transcoded.
- sp_tiw_ric: The duration of real-time recording, in minutes.

Note: Dynamic transcoding multiplies the number of pages of a document by eight times. Static transcoding does not change the number of pages of a document.
                     * 
                     */
                    std::string GetSubProduct() const;

                    /**
                     * 设置Subproduct usage to be queried. The following parameters are supported:
- sp_tiw_board: The duration of use of whiteboards, in minutes.
- sp_tiw_dt: The number of pages dynamically transcoded.
- sp_tiw_st: The number of pages statically transcoded.
- sp_tiw_ric: The duration of real-time recording, in minutes.

Note: Dynamic transcoding multiplies the number of pages of a document by eight times. Static transcoding does not change the number of pages of a document.
                     * @param _subProduct Subproduct usage to be queried. The following parameters are supported:
- sp_tiw_board: The duration of use of whiteboards, in minutes.
- sp_tiw_dt: The number of pages dynamically transcoded.
- sp_tiw_st: The number of pages statically transcoded.
- sp_tiw_ric: The duration of real-time recording, in minutes.

Note: Dynamic transcoding multiplies the number of pages of a document by eight times. Static transcoding does not change the number of pages of a document.
                     * 
                     */
                    void SetSubProduct(const std::string& _subProduct);

                    /**
                     * 判断参数 SubProduct 是否已赋值
                     * @return SubProduct 是否已赋值
                     * 
                     */
                    bool SubProductHasBeenSet() const;

                    /**
                     * 获取Start date in the format of YYYY-MM-DD. The start date is included in the query period.
                     * @return StartTime Start date in the format of YYYY-MM-DD. The start date is included in the query period.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start date in the format of YYYY-MM-DD. The start date is included in the query period.
                     * @param _startTime Start date in the format of YYYY-MM-DD. The start date is included in the query period.
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
                     * 获取End date in the format of YYYY-MM-DD. The end date is included in the query period. The period queried per request cannot be longer than 31 days.
                     * @return EndTime End date in the format of YYYY-MM-DD. The end date is included in the query period. The period queried per request cannot be longer than 31 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End date in the format of YYYY-MM-DD. The end date is included in the query period. The period queried per request cannot be longer than 31 days.
                     * @param _endTime End date in the format of YYYY-MM-DD. The end date is included in the query period. The period queried per request cannot be longer than 31 days.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Subproduct usage to be queried. The following parameters are supported:
- sp_tiw_board: The duration of use of whiteboards, in minutes.
- sp_tiw_dt: The number of pages dynamically transcoded.
- sp_tiw_st: The number of pages statically transcoded.
- sp_tiw_ric: The duration of real-time recording, in minutes.

Note: Dynamic transcoding multiplies the number of pages of a document by eight times. Static transcoding does not change the number of pages of a document.
                     */
                    std::string m_subProduct;
                    bool m_subProductHasBeenSet;

                    /**
                     * Start date in the format of YYYY-MM-DD. The start date is included in the query period.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End date in the format of YYYY-MM-DD. The end date is included in the query period. The period queried per request cannot be longer than 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETIWDAILYUSAGEREQUEST_H_
