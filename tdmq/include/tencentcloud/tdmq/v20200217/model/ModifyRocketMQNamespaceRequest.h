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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQNAMESPACEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQNAMESPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyRocketMQNamespace request structure.
                */
                class ModifyRocketMQNamespaceRequest : public AbstractModel
                {
                public:
                    ModifyRocketMQNamespaceRequest();
                    ~ModifyRocketMQNamespaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Namespace name, which can contain 3–64 letters, digits, hyphens, and underscores
                     * @return NamespaceId Namespace name, which can contain 3–64 letters, digits, hyphens, and underscores
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Namespace name, which can contain 3–64 letters, digits, hyphens, and underscores
                     * @param _namespaceId Namespace name, which can contain 3–64 letters, digits, hyphens, and underscores
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取This parameter is disused.
                     * @return Ttl This parameter is disused.
                     * 
                     */
                    uint64_t GetTtl() const;

                    /**
                     * 设置This parameter is disused.
                     * @param _ttl This parameter is disused.
                     * 
                     */
                    void SetTtl(const uint64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     * 
                     */
                    bool TtlHasBeenSet() const;

                    /**
                     * 获取This parameter is disused.
                     * @return RetentionTime This parameter is disused.
                     * 
                     */
                    uint64_t GetRetentionTime() const;

                    /**
                     * 设置This parameter is disused.
                     * @param _retentionTime This parameter is disused.
                     * 
                     */
                    void SetRetentionTime(const uint64_t& _retentionTime);

                    /**
                     * 判断参数 RetentionTime 是否已赋值
                     * @return RetentionTime 是否已赋值
                     * 
                     */
                    bool RetentionTimeHasBeenSet() const;

                    /**
                     * 获取Remarks (up to 128 characters)
                     * @return Remark Remarks (up to 128 characters)
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks (up to 128 characters)
                     * @param _remark Remarks (up to 128 characters)
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Whether to enable the public network access
                     * @return PublicAccessEnabled Whether to enable the public network access
                     * 
                     */
                    bool GetPublicAccessEnabled() const;

                    /**
                     * 设置Whether to enable the public network access
                     * @param _publicAccessEnabled Whether to enable the public network access
                     * 
                     */
                    void SetPublicAccessEnabled(const bool& _publicAccessEnabled);

                    /**
                     * 判断参数 PublicAccessEnabled 是否已赋值
                     * @return PublicAccessEnabled 是否已赋值
                     * 
                     */
                    bool PublicAccessEnabledHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Namespace name, which can contain 3–64 letters, digits, hyphens, and underscores
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * This parameter is disused.
                     */
                    uint64_t m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * This parameter is disused.
                     */
                    uint64_t m_retentionTime;
                    bool m_retentionTimeHasBeenSet;

                    /**
                     * Remarks (up to 128 characters)
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether to enable the public network access
                     */
                    bool m_publicAccessEnabled;
                    bool m_publicAccessEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQNAMESPACEREQUEST_H_
