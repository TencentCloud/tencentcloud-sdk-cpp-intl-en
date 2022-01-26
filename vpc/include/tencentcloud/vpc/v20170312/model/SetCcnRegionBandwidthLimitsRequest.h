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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SETCCNREGIONBANDWIDTHLIMITSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SETCCNREGIONBANDWIDTHLIMITSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnRegionBandwidthLimit.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * SetCcnRegionBandwidthLimits request structure.
                */
                class SetCcnRegionBandwidthLimitsRequest : public AbstractModel
                {
                public:
                    SetCcnRegionBandwidthLimitsRequest();
                    ~SetCcnRegionBandwidthLimitsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The CCN instance ID, such as `ccn-f49l6u0z`.
                     * @return CcnId The CCN instance ID, such as `ccn-f49l6u0z`.
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置The CCN instance ID, such as `ccn-f49l6u0z`.
                     * @param CcnId The CCN instance ID, such as `ccn-f49l6u0z`.
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取The outbound bandwidth cap of each CCN region.
                     * @return CcnRegionBandwidthLimits The outbound bandwidth cap of each CCN region.
                     */
                    std::vector<CcnRegionBandwidthLimit> GetCcnRegionBandwidthLimits() const;

                    /**
                     * 设置The outbound bandwidth cap of each CCN region.
                     * @param CcnRegionBandwidthLimits The outbound bandwidth cap of each CCN region.
                     */
                    void SetCcnRegionBandwidthLimits(const std::vector<CcnRegionBandwidthLimit>& _ccnRegionBandwidthLimits);

                    /**
                     * 判断参数 CcnRegionBandwidthLimits 是否已赋值
                     * @return CcnRegionBandwidthLimits 是否已赋值
                     */
                    bool CcnRegionBandwidthLimitsHasBeenSet() const;

                    /**
                     * 获取Whether to restore the region outbound bandwidth limit or inter-region bandwidth limit to default 1 Gbps. Valid values: `false` (no); `true` (yes). Default value: `false`. When the parameter is set to `true`, the CCN instance created will not be displayed in the console.
                     * @return SetDefaultLimitFlag Whether to restore the region outbound bandwidth limit or inter-region bandwidth limit to default 1 Gbps. Valid values: `false` (no); `true` (yes). Default value: `false`. When the parameter is set to `true`, the CCN instance created will not be displayed in the console.
                     */
                    bool GetSetDefaultLimitFlag() const;

                    /**
                     * 设置Whether to restore the region outbound bandwidth limit or inter-region bandwidth limit to default 1 Gbps. Valid values: `false` (no); `true` (yes). Default value: `false`. When the parameter is set to `true`, the CCN instance created will not be displayed in the console.
                     * @param SetDefaultLimitFlag Whether to restore the region outbound bandwidth limit or inter-region bandwidth limit to default 1 Gbps. Valid values: `false` (no); `true` (yes). Default value: `false`. When the parameter is set to `true`, the CCN instance created will not be displayed in the console.
                     */
                    void SetSetDefaultLimitFlag(const bool& _setDefaultLimitFlag);

                    /**
                     * 判断参数 SetDefaultLimitFlag 是否已赋值
                     * @return SetDefaultLimitFlag 是否已赋值
                     */
                    bool SetDefaultLimitFlagHasBeenSet() const;

                private:

                    /**
                     * The CCN instance ID, such as `ccn-f49l6u0z`.
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * The outbound bandwidth cap of each CCN region.
                     */
                    std::vector<CcnRegionBandwidthLimit> m_ccnRegionBandwidthLimits;
                    bool m_ccnRegionBandwidthLimitsHasBeenSet;

                    /**
                     * Whether to restore the region outbound bandwidth limit or inter-region bandwidth limit to default 1 Gbps. Valid values: `false` (no); `true` (yes). Default value: `false`. When the parameter is set to `true`, the CCN instance created will not be displayed in the console.
                     */
                    bool m_setDefaultLimitFlag;
                    bool m_setDefaultLimitFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SETCCNREGIONBANDWIDTHLIMITSREQUEST_H_
