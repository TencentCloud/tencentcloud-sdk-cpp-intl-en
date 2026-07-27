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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_MODIFYCLUSTERMACHINEREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_MODIFYCLUSTERMACHINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/Disk.h>
#include <tencentcloud/tke/v20220501/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * ModifyClusterMachine request structure.
                */
                class ModifyClusterMachineRequest : public AbstractModel
                {
                public:
                    ModifyClusterMachineRequest();
                    ~ModifyClusterMachineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster ID</p>
                     * @return ClusterId <p>Cluster ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID</p>
                     * @param _clusterId <p>Cluster ID</p>
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
                     * 获取<p>Node name list.</p>
                     * @return MachineNames <p>Node name list.</p>
                     * 
                     */
                    std::vector<std::string> GetMachineNames() const;

                    /**
                     * 设置<p>Node name list.</p>
                     * @param _machineNames <p>Node name list.</p>
                     * 
                     */
                    void SetMachineNames(const std::vector<std::string>& _machineNames);

                    /**
                     * 判断参数 MachineNames 是否已赋值
                     * @return MachineNames 是否已赋值
                     * 
                     */
                    bool MachineNamesHasBeenSet() const;

                    /**
                     * 获取<p>display name of the machine</p>
                     * @return DisplayName <p>display name of the machine</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>display name of the machine</p>
                     * @param _displayName <p>display name of the machine</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>System disk C</p>
                     * @return SystemDisk <p>System disk C</p>
                     * 
                     */
                    Disk GetSystemDisk() const;

                    /**
                     * 设置<p>System disk C</p>
                     * @param _systemDisk <p>System disk C</p>
                     * 
                     */
                    void SetSystemDisk(const Disk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取<p>Security group list</p>
                     * @return SecurityGroupIDs <p>Security group list</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIDs() const;

                    /**
                     * 设置<p>Security group list</p>
                     * @param _securityGroupIDs <p>Security group list</p>
                     * 
                     */
                    void SetSecurityGroupIDs(const std::vector<std::string>& _securityGroupIDs);

                    /**
                     * 判断参数 SecurityGroupIDs 是否已赋值
                     * @return SecurityGroupIDs 是否已赋值
                     * 
                     */
                    bool SecurityGroupIDsHasBeenSet() const;

                    /**
                     * 获取<p>Node prepayment information.</p>
                     * @return InstanceChargePrepaid <p>Node prepayment information.</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>Node prepayment information.</p>
                     * @param _instanceChargePrepaid <p>Node prepayment information.</p>
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取<p>Change node billing type</p><p>Enumeration value:</p><ul><li>POSTPAID_BY_HOUR: The targeted billing type is pay-as-you-go.</li><li>PREPAID: The targeted billing type is annual and monthly subscription.</li></ul>
                     * @return InstanceChargeType <p>Change node billing type</p><p>Enumeration value:</p><ul><li>POSTPAID_BY_HOUR: The targeted billing type is pay-as-you-go.</li><li>PREPAID: The targeted billing type is annual and monthly subscription.</li></ul>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Change node billing type</p><p>Enumeration value:</p><ul><li>POSTPAID_BY_HOUR: The targeted billing type is pay-as-you-go.</li><li>PREPAID: The targeted billing type is annual and monthly subscription.</li></ul>
                     * @param _instanceChargeType <p>Change node billing type</p><p>Enumeration value:</p><ul><li>POSTPAID_BY_HOUR: The targeted billing type is pay-as-you-go.</li><li>PREPAID: The targeted billing type is annual and monthly subscription.</li></ul>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to switch the billing mode of the elastic data cloud disk simultaneously. Value ranges from true to false: true indicates switching the billing mode of the elastic data cloud disk, false indicates not switching the billing mode of the elastic data cloud disk. Default value: true.</p><p>Default value: true</p>
                     * @return ModifyPortableDataDisk <p>Whether to switch the billing mode of the elastic data cloud disk simultaneously. Value ranges from true to false: true indicates switching the billing mode of the elastic data cloud disk, false indicates not switching the billing mode of the elastic data cloud disk. Default value: true.</p><p>Default value: true</p>
                     * 
                     */
                    bool GetModifyPortableDataDisk() const;

                    /**
                     * 设置<p>Whether to switch the billing mode of the elastic data cloud disk simultaneously. Value ranges from true to false: true indicates switching the billing mode of the elastic data cloud disk, false indicates not switching the billing mode of the elastic data cloud disk. Default value: true.</p><p>Default value: true</p>
                     * @param _modifyPortableDataDisk <p>Whether to switch the billing mode of the elastic data cloud disk simultaneously. Value ranges from true to false: true indicates switching the billing mode of the elastic data cloud disk, false indicates not switching the billing mode of the elastic data cloud disk. Default value: true.</p><p>Default value: true</p>
                     * 
                     */
                    void SetModifyPortableDataDisk(const bool& _modifyPortableDataDisk);

                    /**
                     * 判断参数 ModifyPortableDataDisk 是否已赋值
                     * @return ModifyPortableDataDisk 是否已赋值
                     * 
                     */
                    bool ModifyPortableDataDiskHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Node name list.</p>
                     */
                    std::vector<std::string> m_machineNames;
                    bool m_machineNamesHasBeenSet;

                    /**
                     * <p>display name of the machine</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>System disk C</p>
                     */
                    Disk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>Security group list</p>
                     */
                    std::vector<std::string> m_securityGroupIDs;
                    bool m_securityGroupIDsHasBeenSet;

                    /**
                     * <p>Node prepayment information.</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p>Change node billing type</p><p>Enumeration value:</p><ul><li>POSTPAID_BY_HOUR: The targeted billing type is pay-as-you-go.</li><li>PREPAID: The targeted billing type is annual and monthly subscription.</li></ul>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>Whether to switch the billing mode of the elastic data cloud disk simultaneously. Value ranges from true to false: true indicates switching the billing mode of the elastic data cloud disk, false indicates not switching the billing mode of the elastic data cloud disk. Default value: true.</p><p>Default value: true</p>
                     */
                    bool m_modifyPortableDataDisk;
                    bool m_modifyPortableDataDiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_MODIFYCLUSTERMACHINEREQUEST_H_
