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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMAINLANDIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMAINLANDIDCARDOCRRESPONSE_H_

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
                * RecognizeMainlandIDCardOCR response structure.
                */
                class RecognizeMainlandIDCardOCRResponse : public AbstractModel
                {
                public:
                    RecognizeMainlandIDCardOCRResponse();
                    ~RecognizeMainlandIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name((portrait side))
                     * @return Name Name((portrait side))
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
                     * 获取Sex((portrait side))
                     * @return Sex Sex((portrait side))
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
                     * 获取Nation((portrait side))
                     * @return Nation Nation((portrait side))
                     * 
                     */
                    std::string GetNation() const;

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     * 
                     */
                    bool NationHasBeenSet() const;

                    /**
                     * 获取Brithday((portrait side))
                     * @return Birth Brithday((portrait side))
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
                     * 获取Address(portrait side)
                     * @return Address Address(portrait side)
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
                     * 获取ID number (portrait side)
                     * @return IdNum ID number (portrait side)
                     * 
                     */
                    std::string GetIdNum() const;

                    /**
                     * 判断参数 IdNum 是否已赋值
                     * @return IdNum 是否已赋值
                     * 
                     */
                    bool IdNumHasBeenSet() const;

                    /**
                     * 获取Card authority(national emblem side)
                     * @return Authority Card authority(national emblem side)
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
                     * 获取Card valid date (national emblem side)
                     * @return ValidDate Card valid date (national emblem side)
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

                    /**
                     * 获取Portrait image base64
                     * @return PortraitImage Portrait image base64
                     * 
                     */
                    std::string GetPortraitImage() const;

                    /**
                     * 判断参数 PortraitImage 是否已赋值
                     * @return PortraitImage 是否已赋值
                     * 
                     */
                    bool PortraitImageHasBeenSet() const;

                    /**
                     * 获取ID card photo cropping results base64
                     * @return IdCardImage ID card photo cropping results base64
                     * 
                     */
                    std::string GetIdCardImage() const;

                    /**
                     * 判断参数 IdCardImage 是否已赋值
                     * @return IdCardImage 是否已赋值
                     * 
                     */
                    bool IdCardImageHasBeenSet() const;

                private:

                    /**
                     * Name((portrait side))
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Sex((portrait side))
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Nation((portrait side))
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * Brithday((portrait side))
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * Address(portrait side)
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * ID number (portrait side)
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * Card authority(national emblem side)
                     */
                    std::string m_authority;
                    bool m_authorityHasBeenSet;

                    /**
                     * Card valid date (national emblem side)
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

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

                    /**
                     * Portrait image base64
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                    /**
                     * ID card photo cropping results base64
                     */
                    std::string m_idCardImage;
                    bool m_idCardImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMAINLANDIDCARDOCRRESPONSE_H_
