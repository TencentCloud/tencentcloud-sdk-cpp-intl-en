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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKPOLICYINFOITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKPOLICYINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Response parameters structure of the network cluster policy
                */
                class NetworkPolicyInfoItem : public AbstractModel
                {
                public:
                    NetworkPolicyInfoItem();
                    ~NetworkPolicyInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network policy name
                     * @return Name Network policy name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Network policy name
                     * @param Name Network policy name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Network policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Network policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Network policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Description Network policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Publishing status:

`PublishedNoConfirm`: Enabled and to be confirmed.

`PublishedConfirmed`: Enabled and confirmed.

`unPublishing`: Disabled.

`Publishing`: Enabled.

`unPublishEdit`: To be enabled.
                     * @return PublishStatus Publishing status:

`PublishedNoConfirm`: Enabled and to be confirmed.

`PublishedConfirmed`: Enabled and confirmed.

`unPublishing`: Disabled.

`Publishing`: Enabled.

`unPublishEdit`: To be enabled.
                     */
                    std::string GetPublishStatus() const;

                    /**
                     * 设置Publishing status:

`PublishedNoConfirm`: Enabled and to be confirmed.

`PublishedConfirmed`: Enabled and confirmed.

`unPublishing`: Disabled.

`Publishing`: Enabled.

`unPublishEdit`: To be enabled.
                     * @param PublishStatus Publishing status:

`PublishedNoConfirm`: Enabled and to be confirmed.

`PublishedConfirmed`: Enabled and confirmed.

`unPublishing`: Disabled.

`Publishing`: Enabled.

`unPublishEdit`: To be enabled.
                     */
                    void SetPublishStatus(const std::string& _publishStatus);

                    /**
                     * 判断参数 PublishStatus 是否已赋值
                     * @return PublishStatus 是否已赋值
                     */
                    bool PublishStatusHasBeenSet() const;

                    /**
                     * 获取Policy type:

`System`: Synched from the cluster.

`Manual`: Added manually.
                     * @return PolicySourceType Policy type:

`System`: Synched from the cluster.

`Manual`: Added manually.
                     */
                    std::string GetPolicySourceType() const;

                    /**
                     * 设置Policy type:

`System`: Synched from the cluster.

`Manual`: Added manually.
                     * @param PolicySourceType Policy type:

`System`: Synched from the cluster.

`Manual`: Added manually.
                     */
                    void SetPolicySourceType(const std::string& _policySourceType);

                    /**
                     * 判断参数 PolicySourceType 是否已赋值
                     * @return PolicySourceType 是否已赋值
                     */
                    bool PolicySourceTypeHasBeenSet() const;

                    /**
                     * 获取Policy space
                     * @return Namespace Policy space
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Policy space
                     * @param Namespace Policy space
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Policy creation date
                     * @return PolicyCreateTime Policy creation date
                     */
                    std::string GetPolicyCreateTime() const;

                    /**
                     * 设置Policy creation date
                     * @param PolicyCreateTime Policy creation date
                     */
                    void SetPolicyCreateTime(const std::string& _policyCreateTime);

                    /**
                     * 判断参数 PolicyCreateTime 是否已赋值
                     * @return PolicyCreateTime 是否已赋值
                     */
                    bool PolicyCreateTimeHasBeenSet() const;

                    /**
                     * 获取Policy type

kube-router: KubeRouter

cilium: Cilium
                     * @return NetworkPolicyPlugin Policy type

kube-router: KubeRouter

cilium: Cilium
                     */
                    std::string GetNetworkPolicyPlugin() const;

                    /**
                     * 设置Policy type

kube-router: KubeRouter

cilium: Cilium
                     * @param NetworkPolicyPlugin Policy type

kube-router: KubeRouter

cilium: Cilium
                     */
                    void SetNetworkPolicyPlugin(const std::string& _networkPolicyPlugin);

                    /**
                     * 判断参数 NetworkPolicyPlugin 是否已赋值
                     * @return NetworkPolicyPlugin 是否已赋值
                     */
                    bool NetworkPolicyPluginHasBeenSet() const;

                    /**
                     * 获取Policy publishing result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublishResult Policy publishing result
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPublishResult() const;

                    /**
                     * 设置Policy publishing result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PublishResult Policy publishing result
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPublishResult(const std::string& _publishResult);

                    /**
                     * 判断参数 PublishResult 是否已赋值
                     * @return PublishResult 是否已赋值
                     */
                    bool PublishResultHasBeenSet() const;

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
                     * 获取Inbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     * @return ToPolicyRule Inbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     */
                    int64_t GetToPolicyRule() const;

                    /**
                     * 设置Inbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     * @param ToPolicyRule Inbound rule

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
                     * 获取Object
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodSelector Object
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPodSelector() const;

                    /**
                     * 设置Object
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PodSelector Object
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPodSelector(const std::string& _podSelector);

                    /**
                     * 判断参数 PodSelector 是否已赋值
                     * @return PodSelector 是否已赋值
                     */
                    bool PodSelectorHasBeenSet() const;

                    /**
                     * 获取Network policy ID
                     * @return Id Network policy ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Network policy ID
                     * @param Id Network policy ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Network policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Network policy description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Publishing status:

`PublishedNoConfirm`: Enabled and to be confirmed.

`PublishedConfirmed`: Enabled and confirmed.

`unPublishing`: Disabled.

`Publishing`: Enabled.

`unPublishEdit`: To be enabled.
                     */
                    std::string m_publishStatus;
                    bool m_publishStatusHasBeenSet;

                    /**
                     * Policy type:

`System`: Synched from the cluster.

`Manual`: Added manually.
                     */
                    std::string m_policySourceType;
                    bool m_policySourceTypeHasBeenSet;

                    /**
                     * Policy space
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Policy creation date
                     */
                    std::string m_policyCreateTime;
                    bool m_policyCreateTimeHasBeenSet;

                    /**
                     * Policy type

kube-router: KubeRouter

cilium: Cilium
                     */
                    std::string m_networkPolicyPlugin;
                    bool m_networkPolicyPluginHasBeenSet;

                    /**
                     * Policy publishing result
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publishResult;
                    bool m_publishResultHasBeenSet;

                    /**
                     * Inbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     */
                    int64_t m_fromPolicyRule;
                    bool m_fromPolicyRuleHasBeenSet;

                    /**
                     * Inbound rule

`1`: Allow all.

`2`: Reject all.

`3`: Custom.
                     */
                    int64_t m_toPolicyRule;
                    bool m_toPolicyRuleHasBeenSet;

                    /**
                     * Object
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_podSelector;
                    bool m_podSelectorHasBeenSet;

                    /**
                     * Network policy ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKPOLICYINFOITEM_H_
