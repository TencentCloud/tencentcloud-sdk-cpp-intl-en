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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKPEER_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKPEER_H_

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
                * Custom rule of the network cluster policy
                */
                class NetworkPeer : public AbstractModel
                {
                public:
                    NetworkPeer();
                    ~NetworkPeer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Object type:

Namespace: `NamespaceSelector`, which indicates that `NamespaceSelector` has a value.

Pod type: `PodSelector`, which indicates that both `NamespaceSelector` and `PodSelector` have values.

IP type: `IPBlock`, which indicates that only `IPBlock` has a value.
                     * @return PeerType Object type:

Namespace: `NamespaceSelector`, which indicates that `NamespaceSelector` has a value.

Pod type: `PodSelector`, which indicates that both `NamespaceSelector` and `PodSelector` have values.

IP type: `IPBlock`, which indicates that only `IPBlock` has a value.
                     * 
                     */
                    std::string GetPeerType() const;

                    /**
                     * 设置Object type:

Namespace: `NamespaceSelector`, which indicates that `NamespaceSelector` has a value.

Pod type: `PodSelector`, which indicates that both `NamespaceSelector` and `PodSelector` have values.

IP type: `IPBlock`, which indicates that only `IPBlock` has a value.
                     * @param _peerType Object type:

Namespace: `NamespaceSelector`, which indicates that `NamespaceSelector` has a value.

Pod type: `PodSelector`, which indicates that both `NamespaceSelector` and `PodSelector` have values.

IP type: `IPBlock`, which indicates that only `IPBlock` has a value.
                     * 
                     */
                    void SetPeerType(const std::string& _peerType);

                    /**
                     * 判断参数 PeerType 是否已赋值
                     * @return PeerType 是否已赋值
                     * 
                     */
                    bool PeerTypeHasBeenSet() const;

                    /**
                     * 获取Namespace Selector
                     * @return NamespaceSelector Namespace Selector
                     * 
                     */
                    std::string GetNamespaceSelector() const;

                    /**
                     * 设置Namespace Selector
                     * @param _namespaceSelector Namespace Selector
                     * 
                     */
                    void SetNamespaceSelector(const std::string& _namespaceSelector);

                    /**
                     * 判断参数 NamespaceSelector 是否已赋值
                     * @return NamespaceSelector 是否已赋值
                     * 
                     */
                    bool NamespaceSelectorHasBeenSet() const;

                    /**
                     * 获取Pod Selector
                     * @return PodSelector Pod Selector
                     * 
                     */
                    std::string GetPodSelector() const;

                    /**
                     * 设置Pod Selector
                     * @param _podSelector Pod Selector
                     * 
                     */
                    void SetPodSelector(const std::string& _podSelector);

                    /**
                     * 判断参数 PodSelector 是否已赋值
                     * @return PodSelector 是否已赋值
                     * 
                     */
                    bool PodSelectorHasBeenSet() const;

                    /**
                     * 获取IP Selector
                     * @return IPBlock IP Selector
                     * 
                     */
                    std::string GetIPBlock() const;

                    /**
                     * 设置IP Selector
                     * @param _iPBlock IP Selector
                     * 
                     */
                    void SetIPBlock(const std::string& _iPBlock);

                    /**
                     * 判断参数 IPBlock 是否已赋值
                     * @return IPBlock 是否已赋值
                     * 
                     */
                    bool IPBlockHasBeenSet() const;

                private:

                    /**
                     * Object type:

Namespace: `NamespaceSelector`, which indicates that `NamespaceSelector` has a value.

Pod type: `PodSelector`, which indicates that both `NamespaceSelector` and `PodSelector` have values.

IP type: `IPBlock`, which indicates that only `IPBlock` has a value.
                     */
                    std::string m_peerType;
                    bool m_peerTypeHasBeenSet;

                    /**
                     * Namespace Selector
                     */
                    std::string m_namespaceSelector;
                    bool m_namespaceSelectorHasBeenSet;

                    /**
                     * Pod Selector
                     */
                    std::string m_podSelector;
                    bool m_podSelectorHasBeenSet;

                    /**
                     * IP Selector
                     */
                    std::string m_iPBlock;
                    bool m_iPBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKPEER_H_
