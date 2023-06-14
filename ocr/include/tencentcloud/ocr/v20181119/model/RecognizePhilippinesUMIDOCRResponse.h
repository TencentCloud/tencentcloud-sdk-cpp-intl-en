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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESUMIDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESUMIDOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TextDetectionResult.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizePhilippinesUMIDOCR response structure.
                */
                class RecognizePhilippinesUMIDOCRResponse : public AbstractModel
                {
                public:
                    RecognizePhilippinesUMIDOCRResponse();
                    ~RecognizePhilippinesUMIDOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The surname.
                     * @return Surname The surname.
                     * 
                     */
                    TextDetectionResult GetSurname() const;

                    /**
                     * 判断参数 Surname 是否已赋值
                     * @return Surname 是否已赋值
                     * 
                     */
                    bool SurnameHasBeenSet() const;

                    /**
                     * 获取The middle name.
                     * @return MiddleName The middle name.
                     * 
                     */
                    TextDetectionResult GetMiddleName() const;

                    /**
                     * 判断参数 MiddleName 是否已赋值
                     * @return MiddleName 是否已赋值
                     * 
                     */
                    bool MiddleNameHasBeenSet() const;

                    /**
                     * 获取The given name.
                     * @return GivenName The given name.
                     * 
                     */
                    TextDetectionResult GetGivenName() const;

                    /**
                     * 判断参数 GivenName 是否已赋值
                     * @return GivenName 是否已赋值
                     * 
                     */
                    bool GivenNameHasBeenSet() const;

                    /**
                     * 获取The address.
                     * @return Address The address.
                     * 
                     */
                    TextDetectionResult GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取The date of birth.
                     * @return Birthday The date of birth.
                     * 
                     */
                    TextDetectionResult GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取The common reference number (CRN).
                     * @return CRN The common reference number (CRN).
                     * 
                     */
                    TextDetectionResult GetCRN() const;

                    /**
                     * 判断参数 CRN 是否已赋值
                     * @return CRN 是否已赋值
                     * 
                     */
                    bool CRNHasBeenSet() const;

                    /**
                     * 获取The gender.
                     * @return Sex The gender.
                     * 
                     */
                    TextDetectionResult GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取The Base64-encoded identity photo.
                     * @return HeadPortrait The Base64-encoded identity photo.
                     * 
                     */
                    TextDetectionResult GetHeadPortrait() const;

                    /**
                     * 判断参数 HeadPortrait 是否已赋值
                     * @return HeadPortrait 是否已赋值
                     * 
                     */
                    bool HeadPortraitHasBeenSet() const;

                private:

                    /**
                     * The surname.
                     */
                    TextDetectionResult m_surname;
                    bool m_surnameHasBeenSet;

                    /**
                     * The middle name.
                     */
                    TextDetectionResult m_middleName;
                    bool m_middleNameHasBeenSet;

                    /**
                     * The given name.
                     */
                    TextDetectionResult m_givenName;
                    bool m_givenNameHasBeenSet;

                    /**
                     * The address.
                     */
                    TextDetectionResult m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * The date of birth.
                     */
                    TextDetectionResult m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * The common reference number (CRN).
                     */
                    TextDetectionResult m_cRN;
                    bool m_cRNHasBeenSet;

                    /**
                     * The gender.
                     */
                    TextDetectionResult m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * The Base64-encoded identity photo.
                     */
                    TextDetectionResult m_headPortrait;
                    bool m_headPortraitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESUMIDOCRRESPONSE_H_
