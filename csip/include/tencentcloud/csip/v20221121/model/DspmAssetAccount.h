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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmDbAccountPrivilege.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmPersonUser.h>
#include <tencentcloud/csip/v20221121/model/DspmRiskCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Asset account information
                */
                class DspmAssetAccount : public AbstractModel
                {
                public:
                    DspmAssetAccount();
                    ~DspmAssetAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Account name.
                     * @return Account Account name.
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置Account name.
                     * @param _account Account name.
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
                     * 获取Associated object. uin or personal id.
                     * @return Subject Associated object. uin or personal id.
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置Associated object. uin or personal id.
                     * @param _subject Associated object. uin or personal id.
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

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
                     * 获取Status. 0: inactive, 1: active, 2: deleted
                     * @return Status Status. 0: inactive, 1: active, 2: deleted
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. 0: inactive, 1: active, 2: deleted
                     * @param _status Status. 0: inactive, 1: active, 2: deleted
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
                     * 获取Whether it is a new account
                     * @return IsNewAccount Whether it is a new account
                     * 
                     */
                    int64_t GetIsNewAccount() const;

                    /**
                     * 设置Whether it is a new account
                     * @param _isNewAccount Whether it is a new account
                     * 
                     */
                    void SetIsNewAccount(const int64_t& _isNewAccount);

                    /**
                     * 判断参数 IsNewAccount 是否已赋值
                     * @return IsNewAccount 是否已赋值
                     * 
                     */
                    bool IsNewAccountHasBeenSet() const;

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

                private:

                    /**
                     * Account name.
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

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
                     * Associated object. uin or personal id.
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * Permission information
                     */
                    DspmDbAccountPrivilege m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * Status. 0: inactive, 1: active, 2: deleted
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
                     * Asset ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Whether it is a new account
                     */
                    int64_t m_isNewAccount;
                    bool m_isNewAccountHasBeenSet;

                    /**
                     * Identity type. null for non-identity accounts. 0-Undefined 2-Long-term identity 3-Temporary identity
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * The user that the cloud account uin belongs to.
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Information about the personal user it belongs to.
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * Risk statistical information
                     */
                    DspmRiskCount m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * Preset permission.
                     */
                    DspmDbAccountPrivilege m_presetPrivilege;
                    bool m_presetPrivilegeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCOUNT_H_
