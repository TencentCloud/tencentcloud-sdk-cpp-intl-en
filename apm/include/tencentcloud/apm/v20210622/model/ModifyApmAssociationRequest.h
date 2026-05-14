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
                     * 获取<p>Associated product name, currently only support Prometheus, CKafka</p>
                     * @return ProductName <p>Associated product name, currently only support Prometheus, CKafka</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>Associated product name, currently only support Prometheus, CKafka</p>
                     * @param _productName <p>Associated product name, currently only support Prometheus, CKafka</p>
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
                     * 获取<p>Status of the association relationship: // Association relationship status: 1 (enabled), 2 (disabled)</p>
                     * @return Status <p>Status of the association relationship: // Association relationship status: 1 (enabled), 2 (disabled)</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Status of the association relationship: // Association relationship status: 1 (enabled), 2 (disabled)</p>
                     * @param _status <p>Status of the association relationship: // Association relationship status: 1 (enabled), 2 (disabled)</p>
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
                     * 获取<p>Business system ID</p>
                     * @return InstanceId <p>Business system ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Business system ID</p>
                     * @param _instanceId <p>Business system ID</p>
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
                     * 获取<p>ID of the associated product instance</p>
                     * @return PeerId <p>ID of the associated product instance</p>
                     * 
                     */
                    std::string GetPeerId() const;

                    /**
                     * 设置<p>ID of the associated product instance</p>
                     * @param _peerId <p>ID of the associated product instance</p>
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
                     * 获取<p>CKafka message topic</p>
                     * @return Topic <p>CKafka message topic</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>CKafka message topic</p>
                     * @param _topic <p>CKafka message topic</p>
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取<p>Ckafka message topic</p>
                     * @return MetricTopic <p>Ckafka message topic</p>
                     * 
                     */
                    std::string GetMetricTopic() const;

                    /**
                     * 设置<p>Ckafka message topic</p>
                     * @param _metricTopic <p>Ckafka message topic</p>
                     * 
                     */
                    void SetMetricTopic(const std::string& _metricTopic);

                    /**
                     * 判断参数 MetricTopic 是否已赋值
                     * @return MetricTopic 是否已赋值
                     * 
                     */
                    bool MetricTopicHasBeenSet() const;

                private:

                    /**
                     * <p>Associated product name, currently only support Prometheus, CKafka</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>Status of the association relationship: // Association relationship status: 1 (enabled), 2 (disabled)</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Business system ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>ID of the associated product instance</p>
                     */
                    std::string m_peerId;
                    bool m_peerIdHasBeenSet;

                    /**
                     * <p>CKafka message topic</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>Ckafka message topic</p>
                     */
                    std::string m_metricTopic;
                    bool m_metricTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMASSOCIATIONREQUEST_H_
