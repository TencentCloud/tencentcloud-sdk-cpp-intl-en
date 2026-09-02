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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmRiskCount.h>
#include <tencentcloud/csip/v20221121/model/DspmAssetDataScanDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Database assets
                */
                class DspmDbAsset : public AbstractModel
                {
                public:
                    DspmDbAsset();
                    ~DspmDbAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Asset instance Id</p>
                     * @return AssetId <p>Asset instance Id</p>
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>Asset instance Id</p>
                     * @param _assetId <p>Asset instance Id</p>
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
                     * 获取<p>Asset name</p>
                     * @return Name <p>Asset name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Asset name</p>
                     * @param _name <p>Asset name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Account number</p>
                     * @return AccountCount <p>Account number</p>
                     * 
                     */
                    int64_t GetAccountCount() const;

                    /**
                     * 设置<p>Account number</p>
                     * @param _accountCount <p>Account number</p>
                     * 
                     */
                    void SetAccountCount(const int64_t& _accountCount);

                    /**
                     * 判断参数 AccountCount 是否已赋值
                     * @return AccountCount 是否已赋值
                     * 
                     */
                    bool AccountCountHasBeenSet() const;

                    /**
                     * 获取<p>Public network access address. If there are multiple, separate them with ';'.</p>
                     * @return PublicIp <p>Public network access address. If there are multiple, separate them with ';'.</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>Public network access address. If there are multiple, separate them with ';'.</p>
                     * @param _publicIp <p>Public network access address. If there are multiple, separate them with ';'.</p>
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
                     * 获取<p>Intranet access address. If there are multiple, separate them with ';'</p>
                     * @return PrivateIp <p>Intranet access address. If there are multiple, separate them with ';'</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>Intranet access address. If there are multiple, separate them with ';'</p>
                     * @param _privateIp <p>Intranet access address. If there are multiple, separate them with ';'</p>
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
                     * 获取<p>WAN domain address. If there are multiple, separate them with ';'</p>
                     * @return WanDomain <p>WAN domain address. If there are multiple, separate them with ';'</p>
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置<p>WAN domain address. If there are multiple, separate them with ';'</p>
                     * @param _wanDomain <p>WAN domain address. If there are multiple, separate them with ';'</p>
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取<p>Region.</p>
                     * @return Region <p>Region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _region <p>Region.</p>
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
                     * 获取<p>vpc ID of the vpc where the asset is located</p>
                     * @return VpcId <p>vpc ID of the vpc where the asset is located</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>vpc ID of the vpc where the asset is located</p>
                     * @param _vpcId <p>vpc ID of the vpc where the asset is located</p>
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
                     * 获取<p>Name of the vpc where the asset is located</p>
                     * @return VpcName <p>Name of the vpc where the asset is located</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>Name of the vpc where the asset is located</p>
                     * @param _vpcName <p>Name of the vpc where the asset is located</p>
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
                     * 获取<p>Subnet ID of the vpc subnet where the asset is located</p>
                     * @return SubnetId <p>Subnet ID of the vpc subnet where the asset is located</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID of the vpc subnet where the asset is located</p>
                     * @param _subnetId <p>Subnet ID of the vpc subnet where the asset is located</p>
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
                     * 获取<p>Subnet name of the vpc where the asset is located</p>
                     * @return SubnetName <p>Subnet name of the vpc where the asset is located</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>Subnet name of the vpc where the asset is located</p>
                     * @param _subnetName <p>Subnet name of the vpc where the asset is located</p>
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取<p>Instance status</p>
                     * @return Status <p>Instance status</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Instance status</p>
                     * @param _status <p>Instance status</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
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
                     * 获取<p>Admin info.</p>
                     * @return Manager <p>Admin info.</p>
                     * 
                     */
                    std::vector<DspmUinUser> GetManager() const;

                    /**
                     * 设置<p>Admin info.</p>
                     * @param _manager <p>Admin info.</p>
                     * 
                     */
                    void SetManager(const std::vector<DspmUinUser>& _manager);

                    /**
                     * 判断参数 Manager 是否已赋值
                     * @return Manager 是否已赋值
                     * 
                     */
                    bool ManagerHasBeenSet() const;

                    /**
                     * 获取<p>Is the identity bound. 0: not bound; 1: bound</p>
                     * @return BindIdentify <p>Is the identity bound. 0: not bound; 1: bound</p>
                     * 
                     */
                    int64_t GetBindIdentify() const;

                    /**
                     * 设置<p>Is the identity bound. 0: not bound; 1: bound</p>
                     * @param _bindIdentify <p>Is the identity bound. 0: not bound; 1: bound</p>
                     * 
                     */
                    void SetBindIdentify(const int64_t& _bindIdentify);

                    /**
                     * 判断参数 BindIdentify 是否已赋值
                     * @return BindIdentify 是否已赋值
                     * 
                     */
                    bool BindIdentifyHasBeenSet() const;

                    /**
                     * 获取<p>Admin or not</p>
                     * @return IsManager <p>Admin or not</p>
                     * 
                     */
                    int64_t GetIsManager() const;

                    /**
                     * 设置<p>Admin or not</p>
                     * @param _isManager <p>Admin or not</p>
                     * 
                     */
                    void SetIsManager(const int64_t& _isManager);

                    /**
                     * 判断参数 IsManager 是否已赋值
                     * @return IsManager 是否已赋值
                     * 
                     */
                    bool IsManagerHasBeenSet() const;

                    /**
                     * 获取<p>Risk statistics</p>
                     * @return RiskCount <p>Risk statistics</p>
                     * 
                     */
                    DspmRiskCount GetRiskCount() const;

                    /**
                     * 设置<p>Risk statistics</p>
                     * @param _riskCount <p>Risk statistics</p>
                     * 
                     */
                    void SetRiskCount(const DspmRiskCount& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Security recommendation.<br>Resolve immediate problem-solving<br>Reinforcement<br>None no abnormality detected</p>
                     * @return SafetyAdvice <p>Security recommendation.<br>Resolve immediate problem-solving<br>Reinforcement<br>None no abnormality detected</p>
                     * 
                     */
                    std::string GetSafetyAdvice() const;

                    /**
                     * 设置<p>Security recommendation.<br>Resolve immediate problem-solving<br>Reinforcement<br>None no abnormality detected</p>
                     * @param _safetyAdvice <p>Security recommendation.<br>Resolve immediate problem-solving<br>Reinforcement<br>None no abnormality detected</p>
                     * 
                     */
                    void SetSafetyAdvice(const std::string& _safetyAdvice);

                    /**
                     * 判断参数 SafetyAdvice 是否已赋值
                     * @return SafetyAdvice 是否已赋值
                     * 
                     */
                    bool SafetyAdviceHasBeenSet() const;

                    /**
                     * 获取<p>Log delivery status.<br>0 - Delivery off. 1 - Delivery on. 2 - Delivery activating. 3 - Delivery closing.</p>
                     * @return LogDeliveryStatus <p>Log delivery status.<br>0 - Delivery off. 1 - Delivery on. 2 - Delivery activating. 3 - Delivery closing.</p>
                     * 
                     */
                    int64_t GetLogDeliveryStatus() const;

                    /**
                     * 设置<p>Log delivery status.<br>0 - Delivery off. 1 - Delivery on. 2 - Delivery activating. 3 - Delivery closing.</p>
                     * @param _logDeliveryStatus <p>Log delivery status.<br>0 - Delivery off. 1 - Delivery on. 2 - Delivery activating. 3 - Delivery closing.</p>
                     * 
                     */
                    void SetLogDeliveryStatus(const int64_t& _logDeliveryStatus);

                    /**
                     * 判断参数 LogDeliveryStatus 是否已赋值
                     * @return LogDeliveryStatus 是否已赋值
                     * 
                     */
                    bool LogDeliveryStatusHasBeenSet() const;

                    /**
                     * 获取<p>Whether log shipping is supported. 0: no support; 1: support</p>
                     * @return LogDeliverySupported <p>Whether log shipping is supported. 0: no support; 1: support</p>
                     * 
                     */
                    int64_t GetLogDeliverySupported() const;

                    /**
                     * 设置<p>Whether log shipping is supported. 0: no support; 1: support</p>
                     * @param _logDeliverySupported <p>Whether log shipping is supported. 0: no support; 1: support</p>
                     * 
                     */
                    void SetLogDeliverySupported(const int64_t& _logDeliverySupported);

                    /**
                     * 判断参数 LogDeliverySupported 是否已赋值
                     * @return LogDeliverySupported 是否已赋值
                     * 
                     */
                    bool LogDeliverySupportedHasBeenSet() const;

                    /**
                     * 获取<p>Data scanning info</p>
                     * @return DataScanInfo <p>Data scanning info</p>
                     * 
                     */
                    DspmAssetDataScanDetail GetDataScanInfo() const;

                    /**
                     * 设置<p>Data scanning info</p>
                     * @param _dataScanInfo <p>Data scanning info</p>
                     * 
                     */
                    void SetDataScanInfo(const DspmAssetDataScanDetail& _dataScanInfo);

                    /**
                     * 判断参数 DataScanInfo 是否已赋值
                     * @return DataScanInfo 是否已赋值
                     * 
                     */
                    bool DataScanInfoHasBeenSet() const;

                    /**
                     * 获取<p>app id of the account to which the asset belongs</p>
                     * @return AppId <p>app id of the account to which the asset belongs</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>app id of the account to which the asset belongs</p>
                     * @param _appId <p>app id of the account to which the asset belongs</p>
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
                     * 获取<p>Account nickname</p>
                     * @return NickName <p>Account nickname</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>Account nickname</p>
                     * @param _nickName <p>Account nickname</p>
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取<p>Account uin of asset ownership</p>
                     * @return Uin <p>Account uin of asset ownership</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>Account uin of asset ownership</p>
                     * @param _uin <p>Account uin of asset ownership</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>Security analysis status (0-off, 1-on, 2-activating, 3-disabling)</p>
                     * @return SecurityAnalyseStatus <p>Security analysis status (0-off, 1-on, 2-activating, 3-disabling)</p>
                     * 
                     */
                    int64_t GetSecurityAnalyseStatus() const;

                    /**
                     * 设置<p>Security analysis status (0-off, 1-on, 2-activating, 3-disabling)</p>
                     * @param _securityAnalyseStatus <p>Security analysis status (0-off, 1-on, 2-activating, 3-disabling)</p>
                     * 
                     */
                    void SetSecurityAnalyseStatus(const int64_t& _securityAnalyseStatus);

                    /**
                     * 判断参数 SecurityAnalyseStatus 是否已赋值
                     * @return SecurityAnalyseStatus 是否已赋值
                     * 
                     */
                    bool SecurityAnalyseStatusHasBeenSet() const;

                    /**
                     * 获取<p>Total number of logs for the current instance.</p>
                     * @return TotalAuditLogs <p>Total number of logs for the current instance.</p>
                     * 
                     */
                    uint64_t GetTotalAuditLogs() const;

                    /**
                     * 设置<p>Total number of logs for the current instance.</p>
                     * @param _totalAuditLogs <p>Total number of logs for the current instance.</p>
                     * 
                     */
                    void SetTotalAuditLogs(const uint64_t& _totalAuditLogs);

                    /**
                     * 判断参数 TotalAuditLogs 是否已赋值
                     * @return TotalAuditLogs 是否已赋值
                     * 
                     */
                    bool TotalAuditLogsHasBeenSet() const;

                    /**
                     * 获取<p>Reasons why log audit is forbidden. Available values: VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists</p>
                     * @return LogDeliveryDisableReason <p>Reasons why log audit is forbidden. Available values: VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists</p>
                     * 
                     */
                    std::string GetLogDeliveryDisableReason() const;

                    /**
                     * 设置<p>Reasons why log audit is forbidden. Available values: VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists</p>
                     * @param _logDeliveryDisableReason <p>Reasons why log audit is forbidden. Available values: VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists</p>
                     * 
                     */
                    void SetLogDeliveryDisableReason(const std::string& _logDeliveryDisableReason);

                    /**
                     * 判断参数 LogDeliveryDisableReason 是否已赋值
                     * @return LogDeliveryDisableReason 是否已赋值
                     * 
                     */
                    bool LogDeliveryDisableReasonHasBeenSet() const;

                    /**
                     * 获取<p>Start timestamp of online log, accurate to second</p>
                     * @return OldestOnlineLogTimestamp <p>Start timestamp of online log, accurate to second</p>
                     * 
                     */
                    uint64_t GetOldestOnlineLogTimestamp() const;

                    /**
                     * 设置<p>Start timestamp of online log, accurate to second</p>
                     * @param _oldestOnlineLogTimestamp <p>Start timestamp of online log, accurate to second</p>
                     * 
                     */
                    void SetOldestOnlineLogTimestamp(const uint64_t& _oldestOnlineLogTimestamp);

                    /**
                     * 判断参数 OldestOnlineLogTimestamp 是否已赋值
                     * @return OldestOnlineLogTimestamp 是否已赋值
                     * 
                     */
                    bool OldestOnlineLogTimestampHasBeenSet() const;

                    /**
                     * 获取<p>Latest timestamp of the online log, accurate to the second</p>
                     * @return NewestOnlineLogTimestamp <p>Latest timestamp of the online log, accurate to the second</p>
                     * 
                     */
                    uint64_t GetNewestOnlineLogTimestamp() const;

                    /**
                     * 设置<p>Latest timestamp of the online log, accurate to the second</p>
                     * @param _newestOnlineLogTimestamp <p>Latest timestamp of the online log, accurate to the second</p>
                     * 
                     */
                    void SetNewestOnlineLogTimestamp(const uint64_t& _newestOnlineLogTimestamp);

                    /**
                     * 判断参数 NewestOnlineLogTimestamp 是否已赋值
                     * @return NewestOnlineLogTimestamp 是否已赋值
                     * 
                     */
                    bool NewestOnlineLogTimestampHasBeenSet() const;

                    /**
                     * 获取<p>Operation error information</p>
                     * @return OperationErrorMsg <p>Operation error information</p>
                     * 
                     */
                    std::string GetOperationErrorMsg() const;

                    /**
                     * 设置<p>Operation error information</p>
                     * @param _operationErrorMsg <p>Operation error information</p>
                     * 
                     */
                    void SetOperationErrorMsg(const std::string& _operationErrorMsg);

                    /**
                     * 判断参数 OperationErrorMsg 是否已赋值
                     * @return OperationErrorMsg 是否已赋值
                     * 
                     */
                    bool OperationErrorMsgHasBeenSet() const;

                    /**
                     * 获取<p>Whether account operations are supported. 0: not supported; 1: supported</p>
                     * @return AccountOptSupported <p>Whether account operations are supported. 0: not supported; 1: supported</p>
                     * 
                     */
                    int64_t GetAccountOptSupported() const;

                    /**
                     * 设置<p>Whether account operations are supported. 0: not supported; 1: supported</p>
                     * @param _accountOptSupported <p>Whether account operations are supported. 0: not supported; 1: supported</p>
                     * 
                     */
                    void SetAccountOptSupported(const int64_t& _accountOptSupported);

                    /**
                     * 判断参数 AccountOptSupported 是否已赋值
                     * @return AccountOptSupported 是否已赋值
                     * 
                     */
                    bool AccountOptSupportedHasBeenSet() const;

                    /**
                     * 获取<p>Instance type</p>
                     * @return InstanceType <p>Instance type</p>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置<p>Instance type</p>
                     * @param _instanceType <p>Instance type</p>
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Cluster type (MongoDB), consistent with ClusterType in the cloud API DescribeDBInstances: 0-replica set, 1-sharding; fixed as 0 for non-MongoDB assets</p>
                     * @return ClusterType <p>Cluster type (MongoDB), consistent with ClusterType in the cloud API DescribeDBInstances: 0-replica set, 1-sharding; fixed as 0 for non-MongoDB assets</p>
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置<p>Cluster type (MongoDB), consistent with ClusterType in the cloud API DescribeDBInstances: 0-replica set, 1-sharding; fixed as 0 for non-MongoDB assets</p>
                     * @param _clusterType <p>Cluster type (MongoDB), consistent with ClusterType in the cloud API DescribeDBInstances: 0-replica set, 1-sharding; fixed as 0 for non-MongoDB assets</p>
                     * 
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether sensitive data identification is supported. 0: not supported; 1: supported</p>
                     * @return IdentifyScanSupported <p>Whether sensitive data identification is supported. 0: not supported; 1: supported</p>
                     * 
                     */
                    int64_t GetIdentifyScanSupported() const;

                    /**
                     * 设置<p>Whether sensitive data identification is supported. 0: not supported; 1: supported</p>
                     * @param _identifyScanSupported <p>Whether sensitive data identification is supported. 0: not supported; 1: supported</p>
                     * 
                     */
                    void SetIdentifyScanSupported(const int64_t& _identifyScanSupported);

                    /**
                     * 判断参数 IdentifyScanSupported 是否已赋值
                     * @return IdentifyScanSupported 是否已赋值
                     * 
                     */
                    bool IdentifyScanSupportedHasBeenSet() const;

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
                     * 获取<p>Cluster name.</p>
                     * @return ClusterName <p>Cluster name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _clusterName <p>Cluster name.</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * <p>Asset instance Id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>Asset type</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>Asset name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Account number</p>
                     */
                    int64_t m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * <p>Public network access address. If there are multiple, separate them with ';'.</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>Intranet access address. If there are multiple, separate them with ';'</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>WAN domain address. If there are multiple, separate them with ';'</p>
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>vpc ID of the vpc where the asset is located</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Name of the vpc where the asset is located</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>Subnet ID of the vpc subnet where the asset is located</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Subnet name of the vpc where the asset is located</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>Instance status</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Admin info.</p>
                     */
                    std::vector<DspmUinUser> m_manager;
                    bool m_managerHasBeenSet;

                    /**
                     * <p>Is the identity bound. 0: not bound; 1: bound</p>
                     */
                    int64_t m_bindIdentify;
                    bool m_bindIdentifyHasBeenSet;

                    /**
                     * <p>Admin or not</p>
                     */
                    int64_t m_isManager;
                    bool m_isManagerHasBeenSet;

                    /**
                     * <p>Risk statistics</p>
                     */
                    DspmRiskCount m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>Security recommendation.<br>Resolve immediate problem-solving<br>Reinforcement<br>None no abnormality detected</p>
                     */
                    std::string m_safetyAdvice;
                    bool m_safetyAdviceHasBeenSet;

                    /**
                     * <p>Log delivery status.<br>0 - Delivery off. 1 - Delivery on. 2 - Delivery activating. 3 - Delivery closing.</p>
                     */
                    int64_t m_logDeliveryStatus;
                    bool m_logDeliveryStatusHasBeenSet;

                    /**
                     * <p>Whether log shipping is supported. 0: no support; 1: support</p>
                     */
                    int64_t m_logDeliverySupported;
                    bool m_logDeliverySupportedHasBeenSet;

                    /**
                     * <p>Data scanning info</p>
                     */
                    DspmAssetDataScanDetail m_dataScanInfo;
                    bool m_dataScanInfoHasBeenSet;

                    /**
                     * <p>app id of the account to which the asset belongs</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Account nickname</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>Account uin of asset ownership</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Security analysis status (0-off, 1-on, 2-activating, 3-disabling)</p>
                     */
                    int64_t m_securityAnalyseStatus;
                    bool m_securityAnalyseStatusHasBeenSet;

                    /**
                     * <p>Total number of logs for the current instance.</p>
                     */
                    uint64_t m_totalAuditLogs;
                    bool m_totalAuditLogsHasBeenSet;

                    /**
                     * <p>Reasons why log audit is forbidden. Available values: VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists</p>
                     */
                    std::string m_logDeliveryDisableReason;
                    bool m_logDeliveryDisableReasonHasBeenSet;

                    /**
                     * <p>Start timestamp of online log, accurate to second</p>
                     */
                    uint64_t m_oldestOnlineLogTimestamp;
                    bool m_oldestOnlineLogTimestampHasBeenSet;

                    /**
                     * <p>Latest timestamp of the online log, accurate to the second</p>
                     */
                    uint64_t m_newestOnlineLogTimestamp;
                    bool m_newestOnlineLogTimestampHasBeenSet;

                    /**
                     * <p>Operation error information</p>
                     */
                    std::string m_operationErrorMsg;
                    bool m_operationErrorMsgHasBeenSet;

                    /**
                     * <p>Whether account operations are supported. 0: not supported; 1: supported</p>
                     */
                    int64_t m_accountOptSupported;
                    bool m_accountOptSupportedHasBeenSet;

                    /**
                     * <p>Instance type</p>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Cluster type (MongoDB), consistent with ClusterType in the cloud API DescribeDBInstances: 0-replica set, 1-sharding; fixed as 0 for non-MongoDB assets</p>
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>Whether sensitive data identification is supported. 0: not supported; 1: supported</p>
                     */
                    int64_t m_identifyScanSupported;
                    bool m_identifyScanSupportedHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBASSET_H_
