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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZESINGAPOREIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZESINGAPOREIDCARDOCRRESPONSE_H_

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
                * RecognizeSingaporeIDCardOCR response structure.
                */
                class RecognizeSingaporeIDCardOCRResponse : public AbstractModel
                {
                public:
                    RecognizeSingaporeIDCardOCRResponse();
                    ~RecognizeSingaporeIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Chinese name
                     * @return ChName Chinese name
                     * 
                     */
                    std::string GetChName() const;

                    /**
                     * 判断参数 ChName 是否已赋值
                     * @return ChName 是否已赋值
                     * 
                     */
                    bool ChNameHasBeenSet() const;

                    /**
                     * 获取English name
                     * @return EnName English name
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取gender
                     * @return Sex gender
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
                     * 获取Birth Country
                     * @return CountryOfBirth Birth Country
                     * 
                     */
                    std::string GetCountryOfBirth() const;

                    /**
                     * 判断参数 CountryOfBirth 是否已赋值
                     * @return CountryOfBirth 是否已赋值
                     * 
                     */
                    bool CountryOfBirthHasBeenSet() const;

                    /**
                     * 获取Brithday
                     * @return Birthday Brithday
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取Address(back side)
                     * @return Address Address(back side)
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
                     * 获取License number
                     * @return ID License number
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Nationality(back side)
                     * @return Race Nationality(back side)
                     * 
                     */
                    std::string GetRace() const;

                    /**
                     * 判断参数 Race 是否已赋值
                     * @return Race 是否已赋值
                     * 
                     */
                    bool RaceHasBeenSet() const;

                    /**
                     * 获取NRIC code(back side)
                     * @return NRICCode NRIC code(back side)
                     * 
                     */
                    std::string GetNRICCode() const;

                    /**
                     * 判断参数 NRICCode 是否已赋值
                     * @return NRICCode 是否已赋值
                     * 
                     */
                    bool NRICCodeHasBeenSet() const;

                    /**
                     * 获取Post code(back side)
                     * @return PostCode Post code(back side)
                     * 
                     */
                    std::string GetPostCode() const;

                    /**
                     * 判断参数 PostCode 是否已赋值
                     * @return PostCode 是否已赋值
                     * 
                     */
                    bool PostCodeHasBeenSet() const;

                    /**
                     * 获取Date of Expiration(back side)
                     * @return DateOfExpiration Date of Expiration(back side)
                     * 
                     */
                    std::string GetDateOfExpiration() const;

                    /**
                     * 判断参数 DateOfExpiration 是否已赋值
                     * @return DateOfExpiration 是否已赋值
                     * 
                     */
                    bool DateOfExpirationHasBeenSet() const;

                    /**
                     * 获取Date of issue(back side)
                     * @return DateOfIssue Date of issue(back side)
                     * 
                     */
                    std::string GetDateOfIssue() const;

                    /**
                     * 判断参数 DateOfIssue 是否已赋值
                     * @return DateOfIssue 是否已赋值
                     * 
                     */
                    bool DateOfIssueHasBeenSet() const;

                    /**
                     * 获取Head image 
                     * @return Photo Head image 
                     * 
                     */
                    std::string GetPhoto() const;

                    /**
                     * 判断参数 Photo 是否已赋值
                     * @return Photo 是否已赋值
                     * 
                     */
                    bool PhotoHasBeenSet() const;

                    /**
                     * 获取Card Warning Information

-9101 Alarm for covered certificate,
-9102 Alarm for photocopied certificate,
-9103 Alarm for photographed certificate,
-9104 Alarm for PS certificate,
-9107 Alarm for reflective certificate,
-9108 Alarm for blurry image,
-9109 This capability is not enabled.
                     * @return WarnCardInfos Card Warning Information

-9101 Alarm for covered certificate,
-9102 Alarm for photocopied certificate,
-9103 Alarm for photographed certificate,
-9104 Alarm for PS certificate,
-9107 Alarm for reflective certificate,
-9108 Alarm for blurry image,
-9109 This capability is not enabled.
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
                     * Chinese name
                     */
                    std::string m_chName;
                    bool m_chNameHasBeenSet;

                    /**
                     * English name
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * gender
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Birth Country
                     */
                    std::string m_countryOfBirth;
                    bool m_countryOfBirthHasBeenSet;

                    /**
                     * Brithday
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Address(back side)
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * License number
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Nationality(back side)
                     */
                    std::string m_race;
                    bool m_raceHasBeenSet;

                    /**
                     * NRIC code(back side)
                     */
                    std::string m_nRICCode;
                    bool m_nRICCodeHasBeenSet;

                    /**
                     * Post code(back side)
                     */
                    std::string m_postCode;
                    bool m_postCodeHasBeenSet;

                    /**
                     * Date of Expiration(back side)
                     */
                    std::string m_dateOfExpiration;
                    bool m_dateOfExpirationHasBeenSet;

                    /**
                     * Date of issue(back side)
                     */
                    std::string m_dateOfIssue;
                    bool m_dateOfIssueHasBeenSet;

                    /**
                     * Head image 
                     */
                    std::string m_photo;
                    bool m_photoHasBeenSet;

                    /**
                     * Card Warning Information

-9101 Alarm for covered certificate,
-9102 Alarm for photocopied certificate,
-9103 Alarm for photographed certificate,
-9104 Alarm for PS certificate,
-9107 Alarm for reflective certificate,
-9108 Alarm for blurry image,
-9109 This capability is not enabled.
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZESINGAPOREIDCARDOCRRESPONSE_H_
