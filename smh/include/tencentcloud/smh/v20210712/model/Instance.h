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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_INSTANCE_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * Describes official cloud disk instance information.
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Dedicated domain name. if the instance has no dedicated domain name, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain Dedicated domain name. if the instance has no dedicated domain name, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Dedicated domain name. if the instance has no dedicated domain name, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain Dedicated domain name. if the instance has no dedicated domain name, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Effective time.
                     * @return EffectiveTime Effective time.
                     * 
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置Effective time.
                     * @param _effectiveTime Effective time.
                     * 
                     */
                    void SetEffectiveTime(const std::string& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time. if the instance is pay-as-you-go or permanently valid, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time. if the instance is pay-as-you-go or permanently valid, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time. if the instance is pay-as-you-go or permanently valid, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Expiration time. if the instance is pay-as-you-go or permanently valid, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Number of users. if the instance uses pay-as-you-go billing or has unlimited users, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserLimit Number of users. if the instance uses pay-as-you-go billing or has unlimited users, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUserLimit() const;

                    /**
                     * 设置Number of users. if the instance uses pay-as-you-go billing or has unlimited users, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userLimit Number of users. if the instance uses pay-as-you-go billing or has unlimited users, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserLimit(const uint64_t& _userLimit);

                    /**
                     * 判断参数 UserLimit 是否已赋值
                     * @return UserLimit 是否已赋值
                     * 
                     */
                    bool UserLimitHasBeenSet() const;

                    /**
                     * 获取Storage capacity in Bytes. this field is of String type due to precision limitations of numeric types. this property is null for pay-as-you-go instances or instances with unlimited storage capacity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageLimit Storage capacity in Bytes. this field is of String type due to precision limitations of numeric types. this property is null for pay-as-you-go instances or instances with unlimited storage capacity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStorageLimit() const;

                    /**
                     * 设置Storage capacity in Bytes. this field is of String type due to precision limitations of numeric types. this property is null for pay-as-you-go instances or instances with unlimited storage capacity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageLimit Storage capacity in Bytes. this field is of String type due to precision limitations of numeric types. this property is null for pay-as-you-go instances or instances with unlimited storage capacity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorageLimit(const std::string& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取Storage capacity in GB. if the instance uses pay-as-you-go billing or has unlimited storage capacity, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageLimitGB Storage capacity in GB. if the instance uses pay-as-you-go billing or has unlimited storage capacity, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStorageLimitGB() const;

                    /**
                     * 设置Storage capacity in GB. if the instance uses pay-as-you-go billing or has unlimited storage capacity, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageLimitGB Storage capacity in GB. if the instance uses pay-as-you-go billing or has unlimited storage capacity, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorageLimitGB(const uint64_t& _storageLimitGB);

                    /**
                     * 判断参数 StorageLimitGB 是否已赋值
                     * @return StorageLimitGB 是否已赋值
                     * 
                     */
                    bool StorageLimitGBHasBeenSet() const;

                    /**
                     * 获取Is expired isolation.
                     * @return Isolated Is expired isolation.
                     * 
                     */
                    bool GetIsolated() const;

                    /**
                     * 设置Is expired isolation.
                     * @param _isolated Is expired isolation.
                     * 
                     */
                    void SetIsolated(const bool& _isolated);

                    /**
                     * 判断参数 Isolated 是否已赋值
                     * @return Isolated 是否已赋值
                     * 
                     */
                    bool IsolatedHasBeenSet() const;

                    /**
                     * 获取Renewal flag. 0: manual renewal; 1: automatic renewal; 2: non-renewal upon expiration.
                     * @return AutoRenew Renewal flag. 0: manual renewal; 1: automatic renewal; 2: non-renewal upon expiration.
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置Renewal flag. 0: manual renewal; 1: automatic renewal; 2: non-renewal upon expiration.
                     * @param _autoRenew Renewal flag. 0: manual renewal; 1: automatic renewal; 2: non-renewal upon expiration.
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Specifies the super administrator account. if no selection query is made for the instance-bound super administrator account or the current instance is not bound to a super administrator account, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuperAdminAccount Specifies the super administrator account. if no selection query is made for the instance-bound super administrator account or the current instance is not bound to a super administrator account, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSuperAdminAccount() const;

                    /**
                     * 设置Specifies the super administrator account. if no selection query is made for the instance-bound super administrator account or the current instance is not bound to a super administrator account, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _superAdminAccount Specifies the super administrator account. if no selection query is made for the instance-bound super administrator account or the current instance is not bound to a super administrator account, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSuperAdminAccount(const std::string& _superAdminAccount);

                    /**
                     * 判断参数 SuperAdminAccount 是否已赋值
                     * @return SuperAdminAccount 是否已赋值
                     * 
                     */
                    bool SuperAdminAccountHasBeenSet() const;

                    /**
                     * 获取In selected bucket mode, shows bucket usage.
                     * @return Bucket In selected bucket mode, shows bucket usage.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置In selected bucket mode, shows bucket usage.
                     * @param _bucket In selected bucket mode, shows bucket usage.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Specifies the log bucket usage in selected mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogBucket Specifies the log bucket usage in selected mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogBucket() const;

                    /**
                     * 设置Specifies the log bucket usage in selected mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logBucket Specifies the log bucket usage in selected mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogBucket(const std::string& _logBucket);

                    /**
                     * 判断参数 LogBucket 是否已赋值
                     * @return LogBucket 是否已赋值
                     * 
                     */
                    bool LogBucketHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Dedicated domain name. if the instance has no dedicated domain name, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Effective time.
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * Expiration time. if the instance is pay-as-you-go or permanently valid, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Number of users. if the instance uses pay-as-you-go billing or has unlimited users, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_userLimit;
                    bool m_userLimitHasBeenSet;

                    /**
                     * Storage capacity in Bytes. this field is of String type due to precision limitations of numeric types. this property is null for pay-as-you-go instances or instances with unlimited storage capacity.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * Storage capacity in GB. if the instance uses pay-as-you-go billing or has unlimited storage capacity, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_storageLimitGB;
                    bool m_storageLimitGBHasBeenSet;

                    /**
                     * Is expired isolation.
                     */
                    bool m_isolated;
                    bool m_isolatedHasBeenSet;

                    /**
                     * Renewal flag. 0: manual renewal; 1: automatic renewal; 2: non-renewal upon expiration.
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Specifies the super administrator account. if no selection query is made for the instance-bound super administrator account or the current instance is not bound to a super administrator account, this attribute is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_superAdminAccount;
                    bool m_superAdminAccountHasBeenSet;

                    /**
                     * In selected bucket mode, shows bucket usage.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Specifies the log bucket usage in selected mode.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logBucket;
                    bool m_logBucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_INSTANCE_H_
