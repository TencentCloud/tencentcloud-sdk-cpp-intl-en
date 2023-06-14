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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQNAMESPACE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQNAMESPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * RocketMQ namespace information
                */
                class RocketMQNamespace : public AbstractModel
                {
                public:
                    RocketMQNamespace();
                    ~RocketMQNamespace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Namespace name, which can contain 3–64 letters, digits, hyphens, and underscores.
                     * @return NamespaceId Namespace name, which can contain 3–64 letters, digits, hyphens, and underscores.
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Namespace name, which can contain 3–64 letters, digits, hyphens, and underscores.
                     * @param _namespaceId Namespace name, which can contain 3–64 letters, digits, hyphens, and underscores.
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
                     * 获取Retention period for unconsumed messages in milliseconds. Valid range: 60 seconds–15 days.
                     * @return Ttl Retention period for unconsumed messages in milliseconds. Valid range: 60 seconds–15 days.
                     * 
                     */
                    uint64_t GetTtl() const;

                    /**
                     * 设置Retention period for unconsumed messages in milliseconds. Valid range: 60 seconds–15 days.
                     * @param _ttl Retention period for unconsumed messages in milliseconds. Valid range: 60 seconds–15 days.
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
                     * 获取Retention period for persistently stored messages in milliseconds.
                     * @return RetentionTime Retention period for persistently stored messages in milliseconds.
                     * 
                     */
                    uint64_t GetRetentionTime() const;

                    /**
                     * 设置Retention period for persistently stored messages in milliseconds.
                     * @param _retentionTime Retention period for persistently stored messages in milliseconds.
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
                     * 获取Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Description.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Public network access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicEndpoint Public network access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicEndpoint() const;

                    /**
                     * 设置Public network access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicEndpoint Public network access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicEndpoint(const std::string& _publicEndpoint);

                    /**
                     * 判断参数 PublicEndpoint 是否已赋值
                     * @return PublicEndpoint 是否已赋值
                     * 
                     */
                    bool PublicEndpointHasBeenSet() const;

                    /**
                     * 获取VPC access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcEndpoint VPC access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcEndpoint() const;

                    /**
                     * 设置VPC access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcEndpoint VPC access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcEndpoint(const std::string& _vpcEndpoint);

                    /**
                     * 判断参数 VpcEndpoint 是否已赋值
                     * @return VpcEndpoint 是否已赋值
                     * 
                     */
                    bool VpcEndpointHasBeenSet() const;

                private:

                    /**
                     * Namespace name, which can contain 3–64 letters, digits, hyphens, and underscores.
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * Retention period for unconsumed messages in milliseconds. Valid range: 60 seconds–15 days.
                     */
                    uint64_t m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * Retention period for persistently stored messages in milliseconds.
                     */
                    uint64_t m_retentionTime;
                    bool m_retentionTimeHasBeenSet;

                    /**
                     * Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Public network access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicEndpoint;
                    bool m_publicEndpointHasBeenSet;

                    /**
                     * VPC access point address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcEndpoint;
                    bool m_vpcEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQNAMESPACE_H_
