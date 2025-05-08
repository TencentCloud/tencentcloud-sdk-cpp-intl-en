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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSINSTANCE_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQServerlessEndpoint.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * TDMQ for rabbitmq serverless instance.
                */
                class RabbitMQServerlessInstance : public AbstractModel
                {
                public:
                    RabbitMQServerlessInstance();
                    ~RabbitMQServerlessInstance() = default;
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
                     * 获取Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.
                     * @return Status Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.
                     * @param _status Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取MaxTPS
                     * @return MaxTps MaxTPS
                     * 
                     */
                    int64_t GetMaxTps() const;

                    /**
                     * 设置MaxTPS
                     * @param _maxTps MaxTPS
                     * 
                     */
                    void SetMaxTps(const int64_t& _maxTps);

                    /**
                     * 判断参数 MaxTps 是否已赋值
                     * @return MaxTps 是否已赋值
                     * 
                     */
                    bool MaxTpsHasBeenSet() const;

                    /**
                     * 获取MaxBandwidth
                     * @return MaxBandWidth MaxBandwidth
                     * 
                     */
                    int64_t GetMaxBandWidth() const;

                    /**
                     * 设置MaxBandwidth
                     * @param _maxBandWidth MaxBandwidth
                     * 
                     */
                    void SetMaxBandWidth(const int64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取Expiration time of the cluster.
                     * @return ExpireTime Expiration time of the cluster.
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Expiration time of the cluster.
                     * @param _expireTime Expiration time of the cluster.
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
                     * 获取Auto-renewal flag. 0 indicates the default status (If the default status is not configured, manual renewal is enabled), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (configured by the user).
                     * @return AutoRenewFlag Auto-renewal flag. 0 indicates the default status (If the default status is not configured, manual renewal is enabled), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (configured by the user).
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. 0 indicates the default status (If the default status is not configured, manual renewal is enabled), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (configured by the user).
                     * @param _autoRenewFlag Auto-renewal flag. 0 indicates the default status (If the default status is not configured, manual renewal is enabled), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (configured by the user).
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
                     * 获取0: Postpaid, 1: Prepaid
                     * @return PayMode 0: Postpaid, 1: Prepaid
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置0: Postpaid, 1: Prepaid
                     * @param _payMode 0: Postpaid, 1: Prepaid
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
                     * 获取Cluster specifications
                     * @return SpecName Cluster specifications
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Cluster specifications
                     * @param _specName Cluster specifications
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
                     * 获取Exception information.
                     * @return ExceptionInformation Exception information.
                     * 
                     */
                    std::string GetExceptionInformation() const;

                    /**
                     * 设置Exception information.
                     * @param _exceptionInformation Exception information.
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
                     * 获取Public network access point.
                     * @return PublicAccessEndpoint Public network access point.
                     * 
                     */
                    std::string GetPublicAccessEndpoint() const;

                    /**
                     * 设置Public network access point.
                     * @param _publicAccessEndpoint Public network access point.
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
                     * 获取The virtual private cloud (vpc) network access point.
                     * @return Vpcs The virtual private cloud (vpc) network access point.
                     * 
                     */
                    std::vector<RabbitMQServerlessEndpoint> GetVpcs() const;

                    /**
                     * 设置The virtual private cloud (vpc) network access point.
                     * @param _vpcs The virtual private cloud (vpc) network access point.
                     * 
                     */
                    void SetVpcs(const std::vector<RabbitMQServerlessEndpoint>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     * 
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.

                     * @return ClusterStatus Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.

                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.

                     * @param _clusterStatus Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.

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
                     * 获取Specifies the cluster type: 1.
                     * @return InstanceType Specifies the cluster type: 1.
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置Specifies the cluster type: 1.
                     * @param _instanceType Specifies the cluster type: 1.
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
                     * 获取Expiration time
                     * @return CreateTime Expiration time
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Expiration time
                     * @param _createTime Expiration time
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
                     * 获取For compatibility with the managed version, the fixed value is 0.
                     * @return NodeCount For compatibility with the managed version, the fixed value is 0.
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置For compatibility with the managed version, the fixed value is 0.
                     * @param _nodeCount For compatibility with the managed version, the fixed value is 0.
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取For compatibility with the managed version, the fixed value is 0.
                     * @return MaxStorage For compatibility with the managed version, the fixed value is 0.
                     * 
                     */
                    int64_t GetMaxStorage() const;

                    /**
                     * 设置For compatibility with the managed version, the fixed value is 0.
                     * @param _maxStorage For compatibility with the managed version, the fixed value is 0.
                     * 
                     */
                    void SetMaxStorage(const int64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取Isolation time
                     * @return IsolatedTime Isolation time
                     * 
                     */
                    uint64_t GetIsolatedTime() const;

                    /**
                     * 设置Isolation time
                     * @param _isolatedTime Isolation time
                     * 
                     */
                    void SetIsolatedTime(const uint64_t& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

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
                     * Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * MaxTPS
                     */
                    int64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * MaxBandwidth
                     */
                    int64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * Expiration time of the cluster.
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Auto-renewal flag. 0 indicates the default status (If the default status is not configured, manual renewal is enabled), 1 indicates auto-renewal, and 2 indicates explicitly no auto-renewal (configured by the user).
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 0: Postpaid, 1: Prepaid
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Cluster specifications
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Exception information.
                     */
                    std::string m_exceptionInformation;
                    bool m_exceptionInformationHasBeenSet;

                    /**
                     * Public network access point.
                     */
                    std::string m_publicAccessEndpoint;
                    bool m_publicAccessEndpointHasBeenSet;

                    /**
                     * The virtual private cloud (vpc) network access point.
                     */
                    std::vector<RabbitMQServerlessEndpoint> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * Instance status. 0 indicates creating in progress. 1 indicates normal. 2 indicates isolated. 3 indicates terminated. 4 indicates exception. 5 indicates delivery failed.

                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * Specifies the cluster type: 1.
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Expiration time
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * For compatibility with the managed version, the fixed value is 0.
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * For compatibility with the managed version, the fixed value is 0.
                     */
                    int64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * Isolation time
                     */
                    uint64_t m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSINSTANCE_H_
