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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGVASINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGVASINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeSecLogVasInfo response structure.
                */
                class DescribeSecLogVasInfoResponse : public AbstractModel
                {
                public:
                    DescribeSecLogVasInfoResponse();
                    ~DescribeSecLogVasInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Purchase status
`Pending`: To be purchased.
`Normal`: Purchased.
`Isolate`: Isolated.
                     * @return BuyStatus Purchase status
`Pending`: To be purchased.
`Normal`: Purchased.
`Isolate`: Isolated.
                     * 
                     */
                    std::string GetBuyStatus() const;

                    /**
                     * 判断参数 BuyStatus 是否已赋值
                     * @return BuyStatus 是否已赋值
                     * 
                     */
                    bool BuyStatusHasBeenSet() const;

                    /**
                     * 获取Storage period in months
                     * @return LogSaveMonth Storage period in months
                     * 
                     */
                    int64_t GetLogSaveMonth() const;

                    /**
                     * 判断参数 LogSaveMonth 是否已赋值
                     * @return LogSaveMonth 是否已赋值
                     * 
                     */
                    bool LogSaveMonthHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Storage capacity (GB)
                     * @return LogCapacity Storage capacity (GB)
                     * 
                     */
                    uint64_t GetLogCapacity() const;

                    /**
                     * 判断参数 LogCapacity 是否已赋值
                     * @return LogCapacity 是否已赋值
                     * 
                     */
                    bool LogCapacityHasBeenSet() const;

                    /**
                     * 获取Resource ID
                     * @return ResourceID Resource ID
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取Whether it has been purchased before. Valid values: `false` (no); `true` (yes).
                     * @return IsPurchased Whether it has been purchased before. Valid values: `false` (no); `true` (yes).
                     * 
                     */
                    bool GetIsPurchased() const;

                    /**
                     * 判断参数 IsPurchased 是否已赋值
                     * @return IsPurchased 是否已赋值
                     * 
                     */
                    bool IsPurchasedHasBeenSet() const;

                    /**
                     * 获取Trial storage capacity (GB)
                     * @return TrialCapacity Trial storage capacity (GB)
                     * 
                     */
                    uint64_t GetTrialCapacity() const;

                    /**
                     * 判断参数 TrialCapacity 是否已赋值
                     * @return TrialCapacity 是否已赋值
                     * 
                     */
                    bool TrialCapacityHasBeenSet() const;

                private:

                    /**
                     * Purchase status
`Pending`: To be purchased.
`Normal`: Purchased.
`Isolate`: Isolated.
                     */
                    std::string m_buyStatus;
                    bool m_buyStatusHasBeenSet;

                    /**
                     * Storage period in months
                     */
                    int64_t m_logSaveMonth;
                    bool m_logSaveMonthHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Storage capacity (GB)
                     */
                    uint64_t m_logCapacity;
                    bool m_logCapacityHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * Whether it has been purchased before. Valid values: `false` (no); `true` (yes).
                     */
                    bool m_isPurchased;
                    bool m_isPurchasedHasBeenSet;

                    /**
                     * Trial storage capacity (GB)
                     */
                    uint64_t m_trialCapacity;
                    bool m_trialCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGVASINFORESPONSE_H_
