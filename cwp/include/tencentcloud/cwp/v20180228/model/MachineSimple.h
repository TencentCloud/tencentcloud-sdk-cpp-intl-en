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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MACHINESIMPLE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MACHINESIMPLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>
#include <tencentcloud/cwp/v20180228/model/RegionInfo.h>
#include <tencentcloud/cwp/v20180228/model/LicenseOrder.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Host List Shuttle Box
                */
                class MachineSimple : public AbstractModel
                {
                public:
                    MachineSimple();
                    ~MachineSimple() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host name.
                     * @return MachineName Host name.
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Host name.
                     * @param _machineName Host name.
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
                     * 获取Host System.
                     * @return MachineOs Host System.
                     * 
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 设置Host System.
                     * @param _machineOs Host System.
                     * 
                     */
                    void SetMachineOs(const std::string& _machineOs);

                    /**
                     * 判断参数 MachineOs 是否已赋值
                     * @return MachineOs 是否已赋值
                     * 
                     */
                    bool MachineOsHasBeenSet() const;

                    /**
                     * 获取Yunjing client UUID. If the client is offline for a long time, an empty string is returned.
                     * @return Uuid Yunjing client UUID. If the client is offline for a long time, an empty string is returned.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Yunjing client UUID. If the client is offline for a long time, an empty string is returned.
                     * @param _uuid Yunjing client UUID. If the client is offline for a long time, an empty string is returned.
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取CVM or BM Machine Unique UUID.
                     * @return Quuid CVM or BM Machine Unique UUID.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置CVM or BM Machine Unique UUID.
                     * @param _quuid CVM or BM Machine Unique UUID.
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Host IP.
                     * @return MachineIp Host IP.
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Host IP.
                     * @param _machineIp Host IP.
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Whether the edition is Pro Edition
<li>true: yes</li>
<li>false: no</li>
                     * @return IsProVersion Whether the edition is Pro Edition
<li>true: yes</li>
<li>false: no</li>
                     * 
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置Whether the edition is Pro Edition
<li>true: yes</li>
<li>false: no</li>
                     * @param _isProVersion Whether the edition is Pro Edition
<li>true: yes</li>
<li>false: no</li>
                     * 
                     */
                    void SetIsProVersion(const bool& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     * 
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取Public IP address of the host
                     * @return MachineWanIp Public IP address of the host
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Public IP address of the host
                     * @param _machineWanIp Public IP address of the host
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取Host status
<li>POSTPAY: postpaid, indicating pay-as-you-go mode </li>
<li>PREPAY: prepaid, indicating monthly subscription mode</li>
                     * @return PayMode Host status
<li>POSTPAY: postpaid, indicating pay-as-you-go mode </li>
<li>PREPAY: prepaid, indicating monthly subscription mode</li>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Host status
<li>POSTPAY: postpaid, indicating pay-as-you-go mode </li>
<li>PREPAY: prepaid, indicating monthly subscription mode</li>
                     * @param _payMode Host status
<li>POSTPAY: postpaid, indicating pay-as-you-go mode </li>
<li>PREPAY: prepaid, indicating monthly subscription mode</li>
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
                     * 获取Tag information
                     * @return Tag Tag information
                     * 
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置Tag information
                     * @param _tag Tag information
                     * 
                     */
                    void SetTag(const std::vector<MachineTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Region information
                     * @return RegionInfo Region information
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置Region information
                     * @param _regionInfo Region information
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                    /**
                     * 获取Instance status. TERMINATED_PRO_VERSION: terminated.
                     * @return InstanceState Instance status. TERMINATED_PRO_VERSION: terminated.
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Instance status. TERMINATED_PRO_VERSION: terminated.
                     * @param _instanceState Instance status. TERMINATED_PRO_VERSION: terminated.
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Machine Zone Type. CVM - Cloud Virtual Machine; BM: Bare Metal; ECM: Edge Computing Machine; LH: Lightweight Application Server; Other: Hybrid Cloud Zone
                     * @return MachineType Machine Zone Type. CVM - Cloud Virtual Machine; BM: Bare Metal; ECM: Edge Computing Machine; LH: Lightweight Application Server; Other: Hybrid Cloud Zone
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Machine Zone Type. CVM - Cloud Virtual Machine; BM: Bare Metal; ECM: Edge Computing Machine; LH: Lightweight Application Server; Other: Hybrid Cloud Zone
                     * @param _machineType Machine Zone Type. CVM - Cloud Virtual Machine; BM: Bare Metal; ECM: Edge Computing Machine; LH: Lightweight Application Server; Other: Hybrid Cloud Zone
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Kernel version
                     * @return KernelVersion Kernel version
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置Kernel version
                     * @param _kernelVersion Kernel version
                     * 
                     */
                    void SetKernelVersion(const std::string& _kernelVersion);

                    /**
                     * 判断参数 KernelVersion 是否已赋值
                     * @return KernelVersion 是否已赋值
                     * 
                     */
                    bool KernelVersionHasBeenSet() const;

                    /**
                     * 获取Protection Edition. BASIC_VERSION: Basic Edition; PRO_VERSION: Professional Edition; Flagship: Premium Edition; GENERAL_DISCOUNT: General Discount Edition
                     * @return ProtectType Protection Edition. BASIC_VERSION: Basic Edition; PRO_VERSION: Professional Edition; Flagship: Premium Edition; GENERAL_DISCOUNT: General Discount Edition
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置Protection Edition. BASIC_VERSION: Basic Edition; PRO_VERSION: Professional Edition; Flagship: Premium Edition; GENERAL_DISCOUNT: General Discount Edition
                     * @param _protectType Protection Edition. BASIC_VERSION: Basic Edition; PRO_VERSION: Professional Edition; Flagship: Premium Edition; GENERAL_DISCOUNT: General Discount Edition
                     * 
                     */
                    void SetProtectType(const std::string& _protectType);

                    /**
                     * 判断参数 ProtectType 是否已赋值
                     * @return ProtectType 是否已赋值
                     * 
                     */
                    bool ProtectTypeHasBeenSet() const;

                    /**
                     * 获取Authorization order object
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LicenseOrder Authorization order object
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LicenseOrder GetLicenseOrder() const;

                    /**
                     * 设置Authorization order object
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _licenseOrder Authorization order object
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLicenseOrder(const LicenseOrder& _licenseOrder);

                    /**
                     * 判断参数 LicenseOrder 是否已赋值
                     * @return LicenseOrder 是否已赋值
                     * 
                     */
                    bool LicenseOrderHasBeenSet() const;

                    /**
                     * 获取Cloud Tag Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloudTags Cloud Tag Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tags> GetCloudTags() const;

                    /**
                     * 设置Cloud Tag Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloudTags Cloud Tag Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloudTags(const std::vector<Tags>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Host name.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Host System.
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * Yunjing client UUID. If the client is offline for a long time, an empty string is returned.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * CVM or BM Machine Unique UUID.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host IP.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Whether the edition is Pro Edition
<li>true: yes</li>
<li>false: no</li>
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * Public IP address of the host
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Host status
<li>POSTPAY: postpaid, indicating pay-as-you-go mode </li>
<li>PREPAY: prepaid, indicating monthly subscription mode</li>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Tag information
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Region information
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * Instance status. TERMINATED_PRO_VERSION: terminated.
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Machine Zone Type. CVM - Cloud Virtual Machine; BM: Bare Metal; ECM: Edge Computing Machine; LH: Lightweight Application Server; Other: Hybrid Cloud Zone
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Kernel version
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * Protection Edition. BASIC_VERSION: Basic Edition; PRO_VERSION: Professional Edition; Flagship: Premium Edition; GENERAL_DISCOUNT: General Discount Edition
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * Authorization order object
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LicenseOrder m_licenseOrder;
                    bool m_licenseOrderHasBeenSet;

                    /**
                     * Cloud Tag Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tags> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MACHINESIMPLE_H_
