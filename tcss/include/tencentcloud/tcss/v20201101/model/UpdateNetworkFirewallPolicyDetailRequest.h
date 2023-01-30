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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATENETWORKFIREWALLPOLICYDETAILREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATENETWORKFIREWALLPOLICYDETAILREQUEST_H_

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
                * UpdateNetworkFirewallPolicyDetail request structure.
                */
                class UpdateNetworkFirewallPolicyDetailRequest : public AbstractModel
                {
                public:
                    UpdateNetworkFirewallPolicyDetailRequest();
                    ~UpdateNetworkFirewallPolicyDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return Id Policy ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Policy ID
                     * @param Id Policy ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Inbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     * @return FromPolicyRule Inbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     */
                    int64_t GetFromPolicyRule() const;

                    /**
                     * 设置Inbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     * @param FromPolicyRule Inbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     */
                    void SetFromPolicyRule(const int64_t& _fromPolicyRule);

                    /**
                     * 判断参数 FromPolicyRule 是否已赋值
                     * @return FromPolicyRule 是否已赋值
                     */
                    bool FromPolicyRuleHasBeenSet() const;

                    /**
                     * 获取Outbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     * @return ToPolicyRule Outbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     */
                    int64_t GetToPolicyRule() const;

                    /**
                     * 设置Outbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     * @param ToPolicyRule Outbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     */
                    void SetToPolicyRule(const int64_t& _toPolicyRule);

                    /**
                     * 判断参数 ToPolicyRule 是否已赋值
                     * @return ToPolicyRule 是否已赋值
                     */
                    bool ToPolicyRuleHasBeenSet() const;

                    /**
                     * 获取Pod selector
                     * @return PodSelector Pod selector
                     */
                    std::string GetPodSelector() const;

                    /**
                     * 设置Pod selector
                     * @param PodSelector Pod selector
                     */
                    void SetPodSelector(const std::string& _podSelector);

                    /**
                     * 判断参数 PodSelector 是否已赋值
                     * @return PodSelector 是否已赋值
                     */
                    bool PodSelectorHasBeenSet() const;

                    /**
                     * 获取Namespace
                     * @return Namespace Namespace
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param Namespace Namespace
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Policy description
                     * @return Description Policy description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Policy description
                     * @param Description Policy description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Custom rule
                     * @return CustomPolicy Custom rule
                     */
                    std::vector<NetworkCustomPolicy> GetCustomPolicy() const;

                    /**
                     * 设置Custom rule
                     * @param CustomPolicy Custom rule
                     */
                    void SetCustomPolicy(const std::vector<NetworkCustomPolicy>& _customPolicy);

                    /**
                     * 判断参数 CustomPolicy 是否已赋值
                     * @return CustomPolicy 是否已赋值
                     */
                    bool CustomPolicyHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Policy ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Inbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     */
                    int64_t m_fromPolicyRule;
                    bool m_fromPolicyRuleHasBeenSet;

                    /**
                     * Outbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     */
                    int64_t m_toPolicyRule;
                    bool m_toPolicyRuleHasBeenSet;

                    /**
                     * Pod selector
                     */
                    std::string m_podSelector;
                    bool m_podSelectorHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Policy description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Custom rule
                     */
                    std::vector<NetworkCustomPolicy> m_customPolicy;
                    bool m_customPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATENETWORKFIREWALLPOLICYDETAILREQUEST_H_
