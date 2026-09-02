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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMPERSONAPPLYHISTORYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMPERSONAPPLYHISTORYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmDbAccountPrivilege.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Visitor application records
                */
                class DspmPersonApplyHistoryItem : public AbstractModel
                {
                public:
                    DspmPersonApplyHistoryItem();
                    ~DspmPersonApplyHistoryItem() = default;
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
                     * 获取Name
                     * @return PersonName Name
                     * 
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置Name
                     * @param _personName Name
                     * 
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     * 
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取Mobile number.
                     * @return Phone Mobile number.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Mobile number.
                     * @param _phone Mobile number.
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

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
                     * 获取Access permission validity period. In milliseconds.
                     * @return ValidatePeriod Access permission validity period. In milliseconds.
                     * 
                     */
                    int64_t GetValidatePeriod() const;

                    /**
                     * 设置Access permission validity period. In milliseconds.
                     * @param _validatePeriod Access permission validity period. In milliseconds.
                     * 
                     */
                    void SetValidatePeriod(const int64_t& _validatePeriod);

                    /**
                     * 判断参数 ValidatePeriod 是否已赋值
                     * @return ValidatePeriod 是否已赋值
                     * 
                     */
                    bool ValidatePeriodHasBeenSet() const;

                    /**
                     * 获取Permission information.
                     * @return Privilege Permission information.
                     * 
                     */
                    DspmDbAccountPrivilege GetPrivilege() const;

                    /**
                     * 设置Permission information.
                     * @param _privilege Permission information.
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
                     * 获取Whether it is valid. 0: invalid; 1: valid.
                     * @return ValidStatus Whether it is valid. 0: invalid; 1: valid.
                     * 
                     */
                    int64_t GetValidStatus() const;

                    /**
                     * 设置Whether it is valid. 0: invalid; 1: valid.
                     * @param _validStatus Whether it is valid. 0: invalid; 1: valid.
                     * 
                     */
                    void SetValidStatus(const int64_t& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                private:

                    /**
                     * Asset ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * Mobile number.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

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
                     * Access permission validity period. In milliseconds.
                     */
                    int64_t m_validatePeriod;
                    bool m_validatePeriodHasBeenSet;

                    /**
                     * Permission information.
                     */
                    DspmDbAccountPrivilege m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * Whether it is valid. 0: invalid; 1: valid.
                     */
                    int64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMPERSONAPPLYHISTORYITEM_H_
