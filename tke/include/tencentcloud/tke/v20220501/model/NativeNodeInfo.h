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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_NATIVENODEINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_NATIVENODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/InternetAccessible.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Node information
                */
                class NativeNodeInfo : public AbstractModel
                {
                public:
                    NativeNodeInfo();
                    ~NativeNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node name
                     * @return MachineName Node name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Node name
                     * @param _machineName Node name
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Machine status
                     * @return MachineState Machine status
                     * 
                     */
                    std::string GetMachineState() const;

                    /**
                     * 设置Machine status
                     * @param _machineState Machine status
                     * 
                     */
                    void SetMachineState(const std::string& _machineState);

                    /**
                     * 判断参数 MachineState 是否已赋值
                     * @return MachineState 是否已赋值
                     * 
                     */
                    bool MachineStateHasBeenSet() const;

                    /**
                     * 获取Machine availability zone
                     * @return Zone Machine availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Machine availability zone
                     * @param _zone Machine availability zone
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Node billing type. PREPAID: Monthly subscription; POSTPAID_BY_HOUR: Pay-as-you-go (default);
                     * @return InstanceChargeType Node billing type. PREPAID: Monthly subscription; POSTPAID_BY_HOUR: Pay-as-you-go (default);
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Node billing type. PREPAID: Monthly subscription; POSTPAID_BY_HOUR: Pay-as-you-go (default);
                     * @param _instanceChargeType Node billing type. PREPAID: Monthly subscription; POSTPAID_BY_HOUR: Pay-as-you-go (default);
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
                     * 获取Creation time
                     * @return CreatedAt Creation time
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time
                     * @param _createdAt Creation time
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Machine login status
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return LoginStatus Machine login status
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLoginStatus() const;

                    /**
                     * 设置Machine login status
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _loginStatus Machine login status
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLoginStatus(const std::string& _loginStatus);

                    /**
                     * 判断参数 LoginStatus 是否已赋值
                     * @return LoginStatus 是否已赋值
                     * 
                     */
                    bool LoginStatusHasBeenSet() const;

                    /**
                     * 获取Whether to enable scale-in protection
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return IsProtectedFromScaleIn Whether to enable scale-in protection
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetIsProtectedFromScaleIn() const;

                    /**
                     * 设置Whether to enable scale-in protection
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _isProtectedFromScaleIn Whether to enable scale-in protection
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIsProtectedFromScaleIn(const bool& _isProtectedFromScaleIn);

                    /**
                     * 判断参数 IsProtectedFromScaleIn 是否已赋值
                     * @return IsProtectedFromScaleIn 是否已赋值
                     * 
                     */
                    bool IsProtectedFromScaleInHasBeenSet() const;

                    /**
                     * 获取Machine name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DisplayName Machine name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Machine name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _displayName Machine name
Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Number of CPU cores (unit: cores)
                     * @return CPU Number of CPU cores (unit: cores)
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置Number of CPU cores (unit: cores)
                     * @param _cPU Number of CPU cores (unit: cores)
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Number of GPU cores (unit: cores)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return GPU Number of GPU cores (unit: cores)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetGPU() const;

                    /**
                     * 设置Number of GPU cores (unit: cores)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _gPU Number of GPU cores (unit: cores)
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetGPU(const uint64_t& _gPU);

                    /**
                     * 判断参数 GPU 是否已赋值
                     * @return GPU 是否已赋值
                     * 
                     */
                    bool GPUHasBeenSet() const;

                    /**
                     * 获取Auto-renewal label
                     * @return RenewFlag Auto-renewal label
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Auto-renewal label
                     * @param _renewFlag Auto-renewal label
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Node billing mode (deprecated)
                     * @return PayMode Node billing mode (deprecated)
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Node billing mode (deprecated)
                     * @param _payMode Node billing mode (deprecated)
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Node memory capacity (unit: `GB`)
                     * @return Memory Node memory capacity (unit: `GB`)
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Node memory capacity (unit: `GB`)
                     * @param _memory Node memory capacity (unit: `GB`)
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth configuration
                     * @return InternetAccessible Public network bandwidth configuration
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Public network bandwidth configuration
                     * @param _internetAccessible Public network bandwidth configuration
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取Model family
                     * @return InstanceFamily Model family
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置Model family
                     * @param _instanceFamily Model family
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取Node private network IP
                     * @return LanIp Node private network IP
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置Node private network IP
                     * @param _lanIp Node private network IP
                     * 
                     */
                    void SetLanIp(const std::string& _lanIp);

                    /**
                     * 判断参数 LanIp 是否已赋值
                     * @return LanIp 是否已赋值
                     * 
                     */
                    bool LanIpHasBeenSet() const;

                    /**
                     * 获取Model
                     * @return InstanceType Model
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Model
                     * @param _instanceType Model
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Billing expiration time of monthly subscription nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return ExpiredTime Billing expiration time of monthly subscription nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Billing expiration time of monthly subscription nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _expiredTime Billing expiration time of monthly subscription nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Security group list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return SecurityGroupIDs Security group list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIDs() const;

                    /**
                     * 设置Security group list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _securityGroupIDs Security group list
Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取VPC unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return VpcId VPC unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _vpcId VPC unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Subnet unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return SubnetId Subnet unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _subnetId Subnet unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取OS name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return OsImage OS name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOsImage() const;

                    /**
                     * 设置OS name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _osImage OS name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOsImage(const std::string& _osImage);

                    /**
                     * 判断参数 OsImage 是否已赋值
                     * @return OsImage 是否已赋值
                     * 
                     */
                    bool OsImageHasBeenSet() const;

                    /**
                     * 获取
                     * @return InstanceId 
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置
                     * @param _instanceId 
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Node name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Machine status
                     */
                    std::string m_machineState;
                    bool m_machineStateHasBeenSet;

                    /**
                     * Machine availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Node billing type. PREPAID: Monthly subscription; POSTPAID_BY_HOUR: Pay-as-you-go (default);
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Machine login status
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_loginStatus;
                    bool m_loginStatusHasBeenSet;

                    /**
                     * Whether to enable scale-in protection
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    bool m_isProtectedFromScaleIn;
                    bool m_isProtectedFromScaleInHasBeenSet;

                    /**
                     * Machine name
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Number of CPU cores (unit: cores)
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Number of GPU cores (unit: cores)
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    uint64_t m_gPU;
                    bool m_gPUHasBeenSet;

                    /**
                     * Auto-renewal label
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Node billing mode (deprecated)
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Node memory capacity (unit: `GB`)
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Public network bandwidth configuration
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Model family
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * Node private network IP
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * Model
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Billing expiration time of monthly subscription nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Security group list
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_securityGroupIDs;
                    bool m_securityGroupIDsHasBeenSet;

                    /**
                     * VPC unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * OS name
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_osImage;
                    bool m_osImageHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_NATIVENODEINFO_H_
