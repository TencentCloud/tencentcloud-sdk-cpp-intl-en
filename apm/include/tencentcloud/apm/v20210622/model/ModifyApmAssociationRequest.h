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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMASSOCIATIONREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMASSOCIATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyApmAssociation request structure.
                */
                class ModifyApmAssociationRequest : public AbstractModel
                {
                public:
                    ModifyApmAssociationRequest();
                    ~ModifyApmAssociationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Associated product name. currently only supports Prometheus.
                     * @return ProductName Associated product name. currently only supports Prometheus.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Associated product name. currently only supports Prometheus.
                     * @param _productName Associated product name. currently only supports Prometheus.
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Status of the association relationship: // association status: 1 (enabled), 2 (disabled), 4 (deleted).
                     * @return Status Status of the association relationship: // association status: 1 (enabled), 2 (disabled), 4 (deleted).
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status of the association relationship: // association status: 1 (enabled), 2 (disabled), 4 (deleted).
                     * @param _status Status of the association relationship: // association status: 1 (enabled), 2 (disabled), 4 (deleted).
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Business system ID
                     * @return InstanceId Business system ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Business system ID
                     * @param _instanceId Business system ID
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
                     * 获取Associated product instance ID.
                     * @return PeerId Associated product instance ID.
                     * 
                     */
                    std::string GetPeerId() const;

                    /**
                     * 设置Associated product instance ID.
                     * @param _peerId Associated product instance ID.
                     * 
                     */
                    void SetPeerId(const std::string& _peerId);

                    /**
                     * 判断参数 PeerId 是否已赋值
                     * @return PeerId 是否已赋值
                     * 
                     */
                    bool PeerIdHasBeenSet() const;

                    /**
                     * 获取Specifies the CKafka message topic.
                     * @return Topic Specifies the CKafka message topic.
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Specifies the CKafka message topic.
                     * @param _topic Specifies the CKafka message topic.
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                private:

                    /**
                     * Associated product name. currently only supports Prometheus.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Status of the association relationship: // association status: 1 (enabled), 2 (disabled), 4 (deleted).
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Business system ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Associated product instance ID.
                     */
                    std::string m_peerId;
                    bool m_peerIdHasBeenSet;

                    /**
                     * Specifies the CKafka message topic.
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMASSOCIATIONREQUEST_H_
