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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCESSTOPOLOGYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCESSTOPOLOGYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmFrequency.h>
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
                * Dspm asset access topology
                */
                class DspmAssetAccessTopologyItem : public AbstractModel
                {
                public:
                    DspmAssetAccessTopologyItem();
                    ~DspmAssetAccessTopologyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Asset account
                     * @return AssetAccount Asset account
                     * 
                     */
                    std::string GetAssetAccount() const;

                    /**
                     * 设置Asset account
                     * @param _assetAccount Asset account
                     * 
                     */
                    void SetAssetAccount(const std::string& _assetAccount);

                    /**
                     * 判断参数 AssetAccount 是否已赋值
                     * @return AssetAccount 是否已赋值
                     * 
                     */
                    bool AssetAccountHasBeenSet() const;

                    /**
                     * 获取Host address
                     * @return Host Host address
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host address
                     * @param _host Host address
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
                     * 获取Account type.
                     * @return AccountType Account type.
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置Account type.
                     * @param _accountType Account type.
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
                     * 获取Asset address
                     * @return AssetIp Asset address
                     * 
                     */
                    std::string GetAssetIp() const;

                    /**
                     * 设置Asset address
                     * @param _assetIp Asset address
                     * 
                     */
                    void SetAssetIp(const std::string& _assetIp);

                    /**
                     * 判断参数 AssetIp 是否已赋值
                     * @return AssetIp 是否已赋值
                     * 
                     */
                    bool AssetIpHasBeenSet() const;

                    /**
                     * 获取Origin ip address
                     * @return SourceIp Origin ip address
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置Origin ip address
                     * @param _sourceIp Origin ip address
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取Origin ip type
                     * @return SourceIpType Origin ip type
                     * 
                     */
                    std::string GetSourceIpType() const;

                    /**
                     * 设置Origin ip type
                     * @param _sourceIpType Origin ip type
                     * 
                     */
                    void SetSourceIpType(const std::string& _sourceIpType);

                    /**
                     * 判断参数 SourceIpType 是否已赋值
                     * @return SourceIpType 是否已赋值
                     * 
                     */
                    bool SourceIpTypeHasBeenSet() const;

                    /**
                     * 获取Access frequency (times/day)
                     * @return AccessFrequency Access frequency (times/day)
                     * 
                     */
                    DspmFrequency GetAccessFrequency() const;

                    /**
                     * 设置Access frequency (times/day)
                     * @param _accessFrequency Access frequency (times/day)
                     * 
                     */
                    void SetAccessFrequency(const DspmFrequency& _accessFrequency);

                    /**
                     * 判断参数 AccessFrequency 是否已赋值
                     * @return AccessFrequency 是否已赋值
                     * 
                     */
                    bool AccessFrequencyHasBeenSet() const;

                    /**
                     * 获取SQL execution frequency. Queries/hr.
                     * @return ExecSQLFrequency SQL execution frequency. Queries/hr.
                     * 
                     */
                    DspmFrequency GetExecSQLFrequency() const;

                    /**
                     * 设置SQL execution frequency. Queries/hr.
                     * @param _execSQLFrequency SQL execution frequency. Queries/hr.
                     * 
                     */
                    void SetExecSQLFrequency(const DspmFrequency& _execSQLFrequency);

                    /**
                     * 判断参数 ExecSQLFrequency 是否已赋值
                     * @return ExecSQLFrequency 是否已赋值
                     * 
                     */
                    bool ExecSQLFrequencyHasBeenSet() const;

                    /**
                     * 获取Access start time.
                     * @return AccessBeginTime Access start time.
                     * 
                     */
                    std::string GetAccessBeginTime() const;

                    /**
                     * 设置Access start time.
                     * @param _accessBeginTime Access start time.
                     * 
                     */
                    void SetAccessBeginTime(const std::string& _accessBeginTime);

                    /**
                     * 判断参数 AccessBeginTime 是否已赋值
                     * @return AccessBeginTime 是否已赋值
                     * 
                     */
                    bool AccessBeginTimeHasBeenSet() const;

                    /**
                     * 获取Access end time
                     * @return AccessEndTime Access end time
                     * 
                     */
                    std::string GetAccessEndTime() const;

                    /**
                     * 设置Access end time
                     * @param _accessEndTime Access end time
                     * 
                     */
                    void SetAccessEndTime(const std::string& _accessEndTime);

                    /**
                     * 判断参数 AccessEndTime 是否已赋值
                     * @return AccessEndTime 是否已赋值
                     * 
                     */
                    bool AccessEndTimeHasBeenSet() const;

                    /**
                     * 获取Number of account risks
                     * @return AccountRisk Number of account risks
                     * 
                     */
                    int64_t GetAccountRisk() const;

                    /**
                     * 设置Number of account risks
                     * @param _accountRisk Number of account risks
                     * 
                     */
                    void SetAccountRisk(const int64_t& _accountRisk);

                    /**
                     * 判断参数 AccountRisk 是否已赋值
                     * @return AccountRisk 是否已赋值
                     * 
                     */
                    bool AccountRiskHasBeenSet() const;

                    /**
                     * 获取Number of asset risks
                     * @return AssetRisk Number of asset risks
                     * 
                     */
                    int64_t GetAssetRisk() const;

                    /**
                     * 设置Number of asset risks
                     * @param _assetRisk Number of asset risks
                     * 
                     */
                    void SetAssetRisk(const int64_t& _assetRisk);

                    /**
                     * 判断参数 AssetRisk 是否已赋值
                     * @return AssetRisk 是否已赋值
                     * 
                     */
                    bool AssetRiskHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
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
                     * 获取Identity type. null for non-identity accounts. 0: Undefined; 2: Long-term identity; 3: Temporary identity
                     * @return IdentifyType Identity type. null for non-identity accounts. 0: Undefined; 2: Long-term identity; 3: Temporary identity
                     * 
                     */
                    int64_t GetIdentifyType() const;

                    /**
                     * 设置Identity type. null for non-identity accounts. 0: Undefined; 2: Long-term identity; 3: Temporary identity
                     * @param _identifyType Identity type. null for non-identity accounts. 0: Undefined; 2: Long-term identity; 3: Temporary identity
                     * 
                     */
                    void SetIdentifyType(const int64_t& _identifyType);

                    /**
                     * 判断参数 IdentifyType 是否已赋值
                     * @return IdentifyType 是否已赋值
                     * 
                     */
                    bool IdentifyTypeHasBeenSet() const;

                    /**
                     * 获取uin of the user belonging to the cloud account.
                     * @return OwnerUin uin of the user belonging to the cloud account.
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 设置uin of the user belonging to the cloud account.
                     * @param _ownerUin uin of the user belonging to the cloud account.
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
                     * 获取User information to which it belongs.
                     * @return Person User information to which it belongs.
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置User information to which it belongs.
                     * @param _person User information to which it belongs.
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
                     * 获取Alarm count of the account
                     * @return AccountAlarm Alarm count of the account
                     * 
                     */
                    int64_t GetAccountAlarm() const;

                    /**
                     * 设置Alarm count of the account
                     * @param _accountAlarm Alarm count of the account
                     * 
                     */
                    void SetAccountAlarm(const int64_t& _accountAlarm);

                    /**
                     * 判断参数 AccountAlarm 是否已赋值
                     * @return AccountAlarm 是否已赋值
                     * 
                     */
                    bool AccountAlarmHasBeenSet() const;

                    /**
                     * 获取Number of asset alarms
                     * @return AssetAlarm Number of asset alarms
                     * 
                     */
                    int64_t GetAssetAlarm() const;

                    /**
                     * 设置Number of asset alarms
                     * @param _assetAlarm Number of asset alarms
                     * 
                     */
                    void SetAssetAlarm(const int64_t& _assetAlarm);

                    /**
                     * 判断参数 AssetAlarm 是否已赋值
                     * @return AssetAlarm 是否已赋值
                     * 
                     */
                    bool AssetAlarmHasBeenSet() const;

                private:

                    /**
                     * Asset ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Asset type
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Asset name
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Asset account
                     */
                    std::string m_assetAccount;
                    bool m_assetAccountHasBeenSet;

                    /**
                     * Host address
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Account type.
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * Asset address
                     */
                    std::string m_assetIp;
                    bool m_assetIpHasBeenSet;

                    /**
                     * Origin ip address
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * Origin ip type
                     */
                    std::string m_sourceIpType;
                    bool m_sourceIpTypeHasBeenSet;

                    /**
                     * Access frequency (times/day)
                     */
                    DspmFrequency m_accessFrequency;
                    bool m_accessFrequencyHasBeenSet;

                    /**
                     * SQL execution frequency. Queries/hr.
                     */
                    DspmFrequency m_execSQLFrequency;
                    bool m_execSQLFrequencyHasBeenSet;

                    /**
                     * Access start time.
                     */
                    std::string m_accessBeginTime;
                    bool m_accessBeginTimeHasBeenSet;

                    /**
                     * Access end time
                     */
                    std::string m_accessEndTime;
                    bool m_accessEndTimeHasBeenSet;

                    /**
                     * Number of account risks
                     */
                    int64_t m_accountRisk;
                    bool m_accountRiskHasBeenSet;

                    /**
                     * Number of asset risks
                     */
                    int64_t m_assetRisk;
                    bool m_assetRiskHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Identity type. null for non-identity accounts. 0: Undefined; 2: Long-term identity; 3: Temporary identity
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * uin of the user belonging to the cloud account.
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * User information to which it belongs.
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * Alarm count of the account
                     */
                    int64_t m_accountAlarm;
                    bool m_accountAlarmHasBeenSet;

                    /**
                     * Number of asset alarms
                     */
                    int64_t m_assetAlarm;
                    bool m_assetAlarmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCESSTOPOLOGYITEM_H_
