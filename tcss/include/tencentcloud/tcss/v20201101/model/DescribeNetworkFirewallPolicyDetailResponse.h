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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLPOLICYDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLPOLICYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/NetworkCustomPolicy.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeNetworkFirewallPolicyDetail response structure.
                */
                class DescribeNetworkFirewallPolicyDetailResponse : public AbstractModel
                {
                public:
                    DescribeNetworkFirewallPolicyDetailResponse();
                    ~DescribeNetworkFirewallPolicyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return PolicyName Policy name
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Namespace
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Namespace Namespace
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNamespace() const;

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Inbound type
                     * @return FromPolicyRule Inbound type
                     */
                    int64_t GetFromPolicyRule() const;

                    /**
                     * 判断参数 FromPolicyRule 是否已赋值
                     * @return FromPolicyRule 是否已赋值
                     */
                    bool FromPolicyRuleHasBeenSet() const;

                    /**
                     * 获取Outbound type
                     * @return ToPolicyRule Outbound type
                     */
                    int64_t GetToPolicyRule() const;

                    /**
                     * 判断参数 ToPolicyRule 是否已赋值
                     * @return ToPolicyRule 是否已赋值
                     */
                    bool ToPolicyRuleHasBeenSet() const;

                    /**
                     * 获取Custom rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CustomPolicy Custom rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NetworkCustomPolicy> GetCustomPolicy() const;

                    /**
                     * 判断参数 CustomPolicy 是否已赋值
                     * @return CustomPolicy 是否已赋值
                     */
                    bool CustomPolicyHasBeenSet() const;

                    /**
                     * 获取Pod selector
                     * @return PodSelector Pod selector
                     */
                    std::string GetPodSelector() const;

                    /**
                     * 判断参数 PodSelector 是否已赋值
                     * @return PodSelector 是否已赋值
                     */
                    bool PodSelectorHasBeenSet() const;

                    /**
                     * 获取Policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Policy creation time
                     * @return PolicyCreateTime Policy creation time
                     */
                    std::string GetPolicyCreateTime() const;

                    /**
                     * 判断参数 PolicyCreateTime 是否已赋值
                     * @return PolicyCreateTime 是否已赋值
                     */
                    bool PolicyCreateTimeHasBeenSet() const;

                    /**
                     * 获取Policy source type. Valid values: `System` (synched from the cluster); `Manual` (added manually).
                     * @return PolicySourceType Policy source type. Valid values: `System` (synched from the cluster); `Manual` (added manually).
                     */
                    std::string GetPolicySourceType() const;

                    /**
                     * 判断参数 PolicySourceType 是否已赋值
                     * @return PolicySourceType 是否已赋值
                     */
                    bool PolicySourceTypeHasBeenSet() const;

                    /**
                     * 获取Network plugin of the network policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetworkPolicyPlugin Network plugin of the network policy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNetworkPolicyPlugin() const;

                    /**
                     * 判断参数 NetworkPolicyPlugin 是否已赋值
                     * @return NetworkPolicyPlugin 是否已赋值
                     */
                    bool NetworkPolicyPluginHasBeenSet() const;

                    /**
                     * 获取Network policy status
                     * @return PublishStatus Network policy status
                     */
                    std::string GetPublishStatus() const;

                    /**
                     * 判断参数 PublishStatus 是否已赋值
                     * @return PublishStatus 是否已赋值
                     */
                    bool PublishStatusHasBeenSet() const;

                    /**
                     * 获取Policy publishing result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublishResult Policy publishing result
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPublishResult() const;

                    /**
                     * 判断参数 PublishResult 是否已赋值
                     * @return PublishResult 是否已赋值
                     */
                    bool PublishResultHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Namespace
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Inbound type
                     */
                    int64_t m_fromPolicyRule;
                    bool m_fromPolicyRuleHasBeenSet;

                    /**
                     * Outbound type
                     */
                    int64_t m_toPolicyRule;
                    bool m_toPolicyRuleHasBeenSet;

                    /**
                     * Custom rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NetworkCustomPolicy> m_customPolicy;
                    bool m_customPolicyHasBeenSet;

                    /**
                     * Pod selector
                     */
                    std::string m_podSelector;
                    bool m_podSelectorHasBeenSet;

                    /**
                     * Policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Policy creation time
                     */
                    std::string m_policyCreateTime;
                    bool m_policyCreateTimeHasBeenSet;

                    /**
                     * Policy source type. Valid values: `System` (synched from the cluster); `Manual` (added manually).
                     */
                    std::string m_policySourceType;
                    bool m_policySourceTypeHasBeenSet;

                    /**
                     * Network plugin of the network policy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_networkPolicyPlugin;
                    bool m_networkPolicyPluginHasBeenSet;

                    /**
                     * Network policy status
                     */
                    std::string m_publishStatus;
                    bool m_publishStatusHasBeenSet;

                    /**
                     * Policy publishing result
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publishResult;
                    bool m_publishResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLPOLICYDETAILRESPONSE_H_
