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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYENVIRONMENTATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYENVIRONMENTATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RetentionPolicy.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyEnvironmentAttributes request structure.
                */
                class ModifyEnvironmentAttributesRequest : public AbstractModel
                {
                public:
                    ModifyEnvironmentAttributesRequest();
                    ~ModifyEnvironmentAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Namespace name.
                     * @return EnvironmentId Namespace name.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Namespace name.
                     * @param _environmentId Namespace name.
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Retention period for unconsumed messages in seconds. Value range: 60s to 1,296,000s (or 15 days).
                     * @return MsgTTL Retention period for unconsumed messages in seconds. Value range: 60s to 1,296,000s (or 15 days).
                     * 
                     */
                    uint64_t GetMsgTTL() const;

                    /**
                     * 设置Retention period for unconsumed messages in seconds. Value range: 60s to 1,296,000s (or 15 days).
                     * @param _msgTTL Retention period for unconsumed messages in seconds. Value range: 60s to 1,296,000s (or 15 days).
                     * 
                     */
                    void SetMsgTTL(const uint64_t& _msgTTL);

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

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
                     * 获取Remarks (up to 128 characters).
                     * @return Remark Remarks (up to 128 characters).
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks (up to 128 characters).
                     * @param _remark Remarks (up to 128 characters).
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
                     * 获取Message retention policy
                     * @return RetentionPolicy Message retention policy
                     * 
                     */
                    RetentionPolicy GetRetentionPolicy() const;

                    /**
                     * 设置Message retention policy
                     * @param _retentionPolicy Message retention policy
                     * 
                     */
                    void SetRetentionPolicy(const RetentionPolicy& _retentionPolicy);

                    /**
                     * 判断参数 RetentionPolicy 是否已赋值
                     * @return RetentionPolicy 是否已赋值
                     * 
                     */
                    bool RetentionPolicyHasBeenSet() const;

                    /**
                     * 获取Whether to enable "Auto-Create Subscription"
                     * @return AutoSubscriptionCreation Whether to enable "Auto-Create Subscription"
                     * 
                     */
                    bool GetAutoSubscriptionCreation() const;

                    /**
                     * 设置Whether to enable "Auto-Create Subscription"
                     * @param _autoSubscriptionCreation Whether to enable "Auto-Create Subscription"
                     * 
                     */
                    void SetAutoSubscriptionCreation(const bool& _autoSubscriptionCreation);

                    /**
                     * 判断参数 AutoSubscriptionCreation 是否已赋值
                     * @return AutoSubscriptionCreation 是否已赋值
                     * 
                     */
                    bool AutoSubscriptionCreationHasBeenSet() const;

                private:

                    /**
                     * Namespace name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Retention period for unconsumed messages in seconds. Value range: 60s to 1,296,000s (or 15 days).
                     */
                    uint64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Remarks (up to 128 characters).
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Message retention policy
                     */
                    RetentionPolicy m_retentionPolicy;
                    bool m_retentionPolicyHasBeenSet;

                    /**
                     * Whether to enable "Auto-Create Subscription"
                     */
                    bool m_autoSubscriptionCreation;
                    bool m_autoSubscriptionCreationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYENVIRONMENTATTRIBUTESREQUEST_H_
