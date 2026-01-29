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
                     * 获取Cloud service provider.
                     * @return Provider Cloud service provider.
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置Cloud service provider.
                     * @param _provider Cloud service provider.
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
                     * 获取Account name.
                     * @return CloudAccountName Account name.
                     * 
                     */
                    std::string GetCloudAccountName() const;

                    /**
                     * 设置Account name.
                     * @param _cloudAccountName Account name.
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
                     * 获取Cloud account.
                     * @return CloudAccountId Cloud account.
                     * 
                     */
                    std::string GetCloudAccountId() const;

                    /**
                     * 设置Cloud account.
                     * @param _cloudAccountId Cloud account.
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
                     * 获取Domain
                     * @return Domain Domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain
                     * @param _domain Domain
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
                     * 获取IP
                     * @return Ip IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP
                     * @param _ip IP
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
                     * 获取Port or port range.
                     * @return Port Port or port range.
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port or port range.
                     * @param _port Port or port range.
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
                     * 获取Open.
                     * @return Status Open.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Open.
                     * @param _status Open.
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
                     * 获取Risk type.
                     * @return RiskType Risk type.
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置Risk type.
                     * @param _riskType Risk type.
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
                     * 获取acl type.
                     * @return AclType acl type.
                     * 
                     */
                    std::string GetAclType() const;

                    /**
                     * 设置acl type.
                     * @param _aclType acl type.
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
                     * 获取ACL list.
                     * @return AclList ACL list.
                     * 
                     */
                    std::string GetAclList() const;

                    /**
                     * 设置ACL list.
                     * @param _aclList ACL list.
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
                     * 获取Asset ID.
                     * @return AssetId Asset ID.
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset ID.
                     * @param _assetId Asset ID.
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
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
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
                     * 获取Asset type.
                     * @return AssetType Asset type.
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type.
                     * @param _assetType Asset type.
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
                     * 获取Port service quantity.
                     * @return PortServiceCount Port service quantity.
                     * 
                     */
                    uint64_t GetPortServiceCount() const;

                    /**
                     * 设置Port service quantity.
                     * @param _portServiceCount Port service quantity.
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
                     * 获取Number of high-risk ports.
                     * @return HighRiskPortServiceCount Number of high-risk ports.
                     * 
                     */
                    uint64_t GetHighRiskPortServiceCount() const;

                    /**
                     * 设置Number of high-risk ports.
                     * @param _highRiskPortServiceCount Number of high-risk ports.
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
                     * 获取Number of web applications.
                     * @return WebAppCount Number of web applications.
                     * 
                     */
                    uint64_t GetWebAppCount() const;

                    /**
                     * 设置Number of web applications.
                     * @param _webAppCount Number of web applications.
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
                     * 获取Number of web applications at risk.
                     * @return RiskWebAppCount Number of web applications at risk.
                     * 
                     */
                    uint64_t GetRiskWebAppCount() const;

                    /**
                     * 设置Number of web applications at risk.
                     * @param _riskWebAppCount Number of web applications at risk.
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
                     * 获取Number of Weak Passwords
                     * @return WeakPasswordCount Number of Weak Passwords
                     * 
                     */
                    uint64_t GetWeakPasswordCount() const;

                    /**
                     * 设置Number of Weak Passwords
                     * @param _weakPasswordCount Number of Weak Passwords
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
                     * 获取Number of vulnerabilities
                     * @return VulCount Number of vulnerabilities
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 设置Number of vulnerabilities
                     * @param _vulCount Number of vulnerabilities
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
                     * 获取First detection time
                     * @return CreateTime First detection time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置First detection time
                     * @param _createTime First detection time
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
                     * 获取Latest update time.
                     * @return UpdateTime Latest update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Latest update time.
                     * @param _updateTime Latest update time.
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
                     * 获取Instance Type Name
                     * @return AssetTypeName Instance Type Name
                     * 
                     */
                    std::string GetAssetTypeName() const;

                    /**
                     * 设置Instance Type Name
                     * @param _assetTypeName Instance Type Name
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
                     * 获取Open status.
                     * @return DisplayStatus Open status.
                     * 
                     */
                    std::string GetDisplayStatus() const;

                    /**
                     * 设置Open status.
                     * @param _displayStatus Open status.
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
                     * 获取Port status.
                     * @return DisplayRiskType Port status.
                     * 
                     */
                    std::string GetDisplayRiskType() const;

                    /**
                     * 设置Port status.
                     * @param _displayRiskType Port status.
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
                     * 获取Scan task status.
                     * @return ScanTaskStatus Scan task status.
                     * 
                     */
                    std::string GetScanTaskStatus() const;

                    /**
                     * 设置Scan task status.
                     * @param _scanTaskStatus Scan task status.
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
                     * 获取uuid
                     * @return Uuid uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置uuid
                     * @param _uuid uuid
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
                     * 获取Whether a security check has been performed.
                     * @return HasScan Whether a security check has been performed.
                     * 
                     */
                    std::string GetHasScan() const;

                    /**
                     * 设置Whether a security check has been performed.
                     * @param _hasScan Whether a security check has been performed.
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
                     * 获取Tenant ID.
                     * @return AppId Tenant ID.
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Tenant ID.
                     * @param _appId Tenant ID.
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
                     * 获取Tenant ID string.
                     * @return AppIdStr Tenant ID string.
                     * 
                     */
                    std::string GetAppIdStr() const;

                    /**
                     * 设置Tenant ID string.
                     * @param _appIdStr Tenant ID string.
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
                     * 获取Record ID
                     * @return ExposureID Record ID
                     * 
                     */
                    uint64_t GetExposureID() const;

                    /**
                     * 设置Record ID
                     * @param _exposureID Record ID
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
                     * 获取Number of ports open.
                     * @return PortDetectCount Number of ports open.
                     * 
                     */
                    uint64_t GetPortDetectCount() const;

                    /**
                     * 设置Number of ports open.
                     * @param _portDetectCount Number of ports open.
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
                     * 获取Port exposure result.
                     * @return PortDetectResult Port exposure result.
                     * 
                     */
                    std::string GetPortDetectResult() const;

                    /**
                     * 设置Port exposure result.
                     * @param _portDetectResult Port exposure result.
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
                     * 获取Tag.
                     * @return Tag Tag.
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Tag.
                     * @param _tag Tag.
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
                     * 获取Remarks
                     * @return Comment Remarks
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Remarks
                     * @param _comment Remarks
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
                     * 获取Number of risks to be governed.
                     * @return ToGovernedRiskCount Number of risks to be governed.
                     * 
                     */
                    uint64_t GetToGovernedRiskCount() const;

                    /**
                     * 设置Number of risks to be governed.
                     * @param _toGovernedRiskCount Number of risks to be governed.
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
                     * 获取Risk content to be governed.
                     * @return ToGovernedRiskContent Risk content to be governed.
                     * 
                     */
                    std::string GetToGovernedRiskContent() const;

                    /**
                     * 设置Risk content to be governed.
                     * @param _toGovernedRiskContent Risk content to be governed.
                     * 
                     */
                    void SetToGovernedRiskContent(const std::string& _toGovernedRiskContent);

                    /**
                     * 判断参数 ToGovernedRiskContent 是否已赋值
                     * @return ToGovernedRiskContent 是否已赋值
                     * 
                     */
                    bool ToGovernedRiskContentHasBeenSet() const;

                private:

                    /**
                     * Cloud service provider.
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * Account name.
                     */
                    std::string m_cloudAccountName;
                    bool m_cloudAccountNameHasBeenSet;

                    /**
                     * Cloud account.
                     */
                    std::string m_cloudAccountId;
                    bool m_cloudAccountIdHasBeenSet;

                    /**
                     * Domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Port or port range.
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Open.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Risk type.
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * acl type.
                     */
                    std::string m_aclType;
                    bool m_aclTypeHasBeenSet;

                    /**
                     * ACL list.
                     */
                    std::string m_aclList;
                    bool m_aclListHasBeenSet;

                    /**
                     * Asset ID.
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Asset type.
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Port service quantity.
                     */
                    uint64_t m_portServiceCount;
                    bool m_portServiceCountHasBeenSet;

                    /**
                     * Number of high-risk ports.
                     */
                    uint64_t m_highRiskPortServiceCount;
                    bool m_highRiskPortServiceCountHasBeenSet;

                    /**
                     * Number of web applications.
                     */
                    uint64_t m_webAppCount;
                    bool m_webAppCountHasBeenSet;

                    /**
                     * Number of web applications at risk.
                     */
                    uint64_t m_riskWebAppCount;
                    bool m_riskWebAppCountHasBeenSet;

                    /**
                     * Number of Weak Passwords
                     */
                    uint64_t m_weakPasswordCount;
                    bool m_weakPasswordCountHasBeenSet;

                    /**
                     * Number of vulnerabilities
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * First detection time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Latest update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Instance Type Name
                     */
                    std::string m_assetTypeName;
                    bool m_assetTypeNameHasBeenSet;

                    /**
                     * Open status.
                     */
                    std::string m_displayStatus;
                    bool m_displayStatusHasBeenSet;

                    /**
                     * Port status.
                     */
                    std::string m_displayRiskType;
                    bool m_displayRiskTypeHasBeenSet;

                    /**
                     * Scan task status.
                     */
                    std::string m_scanTaskStatus;
                    bool m_scanTaskStatusHasBeenSet;

                    /**
                     * uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Whether a security check has been performed.
                     */
                    std::string m_hasScan;
                    bool m_hasScanHasBeenSet;

                    /**
                     * Tenant ID.
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Tenant ID string.
                     */
                    std::string m_appIdStr;
                    bool m_appIdStrHasBeenSet;

                    /**
                     * Record ID
                     */
                    uint64_t m_exposureID;
                    bool m_exposureIDHasBeenSet;

                    /**
                     * Number of ports open.
                     */
                    uint64_t m_portDetectCount;
                    bool m_portDetectCountHasBeenSet;

                    /**
                     * Port exposure result.
                     */
                    std::string m_portDetectResult;
                    bool m_portDetectResultHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Number of risks to be governed.
                     */
                    uint64_t m_toGovernedRiskCount;
                    bool m_toGovernedRiskCountHasBeenSet;

                    /**
                     * Risk content to be governed.
                     */
                    std::string m_toGovernedRiskContent;
                    bool m_toGovernedRiskContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSESITEM_H_
