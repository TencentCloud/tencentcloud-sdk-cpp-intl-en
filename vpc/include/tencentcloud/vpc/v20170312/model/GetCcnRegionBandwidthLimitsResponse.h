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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_GETCCNREGIONBANDWIDTHLIMITSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_GETCCNREGIONBANDWIDTHLIMITSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnBandwidthInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * GetCcnRegionBandwidthLimits response structure.
                */
                class GetCcnRegionBandwidthLimitsResponse : public AbstractModel
                {
                public:
                    GetCcnRegionBandwidthLimitsResponse();
                    ~GetCcnRegionBandwidthLimitsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The outbound bandwidth limits of regions in a CCN instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CcnBandwidthSet The outbound bandwidth limits of regions in a CCN instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CcnBandwidthInfo> GetCcnBandwidthSet() const;

                    /**
                     * 判断参数 CcnBandwidthSet 是否已赋值
                     * @return CcnBandwidthSet 是否已赋值
                     * 
                     */
                    bool CcnBandwidthSetHasBeenSet() const;

                    /**
                     * 获取The number of eligible objects.
Note: this field may return null, indicating that no valid value was found.
                     * @return TotalCount The number of eligible objects.
Note: this field may return null, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * The outbound bandwidth limits of regions in a CCN instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CcnBandwidthInfo> m_ccnBandwidthSet;
                    bool m_ccnBandwidthSetHasBeenSet;

                    /**
                     * The number of eligible objects.
Note: this field may return null, indicating that no valid value was found.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_GETCCNREGIONBANDWIDTHLIMITSRESPONSE_H_
