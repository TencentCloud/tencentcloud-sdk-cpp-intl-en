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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPROVERSIONINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPROVERSIONINFORESPONSE_H_

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
                * DescribeProVersionInfo response structure.
                */
                class DescribeProVersionInfoResponse : public AbstractModel
                {
                public:
                    DescribeProVersionInfoResponse();
                    ~DescribeProVersionInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of the Pro Edition, which is not empty only when the edition is purchased.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start time of the Pro Edition, which is not empty only when the edition is purchased.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取End time of the Pro Edition, which is not empty only when more resources are purchased.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime End time of the Pro Edition, which is not empty only when more resources are purchased.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of cores to be purchased
                     * @return CoresCnt Number of cores to be purchased
                     * 
                     */
                    uint64_t GetCoresCnt() const;

                    /**
                     * 判断参数 CoresCnt 是否已赋值
                     * @return CoresCnt 是否已赋值
                     * 
                     */
                    bool CoresCntHasBeenSet() const;

                    /**
                     * 获取Upper limit for elastic billing
                     * @return MaxPostPayCoresCnt Upper limit for elastic billing
                     * 
                     */
                    uint64_t GetMaxPostPayCoresCnt() const;

                    /**
                     * 判断参数 MaxPostPayCoresCnt 是否已赋值
                     * @return MaxPostPayCoresCnt 是否已赋值
                     * 
                     */
                    bool MaxPostPayCoresCntHasBeenSet() const;

                    /**
                     * 获取Resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceId Resource ID
Note: This field may return null, indicating that no valid values can be obtained.
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

                private:

                    /**
                     * Start time of the Pro Edition, which is not empty only when the edition is purchased.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the Pro Edition, which is not empty only when more resources are purchased.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Number of cores to be purchased
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                    /**
                     * Upper limit for elastic billing
                     */
                    uint64_t m_maxPostPayCoresCnt;
                    bool m_maxPostPayCoresCntHasBeenSet;

                    /**
                     * Resource ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Purchase status
`Pending`: To be purchased.
`Normal`: Purchased.
`Isolate`: Isolated.
                     */
                    std::string m_buyStatus;
                    bool m_buyStatusHasBeenSet;

                    /**
                     * Whether it has been purchased before. Valid values: `false` (no); `true` (yes).
                     */
                    bool m_isPurchased;
                    bool m_isPurchasedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPROVERSIONINFORESPONSE_H_
