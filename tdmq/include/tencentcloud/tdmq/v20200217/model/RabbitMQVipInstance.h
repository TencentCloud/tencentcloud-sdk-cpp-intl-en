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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIPINSTANCE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcEndpointInfo.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ managed instance information.
                */
                class RabbitMQVipInstance : public AbstractModel
                {
                public:
                    RabbitMQVipInstance();
                    ~RabbitMQVipInstance() = default;
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
                     * 获取Specifies the instance expiration time in milliseconds as a unix timestamp. the value is 0 for pay-as-you-go resources.
                     * @return ExpireTime Specifies the instance expiration time in milliseconds as a unix timestamp. the value is 0 for pay-as-you-go resources.
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Specifies the instance expiration time in milliseconds as a unix timestamp. the value is 0 for pay-as-you-go resources.
                     * @param _expireTime Specifies the instance expiration time in milliseconds as a unix timestamp. the value is 0 for pay-as-you-go resources.
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
                     * 获取1 indicates prepaid mode, 0 indicates postpaid.
                     * @return PayMode 1 indicates prepaid mode, 0 indicates postpaid.
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置1 indicates prepaid mode, 0 indicates postpaid.
                     * @param _payMode 1 indicates prepaid mode, 0 indicates postpaid.
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
                     * 获取Node specification of the cluster. specifies the corresponding flag.
2C8G:rabbit-vip-profession-2c8g
4C16G:rabbit-vip-profession-4c16g
8C32G:rabbit-vip-profession-8c32g
16C32G:rabbit-vip-basic-4
16C64G:rabbit-vip-profession-16c64g
2C4G:rabbit-vip-basic-5
4C8G:rabbit-vip-basic-1
8C16G (sold out): rabbit-vip-basic-2.
Specifies the default value as 4C8G: rabbit-vip-basic-1.
                     * @return SpecName Node specification of the cluster. specifies the corresponding flag.
2C8G:rabbit-vip-profession-2c8g
4C16G:rabbit-vip-profession-4c16g
8C32G:rabbit-vip-profession-8c32g
16C32G:rabbit-vip-basic-4
16C64G:rabbit-vip-profession-16c64g
2C4G:rabbit-vip-basic-5
4C8G:rabbit-vip-basic-1
8C16G (sold out): rabbit-vip-basic-2.
Specifies the default value as 4C8G: rabbit-vip-basic-1.
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Node specification of the cluster. specifies the corresponding flag.
2C8G:rabbit-vip-profession-2c8g
4C16G:rabbit-vip-profession-4c16g
8C32G:rabbit-vip-profession-8c32g
16C32G:rabbit-vip-basic-4
16C64G:rabbit-vip-profession-16c64g
2C4G:rabbit-vip-basic-5
4C8G:rabbit-vip-basic-1
8C16G (sold out): rabbit-vip-basic-2.
Specifies the default value as 4C8G: rabbit-vip-basic-1.
                     * @param _specName Node specification of the cluster. specifies the corresponding flag.
2C8G:rabbit-vip-profession-2c8g
4C16G:rabbit-vip-profession-4c16g
8C32G:rabbit-vip-profession-8c32g
16C32G:rabbit-vip-basic-4
16C64G:rabbit-vip-profession-16c64g
2C4G:rabbit-vip-basic-5
4C8G:rabbit-vip-basic-1
8C16G (sold out): rabbit-vip-basic-2.
Specifies the default value as 4C8G: rabbit-vip-basic-1.
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
                     * 获取Cluster exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExceptionInformation Cluster exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExceptionInformation() const;

                    /**
                     * 设置Cluster exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exceptionInformation Cluster exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExceptionInformation(const std::string& _exceptionInformation);

                    /**
                     * 判断参数 ExceptionInformation 是否已赋值
                     * @return ExceptionInformation 是否已赋值
                     * 
                     */
                    bool ExceptionInformationHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed).
This parameter is used to display the instance status additionally and distinguish from the `Status` parameter.
                     * @return ClusterStatus Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed).
This parameter is used to display the instance status additionally and distinguish from the `Status` parameter.
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed).
This parameter is used to display the instance status additionally and distinguish from the `Status` parameter.
                     * @param _clusterStatus Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed).
This parameter is used to display the instance status additionally and distinguish from the `Status` parameter.
                     * 
                     */
                    void SetClusterStatus(const int64_t& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取Public network access point.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicAccessEndpoint Public network access point.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicAccessEndpoint() const;

                    /**
                     * 设置Public network access point.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicAccessEndpoint Public network access point.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicAccessEndpoint(const std::string& _publicAccessEndpoint);

                    /**
                     * 判断参数 PublicAccessEndpoint 是否已赋值
                     * @return PublicAccessEndpoint 是否已赋值
                     * 
                     */
                    bool PublicAccessEndpointHasBeenSet() const;

                    /**
                     * 获取VPC access point list.
                     * @return Vpcs VPC access point list.
                     * 
                     */
                    std::vector<VpcEndpointInfo> GetVpcs() const;

                    /**
                     * 设置VPC access point list.
                     * @param _vpcs VPC access point list.
                     * 
                     */
                    void SetVpcs(const std::vector<VpcEndpointInfo>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     * 
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取Creation time in milliseconds. unix timestamp.
                     * @return CreateTime Creation time in milliseconds. unix timestamp.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time in milliseconds. unix timestamp.
                     * @param _createTime Creation time in milliseconds. unix timestamp.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Instance type. valid values: 0 (managed), 1 (Serverless).
                     * @return InstanceType Instance type. valid values: 0 (managed), 1 (Serverless).
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置Instance type. valid values: 0 (managed), 1 (Serverless).
                     * @param _instanceType Instance type. valid values: 0 (managed), 1 (Serverless).
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Isolation time, in milliseconds. unix timestamp.
                     * @return IsolatedTime Isolation time, in milliseconds. unix timestamp.
                     * 
                     */
                    uint64_t GetIsolatedTime() const;

                    /**
                     * 设置Isolation time, in milliseconds. unix timestamp.
                     * @param _isolatedTime Isolation time, in milliseconds. unix timestamp.
                     * 
                     */
                    void SetIsolatedTime(const uint64_t& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取Whether deletion protection is enabled.
                     * @return EnableDeletionProtection Whether deletion protection is enabled.
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置Whether deletion protection is enabled.
                     * @param _enableDeletionProtection Whether deletion protection is enabled.
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                    /**
                     * 获取Tag list
                     * @return Tags Tag list
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list
                     * @param _tags Tag list
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

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
                     * Specifies the instance expiration time in milliseconds as a unix timestamp. the value is 0 for pay-as-you-go resources.
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Renewal mode. Valid values: `0` (Manual renewal, which is the default mode), `1` (Auto-renewal), `2` (Manual renewal, which is specified by users).
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 1 indicates prepaid mode, 0 indicates postpaid.
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Node specification of the cluster. specifies the corresponding flag.
2C8G:rabbit-vip-profession-2c8g
4C16G:rabbit-vip-profession-4c16g
8C32G:rabbit-vip-profession-8c32g
16C32G:rabbit-vip-basic-4
16C64G:rabbit-vip-profession-16c64g
2C4G:rabbit-vip-basic-5
4C8G:rabbit-vip-basic-1
8C16G (sold out): rabbit-vip-basic-2.
Specifies the default value as 4C8G: rabbit-vip-basic-1.
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Cluster exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_exceptionInformation;
                    bool m_exceptionInformationHasBeenSet;

                    /**
                     * Instance status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated), `3` (Terminated), `4` (Abnormal), `5` (Delivery failed).
This parameter is used to display the instance status additionally and distinguish from the `Status` parameter.
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * Public network access point.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicAccessEndpoint;
                    bool m_publicAccessEndpointHasBeenSet;

                    /**
                     * VPC access point list.
                     */
                    std::vector<VpcEndpointInfo> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * Creation time in milliseconds. unix timestamp.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance type. valid values: 0 (managed), 1 (Serverless).
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Isolation time, in milliseconds. unix timestamp.
                     */
                    uint64_t m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * Whether deletion protection is enabled.
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIPINSTANCE_H_
