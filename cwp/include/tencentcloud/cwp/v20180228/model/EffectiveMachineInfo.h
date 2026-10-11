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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EFFECTIVEMACHINEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EFFECTIVEMACHINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>
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
                * Import machine information in batches.
                */
                class EffectiveMachineInfo : public AbstractModel
                {
                public:
                    EffectiveMachineInfo();
                    ~EffectiveMachineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Machine name
                     * @return MachineName Machine name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Machine name
                     * @param _machineName Machine name
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
                     * 获取Public ip address of the machine
                     * @return MachinePublicIp Public ip address of the machine
                     * 
                     */
                    std::string GetMachinePublicIp() const;

                    /**
                     * 设置Public ip address of the machine
                     * @param _machinePublicIp Public ip address of the machine
                     * 
                     */
                    void SetMachinePublicIp(const std::string& _machinePublicIp);

                    /**
                     * 判断参数 MachinePublicIp 是否已赋值
                     * @return MachinePublicIp 是否已赋值
                     * 
                     */
                    bool MachinePublicIpHasBeenSet() const;

                    /**
                     * 获取Private ip of the machine
                     * @return MachinePrivateIp Private ip of the machine
                     * 
                     */
                    std::string GetMachinePrivateIp() const;

                    /**
                     * 设置Private ip of the machine
                     * @param _machinePrivateIp Private ip of the machine
                     * 
                     */
                    void SetMachinePrivateIp(const std::string& _machinePrivateIp);

                    /**
                     * 判断参数 MachinePrivateIp 是否已赋值
                     * @return MachinePrivateIp 是否已赋值
                     * 
                     */
                    bool MachinePrivateIpHasBeenSet() const;

                    /**
                     * 获取Machine Tag
                     * @return MachineTag Machine Tag
                     * 
                     */
                    std::vector<MachineTag> GetMachineTag() const;

                    /**
                     * 设置Machine Tag
                     * @param _machineTag Machine Tag
                     * 
                     */
                    void SetMachineTag(const std::vector<MachineTag>& _machineTag);

                    /**
                     * 判断参数 MachineTag 是否已赋值
                     * @return MachineTag 是否已赋值
                     * 
                     */
                    bool MachineTagHasBeenSet() const;

                    /**
                     * 获取Machine Quuid
                     * @return Quuid Machine Quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Machine Quuid
                     * @param _quuid Machine Quuid
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
                     * 获取Host UUID
                     * @return Uuid Host UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
                     * @param _uuid Host UUID
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
                     * 获取Kernel version number
                     * @return KernelVersion Kernel version number
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置Kernel version number
                     * @param _kernelVersion Kernel version number
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
                     * 获取Online status. OFFLINE, ONLINE.
                     * @return MachineStatus Online status. OFFLINE, ONLINE.
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置Online status. OFFLINE, ONLINE.
                     * @param _machineStatus Online status. OFFLINE, ONLINE.
                     * 
                     */
                    void SetMachineStatus(const std::string& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取Authorization order object
                     * @return LicenseOrder Authorization order object
                     * 
                     */
                    LicenseOrder GetLicenseOrder() const;

                    /**
                     * 设置Authorization order object
                     * @param _licenseOrder Authorization order object
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
                     * 获取Number of vulnerabilities
                     * @return VulNum Number of vulnerabilities
                     * 
                     */
                    uint64_t GetVulNum() const;

                    /**
                     * 设置Number of vulnerabilities
                     * @param _vulNum Number of vulnerabilities
                     * 
                     */
                    void SetVulNum(const uint64_t& _vulNum);

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     * 
                     */
                    bool VulNumHasBeenSet() const;

                    /**
                     * 获取Cloud Tag Information
                     * @return CloudTags Cloud Tag Information
                     * 
                     */
                    std::vector<Tags> GetCloudTags() const;

                    /**
                     * 设置Cloud Tag Information
                     * @param _cloudTags Cloud Tag Information
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
                     * 获取Machine Instance ID
                     * @return InstanceID Machine Instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Machine Instance ID
                     * @param _instanceID Machine Instance ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * Machine name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Public ip address of the machine
                     */
                    std::string m_machinePublicIp;
                    bool m_machinePublicIpHasBeenSet;

                    /**
                     * Private ip of the machine
                     */
                    std::string m_machinePrivateIp;
                    bool m_machinePrivateIpHasBeenSet;

                    /**
                     * Machine Tag
                     */
                    std::vector<MachineTag> m_machineTag;
                    bool m_machineTagHasBeenSet;

                    /**
                     * Machine Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Kernel version number
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * Online status. OFFLINE, ONLINE.
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * Authorization order object
                     */
                    LicenseOrder m_licenseOrder;
                    bool m_licenseOrderHasBeenSet;

                    /**
                     * Number of vulnerabilities
                     */
                    uint64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * Cloud Tag Information
                     */
                    std::vector<Tags> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * Machine Instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EFFECTIVEMACHINEINFO_H_
