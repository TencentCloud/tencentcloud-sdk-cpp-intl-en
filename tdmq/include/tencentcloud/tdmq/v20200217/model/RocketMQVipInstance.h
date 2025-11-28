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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQVIPINSTANCE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQVIPINSTANCE_H_

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
                * Information of TDMQ for RocketMQ exclusive instances
                */
                class RocketMQVipInstance : public AbstractModel
                {
                public:
                    RocketMQVipInstance();
                    ~RocketMQVipInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance version.
                     * @return InstanceVersion Instance version.
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置Instance version.
                     * @param _instanceVersion Instance version.
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed).
                     * @return Status Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed).
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed).
                     * @param _status Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed).
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
                     * 获取Number of nodes
                     * @return NodeCount Number of nodes
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置Number of nodes
                     * @param _nodeCount Number of nodes
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Instance specification name
                     * @return ConfigDisplay Instance specification name
                     * 
                     */
                    std::string GetConfigDisplay() const;

                    /**
                     * 设置Instance specification name
                     * @param _configDisplay Instance specification name
                     * 
                     */
                    void SetConfigDisplay(const std::string& _configDisplay);

                    /**
                     * 判断参数 ConfigDisplay 是否已赋值
                     * @return ConfigDisplay 是否已赋值
                     * 
                     */
                    bool ConfigDisplayHasBeenSet() const;

                    /**
                     * 获取Peak TPS
                     * @return MaxTps Peak TPS
                     * 
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置Peak TPS
                     * @param _maxTps Peak TPS
                     * 
                     */
                    void SetMaxTps(const uint64_t& _maxTps);

                    /**
                     * 判断参数 MaxTps 是否已赋值
                     * @return MaxTps 是否已赋值
                     * 
                     */
                    bool MaxTpsHasBeenSet() const;

                    /**
                     * 获取Peak bandwidth in Mbps
                     * @return MaxBandWidth Peak bandwidth in Mbps
                     * 
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置Peak bandwidth in Mbps
                     * @param _maxBandWidth Peak bandwidth in Mbps
                     * 
                     */
                    void SetMaxBandWidth(const uint64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取Storage capacity in GB
                     * @return MaxStorage Storage capacity in GB
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置Storage capacity in GB
                     * @param _maxStorage Storage capacity in GB
                     * 
                     */
                    void SetMaxStorage(const uint64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取Instance expiration time in milliseconds
                     * @return ExpireTime Instance expiration time in milliseconds
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Instance expiration time in milliseconds
                     * @param _expireTime Instance expiration time in milliseconds
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Renewal mode. Valid values: `0` (Manual renewal, which is the default mode), `1` (Auto-renewal), `2` (Manual renewal, which is specified by users).
                     * @return AutoRenewFlag Renewal mode. Valid values: `0` (Manual renewal, which is the default mode), `1` (Auto-renewal), `2` (Manual renewal, which is specified by users).
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Renewal mode. Valid values: `0` (Manual renewal, which is the default mode), `1` (Auto-renewal), `2` (Manual renewal, which is specified by users).
                     * @param _autoRenewFlag Renewal mode. Valid values: `0` (Manual renewal, which is the default mode), `1` (Auto-renewal), `2` (Manual renewal, which is specified by users).
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Payment mode. 0: Postpaid; 1: Prepaid.
                     * @return PayMode Payment mode. 0: Postpaid; 1: Prepaid.
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Payment mode. 0: Postpaid; 1: Prepaid.
                     * @param _payMode Payment mode. 0: Postpaid; 1: Prepaid.
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
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
                     * 获取Instance specification ID
                     * @return SpecName Instance specification ID
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Instance specification ID
                     * @param _specName Instance specification ID
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取Maximum configurable message retention time, in hours
                     * @return MaxRetention Maximum configurable message retention time, in hours
                     * 
                     */
                    int64_t GetMaxRetention() const;

                    /**
                     * 设置Maximum configurable message retention time, in hours
                     * @param _maxRetention Maximum configurable message retention time, in hours
                     * 
                     */
                    void SetMaxRetention(const int64_t& _maxRetention);

                    /**
                     * 判断参数 MaxRetention 是否已赋值
                     * @return MaxRetention 是否已赋值
                     * 
                     */
                    bool MaxRetentionHasBeenSet() const;

                    /**
                     * 获取Minimum configurable message retention time, in hours
                     * @return MinRetention Minimum configurable message retention time, in hours
                     * 
                     */
                    int64_t GetMinRetention() const;

                    /**
                     * 设置Minimum configurable message retention time, in hours
                     * @param _minRetention Minimum configurable message retention time, in hours
                     * 
                     */
                    void SetMinRetention(const int64_t& _minRetention);

                    /**
                     * 判断参数 MinRetention 是否已赋值
                     * @return MinRetention 是否已赋值
                     * 
                     */
                    bool MinRetentionHasBeenSet() const;

                    /**
                     * 获取Instance message retention time, in hours
                     * @return Retention Instance message retention time, in hours
                     * 
                     */
                    int64_t GetRetention() const;

                    /**
                     * 设置Instance message retention time, in hours
                     * @param _retention Instance message retention time, in hours
                     * 
                     */
                    void SetRetention(const int64_t& _retention);

                    /**
                     * 判断参数 Retention 是否已赋值
                     * @return Retention 是否已赋值
                     * 
                     */
                    bool RetentionHasBeenSet() const;

                    /**
                     * 获取Whether to enable ACL authentication.
                     * @return AclEnabled Whether to enable ACL authentication.
                     * 
                     */
                    bool GetAclEnabled() const;

                    /**
                     * 设置Whether to enable ACL authentication.
                     * @param _aclEnabled Whether to enable ACL authentication.
                     * 
                     */
                    void SetAclEnabled(const bool& _aclEnabled);

                    /**
                     * 判断参数 AclEnabled 是否已赋值
                     * @return AclEnabled 是否已赋值
                     * 
                     */
                    bool AclEnabledHasBeenSet() const;

                    /**
                     * 获取Destruction time.
                     * @return DestroyTime Destruction time.
                     * 
                     */
                    uint64_t GetDestroyTime() const;

                    /**
                     * 设置Destruction time.
                     * @param _destroyTime Destruction time.
                     * 
                     */
                    void SetDestroyTime(const uint64_t& _destroyTime);

                    /**
                     * 判断参数 DestroyTime 是否已赋值
                     * @return DestroyTime 是否已赋值
                     * 
                     */
                    bool DestroyTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance version.
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed).
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Number of nodes
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Instance specification name
                     */
                    std::string m_configDisplay;
                    bool m_configDisplayHasBeenSet;

                    /**
                     * Peak TPS
                     */
                    uint64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * Peak bandwidth in Mbps
                     */
                    uint64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * Storage capacity in GB
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * Instance expiration time in milliseconds
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Renewal mode. Valid values: `0` (Manual renewal, which is the default mode), `1` (Auto-renewal), `2` (Manual renewal, which is specified by users).
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Payment mode. 0: Postpaid; 1: Prepaid.
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Instance specification ID
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Maximum configurable message retention time, in hours
                     */
                    int64_t m_maxRetention;
                    bool m_maxRetentionHasBeenSet;

                    /**
                     * Minimum configurable message retention time, in hours
                     */
                    int64_t m_minRetention;
                    bool m_minRetentionHasBeenSet;

                    /**
                     * Instance message retention time, in hours
                     */
                    int64_t m_retention;
                    bool m_retentionHasBeenSet;

                    /**
                     * Whether to enable ACL authentication.
                     */
                    bool m_aclEnabled;
                    bool m_aclEnabledHasBeenSet;

                    /**
                     * Destruction time.
                     */
                    uint64_t m_destroyTime;
                    bool m_destroyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQVIPINSTANCE_H_
