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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyParamItem.h>
#include <tencentcloud/cynosdb/v20190107/model/UpgradeProxy.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * AddInstances request structure.
                */
                class AddInstancesRequest : public AbstractModel
                {
                public:
                    AddInstancesRequest();
                    ~AddInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
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
                     * 获取<p>Cpu cores</p>
                     * @return Cpu <p>Cpu cores</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Cpu cores</p>
                     * @param _cpu <p>Cpu cores</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory in GB
                     * @return Memory Memory in GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory in GB
                     * @param _memory Memory in GB
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Number of added read-only instances. Value range: (0,16].
                     * @return ReadOnlyCount Number of added read-only instances. Value range: (0,16].
                     * 
                     */
                    int64_t GetReadOnlyCount() const;

                    /**
                     * 设置Number of added read-only instances. Value range: (0,16].
                     * @param _readOnlyCount Number of added read-only instances. Value range: (0,16].
                     * 
                     */
                    void SetReadOnlyCount(const int64_t& _readOnlyCount);

                    /**
                     * 判断参数 ReadOnlyCount 是否已赋值
                     * @return ReadOnlyCount 是否已赋值
                     * 
                     */
                    bool ReadOnlyCountHasBeenSet() const;

                    /**
                     * 获取<p>Instance Machine Type. Supported values are as follows:</p><ul><li>common: indicates universal type</li><li>exclusive: indicates exclusive</li></ul>
                     * @return DeviceType <p>Instance Machine Type. Supported values are as follows:</p><ul><li>common: indicates universal type</li><li>exclusive: indicates exclusive</li></ul>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>Instance Machine Type. Supported values are as follows:</p><ul><li>common: indicates universal type</li><li>exclusive: indicates exclusive</li></ul>
                     * @param _deviceType <p>Instance Machine Type. Supported values are as follows:</p><ul><li>common: indicates universal type</li><li>exclusive: indicates exclusive</li></ul>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance group ID, used when adding new instances to an existing RO group. If not passed, a new RO group will be created. The current version does not recommend transmitting this value.</p>
                     * @return InstanceGrpId <p>Instance group ID, used when adding new instances to an existing RO group. If not passed, a new RO group will be created. The current version does not recommend transmitting this value.</p>
                     * @deprecated
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置<p>Instance group ID, used when adding new instances to an existing RO group. If not passed, a new RO group will be created. The current version does not recommend transmitting this value.</p>
                     * @param _instanceGrpId <p>Instance group ID, used when adding new instances to an existing RO group. If not passed, a new RO group will be created. The current version does not recommend transmitting this value.</p>
                     * @deprecated
                     */
                    void SetInstanceGrpId(const std::string& _instanceGrpId);

                    /**
                     * 判断参数 InstanceGrpId 是否已赋值
                     * @return InstanceGrpId 是否已赋值
                     * @deprecated
                     */
                    bool InstanceGrpIdHasBeenSet() const;

                    /**
                     * 获取<p>ID of the associated VPC network.</p>
                     * @return VpcId <p>ID of the associated VPC network.</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>ID of the associated VPC network.</p>
                     * @param _vpcId <p>ID of the associated VPC network.</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>Subnet ID. If VpcId is set up, SubnetId is required.</p>
                     * @return SubnetId <p>Subnet ID. If VpcId is set up, SubnetId is required.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID. If VpcId is set up, SubnetId is required.</p>
                     * @param _subnetId <p>Subnet ID. If VpcId is set up, SubnetId is required.</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取The port used when adding an RO group. Value range: [0,65535).
                     * @return Port The port used when adding an RO group. Value range: [0,65535).
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置The port used when adding an RO group. Value range: [0,65535).
                     * @param _port The port used when adding an RO group. Value range: [0,65535).
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Instance name. String length range: [0,64).
                     * @return InstanceName Instance name. String length range: [0,64).
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name. String length range: [0,64).
                     * @param _instanceName Instance name. String length range: [0,64).
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
                     * 获取<p>Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.</p>
                     * @return AutoVoucher <p>Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.</p>
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.</p>
                     * @param _autoVoucher <p>Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.</p>
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>Database type, value ranges from...to...: </p><li> MYSQL </li>
                     * @return DbType <p>Database type, value ranges from...to...: </p><li> MYSQL </li>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>Database type, value ranges from...to...: </p><li> MYSQL </li>
                     * @param _dbType <p>Database type, value ranges from...to...: </p><li> MYSQL </li>
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取<p>Order source, string length range [0,64)</p>
                     * @return OrderSource <p>Order source, string length range [0,64)</p>
                     * 
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置<p>Order source, string length range [0,64)</p>
                     * @param _orderSource <p>Order source, string length range [0,64)</p>
                     * 
                     */
                    void SetOrderSource(const std::string& _orderSource);

                    /**
                     * 判断参数 OrderSource 是否已赋值
                     * @return OrderSource 是否已赋值
                     * 
                     */
                    bool OrderSourceHasBeenSet() const;

                    /**
                     * 获取<p>Transaction mode. 0: place order and pay; 1: place order</p>
                     * @return DealMode <p>Transaction mode. 0: place order and pay; 1: place order</p>
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置<p>Transaction mode. 0: place order and pay; 1: place order</p>
                     * @param _dealMode <p>Transaction mode. 0: place order and pay; 1: place order</p>
                     * 
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     * 
                     */
                    bool DealModeHasBeenSet() const;

                    /**
                     * 获取<p>Parameter template ID</p>
                     * @return ParamTemplateId <p>Parameter template ID</p>
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置<p>Parameter template ID</p>
                     * @param _paramTemplateId <p>Parameter template ID</p>
                     * 
                     */
                    void SetParamTemplateId(const int64_t& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>Parameter list. InstanceParams is valid only when ParamTemplateId is passed in.</p>
                     * @return InstanceParams <p>Parameter list. InstanceParams is valid only when ParamTemplateId is passed in.</p>
                     * 
                     */
                    std::vector<ModifyParamItem> GetInstanceParams() const;

                    /**
                     * 设置<p>Parameter list. InstanceParams is valid only when ParamTemplateId is passed in.</p>
                     * @param _instanceParams <p>Parameter list. InstanceParams is valid only when ParamTemplateId is passed in.</p>
                     * 
                     */
                    void SetInstanceParams(const std::vector<ModifyParamItem>& _instanceParams);

                    /**
                     * 判断参数 InstanceParams 是否已赋值
                     * @return InstanceParams 是否已赋值
                     * 
                     */
                    bool InstanceParamsHasBeenSet() const;

                    /**
                     * 获取<p>Security group ID. You can specify security groups when creating a read-only instance.</p>
                     * @return SecurityGroupIds <p>Security group ID. You can specify security groups when creating a read-only instance.</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>Security group ID. You can specify security groups when creating a read-only instance.</p>
                     * @param _securityGroupIds <p>Security group ID. You can specify security groups when creating a read-only instance.</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>proxy sync upgrade</p>
                     * @return UpgradeProxy <p>proxy sync upgrade</p>
                     * 
                     */
                    UpgradeProxy GetUpgradeProxy() const;

                    /**
                     * 设置<p>proxy sync upgrade</p>
                     * @param _upgradeProxy <p>proxy sync upgrade</p>
                     * 
                     */
                    void SetUpgradeProxy(const UpgradeProxy& _upgradeProxy);

                    /**
                     * 判断参数 UpgradeProxy 是否已赋值
                     * @return UpgradeProxy 是否已赋值
                     * 
                     */
                    bool UpgradeProxyHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Cpu cores</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Number of added read-only instances. Value range: (0,16].
                     */
                    int64_t m_readOnlyCount;
                    bool m_readOnlyCountHasBeenSet;

                    /**
                     * <p>Instance Machine Type. Supported values are as follows:</p><ul><li>common: indicates universal type</li><li>exclusive: indicates exclusive</li></ul>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>Instance group ID, used when adding new instances to an existing RO group. If not passed, a new RO group will be created. The current version does not recommend transmitting this value.</p>
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * <p>ID of the associated VPC network.</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID. If VpcId is set up, SubnetId is required.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The port used when adding an RO group. Value range: [0,65535).
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Instance name. String length range: [0,64).
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Whether to automatically select a voucher. 1: Yes; 0: No. Default is 0.</p>
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>Database type, value ranges from...to...: </p><li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>Order source, string length range [0,64)</p>
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * <p>Transaction mode. 0: place order and pay; 1: place order</p>
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * <p>Parameter template ID</p>
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>Parameter list. InstanceParams is valid only when ParamTemplateId is passed in.</p>
                     */
                    std::vector<ModifyParamItem> m_instanceParams;
                    bool m_instanceParamsHasBeenSet;

                    /**
                     * <p>Security group ID. You can specify security groups when creating a read-only instance.</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>proxy sync upgrade</p>
                     */
                    UpgradeProxy m_upgradeProxy;
                    bool m_upgradeProxyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESREQUEST_H_
