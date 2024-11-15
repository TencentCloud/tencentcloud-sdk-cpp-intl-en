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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEIPAMDRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEIPAMDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeIPAMD response structure.
                */
                class DescribeIPAMDResponse : public AbstractModel
                {
                public:
                    DescribeIPAMDResponse();
                    ~DescribeIPAMDResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Is the eniipamd component installed?
                     * @return EnableIPAMD Is the eniipamd component installed?
                     * 
                     */
                    bool GetEnableIPAMD() const;

                    /**
                     * 判断参数 EnableIPAMD 是否已赋值
                     * @return EnableIPAMD 是否已赋值
                     * 
                     */
                    bool EnableIPAMDHasBeenSet() const;

                    /**
                     * 获取Is custom podcidr enabled? It is false by default. It only matters if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return EnableCustomizedPodCidr Is custom podcidr enabled? It is false by default. It only matters if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetEnableCustomizedPodCidr() const;

                    /**
                     * 判断参数 EnableCustomizedPodCidr 是否已赋值
                     * @return EnableCustomizedPodCidr 是否已赋值
                     * 
                     */
                    bool EnableCustomizedPodCidrHasBeenSet() const;

                    /**
                     * 获取Is vpccni mode disabled? It is false by default. It only matters if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DisableVpcCniMode Is vpccni mode disabled? It is false by default. It only matters if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetDisableVpcCniMode() const;

                    /**
                     * 判断参数 DisableVpcCniMode 是否已赋值
                     * @return DisableVpcCniMode 是否已赋值
                     * 
                     */
                    bool DisableVpcCniModeHasBeenSet() const;

                    /**
                     * 获取Component status. The value is available only if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Phase Component status. The value is available only if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     * 
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取Error message. It is available only if the eniipamd component is installed and the status is not running.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Reason Error message. It is available only if the eniipamd component is installed and the status is not running.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Subnet information. It is available only if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return SubnetIds Subnet information. It is available only if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Fixed IP recycling time. It is available only if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return ClaimExpiredDuration Fixed IP recycling time. It is available only if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClaimExpiredDuration() const;

                    /**
                     * 判断参数 ClaimExpiredDuration 是否已赋值
                     * @return ClaimExpiredDuration 是否已赋值
                     * 
                     */
                    bool ClaimExpiredDurationHasBeenSet() const;

                    /**
                     * 获取Is the relay network card mode enabled?
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return EnableTrunkingENI Is the relay network card mode enabled?
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetEnableTrunkingENI() const;

                    /**
                     * 判断参数 EnableTrunkingENI 是否已赋值
                     * @return EnableTrunkingENI 是否已赋值
                     * 
                     */
                    bool EnableTrunkingENIHasBeenSet() const;

                private:

                    /**
                     * Is the eniipamd component installed?
                     */
                    bool m_enableIPAMD;
                    bool m_enableIPAMDHasBeenSet;

                    /**
                     * Is custom podcidr enabled? It is false by default. It only matters if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    bool m_enableCustomizedPodCidr;
                    bool m_enableCustomizedPodCidrHasBeenSet;

                    /**
                     * Is vpccni mode disabled? It is false by default. It only matters if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    bool m_disableVpcCniMode;
                    bool m_disableVpcCniModeHasBeenSet;

                    /**
                     * Component status. The value is available only if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * Error message. It is available only if the eniipamd component is installed and the status is not running.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Subnet information. It is available only if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Fixed IP recycling time. It is available only if the eniipamd component is installed.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_claimExpiredDuration;
                    bool m_claimExpiredDurationHasBeenSet;

                    /**
                     * Is the relay network card mode enabled?
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    bool m_enableTrunkingENI;
                    bool m_enableTrunkingENIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEIPAMDRESPONSE_H_
