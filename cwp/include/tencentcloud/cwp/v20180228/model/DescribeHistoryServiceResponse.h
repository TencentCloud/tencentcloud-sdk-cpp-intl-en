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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHISTORYSERVICERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHISTORYSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeHistoryService response structure.
                */
                class DescribeHistoryServiceResponse : public AbstractModel
                {
                public:
                    DescribeHistoryServiceResponse();
                    ~DescribeHistoryServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取1: available for purchase; 2: specification adjustment only; 3: redirection to renewal management page only.
                     * @return BuyStatus 1: available for purchase; 2: specification adjustment only; 3: redirection to renewal management page only.
                     * 
                     */
                    uint64_t GetBuyStatus() const;

                    /**
                     * 判断参数 BuyStatus 是否已赋值
                     * @return BuyStatus 是否已赋值
                     * 
                     */
                    bool BuyStatusHasBeenSet() const;

                    /**
                     * 获取Capacity purchased by the user, in GB
                     * @return InquireNum Capacity purchased by the user, in GB
                     * 
                     */
                    uint64_t GetInquireNum() const;

                    /**
                     * 判断参数 InquireNum 是否已赋值
                     * @return InquireNum 是否已赋值
                     * 
                     */
                    bool InquireNumHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return EndTime Expiration time
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
                     * 获取Whether automatic renewal is enabled. 0: initial value; 1: enabled; 2: disabled.
                     * @return IsAutoOpenRenew Whether automatic renewal is enabled. 0: initial value; 1: enabled; 2: disabled.
                     * 
                     */
                    uint64_t GetIsAutoOpenRenew() const;

                    /**
                     * 判断参数 IsAutoOpenRenew 是否已赋值
                     * @return IsAutoOpenRenew 是否已赋值
                     * 
                     */
                    bool IsAutoOpenRenewHasBeenSet() const;

                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取0: not activated; 1: normal; 2: isolated; 3: terminated.
                     * @return Status 0: not activated; 1: normal; 2: isolated; 3: terminated.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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

                private:

                    /**
                     * 1: available for purchase; 2: specification adjustment only; 3: redirection to renewal management page only.
                     */
                    uint64_t m_buyStatus;
                    bool m_buyStatusHasBeenSet;

                    /**
                     * Capacity purchased by the user, in GB
                     */
                    uint64_t m_inquireNum;
                    bool m_inquireNumHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Whether automatic renewal is enabled. 0: initial value; 1: enabled; 2: disabled.
                     */
                    uint64_t m_isAutoOpenRenew;
                    bool m_isAutoOpenRenewHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 0: not activated; 1: normal; 2: isolated; 3: terminated.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHISTORYSERVICERESPONSE_H_
