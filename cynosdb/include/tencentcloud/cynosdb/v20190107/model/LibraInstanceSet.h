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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRAINSTANCESET_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRAINSTANCESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * libra instance information
                */
                class LibraInstanceSet : public AbstractModel
                {
                public:
                    LibraInstanceSet();
                    ~LibraInstanceSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database schema
                     * @return DbMode Database schema
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置Database schema
                     * @param _dbMode Database schema
                     * 
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     * 
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores
                     * @return InstanceCpu Number of CPU cores
                     * 
                     */
                    int64_t GetInstanceCpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _instanceCpu Number of CPU cores
                     * 
                     */
                    void SetInstanceCpu(const int64_t& _instanceCpu);

                    /**
                     * 判断参数 InstanceCpu 是否已赋值
                     * @return InstanceCpu 是否已赋值
                     * 
                     */
                    bool InstanceCpuHasBeenSet() const;

                    /**
                     * 获取Instance type
                     * @return InstanceDeviceType Instance type
                     * 
                     */
                    std::string GetInstanceDeviceType() const;

                    /**
                     * 设置Instance type
                     * @param _instanceDeviceType Instance type
                     * 
                     */
                    void SetInstanceDeviceType(const std::string& _instanceDeviceType);

                    /**
                     * 判断参数 InstanceDeviceType 是否已赋值
                     * @return InstanceDeviceType 是否已赋值
                     * 
                     */
                    bool InstanceDeviceTypeHasBeenSet() const;

                    /**
                     * 获取Group ID
                     * @return InstanceGroupId Group ID
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置Group ID
                     * @param _instanceGroupId Group ID
                     * 
                     */
                    void SetInstanceGroupId(const std::string& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

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
                     * 获取memory
                     * @return InstanceMemory memory
                     * 
                     */
                    int64_t GetInstanceMemory() const;

                    /**
                     * 设置memory
                     * @param _instanceMemory memory
                     * 
                     */
                    void SetInstanceMemory(const int64_t& _instanceMemory);

                    /**
                     * 判断参数 InstanceMemory 是否已赋值
                     * @return InstanceMemory 是否已赋值
                     * 
                     */
                    bool InstanceMemoryHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
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
                     * 获取Payment mode
                     * @return InstancePayMode Payment mode
                     * 
                     */
                    int64_t GetInstancePayMode() const;

                    /**
                     * 设置Payment mode
                     * @param _instancePayMode Payment mode
                     * 
                     */
                    void SetInstancePayMode(const int64_t& _instancePayMode);

                    /**
                     * 判断参数 InstancePayMode 是否已赋值
                     * @return InstancePayMode 是否已赋值
                     * 
                     */
                    bool InstancePayModeHasBeenSet() const;

                    /**
                     * 获取Payment end time
                     * @return InstancePeriodEndTime Payment end time
                     * 
                     */
                    std::string GetInstancePeriodEndTime() const;

                    /**
                     * 设置Payment end time
                     * @param _instancePeriodEndTime Payment end time
                     * 
                     */
                    void SetInstancePeriodEndTime(const std::string& _instancePeriodEndTime);

                    /**
                     * 判断参数 InstancePeriodEndTime 是否已赋值
                     * @return InstancePeriodEndTime 是否已赋值
                     * 
                     */
                    bool InstancePeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取Instance role
                     * @return InstanceRole Instance role
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置Instance role
                     * @param _instanceRole Instance role
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取Instance status
                     * @return InstanceStatus Instance status
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Instance status
                     * @param _instanceStatus Instance status
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Instance status description
                     * @return InstanceStatusDesc Instance status description
                     * 
                     */
                    std::string GetInstanceStatusDesc() const;

                    /**
                     * 设置Instance status description
                     * @param _instanceStatusDesc Instance status description
                     * 
                     */
                    void SetInstanceStatusDesc(const std::string& _instanceStatusDesc);

                    /**
                     * 判断参数 InstanceStatusDesc 是否已赋值
                     * @return InstanceStatusDesc 是否已赋值
                     * 
                     */
                    bool InstanceStatusDescHasBeenSet() const;

                    /**
                     * 获取Network type.
                     * @return NetType Network type.
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type.
                     * @param _netType Network type.
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取Subnet ID
                     * @return UniqSubnetId Subnet ID
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param _uniqSubnetId Subnet ID
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取vpcid
                     * @return UniqVpcId vpcid
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置vpcid
                     * @param _uniqVpcId vpcid
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Virtual IP
                     * @return Vip Virtual IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Virtual IP
                     * @param _vip Virtual IP
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Virtual port
                     * @return Vport Virtual port
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Virtual port
                     * @param _vport Virtual port
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Public network region
                     * @return WanDomain Public network region
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置Public network region
                     * @param _wanDomain Public network region
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取Public IP address
                     * @return WanIP Public IP address
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置Public IP address
                     * @param _wanIP Public IP address
                     * 
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     * 
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取Public network port
                     * @return WanPort Public network port
                     * 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置Public network port
                     * @param _wanPort Public network port
                     * 
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     * 
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取Public network status
                     * @return WanStatus Public network status
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置Public network status
                     * @param _wanStatus Public network status
                     * 
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取hard disk
                     * @return InstanceStorage hard disk
                     * 
                     */
                    int64_t GetInstanceStorage() const;

                    /**
                     * 设置hard disk
                     * @param _instanceStorage hard disk
                     * 
                     */
                    void SetInstanceStorage(const int64_t& _instanceStorage);

                    /**
                     * 判断参数 InstanceStorage 是否已赋值
                     * @return InstanceStorage 是否已赋值
                     * 
                     */
                    bool InstanceStorageHasBeenSet() const;

                    /**
                     * 获取Hard disk type.
                     * @return InstanceStorageType Hard disk type.
                     * 
                     */
                    std::string GetInstanceStorageType() const;

                    /**
                     * 设置Hard disk type.
                     * @param _instanceStorageType Hard disk type.
                     * 
                     */
                    void SetInstanceStorageType(const std::string& _instanceStorageType);

                    /**
                     * 判断参数 InstanceStorageType 是否已赋值
                     * @return InstanceStorageType 是否已赋值
                     * 
                     */
                    bool InstanceStorageTypeHasBeenSet() const;

                private:

                    /**
                     * Database schema
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * Number of CPU cores
                     */
                    int64_t m_instanceCpu;
                    bool m_instanceCpuHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_instanceDeviceType;
                    bool m_instanceDeviceTypeHasBeenSet;

                    /**
                     * Group ID
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * memory
                     */
                    int64_t m_instanceMemory;
                    bool m_instanceMemoryHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Payment mode
                     */
                    int64_t m_instancePayMode;
                    bool m_instancePayModeHasBeenSet;

                    /**
                     * Payment end time
                     */
                    std::string m_instancePeriodEndTime;
                    bool m_instancePeriodEndTimeHasBeenSet;

                    /**
                     * Instance role
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * Instance status
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Instance status description
                     */
                    std::string m_instanceStatusDesc;
                    bool m_instanceStatusDescHasBeenSet;

                    /**
                     * Network type.
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * vpcid
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Virtual IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Virtual port
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Public network region
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * Public network port
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * Public network status
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * hard disk
                     */
                    int64_t m_instanceStorage;
                    bool m_instanceStorageHasBeenSet;

                    /**
                     * Hard disk type.
                     */
                    std::string m_instanceStorageType;
                    bool m_instanceStorageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRAINSTANCESET_H_
