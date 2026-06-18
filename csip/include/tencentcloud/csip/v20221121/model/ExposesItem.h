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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSESITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSESITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Exposed assets.
                */
                class ExposesItem : public AbstractModel
                {
                public:
                    ExposesItem();
                    ~ExposesItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cloud vendor</p>
                     * @return Provider <p>Cloud vendor</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>Cloud vendor</p>
                     * @param _provider <p>Cloud vendor</p>
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>Cloud account name</p>
                     * @return CloudAccountName <p>Cloud account name</p>
                     * 
                     */
                    std::string GetCloudAccountName() const;

                    /**
                     * 设置<p>Cloud account name</p>
                     * @param _cloudAccountName <p>Cloud account name</p>
                     * 
                     */
                    void SetCloudAccountName(const std::string& _cloudAccountName);

                    /**
                     * 判断参数 CloudAccountName 是否已赋值
                     * @return CloudAccountName 是否已赋值
                     * 
                     */
                    bool CloudAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>Cloud Account</p>
                     * @return CloudAccountId <p>Cloud Account</p>
                     * 
                     */
                    std::string GetCloudAccountId() const;

                    /**
                     * 设置<p>Cloud Account</p>
                     * @param _cloudAccountId <p>Cloud Account</p>
                     * 
                     */
                    void SetCloudAccountId(const std::string& _cloudAccountId);

                    /**
                     * 判断参数 CloudAccountId 是否已赋值
                     * @return CloudAccountId 是否已赋值
                     * 
                     */
                    bool CloudAccountIdHasBeenSet() const;

                    /**
                     * 获取<p>Domain name</p>
                     * @return Domain <p>Domain name</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Domain name</p>
                     * @param _domain <p>Domain name</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>IP</p>
                     * @return Ip <p>IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>IP</p>
                     * @param _ip <p>IP</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>Port or port range</p>
                     * @return Port <p>Port or port range</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>Port or port range</p>
                     * @param _port <p>Port or port range</p>
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>Open</p>
                     * @return Status <p>Open</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Open</p>
                     * @param _status <p>Open</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Risk type</p>
                     * @return RiskType <p>Risk type</p>
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置<p>Risk type</p>
                     * @param _riskType <p>Risk type</p>
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>acl type</p>
                     * @return AclType <p>acl type</p>
                     * 
                     */
                    std::string GetAclType() const;

                    /**
                     * 设置<p>acl type</p>
                     * @param _aclType <p>acl type</p>
                     * 
                     */
                    void SetAclType(const std::string& _aclType);

                    /**
                     * 判断参数 AclType 是否已赋值
                     * @return AclType 是否已赋值
                     * 
                     */
                    bool AclTypeHasBeenSet() const;

                    /**
                     * 获取<p>acl list</p>
                     * @return AclList <p>acl list</p>
                     * 
                     */
                    std::string GetAclList() const;

                    /**
                     * 设置<p>acl list</p>
                     * @param _aclList <p>acl list</p>
                     * 
                     */
                    void SetAclList(const std::string& _aclList);

                    /**
                     * 判断参数 AclList 是否已赋值
                     * @return AclList 是否已赋值
                     * 
                     */
                    bool AclListHasBeenSet() const;

                    /**
                     * 获取<p>Asset ID</p>
                     * @return AssetId <p>Asset ID</p>
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>Asset ID</p>
                     * @param _assetId <p>Asset ID</p>
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
                     * 获取<p>Instance name</p>
                     * @return InstanceName <p>Instance name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name</p>
                     * @param _instanceName <p>Instance name</p>
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
                     * 获取<p>Asset type</p>
                     * @return AssetType <p>Asset type</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>Asset type</p>
                     * @param _assetType <p>Asset type</p>
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
                     * 获取<p>Number of port services</p>
                     * @return PortServiceCount <p>Number of port services</p>
                     * 
                     */
                    uint64_t GetPortServiceCount() const;

                    /**
                     * 设置<p>Number of port services</p>
                     * @param _portServiceCount <p>Number of port services</p>
                     * 
                     */
                    void SetPortServiceCount(const uint64_t& _portServiceCount);

                    /**
                     * 判断参数 PortServiceCount 是否已赋值
                     * @return PortServiceCount 是否已赋值
                     * 
                     */
                    bool PortServiceCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of high-risk ports</p>
                     * @return HighRiskPortServiceCount <p>Number of high-risk ports</p>
                     * 
                     */
                    uint64_t GetHighRiskPortServiceCount() const;

                    /**
                     * 设置<p>Number of high-risk ports</p>
                     * @param _highRiskPortServiceCount <p>Number of high-risk ports</p>
                     * 
                     */
                    void SetHighRiskPortServiceCount(const uint64_t& _highRiskPortServiceCount);

                    /**
                     * 判断参数 HighRiskPortServiceCount 是否已赋值
                     * @return HighRiskPortServiceCount 是否已赋值
                     * 
                     */
                    bool HighRiskPortServiceCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of web applications</p>
                     * @return WebAppCount <p>Number of web applications</p>
                     * 
                     */
                    uint64_t GetWebAppCount() const;

                    /**
                     * 设置<p>Number of web applications</p>
                     * @param _webAppCount <p>Number of web applications</p>
                     * 
                     */
                    void SetWebAppCount(const uint64_t& _webAppCount);

                    /**
                     * 判断参数 WebAppCount 是否已赋值
                     * @return WebAppCount 是否已赋值
                     * 
                     */
                    bool WebAppCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of web applications at risk</p>
                     * @return RiskWebAppCount <p>Number of web applications at risk</p>
                     * 
                     */
                    uint64_t GetRiskWebAppCount() const;

                    /**
                     * 设置<p>Number of web applications at risk</p>
                     * @param _riskWebAppCount <p>Number of web applications at risk</p>
                     * 
                     */
                    void SetRiskWebAppCount(const uint64_t& _riskWebAppCount);

                    /**
                     * 判断参数 RiskWebAppCount 是否已赋值
                     * @return RiskWebAppCount 是否已赋值
                     * 
                     */
                    bool RiskWebAppCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of weak passwords.</p>
                     * @return WeakPasswordCount <p>Number of weak passwords.</p>
                     * 
                     */
                    uint64_t GetWeakPasswordCount() const;

                    /**
                     * 设置<p>Number of weak passwords.</p>
                     * @param _weakPasswordCount <p>Number of weak passwords.</p>
                     * 
                     */
                    void SetWeakPasswordCount(const uint64_t& _weakPasswordCount);

                    /**
                     * 判断参数 WeakPasswordCount 是否已赋值
                     * @return WeakPasswordCount 是否已赋值
                     * 
                     */
                    bool WeakPasswordCountHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability count</p>
                     * @return VulCount <p>Vulnerability count</p>
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 设置<p>Vulnerability count</p>
                     * @param _vulCount <p>Vulnerability count</p>
                     * 
                     */
                    void SetVulCount(const uint64_t& _vulCount);

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                    /**
                     * 获取<p>First discovery time</p>
                     * @return CreateTime <p>First discovery time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>First discovery time</p>
                     * @param _createTime <p>First discovery time</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Latest update time.</p>
                     * @return UpdateTime <p>Latest update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Latest update time.</p>
                     * @param _updateTime <p>Latest update time.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Instance Type Name</p>
                     * @return AssetTypeName <p>Instance Type Name</p>
                     * 
                     */
                    std::string GetAssetTypeName() const;

                    /**
                     * 设置<p>Instance Type Name</p>
                     * @param _assetTypeName <p>Instance Type Name</p>
                     * 
                     */
                    void SetAssetTypeName(const std::string& _assetTypeName);

                    /**
                     * 判断参数 AssetTypeName 是否已赋值
                     * @return AssetTypeName 是否已赋值
                     * 
                     */
                    bool AssetTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>Open status</p>
                     * @return DisplayStatus <p>Open status</p>
                     * 
                     */
                    std::string GetDisplayStatus() const;

                    /**
                     * 设置<p>Open status</p>
                     * @param _displayStatus <p>Open status</p>
                     * 
                     */
                    void SetDisplayStatus(const std::string& _displayStatus);

                    /**
                     * 判断参数 DisplayStatus 是否已赋值
                     * @return DisplayStatus 是否已赋值
                     * 
                     */
                    bool DisplayStatusHasBeenSet() const;

                    /**
                     * 获取<p>Port status</p>
                     * @return DisplayRiskType <p>Port status</p>
                     * 
                     */
                    std::string GetDisplayRiskType() const;

                    /**
                     * 设置<p>Port status</p>
                     * @param _displayRiskType <p>Port status</p>
                     * 
                     */
                    void SetDisplayRiskType(const std::string& _displayRiskType);

                    /**
                     * 判断参数 DisplayRiskType 是否已赋值
                     * @return DisplayRiskType 是否已赋值
                     * 
                     */
                    bool DisplayRiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Scan task status</p>
                     * @return ScanTaskStatus <p>Scan task status</p>
                     * 
                     */
                    std::string GetScanTaskStatus() const;

                    /**
                     * 设置<p>Scan task status</p>
                     * @param _scanTaskStatus <p>Scan task status</p>
                     * 
                     */
                    void SetScanTaskStatus(const std::string& _scanTaskStatus);

                    /**
                     * 判断参数 ScanTaskStatus 是否已赋值
                     * @return ScanTaskStatus 是否已赋值
                     * 
                     */
                    bool ScanTaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>uuid</p>
                     * @return Uuid <p>uuid</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>uuid</p>
                     * @param _uuid <p>uuid</p>
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
                     * 获取<p>Whether a security check has been performed</p>
                     * @return HasScan <p>Whether a security check has been performed</p>
                     * 
                     */
                    std::string GetHasScan() const;

                    /**
                     * 设置<p>Whether a security check has been performed</p>
                     * @param _hasScan <p>Whether a security check has been performed</p>
                     * 
                     */
                    void SetHasScan(const std::string& _hasScan);

                    /**
                     * 判断参数 HasScan 是否已赋值
                     * @return HasScan 是否已赋值
                     * 
                     */
                    bool HasScanHasBeenSet() const;

                    /**
                     * 获取<p>Tenant ID</p>
                     * @return AppId <p>Tenant ID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>Tenant ID</p>
                     * @param _appId <p>Tenant ID</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Tenant ID string</p>
                     * @return AppIdStr <p>Tenant ID string</p>
                     * 
                     */
                    std::string GetAppIdStr() const;

                    /**
                     * 设置<p>Tenant ID string</p>
                     * @param _appIdStr <p>Tenant ID string</p>
                     * 
                     */
                    void SetAppIdStr(const std::string& _appIdStr);

                    /**
                     * 判断参数 AppIdStr 是否已赋值
                     * @return AppIdStr 是否已赋值
                     * 
                     */
                    bool AppIdStrHasBeenSet() const;

                    /**
                     * 获取<p>Record ID</p>
                     * @return ExposureID <p>Record ID</p>
                     * 
                     */
                    uint64_t GetExposureID() const;

                    /**
                     * 设置<p>Record ID</p>
                     * @param _exposureID <p>Record ID</p>
                     * 
                     */
                    void SetExposureID(const uint64_t& _exposureID);

                    /**
                     * 判断参数 ExposureID 是否已赋值
                     * @return ExposureID 是否已赋值
                     * 
                     */
                    bool ExposureIDHasBeenSet() const;

                    /**
                     * 获取<p>Number of open ports</p>
                     * @return PortDetectCount <p>Number of open ports</p>
                     * 
                     */
                    uint64_t GetPortDetectCount() const;

                    /**
                     * 设置<p>Number of open ports</p>
                     * @param _portDetectCount <p>Number of open ports</p>
                     * 
                     */
                    void SetPortDetectCount(const uint64_t& _portDetectCount);

                    /**
                     * 判断参数 PortDetectCount 是否已赋值
                     * @return PortDetectCount 是否已赋值
                     * 
                     */
                    bool PortDetectCountHasBeenSet() const;

                    /**
                     * 获取<p>Port exposure result</p>
                     * @return PortDetectResult <p>Port exposure result</p>
                     * 
                     */
                    std::string GetPortDetectResult() const;

                    /**
                     * 设置<p>Port exposure result</p>
                     * @param _portDetectResult <p>Port exposure result</p>
                     * 
                     */
                    void SetPortDetectResult(const std::string& _portDetectResult);

                    /**
                     * 判断参数 PortDetectResult 是否已赋值
                     * @return PortDetectResult 是否已赋值
                     * 
                     */
                    bool PortDetectResultHasBeenSet() const;

                    /**
                     * 获取<p>Tag.</p>
                     * @return Tag <p>Tag.</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _tag <p>Tag.</p>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>Remark</p>
                     * @return Comment <p>Remark</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Remark</p>
                     * @param _comment <p>Remark</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>Number of risks to be governed</p>
                     * @return ToGovernedRiskCount <p>Number of risks to be governed</p>
                     * 
                     */
                    uint64_t GetToGovernedRiskCount() const;

                    /**
                     * 设置<p>Number of risks to be governed</p>
                     * @param _toGovernedRiskCount <p>Number of risks to be governed</p>
                     * 
                     */
                    void SetToGovernedRiskCount(const uint64_t& _toGovernedRiskCount);

                    /**
                     * 判断参数 ToGovernedRiskCount 是否已赋值
                     * @return ToGovernedRiskCount 是否已赋值
                     * 
                     */
                    bool ToGovernedRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Risk content to be governed</p>
                     * @return ToGovernedRiskContent <p>Risk content to be governed</p>
                     * 
                     */
                    std::string GetToGovernedRiskContent() const;

                    /**
                     * 设置<p>Risk content to be governed</p>
                     * @param _toGovernedRiskContent <p>Risk content to be governed</p>
                     * 
                     */
                    void SetToGovernedRiskContent(const std::string& _toGovernedRiskContent);

                    /**
                     * 判断参数 ToGovernedRiskContent 是否已赋值
                     * @return ToGovernedRiskContent 是否已赋值
                     * 
                     */
                    bool ToGovernedRiskContentHasBeenSet() const;

                    /**
                     * 获取<p>Type icon of asset</p>
                     * @return AssetTypeIconURL <p>Type icon of asset</p>
                     * 
                     */
                    std::string GetAssetTypeIconURL() const;

                    /**
                     * 设置<p>Type icon of asset</p>
                     * @param _assetTypeIconURL <p>Type icon of asset</p>
                     * 
                     */
                    void SetAssetTypeIconURL(const std::string& _assetTypeIconURL);

                    /**
                     * 判断参数 AssetTypeIconURL 是否已赋值
                     * @return AssetTypeIconURL 是否已赋值
                     * 
                     */
                    bool AssetTypeIconURLHasBeenSet() const;

                    /**
                     * 获取<p>Asset type 3D icon</p>
                     * @return AssetTypeIconSolidURL <p>Asset type 3D icon</p>
                     * 
                     */
                    std::string GetAssetTypeIconSolidURL() const;

                    /**
                     * 设置<p>Asset type 3D icon</p>
                     * @param _assetTypeIconSolidURL <p>Asset type 3D icon</p>
                     * 
                     */
                    void SetAssetTypeIconSolidURL(const std::string& _assetTypeIconSolidURL);

                    /**
                     * 判断参数 AssetTypeIconSolidURL 是否已赋值
                     * @return AssetTypeIconSolidURL 是否已赋值
                     * 
                     */
                    bool AssetTypeIconSolidURLHasBeenSet() const;

                private:

                    /**
                     * <p>Cloud vendor</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>Cloud account name</p>
                     */
                    std::string m_cloudAccountName;
                    bool m_cloudAccountNameHasBeenSet;

                    /**
                     * <p>Cloud Account</p>
                     */
                    std::string m_cloudAccountId;
                    bool m_cloudAccountIdHasBeenSet;

                    /**
                     * <p>Domain name</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>Port or port range</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Open</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Risk type</p>
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * <p>acl type</p>
                     */
                    std::string m_aclType;
                    bool m_aclTypeHasBeenSet;

                    /**
                     * <p>acl list</p>
                     */
                    std::string m_aclList;
                    bool m_aclListHasBeenSet;

                    /**
                     * <p>Asset ID</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>Instance name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Asset type</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>Number of port services</p>
                     */
                    uint64_t m_portServiceCount;
                    bool m_portServiceCountHasBeenSet;

                    /**
                     * <p>Number of high-risk ports</p>
                     */
                    uint64_t m_highRiskPortServiceCount;
                    bool m_highRiskPortServiceCountHasBeenSet;

                    /**
                     * <p>Number of web applications</p>
                     */
                    uint64_t m_webAppCount;
                    bool m_webAppCountHasBeenSet;

                    /**
                     * <p>Number of web applications at risk</p>
                     */
                    uint64_t m_riskWebAppCount;
                    bool m_riskWebAppCountHasBeenSet;

                    /**
                     * <p>Number of weak passwords.</p>
                     */
                    uint64_t m_weakPasswordCount;
                    bool m_weakPasswordCountHasBeenSet;

                    /**
                     * <p>Vulnerability count</p>
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * <p>First discovery time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Latest update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Instance Type Name</p>
                     */
                    std::string m_assetTypeName;
                    bool m_assetTypeNameHasBeenSet;

                    /**
                     * <p>Open status</p>
                     */
                    std::string m_displayStatus;
                    bool m_displayStatusHasBeenSet;

                    /**
                     * <p>Port status</p>
                     */
                    std::string m_displayRiskType;
                    bool m_displayRiskTypeHasBeenSet;

                    /**
                     * <p>Scan task status</p>
                     */
                    std::string m_scanTaskStatus;
                    bool m_scanTaskStatusHasBeenSet;

                    /**
                     * <p>uuid</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>Whether a security check has been performed</p>
                     */
                    std::string m_hasScan;
                    bool m_hasScanHasBeenSet;

                    /**
                     * <p>Tenant ID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Tenant ID string</p>
                     */
                    std::string m_appIdStr;
                    bool m_appIdStrHasBeenSet;

                    /**
                     * <p>Record ID</p>
                     */
                    uint64_t m_exposureID;
                    bool m_exposureIDHasBeenSet;

                    /**
                     * <p>Number of open ports</p>
                     */
                    uint64_t m_portDetectCount;
                    bool m_portDetectCountHasBeenSet;

                    /**
                     * <p>Port exposure result</p>
                     */
                    std::string m_portDetectResult;
                    bool m_portDetectResultHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>Remark</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Number of risks to be governed</p>
                     */
                    uint64_t m_toGovernedRiskCount;
                    bool m_toGovernedRiskCountHasBeenSet;

                    /**
                     * <p>Risk content to be governed</p>
                     */
                    std::string m_toGovernedRiskContent;
                    bool m_toGovernedRiskContentHasBeenSet;

                    /**
                     * <p>Type icon of asset</p>
                     */
                    std::string m_assetTypeIconURL;
                    bool m_assetTypeIconURLHasBeenSet;

                    /**
                     * <p>Asset type 3D icon</p>
                     */
                    std::string m_assetTypeIconSolidURL;
                    bool m_assetTypeIconSolidURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSESITEM_H_
