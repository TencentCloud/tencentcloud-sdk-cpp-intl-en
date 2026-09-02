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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMRISKDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMRISKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDspmRiskDetail response structure.
                */
                class DescribeDspmRiskDetailResponse : public AbstractModel
                {
                public:
                    DescribeDspmRiskDetailResponse();
                    ~DescribeDspmRiskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Risk level
                     * @return RiskLevel Risk level
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Risk detection time
                     * @return DetectTime Risk detection time
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取Asset instance ID.
                     * @return AssetId Asset instance ID.
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Asset name
                     * @return AssetName Asset name
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取Asset type
                     * @return AssetType Asset type
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Public access address
                     * @return PublicIp Public access address
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Intranet access address
                     * @return PrivateIp Intranet access address
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取Account
                     * @return Account Account
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取Host address
                     * @return Host Host address
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Identity ID
                     * @return IdentifyId Identity ID
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 判断参数 IdentifyId 是否已赋值
                     * @return IdentifyId 是否已赋值
                     * 
                     */
                    bool IdentifyIdHasBeenSet() const;

                    /**
                     * 获取uin of the user belonging to the cloud account
                     * @return OwnerUin uin of the user belonging to the cloud account
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取User information to which it belongs
                     * @return Person User information to which it belongs
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取Risk name
                     * @return RiskName Risk name
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 判断参数 RiskName 是否已赋值
                     * @return RiskName 是否已赋值
                     * 
                     */
                    bool RiskNameHasBeenSet() const;

                    /**
                     * 获取Risk English name
                     * @return RiskNameEn Risk English name
                     * 
                     */
                    std::string GetRiskNameEn() const;

                    /**
                     * 判断参数 RiskNameEn 是否已赋值
                     * @return RiskNameEn 是否已赋值
                     * 
                     */
                    bool RiskNameEnHasBeenSet() const;

                    /**
                     * 获取Risk data.
                     * @return RiskData Risk data.
                     * 
                     */
                    std::string GetRiskData() const;

                    /**
                     * 判断参数 RiskData 是否已赋值
                     * @return RiskData 是否已赋值
                     * 
                     */
                    bool RiskDataHasBeenSet() const;

                    /**
                     * 获取Baseline data
                     * @return BaselineData Baseline data
                     * 
                     */
                    std::string GetBaselineData() const;

                    /**
                     * 判断参数 BaselineData 是否已赋值
                     * @return BaselineData 是否已赋值
                     * 
                     */
                    bool BaselineDataHasBeenSet() const;

                    /**
                     * 获取Risk id
                     * @return RiskId Risk id
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取Policy type
                     * @return StrategyType Policy type
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取Policy category
                     * @return StrategyCategory Policy category
                     * 
                     */
                    std::string GetStrategyCategory() const;

                    /**
                     * 判断参数 StrategyCategory 是否已赋值
                     * @return StrategyCategory 是否已赋值
                     * 
                     */
                    bool StrategyCategoryHasBeenSet() const;

                    /**
                     * 获取Account type.
                     * @return AccountType Account type.
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取Risk status
                     * @return Status Risk status
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether the user is an asset administrator
                     * @return IsAssetManager Whether the user is an asset administrator
                     * 
                     */
                    int64_t GetIsAssetManager() const;

                    /**
                     * 判断参数 IsAssetManager 是否已赋值
                     * @return IsAssetManager 是否已赋值
                     * 
                     */
                    bool IsAssetManagerHasBeenSet() const;

                    /**
                     * 获取Data start time
                     * @return DataBeginTime Data start time
                     * 
                     */
                    std::string GetDataBeginTime() const;

                    /**
                     * 判断参数 DataBeginTime 是否已赋值
                     * @return DataBeginTime 是否已赋值
                     * 
                     */
                    bool DataBeginTimeHasBeenSet() const;

                    /**
                     * 获取Data end time.
                     * @return DataEndTime Data end time.
                     * 
                     */
                    std::string GetDataEndTime() const;

                    /**
                     * 判断参数 DataEndTime 是否已赋值
                     * @return DataEndTime 是否已赋值
                     * 
                     */
                    bool DataEndTimeHasBeenSet() const;

                    /**
                     * 获取Risk type. risk: Risk; alarm: Alarm.
                     * @return RiskType Risk type. risk: Risk; alarm: Alarm.
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                private:

                    /**
                     * Risk level
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Risk detection time
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * Asset instance ID.
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Asset name
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Asset type
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Public access address
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Intranet access address
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Account
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * Host address
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Identity ID
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * uin of the user belonging to the cloud account
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * User information to which it belongs
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * Risk name
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * Risk English name
                     */
                    std::string m_riskNameEn;
                    bool m_riskNameEnHasBeenSet;

                    /**
                     * Risk data.
                     */
                    std::string m_riskData;
                    bool m_riskDataHasBeenSet;

                    /**
                     * Baseline data
                     */
                    std::string m_baselineData;
                    bool m_baselineDataHasBeenSet;

                    /**
                     * Risk id
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * Policy type
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * Policy category
                     */
                    std::string m_strategyCategory;
                    bool m_strategyCategoryHasBeenSet;

                    /**
                     * Account type.
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * Risk status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether the user is an asset administrator
                     */
                    int64_t m_isAssetManager;
                    bool m_isAssetManagerHasBeenSet;

                    /**
                     * Data start time
                     */
                    std::string m_dataBeginTime;
                    bool m_dataBeginTimeHasBeenSet;

                    /**
                     * Data end time.
                     */
                    std::string m_dataEndTime;
                    bool m_dataEndTimeHasBeenSet;

                    /**
                     * Risk type. risk: Risk; alarm: Alarm.
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMRISKDETAILRESPONSE_H_
