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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_HOSTTAGINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_HOSTTAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Host and host tag information
                */
                class HostTagInfo : public AbstractModel
                {
                public:
                    HostTagInfo();
                    ~HostTagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuid Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuid Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Host tag name array
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagList Host tag name array
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置Host tag name array
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagList Host tag name array
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagList(const std::vector<std::string>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取Host intranet IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostIp Host intranet IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host intranet IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostIp Host intranet IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AliasName Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aliasName Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取Host public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineWanIp Host public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Host public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineWanIp Host public IP address
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uuid Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uuid Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KernelVersion Kernel version number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置Kernel version number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kernelVersion Kernel version number
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Host online status: ONLINE; OFFLINE
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineStatus Host online status: ONLINE; OFFLINE
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置Host online status: ONLINE; OFFLINE
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineStatus Host online status: ONLINE; OFFLINE
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Protection version: BASIC_VERSION - Basic Edition PRO_VERSION - Professional Edition; Flagship: Ultimate Edition
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProtectType Protection version: BASIC_VERSION - Basic Edition PRO_VERSION - Professional Edition; Flagship: Ultimate Edition
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置Protection version: BASIC_VERSION - Basic Edition PRO_VERSION - Professional Edition; Flagship: Ultimate Edition
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protectType Protection version: BASIC_VERSION - Basic Edition PRO_VERSION - Professional Edition; Flagship: Ultimate Edition
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VulNum Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVulNum() const;

                    /**
                     * 设置Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vulNum Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVulNum(const int64_t& _vulNum);

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     * 
                     */
                    bool VulNumHasBeenSet() const;

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
                     * 获取Host Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceID Host Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Host Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceID Host Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host tag name array
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Host intranet IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Host public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Kernel version number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * Host online status: ONLINE; OFFLINE
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * Protection version: BASIC_VERSION - Basic Edition PRO_VERSION - Professional Edition; Flagship: Ultimate Edition
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * Cloud Tag Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tags> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * Host Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_HOSTTAGINFO_H_
