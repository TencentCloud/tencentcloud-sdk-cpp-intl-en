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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AKInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Access key risk record.
                */
                class AccessKeyRisk : public AbstractModel
                {
                public:
                    AccessKeyRisk();
                    ~AccessKeyRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Risk name.
                     * @return Name Risk name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Risk name.
                     * @param _name Risk name.
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
                     * 获取Risk level.
0 - unavailable 1 - Note 2 - low risk 3 - medium risk 4 - high risk 5 - critical.
                     * @return Level Risk level.
0 - unavailable 1 - Note 2 - low risk 3 - medium risk 4 - high risk 5 - critical.
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置Risk level.
0 - unavailable 1 - Note 2 - low risk 3 - medium risk 4 - high risk 5 - critical.
                     * @param _level Risk level.
0 - unavailable 1 - Note 2 - low risk 3 - medium risk 4 - high risk 5 - critical.
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Risk record ID.
                     * @return ID Risk record ID.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Risk record ID.
                     * @param _iD Risk record ID.
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Risk rule ID.
                     * @return RiskRuleID Risk rule ID.
                     * 
                     */
                    int64_t GetRiskRuleID() const;

                    /**
                     * 设置Risk rule ID.
                     * @param _riskRuleID Risk rule ID.
                     * 
                     */
                    void SetRiskRuleID(const int64_t& _riskRuleID);

                    /**
                     * 判断参数 RiskRuleID 是否已赋值
                     * @return RiskRuleID 是否已赋值
                     * 
                     */
                    bool RiskRuleIDHasBeenSet() const;

                    /**
                     * 获取Risk type.
Configuration risk.
                     * @return RiskType Risk type.
Configuration risk.
                     * 
                     */
                    int64_t GetRiskType() const;

                    /**
                     * 设置Risk type.
Configuration risk.
                     * @param _riskType Risk type.
Configuration risk.
                     * 
                     */
                    void SetRiskType(const int64_t& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取Access key.
                     * @return AccessKey Access key.
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置Access key.
                     * @param _accessKey Access key.
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取Access key ID.
                     * @return AccessKeyID Access key ID.
                     * 
                     */
                    uint64_t GetAccessKeyID() const;

                    /**
                     * 设置Access key ID.
                     * @param _accessKeyID Access key ID.
                     * 
                     */
                    void SetAccessKeyID(const uint64_t& _accessKeyID);

                    /**
                     * 判断参数 AccessKeyID 是否已赋值
                     * @return AccessKeyID 是否已赋值
                     * 
                     */
                    bool AccessKeyIDHasBeenSet() const;

                    /**
                     * 获取Access key remark.
                     * @return AccessKeyRemark Access key remark.
                     * 
                     */
                    std::string GetAccessKeyRemark() const;

                    /**
                     * 设置Access key remark.
                     * @param _accessKeyRemark Access key remark.
                     * 
                     */
                    void SetAccessKeyRemark(const std::string& _accessKeyRemark);

                    /**
                     * 判断参数 AccessKeyRemark 是否已赋值
                     * @return AccessKeyRemark 是否已赋值
                     * 
                     */
                    bool AccessKeyRemarkHasBeenSet() const;

                    /**
                     * 获取Detection time of risk.
                     * @return RiskTime Detection time of risk.
                     * 
                     */
                    std::string GetRiskTime() const;

                    /**
                     * 设置Detection time of risk.
                     * @param _riskTime Detection time of risk.
                     * 
                     */
                    void SetRiskTime(const std::string& _riskTime);

                    /**
                     * 判断参数 RiskTime 是否已赋值
                     * @return RiskTime 是否已赋值
                     * 
                     */
                    bool RiskTimeHasBeenSet() const;

                    /**
                     * 获取Risk status.
0 - unprocessed 2 - ignored 3 - converged.
                     * @return Status Risk status.
0 - unprocessed 2 - ignored 3 - converged.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Risk status.
0 - unprocessed 2 - ignored 3 - converged.
                     * @param _status Risk status.
0 - unprocessed 2 - ignored 3 - converged.
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
                     * 获取Risk Tag.
                     * @return Tag Risk Tag.
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置Risk Tag.
                     * @param _tag Risk Tag.
                     * 
                     */
                    void SetTag(const std::vector<std::string>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Risk evidence.
                     * @return Evidence Risk evidence.
                     * 
                     */
                    std::string GetEvidence() const;

                    /**
                     * 设置Risk evidence.
                     * @param _evidence Risk evidence.
                     * 
                     */
                    void SetEvidence(const std::string& _evidence);

                    /**
                     * 判断参数 Evidence 是否已赋值
                     * @return Evidence 是否已赋值
                     * 
                     */
                    bool EvidenceHasBeenSet() const;

                    /**
                     * 获取Risk description.
                     * @return Description Risk description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Risk description.
                     * @param _description Risk description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Account associate Uin belonging to main account.
                     * @return Uin Account associate Uin belonging to main account.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account associate Uin belonging to main account.
                     * @param _uin Account associate Uin belonging to main account.
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
                     * 获取Nickname of the main account.
                     * @return Nickname Nickname of the main account.
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置Nickname of the main account.
                     * @param _nickname Nickname of the main account.
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取Sub-Account Uin belonging to.
                     * @return SubUin Sub-Account Uin belonging to.
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置Sub-Account Uin belonging to.
                     * @param _subUin Sub-Account Uin belonging to.
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取Sub-Account nickname.
                     * @return SubNickname Sub-Account nickname.
                     * 
                     */
                    std::string GetSubNickname() const;

                    /**
                     * 设置Sub-Account nickname.
                     * @param _subNickname Sub-Account nickname.
                     * 
                     */
                    void SetSubNickname(const std::string& _subNickname);

                    /**
                     * 判断参数 SubNickname 是否已赋值
                     * @return SubNickname 是否已赋值
                     * 
                     */
                    bool SubNicknameHasBeenSet() const;

                    /**
                     * 获取Account type.
0 root account AK 1 sub-account AK.
2 temporary key.
                     * @return Type Account type.
0 root account AK 1 sub-account AK.
2 temporary key.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Account type.
0 root account AK 1 sub-account AK.
2 temporary key.
                     * @param _type Account type.
0 root account AK 1 sub-account AK.
2 temporary key.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Detection status.
0: detected.
1 indicates detecting.
                     * @return CheckStatus Detection status.
0: detected.
1 indicates detecting.
                     * 
                     */
                    int64_t GetCheckStatus() const;

                    /**
                     * 设置Detection status.
0: detected.
1 indicates detecting.
                     * @param _checkStatus Detection status.
0: detected.
1 indicates detecting.
                     * 
                     */
                    void SetCheckStatus(const int64_t& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取App ID
                     * @return AppID App ID
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置App ID
                     * @param _appID App ID
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取Query parameter corresponding to the risk.
                     * @return QueryParam Query parameter corresponding to the risk.
                     * 
                     */
                    std::string GetQueryParam() const;

                    /**
                     * 设置Query parameter corresponding to the risk.
                     * @param _queryParam Query parameter corresponding to the risk.
                     * 
                     */
                    void SetQueryParam(const std::string& _queryParam);

                    /**
                     * 判断参数 QueryParam 是否已赋值
                     * @return QueryParam 是否已赋值
                     * 
                     */
                    bool QueryParamHasBeenSet() const;

                    /**
                     * 获取Cloud type 0 for tencent cloud 4 for alibaba cloud.
                     * @return CloudType Cloud type 0 for tencent cloud 4 for alibaba cloud.
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置Cloud type 0 for tencent cloud 4 for alibaba cloud.
                     * @param _cloudType Cloud type 0 for tencent cloud 4 for alibaba cloud.
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取Related AK list, including AK name and remark.
                     * @return RelatedAK Related AK list, including AK name and remark.
                     * 
                     */
                    std::vector<AKInfo> GetRelatedAK() const;

                    /**
                     * 设置Related AK list, including AK name and remark.
                     * @param _relatedAK Related AK list, including AK name and remark.
                     * 
                     */
                    void SetRelatedAK(const std::vector<AKInfo>& _relatedAK);

                    /**
                     * 判断参数 RelatedAK 是否已赋值
                     * @return RelatedAK 是否已赋值
                     * 
                     */
                    bool RelatedAKHasBeenSet() const;

                private:

                    /**
                     * Risk name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Risk level.
0 - unavailable 1 - Note 2 - low risk 3 - medium risk 4 - high risk 5 - critical.
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Risk record ID.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Risk rule ID.
                     */
                    int64_t m_riskRuleID;
                    bool m_riskRuleIDHasBeenSet;

                    /**
                     * Risk type.
Configuration risk.
                     */
                    int64_t m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * Access key.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * Access key ID.
                     */
                    uint64_t m_accessKeyID;
                    bool m_accessKeyIDHasBeenSet;

                    /**
                     * Access key remark.
                     */
                    std::string m_accessKeyRemark;
                    bool m_accessKeyRemarkHasBeenSet;

                    /**
                     * Detection time of risk.
                     */
                    std::string m_riskTime;
                    bool m_riskTimeHasBeenSet;

                    /**
                     * Risk status.
0 - unprocessed 2 - ignored 3 - converged.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Risk Tag.
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Risk evidence.
                     */
                    std::string m_evidence;
                    bool m_evidenceHasBeenSet;

                    /**
                     * Risk description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Account associate Uin belonging to main account.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Nickname of the main account.
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * Sub-Account Uin belonging to.
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * Sub-Account nickname.
                     */
                    std::string m_subNickname;
                    bool m_subNicknameHasBeenSet;

                    /**
                     * Account type.
0 root account AK 1 sub-account AK.
2 temporary key.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Detection status.
0: detected.
1 indicates detecting.
                     */
                    int64_t m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * App ID
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Query parameter corresponding to the risk.
                     */
                    std::string m_queryParam;
                    bool m_queryParamHasBeenSet;

                    /**
                     * Cloud type 0 for tencent cloud 4 for alibaba cloud.
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * Related AK list, including AK name and remark.
                     */
                    std::vector<AKInfo> m_relatedAK;
                    bool m_relatedAKHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYRISK_H_
