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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYINFOITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmPersonUser.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyAssetStatistic.h>
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
                * Dspm identity information
                */
                class DspmIdentifyInfoItem : public AbstractModel
                {
                public:
                    DspmIdentifyInfoItem();
                    ~DspmIdentifyInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Identity id.
                     * @return IdentifyId Identity id.
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 设置Identity id.
                     * @param _identifyId Identity id.
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
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
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
                     * 获取Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     * @return IdentifyType Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     * 
                     */
                    int64_t GetIdentifyType() const;

                    /**
                     * 设置Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     * @param _identifyType Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
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
                     * 获取User associated with the cloud account uin.
                     * @return OwnerUin User associated with the cloud account uin.
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 设置User associated with the cloud account uin.
                     * @param _ownerUin User associated with the cloud account uin.
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
                     * 获取Creator account uin user.
                     * @return CreatorUin Creator account uin user.
                     * 
                     */
                    DspmUinUser GetCreatorUin() const;

                    /**
                     * 设置Creator account uin user.
                     * @param _creatorUin Creator account uin user.
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
                     * 获取Associated assets.
                     * @return AssetCount Associated assets.
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置Associated assets.
                     * @param _assetCount Associated assets.
                     * 
                     */
                    void SetAssetCount(const int64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Status. 0: inactive; 1: active
                     * @return Status Status. 0: inactive; 1: active
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. 0: inactive; 1: active
                     * @param _status Status. 0: inactive; 1: active
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
                     * 获取User information to which it belongs
                     * @return Person User information to which it belongs
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置User information to which it belongs
                     * @param _person User information to which it belongs
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
                     * 获取Associate statistical information of data assets.
                     * @return AssetStatistic Associate statistical information of data assets.
                     * 
                     */
                    DspmIdentifyAssetStatistic GetAssetStatistic() const;

                    /**
                     * 设置Associate statistical information of data assets.
                     * @param _assetStatistic Associate statistical information of data assets.
                     * 
                     */
                    void SetAssetStatistic(const DspmIdentifyAssetStatistic& _assetStatistic);

                    /**
                     * 判断参数 AssetStatistic 是否已赋值
                     * @return AssetStatistic 是否已赋值
                     * 
                     */
                    bool AssetStatisticHasBeenSet() const;

                    /**
                     * 获取Risk statistics
                     * @return RiskCount Risk statistics
                     * 
                     */
                    DspmRiskCount GetRiskCount() const;

                    /**
                     * 设置Risk statistics
                     * @param _riskCount Risk statistics
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
                     * 获取Security recommendation. Resolve immediate problem-solving Reinforcement None no abnormality detected
                     * @return SafetyAdvice Security recommendation. Resolve immediate problem-solving Reinforcement None no abnormality detected
                     * 
                     */
                    std::string GetSafetyAdvice() const;

                    /**
                     * 设置Security recommendation. Resolve immediate problem-solving Reinforcement None no abnormality detected
                     * @param _safetyAdvice Security recommendation. Resolve immediate problem-solving Reinforcement None no abnormality detected
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
                     * 获取app id of the account to which the asset belongs
                     * @return AppId app id of the account to which the asset belongs
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置app id of the account to which the asset belongs
                     * @param _appId app id of the account to which the asset belongs
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
                     * 获取Account uin of the asset owner
                     * @return Uin Account uin of the asset owner
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account uin of the asset owner
                     * @param _uin Account uin of the asset owner
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
                     * Identity id.
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Identity type. 0: undefined; 2: long-term identity; 3: temporary identity
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * User associated with the cloud account uin.
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Creator account uin user.
                     */
                    DspmUinUser m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * Associated assets.
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Status. 0: inactive; 1: active
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * User information to which it belongs
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * Associate statistical information of data assets.
                     */
                    DspmIdentifyAssetStatistic m_assetStatistic;
                    bool m_assetStatisticHasBeenSet;

                    /**
                     * Risk statistics
                     */
                    DspmRiskCount m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * Security recommendation. Resolve immediate problem-solving Reinforcement None no abnormality detected
                     */
                    std::string m_safetyAdvice;
                    bool m_safetyAdviceHasBeenSet;

                    /**
                     * app id of the account to which the asset belongs
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Account nickname
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Account uin of the asset owner
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYINFOITEM_H_
