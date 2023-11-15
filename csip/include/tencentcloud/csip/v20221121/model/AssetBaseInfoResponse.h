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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETBASEINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETBASEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Details of server assets
                */
                class AssetBaseInfoResponse : public AbstractModel
                {
                public:
                    AssetBaseInfoResponse();
                    ~AssetBaseInfoResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return VpcId 
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置
                     * @param _vpcId 
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
                     * 获取vpc-name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VpcName vpc-name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc-name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vpcName vpc-name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetName Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetName Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取Operating system
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Os Operating system
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置Operating system
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _os Operating system
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                    /**
                     * 获取Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PublicIp Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _publicIp Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PrivateIp Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _privateIp Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Region Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _region Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetType Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetType Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetId Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetId Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Total number of accounts
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AccountNum Total number of accounts
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAccountNum() const;

                    /**
                     * 设置Total number of accounts
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _accountNum Total number of accounts
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccountNum(const uint64_t& _accountNum);

                    /**
                     * 判断参数 AccountNum 是否已赋值
                     * @return AccountNum 是否已赋值
                     * 
                     */
                    bool AccountNumHasBeenSet() const;

                    /**
                     * 获取Number of ports
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PortNum Number of ports
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPortNum() const;

                    /**
                     * 设置Number of ports
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _portNum Number of ports
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPortNum(const uint64_t& _portNum);

                    /**
                     * 判断参数 PortNum 是否已赋值
                     * @return PortNum 是否已赋值
                     * 
                     */
                    bool PortNumHasBeenSet() const;

                    /**
                     * 获取Number of processes
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ProcessNum Number of processes
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProcessNum() const;

                    /**
                     * 设置Number of processes
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _processNum Number of processes
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcessNum(const uint64_t& _processNum);

                    /**
                     * 判断参数 ProcessNum 是否已赋值
                     * @return ProcessNum 是否已赋值
                     * 
                     */
                    bool ProcessNumHasBeenSet() const;

                    /**
                     * 获取Numbernumb of software applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SoftApplicationNum Numbernumb of software applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSoftApplicationNum() const;

                    /**
                     * 设置Numbernumb of software applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _softApplicationNum Numbernumb of software applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSoftApplicationNum(const uint64_t& _softApplicationNum);

                    /**
                     * 判断参数 SoftApplicationNum 是否已赋值
                     * @return SoftApplicationNum 是否已赋值
                     * 
                     */
                    bool SoftApplicationNumHasBeenSet() const;

                    /**
                     * 获取Number of databases
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return DatabaseNum Number of databases
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDatabaseNum() const;

                    /**
                     * 设置Number of databases
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _databaseNum Number of databases
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabaseNum(const uint64_t& _databaseNum);

                    /**
                     * 判断参数 DatabaseNum 是否已赋值
                     * @return DatabaseNum 是否已赋值
                     * 
                     */
                    bool DatabaseNumHasBeenSet() const;

                    /**
                     * 获取Number of web applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return WebApplicationNum Number of web applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWebApplicationNum() const;

                    /**
                     * 设置Number of web applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _webApplicationNum Number of web applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWebApplicationNum(const uint64_t& _webApplicationNum);

                    /**
                     * 判断参数 WebApplicationNum 是否已赋值
                     * @return WebApplicationNum 是否已赋值
                     * 
                     */
                    bool WebApplicationNumHasBeenSet() const;

                    /**
                     * 获取Number of services
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ServiceNum Number of services
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetServiceNum() const;

                    /**
                     * 设置Number of services
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _serviceNum Number of services
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceNum(const uint64_t& _serviceNum);

                    /**
                     * 判断参数 ServiceNum 是否已赋值
                     * @return ServiceNum 是否已赋值
                     * 
                     */
                    bool ServiceNumHasBeenSet() const;

                    /**
                     * 获取Number of web frameworks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return WebFrameworkNum Number of web frameworks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWebFrameworkNum() const;

                    /**
                     * 设置Number of web frameworks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _webFrameworkNum Number of web frameworks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWebFrameworkNum(const uint64_t& _webFrameworkNum);

                    /**
                     * 判断参数 WebFrameworkNum 是否已赋值
                     * @return WebFrameworkNum 是否已赋值
                     * 
                     */
                    bool WebFrameworkNumHasBeenSet() const;

                    /**
                     * 获取Number of websites
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return WebSiteNum Number of websites
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWebSiteNum() const;

                    /**
                     * 设置Number of websites
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _webSiteNum Number of websites
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWebSiteNum(const uint64_t& _webSiteNum);

                    /**
                     * 判断参数 WebSiteNum 是否已赋值
                     * @return WebSiteNum 是否已赋值
                     * 
                     */
                    bool WebSiteNumHasBeenSet() const;

                    /**
                     * 获取Number of JAR packages
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return JarPackageNum Number of JAR packages
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetJarPackageNum() const;

                    /**
                     * 设置Number of JAR packages
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _jarPackageNum Number of JAR packages
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJarPackageNum(const uint64_t& _jarPackageNum);

                    /**
                     * 判断参数 JarPackageNum 是否已赋值
                     * @return JarPackageNum 是否已赋值
                     * 
                     */
                    bool JarPackageNumHasBeenSet() const;

                    /**
                     * 获取Number of enabled services
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return StartServiceNum Number of enabled services
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStartServiceNum() const;

                    /**
                     * 设置Number of enabled services
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _startServiceNum Number of enabled services
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartServiceNum(const uint64_t& _startServiceNum);

                    /**
                     * 判断参数 StartServiceNum 是否已赋值
                     * @return StartServiceNum 是否已赋值
                     * 
                     */
                    bool StartServiceNumHasBeenSet() const;

                    /**
                     * 获取Number of scheduled tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ScheduledTaskNum Number of scheduled tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScheduledTaskNum() const;

                    /**
                     * 设置Number of scheduled tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _scheduledTaskNum Number of scheduled tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScheduledTaskNum(const uint64_t& _scheduledTaskNum);

                    /**
                     * 判断参数 ScheduledTaskNum 是否已赋值
                     * @return ScheduledTaskNum 是否已赋值
                     * 
                     */
                    bool ScheduledTaskNumHasBeenSet() const;

                    /**
                     * 获取Number of environment variables
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return EnvironmentVariableNum Number of environment variables
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEnvironmentVariableNum() const;

                    /**
                     * 设置Number of environment variables
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _environmentVariableNum Number of environment variables
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnvironmentVariableNum(const uint64_t& _environmentVariableNum);

                    /**
                     * 判断参数 EnvironmentVariableNum 是否已赋值
                     * @return EnvironmentVariableNum 是否已赋值
                     * 
                     */
                    bool EnvironmentVariableNumHasBeenSet() const;

                    /**
                     * 获取Number of kernel modules
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return KernelModuleNum Number of kernel modules
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetKernelModuleNum() const;

                    /**
                     * 设置Number of kernel modules
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _kernelModuleNum Number of kernel modules
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKernelModuleNum(const uint64_t& _kernelModuleNum);

                    /**
                     * 判断参数 KernelModuleNum 是否已赋值
                     * @return KernelModuleNum 是否已赋值
                     * 
                     */
                    bool KernelModuleNumHasBeenSet() const;

                    /**
                     * 获取Number of system installation packages
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SystemInstallationPackageNum Number of system installation packages
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSystemInstallationPackageNum() const;

                    /**
                     * 设置Number of system installation packages
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _systemInstallationPackageNum Number of system installation packages
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSystemInstallationPackageNum(const uint64_t& _systemInstallationPackageNum);

                    /**
                     * 判断参数 SystemInstallationPackageNum 是否已赋值
                     * @return SystemInstallationPackageNum 是否已赋值
                     * 
                     */
                    bool SystemInstallationPackageNumHasBeenSet() const;

                    /**
                     * 获取Remaining service validity in days
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SurplusProtectDay Remaining service validity in days
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSurplusProtectDay() const;

                    /**
                     * 设置Remaining service validity in days
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _surplusProtectDay Remaining service validity in days
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSurplusProtectDay(const uint64_t& _surplusProtectDay);

                    /**
                     * 判断参数 SurplusProtectDay 是否已赋值
                     * @return SurplusProtectDay 是否已赋值
                     * 
                     */
                    bool SurplusProtectDayHasBeenSet() const;

                    /**
                     * 获取Whether the CWPP agent is installed. Values: `1` (installed) and `0` (not installed)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CWPStatus Whether the CWPP agent is installed. Values: `1` (installed) and `0` (not installed)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCWPStatus() const;

                    /**
                     * 设置Whether the CWPP agent is installed. Values: `1` (installed) and `0` (not installed)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cWPStatus Whether the CWPP agent is installed. Values: `1` (installed) and `0` (not installed)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCWPStatus(const uint64_t& _cWPStatus);

                    /**
                     * 判断参数 CWPStatus 是否已赋值
                     * @return CWPStatus 是否已赋值
                     * 
                     */
                    bool CWPStatusHasBeenSet() const;

                    /**
                     * 获取Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Tag Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _tag Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Protection level
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ProtectLevel Protection level
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtectLevel() const;

                    /**
                     * 设置Protection level
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _protectLevel Protection level
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProtectLevel(const std::string& _protectLevel);

                    /**
                     * 判断参数 ProtectLevel 是否已赋值
                     * @return ProtectLevel 是否已赋值
                     * 
                     */
                    bool ProtectLevelHasBeenSet() const;

                    /**
                     * 获取Usage of CWPP service in days
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ProtectedDay Usage of CWPP service in days
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProtectedDay() const;

                    /**
                     * 设置Usage of CWPP service in days
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _protectedDay Usage of CWPP service in days
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProtectedDay(const uint64_t& _protectedDay);

                    /**
                     * 判断参数 ProtectedDay 是否已赋值
                     * @return ProtectedDay 是否已赋值
                     * 
                     */
                    bool ProtectedDayHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc-name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Operating system
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Total number of accounts
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_accountNum;
                    bool m_accountNumHasBeenSet;

                    /**
                     * Number of ports
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_portNum;
                    bool m_portNumHasBeenSet;

                    /**
                     * Number of processes
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_processNum;
                    bool m_processNumHasBeenSet;

                    /**
                     * Numbernumb of software applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_softApplicationNum;
                    bool m_softApplicationNumHasBeenSet;

                    /**
                     * Number of databases
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_databaseNum;
                    bool m_databaseNumHasBeenSet;

                    /**
                     * Number of web applications
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_webApplicationNum;
                    bool m_webApplicationNumHasBeenSet;

                    /**
                     * Number of services
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_serviceNum;
                    bool m_serviceNumHasBeenSet;

                    /**
                     * Number of web frameworks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_webFrameworkNum;
                    bool m_webFrameworkNumHasBeenSet;

                    /**
                     * Number of websites
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_webSiteNum;
                    bool m_webSiteNumHasBeenSet;

                    /**
                     * Number of JAR packages
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_jarPackageNum;
                    bool m_jarPackageNumHasBeenSet;

                    /**
                     * Number of enabled services
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_startServiceNum;
                    bool m_startServiceNumHasBeenSet;

                    /**
                     * Number of scheduled tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scheduledTaskNum;
                    bool m_scheduledTaskNumHasBeenSet;

                    /**
                     * Number of environment variables
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_environmentVariableNum;
                    bool m_environmentVariableNumHasBeenSet;

                    /**
                     * Number of kernel modules
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_kernelModuleNum;
                    bool m_kernelModuleNumHasBeenSet;

                    /**
                     * Number of system installation packages
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_systemInstallationPackageNum;
                    bool m_systemInstallationPackageNumHasBeenSet;

                    /**
                     * Remaining service validity in days
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_surplusProtectDay;
                    bool m_surplusProtectDayHasBeenSet;

                    /**
                     * Whether the CWPP agent is installed. Values: `1` (installed) and `0` (not installed)
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cWPStatus;
                    bool m_cWPStatusHasBeenSet;

                    /**
                     * Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Protection level
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_protectLevel;
                    bool m_protectLevelHasBeenSet;

                    /**
                     * Usage of CWPP service in days
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_protectedDay;
                    bool m_protectedDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETBASEINFORESPONSE_H_
