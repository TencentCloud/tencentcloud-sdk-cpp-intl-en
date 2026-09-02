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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCOUNTIDENTIFY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCOUNTIDENTIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmDbAccountPrivilege.h>
#include <tencentcloud/csip/v20221121/model/DspmRiskCount.h>
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
                * Asset account identity information
                */
                class DspmAssetAccountIdentify : public AbstractModel
                {
                public:
                    DspmAssetAccountIdentify();
                    ~DspmAssetAccountIdentify() = default;
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
                     * 获取The user that the cloud account uin belongs to.
                     * @return OwnerUin The user that the cloud account uin belongs to.
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 设置The user that the cloud account uin belongs to.
                     * @param _ownerUin The user that the cloud account uin belongs to.
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
                     * 获取Administrator or Not
                     * @return IsManager Administrator or Not
                     * 
                     */
                    int64_t GetIsManager() const;

                    /**
                     * 设置Administrator or Not
                     * @param _isManager Administrator or Not
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
                     * 获取Account type. 0-Undefined 1-Service account 2-Personal account 3-Temporary account
                     * @return AccountType Account type. 0-Undefined 1-Service account 2-Personal account 3-Temporary account
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置Account type. 0-Undefined 1-Service account 2-Personal account 3-Temporary account
                     * @param _accountType Account type. 0-Undefined 1-Service account 2-Personal account 3-Temporary account
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
                     * 获取Permission information
                     * @return Privilege Permission information
                     * 
                     */
                    DspmDbAccountPrivilege GetPrivilege() const;

                    /**
                     * 设置Permission information
                     * @param _privilege Permission information
                     * 
                     */
                    void SetPrivilege(const DspmDbAccountPrivilege& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取Active status. 0: inactive, 1: active.
                     * @return Status Active status. 0: inactive, 1: active.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Active status. 0: inactive, 1: active.
                     * @param _status Active status. 0: inactive, 1: active.
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
                     * 获取Account creation time.
                     * @return CreateTime Account creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Account creation time.
                     * @param _createTime Account creation time.
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
                     * 获取Access permission effective time.
                     * @return ValidateFrom Access permission effective time.
                     * 
                     */
                    std::string GetValidateFrom() const;

                    /**
                     * 设置Access permission effective time.
                     * @param _validateFrom Access permission effective time.
                     * 
                     */
                    void SetValidateFrom(const std::string& _validateFrom);

                    /**
                     * 判断参数 ValidateFrom 是否已赋值
                     * @return ValidateFrom 是否已赋值
                     * 
                     */
                    bool ValidateFromHasBeenSet() const;

                    /**
                     * 获取Access privilege expiration time.
                     * @return ValidateTo Access privilege expiration time.
                     * 
                     */
                    std::string GetValidateTo() const;

                    /**
                     * 设置Access privilege expiration time.
                     * @param _validateTo Access privilege expiration time.
                     * 
                     */
                    void SetValidateTo(const std::string& _validateTo);

                    /**
                     * 判断参数 ValidateTo 是否已赋值
                     * @return ValidateTo 是否已赋值
                     * 
                     */
                    bool ValidateToHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Number of visitor permission applications
                     * @return PersonApplyCount Number of visitor permission applications
                     * 
                     */
                    int64_t GetPersonApplyCount() const;

                    /**
                     * 设置Number of visitor permission applications
                     * @param _personApplyCount Number of visitor permission applications
                     * 
                     */
                    void SetPersonApplyCount(const int64_t& _personApplyCount);

                    /**
                     * 判断参数 PersonApplyCount 是否已赋值
                     * @return PersonApplyCount 是否已赋值
                     * 
                     */
                    bool PersonApplyCountHasBeenSet() const;

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
                     * 获取Risk statistical information
                     * @return RiskCount Risk statistical information
                     * 
                     */
                    DspmRiskCount GetRiskCount() const;

                    /**
                     * 设置Risk statistical information
                     * @param _riskCount Risk statistical information
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
                     * 获取Identity type. null for non-identity accounts. 0-Undefined 2-Long-term identity 3-Temporary identity
                     * @return IdentifyType Identity type. null for non-identity accounts. 0-Undefined 2-Long-term identity 3-Temporary identity
                     * 
                     */
                    int64_t GetIdentifyType() const;

                    /**
                     * 设置Identity type. null for non-identity accounts. 0-Undefined 2-Long-term identity 3-Temporary identity
                     * @param _identifyType Identity type. null for non-identity accounts. 0-Undefined 2-Long-term identity 3-Temporary identity
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
                     * 获取Information about the personal user it belongs to.
                     * @return Person Information about the personal user it belongs to.
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置Information about the personal user it belongs to.
                     * @param _person Information about the personal user it belongs to.
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
                     * 获取The user that the creator account uin belongs to.
                     * @return CreatorUin The user that the creator account uin belongs to.
                     * 
                     */
                    DspmUinUser GetCreatorUin() const;

                    /**
                     * 设置The user that the creator account uin belongs to.
                     * @param _creatorUin The user that the creator account uin belongs to.
                     * 
                     */
                    void SetCreatorUin(const DspmUinUser& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取Preset permission.
                     * @return PresetPrivilege Preset permission.
                     * 
                     */
                    DspmDbAccountPrivilege GetPresetPrivilege() const;

                    /**
                     * 设置Preset permission.
                     * @param _presetPrivilege Preset permission.
                     * 
                     */
                    void SetPresetPrivilege(const DspmDbAccountPrivilege& _presetPrivilege);

                    /**
                     * 判断参数 PresetPrivilege 是否已赋值
                     * @return PresetPrivilege 是否已赋值
                     * 
                     */
                    bool PresetPrivilegeHasBeenSet() const;

                    /**
                     * 获取Intranet access address. If there are multiple, separate them with ';'.
                     * @return PrivateIp Intranet access address. If there are multiple, separate them with ';'.
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Intranet access address. If there are multiple, separate them with ';'.
                     * @param _privateIp Intranet access address. If there are multiple, separate them with ';'.
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
                     * 获取Identity ID
                     * @return IdentifyId Identity ID
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 设置Identity ID
                     * @param _identifyId Identity ID
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
                     * 获取app id of the account associated with the asset
                     * @return AppId app id of the account associated with the asset
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置app id of the account associated with the asset
                     * @param _appId app id of the account associated with the asset
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
                     * 获取Account nickname
                     * @return NickName Account nickname
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Account nickname
                     * @param _nickName Account nickname
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
                     * 获取Asset account uin
                     * @return Uin Asset account uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Asset account uin
                     * @param _uin Asset account uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * Asset ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * The user that the cloud account uin belongs to.
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Administrator or Not
                     */
                    int64_t m_isManager;
                    bool m_isManagerHasBeenSet;

                    /**
                     * Host address
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Account type. 0-Undefined 1-Service account 2-Personal account 3-Temporary account
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * Permission information
                     */
                    DspmDbAccountPrivilege m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * Active status. 0: inactive, 1: active.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Account creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Access permission effective time.
                     */
                    std::string m_validateFrom;
                    bool m_validateFromHasBeenSet;

                    /**
                     * Access privilege expiration time.
                     */
                    std::string m_validateTo;
                    bool m_validateToHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Number of visitor permission applications
                     */
                    int64_t m_personApplyCount;
                    bool m_personApplyCountHasBeenSet;

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
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Risk statistical information
                     */
                    DspmRiskCount m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * Identity type. null for non-identity accounts. 0-Undefined 2-Long-term identity 3-Temporary identity
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * Information about the personal user it belongs to.
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * The user that the creator account uin belongs to.
                     */
                    DspmUinUser m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * Preset permission.
                     */
                    DspmDbAccountPrivilege m_presetPrivilege;
                    bool m_presetPrivilegeHasBeenSet;

                    /**
                     * Intranet access address. If there are multiple, separate them with ';'.
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Identity ID
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * app id of the account associated with the asset
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Account nickname
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Asset account uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCOUNTIDENTIFY_H_
