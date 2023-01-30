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
                     */
                    std::string GetPeerType() const;

                    /**
                     * 设置Object type:

Namespace: `NamespaceSelector`, which indicates that `NamespaceSelector` has a value.

Pod type: `PodSelector`, which indicates that both `NamespaceSelector` and `PodSelector` have values.

IP type: `IPBlock`, which indicates that only `IPBlock` has a value.
                     * @param PeerType Object type:

Namespace: `NamespaceSelector`, which indicates that `NamespaceSelector` has a value.

Pod type: `PodSelector`, which indicates that both `NamespaceSelector` and `PodSelector` have values.

IP type: `IPBlock`, which indicates that only `IPBlock` has a value.
                     */
                    void SetPeerType(const std::string& _peerType);

                    /**
                     * 判断参数 PeerType 是否已赋值
                     * @return PeerType 是否已赋值
                     */
                    bool PeerTypeHasBeenSet() const;

                    /**
                     * 获取Namespace selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NamespaceSelector Namespace selector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNamespaceSelector() const;

                    /**
                     * 设置Namespace selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NamespaceSelector Namespace selector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNamespaceSelector(const std::string& _namespaceSelector);

                    /**
                     * 判断参数 NamespaceSelector 是否已赋值
                     * @return NamespaceSelector 是否已赋值
                     */
                    bool NamespaceSelectorHasBeenSet() const;

                    /**
                     * 获取Pod selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodSelector Pod selector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPodSelector() const;

                    /**
                     * 设置Pod selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PodSelector Pod selector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPodSelector(const std::string& _podSelector);

                    /**
                     * 判断参数 PodSelector 是否已赋值
                     * @return PodSelector 是否已赋值
                     */
                    bool PodSelectorHasBeenSet() const;

                    /**
                     * 获取IP selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IPBlock IP selector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIPBlock() const;

                    /**
                     * 设置IP selector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IPBlock IP selector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIPBlock(const std::string& _iPBlock);

                    /**
                     * 判断参数 IPBlock 是否已赋值
                     * @return IPBlock 是否已赋值
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
                     * Namespace selector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespaceSelector;
                    bool m_namespaceSelectorHasBeenSet;

                    /**
                     * Pod selector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_podSelector;
                    bool m_podSelectorHasBeenSet;

                    /**
                     * IP selector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iPBlock;
                    bool m_iPBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKPEER_H_
