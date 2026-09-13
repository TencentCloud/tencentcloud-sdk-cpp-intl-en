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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/PortraitImageInfo.h>


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
                     * 获取<p>Name on the document</p>
                     * @return Name <p>Name on the document</p>
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
                     * 获取<p>Gender</p>
                     * @return Sex <p>Gender</p>
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
                     * 获取<p>Date of birth</p>
                     * @return Birth <p>Date of birth</p>
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
                     * 获取<p>Address</p>
                     * @return Address <p>Address</p>
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
                     * 获取<p>Identity card number</p>
                     * @return IdCardNo <p>Identity card number</p>
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
                     * 获取<p>0-Front<br>1-Back</p>
                     * @return CardType <p>0-Front<br>1-Back</p>
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
                     * 获取<p>Document validity period</p>
                     * @return ValidDate <p>Document validity period</p>
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
                     * 获取<p>Issuing authority</p>
                     * @return Authority <p>Issuing authority</p>
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
                     * 获取<p>Number of issuances</p>
                     * @return VisaNum <p>Number of issuances</p>
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
                     * 获取Travel permit number
                     * @return PassNo Travel permit number
                     * 
                     */
                    std::string GetPassNo() const;

                    /**
                     * 判断参数 PassNo 是否已赋值
                     * @return PassNo 是否已赋值
                     * 
                     */
                    bool PassNoHasBeenSet() const;

                    /**
                     * 获取Portrait image and coordinate information
                     * @return PortraitImageInfo Portrait image and coordinate information
                     * 
                     */
                    PortraitImageInfo GetPortraitImageInfo() const;

                    /**
                     * 判断参数 PortraitImageInfo 是否已赋值
                     * @return PortraitImageInfo 是否已赋值
                     * 
                     */
                    bool PortraitImageInfoHasBeenSet() const;

                    /**
                     * 获取Card Warning Information

-9102 Alarm for photocopied certificate
-9103 Alarm for photographed certificate
-9104 Alarm for tamper certificate
-9109 This capability is not enabled. Please contact customer support to activate the alert service
                     * @return WarnCardInfos Card Warning Information

-9102 Alarm for photocopied certificate
-9103 Alarm for photographed certificate
-9104 Alarm for tamper certificate
-9109 This capability is not enabled. Please contact customer support to activate the alert service
                     * 
                     */
                    std::vector<int64_t> GetWarnCardInfos() const;

                    /**
                     * 判断参数 WarnCardInfos 是否已赋值
                     * @return WarnCardInfos 是否已赋值
                     * 
                     */
                    bool WarnCardInfosHasBeenSet() const;

                private:

                    /**
                     * <p>Name on the document</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Gender</p>
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>Date of birth</p>
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * <p>Address</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>Identity card number</p>
                     */
                    std::string m_idCardNo;
                    bool m_idCardNoHasBeenSet;

                    /**
                     * <p>0-Front<br>1-Back</p>
                     */
                    int64_t m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * <p>Document validity period</p>
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * <p>Issuing authority</p>
                     */
                    std::string m_authority;
                    bool m_authorityHasBeenSet;

                    /**
                     * <p>Number of issuances</p>
                     */
                    std::string m_visaNum;
                    bool m_visaNumHasBeenSet;

                    /**
                     * Travel permit number
                     */
                    std::string m_passNo;
                    bool m_passNoHasBeenSet;

                    /**
                     * Portrait image and coordinate information
                     */
                    PortraitImageInfo m_portraitImageInfo;
                    bool m_portraitImageInfoHasBeenSet;

                    /**
                     * Card Warning Information

-9102 Alarm for photocopied certificate
-9103 Alarm for photographed certificate
-9104 Alarm for tamper certificate
-9109 This capability is not enabled. Please contact customer support to activate the alert service
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRRESPONSE_H_
