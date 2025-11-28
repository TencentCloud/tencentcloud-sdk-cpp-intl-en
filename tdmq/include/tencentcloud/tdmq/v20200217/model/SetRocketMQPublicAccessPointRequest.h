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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SETROCKETMQPUBLICACCESSPOINTREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SETROCKETMQPUBLICACCESSPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/PublicAccessRule.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * SetRocketMQPublicAccessPoint request structure.
                */
                class SetRocketMQPublicAccessPointRequest : public AbstractModel
                {
                public:
                    SetRocketMQPublicAccessPointRequest();
                    ~SetRocketMQPublicAccessPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID. Currently, the system only supports dedicated clusters.
                     * @return InstanceId Cluster ID. Currently, the system only supports dedicated clusters.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID. Currently, the system only supports dedicated clusters.
                     * @param _instanceId Cluster ID. Currently, the system only supports dedicated clusters.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Enable or Disable Access
                     * @return Enabled Enable or Disable Access
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Enable or Disable Access
                     * @param _enabled Enable or Disable Access
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Bandwidth size, in Mbps. It must be specified when you enable or adjust the public network access.
                     * @return Bandwidth Bandwidth size, in Mbps. It must be specified when you enable or adjust the public network access.
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置Bandwidth size, in Mbps. It must be specified when you enable or adjust the public network access.
                     * @param _bandwidth Bandwidth size, in Mbps. It must be specified when you enable or adjust the public network access.
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Payment mode, which must be specified when you enabled the public network access. 0 means hourly billing, and 1 means annual and monthly subscription. Currently, only hourly billing is supported.
                     * @return PayMode Payment mode, which must be specified when you enabled the public network access. 0 means hourly billing, and 1 means annual and monthly subscription. Currently, only hourly billing is supported.
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Payment mode, which must be specified when you enabled the public network access. 0 means hourly billing, and 1 means annual and monthly subscription. Currently, only hourly billing is supported.
                     * @param _payMode Payment mode, which must be specified when you enabled the public network access. 0 means hourly billing, and 1 means annual and monthly subscription. Currently, only hourly billing is supported.
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Public network access security rule list, which must be provided when Enabled is true.
                     * @return Rules Public network access security rule list, which must be provided when Enabled is true.
                     * 
                     */
                    std::vector<PublicAccessRule> GetRules() const;

                    /**
                     * 设置Public network access security rule list, which must be provided when Enabled is true.
                     * @param _rules Public network access security rule list, which must be provided when Enabled is true.
                     * 
                     */
                    void SetRules(const std::vector<PublicAccessRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Whether public network is billed by traffic.
                     * @return BillingFlow Whether public network is billed by traffic.
                     * 
                     */
                    bool GetBillingFlow() const;

                    /**
                     * 设置Whether public network is billed by traffic.
                     * @param _billingFlow Whether public network is billed by traffic.
                     * 
                     */
                    void SetBillingFlow(const bool& _billingFlow);

                    /**
                     * 判断参数 BillingFlow 是否已赋值
                     * @return BillingFlow 是否已赋值
                     * 
                     */
                    bool BillingFlowHasBeenSet() const;

                private:

                    /**
                     * Cluster ID. Currently, the system only supports dedicated clusters.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Enable or Disable Access
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Bandwidth size, in Mbps. It must be specified when you enable or adjust the public network access.
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Payment mode, which must be specified when you enabled the public network access. 0 means hourly billing, and 1 means annual and monthly subscription. Currently, only hourly billing is supported.
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Public network access security rule list, which must be provided when Enabled is true.
                     */
                    std::vector<PublicAccessRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Whether public network is billed by traffic.
                     */
                    bool m_billingFlow;
                    bool m_billingFlowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SETROCKETMQPUBLICACCESSPOINTREQUEST_H_
