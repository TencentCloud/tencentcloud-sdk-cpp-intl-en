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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYCCNREGIONBANDWIDTHLIMITSTYPEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYCCNREGIONBANDWIDTHLIMITSTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyCcnRegionBandwidthLimitsType request structure.
                */
                class ModifyCcnRegionBandwidthLimitsTypeRequest : public AbstractModel
                {
                public:
                    ModifyCcnRegionBandwidthLimitsTypeRequest();
                    ~ModifyCcnRegionBandwidthLimitsTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CCN instance ID.
                     * @return CcnId CCN instance ID.
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置CCN instance ID.
                     * @param _ccnId CCN instance ID.
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取CCN bandwidth limit type. INTER_REGION_LIMIT: limit between regions. OUTER_REGION_LIMIT: region egress limit.
                     * @return BandwidthLimitType CCN bandwidth limit type. INTER_REGION_LIMIT: limit between regions. OUTER_REGION_LIMIT: region egress limit.
                     * 
                     */
                    std::string GetBandwidthLimitType() const;

                    /**
                     * 设置CCN bandwidth limit type. INTER_REGION_LIMIT: limit between regions. OUTER_REGION_LIMIT: region egress limit.
                     * @param _bandwidthLimitType CCN bandwidth limit type. INTER_REGION_LIMIT: limit between regions. OUTER_REGION_LIMIT: region egress limit.
                     * 
                     */
                    void SetBandwidthLimitType(const std::string& _bandwidthLimitType);

                    /**
                     * 判断参数 BandwidthLimitType 是否已赋值
                     * @return BandwidthLimitType 是否已赋值
                     * 
                     */
                    bool BandwidthLimitTypeHasBeenSet() const;

                private:

                    /**
                     * CCN instance ID.
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * CCN bandwidth limit type. INTER_REGION_LIMIT: limit between regions. OUTER_REGION_LIMIT: region egress limit.
                     */
                    std::string m_bandwidthLimitType;
                    bool m_bandwidthLimitTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYCCNREGIONBANDWIDTHLIMITSTYPEREQUEST_H_
