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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmPersonUser.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm risk
                */
                class DspmRisk : public AbstractModel
                {
                public:
                    DspmRisk();
                    ~DspmRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Risk id</p>
                     * @return RiskId <p>Risk id</p>
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置<p>Risk id</p>
                     * @param _riskId <p>Risk id</p>
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取<p>Risk name</p>
                     * @return RiskName <p>Risk name</p>
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 设置<p>Risk name</p>
                     * @param _riskName <p>Risk name</p>
                     * 
                     */
                    void SetRiskName(const std::string& _riskName);

                    /**
                     * 判断参数 RiskName 是否已赋值
                     * @return RiskName 是否已赋值
                     * 
                     */
                    bool RiskNameHasBeenSet() const;

                    /**
                     * 获取<p>Risk English name</p>
                     * @return RiskNameEn <p>Risk English name</p>
                     * 
                     */
                    std::string GetRiskNameEn() const;

                    /**
                     * 设置<p>Risk English name</p>
                     * @param _riskNameEn <p>Risk English name</p>
                     * 
                     */
                    void SetRiskNameEn(const std::string& _riskNameEn);

                    /**
                     * 判断参数 RiskNameEn 是否已赋值
                     * @return RiskNameEn 是否已赋值
                     * 
                     */
                    bool RiskNameEnHasBeenSet() const;

                    /**
                     * 获取<p>Policy type</p>
                     * @return StrategyType <p>Policy type</p>
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置<p>Policy type</p>
                     * @param _strategyType <p>Policy type</p>
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取<p>Policy category</p>
                     * @return StrategyCategory <p>Policy category</p>
                     * 
                     */
                    std::string GetStrategyCategory() const;

                    /**
                     * 设置<p>Policy category</p>
                     * @param _strategyCategory <p>Policy category</p>
                     * 
                     */
                    void SetStrategyCategory(const std::string& _strategyCategory);

                    /**
                     * 判断参数 StrategyCategory 是否已赋值
                     * @return StrategyCategory 是否已赋值
                     * 
                     */
                    bool StrategyCategoryHasBeenSet() const;

                    /**
                     * 获取<p>Risk level.</p>
                     * @return RiskLevel <p>Risk level.</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level.</p>
                     * @param _riskLevel <p>Risk level.</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

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
                     * @return AssetName <p>Asset name</p>
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>Asset name</p>
                     * @param _assetName <p>Asset name</p>
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
                     * 获取<p>Region.</p>
                     * @return AssetRegion <p>Region.</p>
                     * 
                     */
                    std::string GetAssetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _assetRegion <p>Region.</p>
                     * 
                     */
                    void SetAssetRegion(const std::string& _assetRegion);

                    /**
                     * 判断参数 AssetRegion 是否已赋值
                     * @return AssetRegion 是否已赋值
                     * 
                     */
                    bool AssetRegionHasBeenSet() const;

                    /**
                     * 获取<p>Asset account</p>
                     * @return Account <p>Asset account</p>
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置<p>Asset account</p>
                     * @param _account <p>Asset account</p>
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取<p>Host address</p>
                     * @return Host <p>Host address</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>Host address</p>
                     * @param _host <p>Host address</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>Account type</p>
                     * @return AccountType <p>Account type</p>
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置<p>Account type</p>
                     * @param _accountType <p>Account type</p>
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取<p>Risk detection time</p>
                     * @return DetectTime <p>Risk detection time</p>
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置<p>Risk detection time</p>
                     * @param _detectTime <p>Risk detection time</p>
                     * 
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>Processing status. 0: unprocessed; 1: processed; 2: ignored</p>
                     * @return Status <p>Processing status. 0: unprocessed; 1: processed; 2: ignored</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Processing status. 0: unprocessed; 1: processed; 2: ignored</p>
                     * @param _status <p>Processing status. 0: unprocessed; 1: processed; 2: ignored</p>
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
                     * 获取<p>Identity id</p>
                     * @return IdentifyId <p>Identity id</p>
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 设置<p>Identity id</p>
                     * @param _identifyId <p>Identity id</p>
                     * 
                     */
                    void SetIdentifyId(const std::string& _identifyId);

                    /**
                     * 判断参数 IdentifyId 是否已赋值
                     * @return IdentifyId 是否已赋值
                     * 
                     */
                    bool IdentifyIdHasBeenSet() const;

                    /**
                     * 获取<p>User belonging to cloud account uin</p>
                     * @return OwnerUin <p>User belonging to cloud account uin</p>
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 设置<p>User belonging to cloud account uin</p>
                     * @param _ownerUin <p>User belonging to cloud account uin</p>
                     * 
                     */
                    void SetOwnerUin(const DspmUinUser& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>Belongs to individual user information</p>
                     * @return Person <p>Belongs to individual user information</p>
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置<p>Belongs to individual user information</p>
                     * @param _person <p>Belongs to individual user information</p>
                     * 
                     */
                    void SetPerson(const DspmPersonUser& _person);

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取<p>Risk data.</p>
                     * @return RiskData <p>Risk data.</p>
                     * 
                     */
                    std::string GetRiskData() const;

                    /**
                     * 设置<p>Risk data.</p>
                     * @param _riskData <p>Risk data.</p>
                     * 
                     */
                    void SetRiskData(const std::string& _riskData);

                    /**
                     * 判断参数 RiskData 是否已赋值
                     * @return RiskData 是否已赋值
                     * 
                     */
                    bool RiskDataHasBeenSet() const;

                    /**
                     * 获取<p>Whether the user is an asset administrator</p>
                     * @return IsAssetManager <p>Whether the user is an asset administrator</p>
                     * 
                     */
                    int64_t GetIsAssetManager() const;

                    /**
                     * 设置<p>Whether the user is an asset administrator</p>
                     * @param _isAssetManager <p>Whether the user is an asset administrator</p>
                     * 
                     */
                    void SetIsAssetManager(const int64_t& _isAssetManager);

                    /**
                     * 判断参数 IsAssetManager 是否已赋值
                     * @return IsAssetManager 是否已赋值
                     * 
                     */
                    bool IsAssetManagerHasBeenSet() const;

                    /**
                     * 获取<p>Data start time</p>
                     * @return DataBeginTime <p>Data start time</p>
                     * 
                     */
                    std::string GetDataBeginTime() const;

                    /**
                     * 设置<p>Data start time</p>
                     * @param _dataBeginTime <p>Data start time</p>
                     * 
                     */
                    void SetDataBeginTime(const std::string& _dataBeginTime);

                    /**
                     * 判断参数 DataBeginTime 是否已赋值
                     * @return DataBeginTime 是否已赋值
                     * 
                     */
                    bool DataBeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>Data end time</p>
                     * @return DataEndTime <p>Data end time</p>
                     * 
                     */
                    std::string GetDataEndTime() const;

                    /**
                     * 设置<p>Data end time</p>
                     * @param _dataEndTime <p>Data end time</p>
                     * 
                     */
                    void SetDataEndTime(const std::string& _dataEndTime);

                    /**
                     * 判断参数 DataEndTime 是否已赋值
                     * @return DataEndTime 是否已赋值
                     * 
                     */
                    bool DataEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Risk type. risk: Risk; alarm: Alarm.</p>
                     * @return RiskType <p>Risk type. risk: Risk; alarm: Alarm.</p>
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置<p>Risk type. risk: Risk; alarm: Alarm.</p>
                     * @param _riskType <p>Risk type. risk: Risk; alarm: Alarm.</p>
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
                     * 获取<p>app id of the asset ownership account</p>
                     * @return AppId <p>app id of the asset ownership account</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>app id of the asset ownership account</p>
                     * @param _appId <p>app id of the asset ownership account</p>
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
                     * 获取<p>uin of the account to which the asset belongs</p>
                     * @return Uin <p>uin of the account to which the asset belongs</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>uin of the account to which the asset belongs</p>
                     * @param _uin <p>uin of the account to which the asset belongs</p>
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
                     * 获取<p>Cluster type of MongoDb. For non-MongoDb assets, fixed to 0.</p><p>Enumeration values:</p><ul><li>0: replica set</li><li>1: sharding</li></ul><p>Default value: 0</p>
                     * @return ClusterType <p>Cluster type of MongoDb. For non-MongoDb assets, fixed to 0.</p><p>Enumeration values:</p><ul><li>0: replica set</li><li>1: sharding</li></ul><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置<p>Cluster type of MongoDb. For non-MongoDb assets, fixed to 0.</p><p>Enumeration values:</p><ul><li>0: replica set</li><li>1: sharding</li></ul><p>Default value: 0</p>
                     * @param _clusterType <p>Cluster type of MongoDb. For non-MongoDb assets, fixed to 0.</p><p>Enumeration values:</p><ul><li>0: replica set</li><li>1: sharding</li></ul><p>Default value: 0</p>
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
                     * <p>Risk id</p>
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * <p>Risk name</p>
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * <p>Risk English name</p>
                     */
                    std::string m_riskNameEn;
                    bool m_riskNameEnHasBeenSet;

                    /**
                     * <p>Policy type</p>
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>Policy category</p>
                     */
                    std::string m_strategyCategory;
                    bool m_strategyCategoryHasBeenSet;

                    /**
                     * <p>Risk level.</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

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
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_assetRegion;
                    bool m_assetRegionHasBeenSet;

                    /**
                     * <p>Asset account</p>
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>Host address</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Account type</p>
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * <p>Risk detection time</p>
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * <p>Processing status. 0: unprocessed; 1: processed; 2: ignored</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Identity id</p>
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * <p>User belonging to cloud account uin</p>
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>Belongs to individual user information</p>
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * <p>Risk data.</p>
                     */
                    std::string m_riskData;
                    bool m_riskDataHasBeenSet;

                    /**
                     * <p>Whether the user is an asset administrator</p>
                     */
                    int64_t m_isAssetManager;
                    bool m_isAssetManagerHasBeenSet;

                    /**
                     * <p>Data start time</p>
                     */
                    std::string m_dataBeginTime;
                    bool m_dataBeginTimeHasBeenSet;

                    /**
                     * <p>Data end time</p>
                     */
                    std::string m_dataEndTime;
                    bool m_dataEndTimeHasBeenSet;

                    /**
                     * <p>Risk type. risk: Risk; alarm: Alarm.</p>
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * <p>app id of the asset ownership account</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Account nickname</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>uin of the account to which the asset belongs</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Cluster type of MongoDb. For non-MongoDb assets, fixed to 0.</p><p>Enumeration values:</p><ul><li>0: replica set</li><li>1: sharding</li></ul><p>Default value: 0</p>
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISK_H_
