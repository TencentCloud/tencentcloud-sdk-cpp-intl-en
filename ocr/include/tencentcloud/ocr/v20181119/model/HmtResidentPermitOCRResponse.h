/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * HmtResidentPermitOCR response structure.
                */
                class HmtResidentPermitOCRResponse : public AbstractModel
                {
                public:
                    HmtResidentPermitOCRResponse();
                    ~HmtResidentPermitOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Gender
                     * @return Sex Gender
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取Date of birth
                     * @return Birth Date of birth
                     * 
                     */
                    std::string GetBirth() const;

                    /**
                     * 判断参数 Birth 是否已赋值
                     * @return Birth 是否已赋值
                     * 
                     */
                    bool BirthHasBeenSet() const;

                    /**
                     * 获取Address
                     * @return Address Address
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取ID card number
                     * @return IdCardNo ID card number
                     * 
                     */
                    std::string GetIdCardNo() const;

                    /**
                     * 判断参数 IdCardNo 是否已赋值
                     * @return IdCardNo 是否已赋值
                     * 
                     */
                    bool IdCardNoHasBeenSet() const;

                    /**
                     * 获取0: Front side.
1: Back side.
                     * @return CardType 0: Front side.
1: Back side.
                     * 
                     */
                    int64_t GetCardType() const;

                    /**
                     * 判断参数 CardType 是否已赋值
                     * @return CardType 是否已赋值
                     * 
                     */
                    bool CardTypeHasBeenSet() const;

                    /**
                     * 获取Validity period
                     * @return ValidDate Validity period
                     * 
                     */
                    std::string GetValidDate() const;

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     * 
                     */
                    bool ValidDateHasBeenSet() const;

                    /**
                     * 获取Issuing authority
                     * @return Authority Issuing authority
                     * 
                     */
                    std::string GetAuthority() const;

                    /**
                     * 判断参数 Authority 是否已赋值
                     * @return Authority 是否已赋值
                     * 
                     */
                    bool AuthorityHasBeenSet() const;

                    /**
                     * 获取Number of issues
                     * @return VisaNum Number of issues
                     * 
                     */
                    std::string GetVisaNum() const;

                    /**
                     * 判断参数 VisaNum 是否已赋值
                     * @return VisaNum 是否已赋值
                     * 
                     */
                    bool VisaNumHasBeenSet() const;

                    /**
                     * 获取Permit number
                     * @return PassNo Permit number
                     * 
                     */
                    std::string GetPassNo() const;

                    /**
                     * 判断参数 PassNo 是否已赋值
                     * @return PassNo 是否已赋值
                     * 
                     */
                    bool PassNoHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Gender
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Date of birth
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * Address
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * ID card number
                     */
                    std::string m_idCardNo;
                    bool m_idCardNoHasBeenSet;

                    /**
                     * 0: Front side.
1: Back side.
                     */
                    int64_t m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * Validity period
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * Issuing authority
                     */
                    std::string m_authority;
                    bool m_authorityHasBeenSet;

                    /**
                     * Number of issues
                     */
                    std::string m_visaNum;
                    bool m_visaNumHasBeenSet;

                    /**
                     * Permit number
                     */
                    std::string m_passNo;
                    bool m_passNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRRESPONSE_H_
