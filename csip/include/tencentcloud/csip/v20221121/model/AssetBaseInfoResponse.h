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
                     * 获取vpc-id
                     * @return VpcId vpc-id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc-id
                     * @param _vpcId vpc-id
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
                     * @return VpcName vpc-name
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc-name
                     * @param _vpcName vpc-name
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
                     * @return AssetName Asset name
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Asset name
                     * @param _assetName Asset name
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
                     * 获取Operating system.
                     * @return Os Operating system.
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置Operating system.
                     * @param _os Operating system.
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
                     * 获取Public IP address
                     * @return PublicIp Public IP address
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP address
                     * @param _publicIp Public IP address
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
                     * 获取Private IP address
                     * @return PrivateIp Private IP address
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP address
                     * @param _privateIp Private IP address
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
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
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
                     * @return AssetType Asset type
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
                     * @param _assetType Asset type
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
                     * @return AssetId Asset ID
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset ID
                     * @param _assetId Asset ID
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
                     * 获取Number of accounts
                     * @return AccountNum Number of accounts
                     * 
                     */
                    uint64_t GetAccountNum() const;

                    /**
                     * 设置Number of accounts
                     * @param _accountNum Number of accounts
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
                     * 获取Number of Ports
                     * @return PortNum Number of Ports
                     * 
                     */
                    uint64_t GetPortNum() const;

                    /**
                     * 设置Number of Ports
                     * @param _portNum Number of Ports
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
                     * 获取Process quantity
                     * @return ProcessNum Process quantity
                     * 
                     */
                    uint64_t GetProcessNum() const;

                    /**
                     * 设置Process quantity
                     * @param _processNum Process quantity
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
                     * 获取Number of Software Applications
                     * @return SoftApplicationNum Number of Software Applications
                     * 
                     */
                    uint64_t GetSoftApplicationNum() const;

                    /**
                     * 设置Number of Software Applications
                     * @param _softApplicationNum Number of Software Applications
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
                     * 获取Database Count
                     * @return DatabaseNum Database Count
                     * 
                     */
                    uint64_t GetDatabaseNum() const;

                    /**
                     * 设置Database Count
                     * @param _databaseNum Database Count
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
                     * 获取Number of Web Applications
                     * @return WebApplicationNum Number of Web Applications
                     * 
                     */
                    uint64_t GetWebApplicationNum() const;

                    /**
                     * 设置Number of Web Applications
                     * @param _webApplicationNum Number of Web Applications
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
                     * @return ServiceNum Number of services
                     * 
                     */
                    uint64_t GetServiceNum() const;

                    /**
                     * 设置Number of services
                     * @param _serviceNum Number of services
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
                     * 获取Web Framework Count
                     * @return WebFrameworkNum Web Framework Count
                     * 
                     */
                    uint64_t GetWebFrameworkNum() const;

                    /**
                     * 设置Web Framework Count
                     * @param _webFrameworkNum Web Framework Count
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
                     * 获取Website Count
                     * @return WebSiteNum Website Count
                     * 
                     */
                    uint64_t GetWebSiteNum() const;

                    /**
                     * 设置Website Count
                     * @param _webSiteNum Website Count
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
                     * 获取Jar Package Count
                     * @return JarPackageNum Jar Package Count
                     * 
                     */
                    uint64_t GetJarPackageNum() const;

                    /**
                     * 设置Jar Package Count
                     * @param _jarPackageNum Jar Package Count
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
                     * 获取Started Service Count
                     * @return StartServiceNum Started Service Count
                     * 
                     */
                    uint64_t GetStartServiceNum() const;

                    /**
                     * 设置Started Service Count
                     * @param _startServiceNum Started Service Count
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
                     * 获取Number of Scheduled Tasks
                     * @return ScheduledTaskNum Number of Scheduled Tasks
                     * 
                     */
                    uint64_t GetScheduledTaskNum() const;

                    /**
                     * 设置Number of Scheduled Tasks
                     * @param _scheduledTaskNum Number of Scheduled Tasks
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
                     * 获取Number of Environment Variables
                     * @return EnvironmentVariableNum Number of Environment Variables
                     * 
                     */
                    uint64_t GetEnvironmentVariableNum() const;

                    /**
                     * 设置Number of Environment Variables
                     * @param _environmentVariableNum Number of Environment Variables
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
                     * 获取Number of Kernel Modules
                     * @return KernelModuleNum Number of Kernel Modules
                     * 
                     */
                    uint64_t GetKernelModuleNum() const;

                    /**
                     * 设置Number of Kernel Modules
                     * @param _kernelModuleNum Number of Kernel Modules
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
                     * 获取System Installation Package Count
                     * @return SystemInstallationPackageNum System Installation Package Count
                     * 
                     */
                    uint64_t GetSystemInstallationPackageNum() const;

                    /**
                     * 设置System Installation Package Count
                     * @param _systemInstallationPackageNum System Installation Package Count
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
                     * 获取remaining protection duration
                     * @return SurplusProtectDay remaining protection duration
                     * 
                     */
                    uint64_t GetSurplusProtectDay() const;

                    /**
                     * 设置remaining protection duration
                     * @param _surplusProtectDay remaining protection duration
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
                     * 获取Whether client is installed. 1 for Installed, 0 for Not Installed.
                     * @return CWPStatus Whether client is installed. 1 for Installed, 0 for Not Installed.
                     * 
                     */
                    uint64_t GetCWPStatus() const;

                    /**
                     * 设置Whether client is installed. 1 for Installed, 0 for Not Installed.
                     * @param _cWPStatus Whether client is installed. 1 for Installed, 0 for Not Installed.
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
                     * 获取Tag.
                     * @return Tag Tag.
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Tag.
                     * @param _tag Tag.
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
                     * @return ProtectLevel Protection level
                     * 
                     */
                    std::string GetProtectLevel() const;

                    /**
                     * 设置Protection level
                     * @param _protectLevel Protection level
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
                     * 获取protection duration
                     * @return ProtectedDay protection duration
                     * 
                     */
                    uint64_t GetProtectedDay() const;

                    /**
                     * 设置protection duration
                     * @param _protectedDay protection duration
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
                     * vpc-id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc-name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Asset name
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Operating system.
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Private IP address
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Asset type
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Asset ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Number of accounts
                     */
                    uint64_t m_accountNum;
                    bool m_accountNumHasBeenSet;

                    /**
                     * Number of Ports
                     */
                    uint64_t m_portNum;
                    bool m_portNumHasBeenSet;

                    /**
                     * Process quantity
                     */
                    uint64_t m_processNum;
                    bool m_processNumHasBeenSet;

                    /**
                     * Number of Software Applications
                     */
                    uint64_t m_softApplicationNum;
                    bool m_softApplicationNumHasBeenSet;

                    /**
                     * Database Count
                     */
                    uint64_t m_databaseNum;
                    bool m_databaseNumHasBeenSet;

                    /**
                     * Number of Web Applications
                     */
                    uint64_t m_webApplicationNum;
                    bool m_webApplicationNumHasBeenSet;

                    /**
                     * Number of services
                     */
                    uint64_t m_serviceNum;
                    bool m_serviceNumHasBeenSet;

                    /**
                     * Web Framework Count
                     */
                    uint64_t m_webFrameworkNum;
                    bool m_webFrameworkNumHasBeenSet;

                    /**
                     * Website Count
                     */
                    uint64_t m_webSiteNum;
                    bool m_webSiteNumHasBeenSet;

                    /**
                     * Jar Package Count
                     */
                    uint64_t m_jarPackageNum;
                    bool m_jarPackageNumHasBeenSet;

                    /**
                     * Started Service Count
                     */
                    uint64_t m_startServiceNum;
                    bool m_startServiceNumHasBeenSet;

                    /**
                     * Number of Scheduled Tasks
                     */
                    uint64_t m_scheduledTaskNum;
                    bool m_scheduledTaskNumHasBeenSet;

                    /**
                     * Number of Environment Variables
                     */
                    uint64_t m_environmentVariableNum;
                    bool m_environmentVariableNumHasBeenSet;

                    /**
                     * Number of Kernel Modules
                     */
                    uint64_t m_kernelModuleNum;
                    bool m_kernelModuleNumHasBeenSet;

                    /**
                     * System Installation Package Count
                     */
                    uint64_t m_systemInstallationPackageNum;
                    bool m_systemInstallationPackageNumHasBeenSet;

                    /**
                     * remaining protection duration
                     */
                    uint64_t m_surplusProtectDay;
                    bool m_surplusProtectDayHasBeenSet;

                    /**
                     * Whether client is installed. 1 for Installed, 0 for Not Installed.
                     */
                    uint64_t m_cWPStatus;
                    bool m_cWPStatusHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Protection level
                     */
                    std::string m_protectLevel;
                    bool m_protectLevelHasBeenSet;

                    /**
                     * protection duration
                     */
                    uint64_t m_protectedDay;
                    bool m_protectedDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETBASEINFORESPONSE_H_
