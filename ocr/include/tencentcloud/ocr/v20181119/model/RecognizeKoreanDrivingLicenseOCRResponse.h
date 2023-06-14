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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEKOREANDRIVINGLICENSEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEKOREANDRIVINGLICENSEOCRRESPONSE_H_

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
                * RecognizeKoreanDrivingLicenseOCR response structure.
                */
                class RecognizeKoreanDrivingLicenseOCRResponse : public AbstractModel
                {
                public:
                    RecognizeKoreanDrivingLicenseOCRResponse();
                    ~RecognizeKoreanDrivingLicenseOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID card number.
                     * @return ID The ID card number.
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
                     * 获取The license number.
                     * @return LicenseNumber The license number.
                     * 
                     */
                    std::string GetLicenseNumber() const;

                    /**
                     * 判断参数 LicenseNumber 是否已赋值
                     * @return LicenseNumber 是否已赋值
                     * 
                     */
                    bool LicenseNumberHasBeenSet() const;

                    /**
                     * 获取The resident registration number.
                     * @return Number The resident registration number.
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取The license class type.
                     * @return Type The license class type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The address.
                     * @return Address The address.
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
                     * 获取The name.
                     * @return Name The name.
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
                     * 获取The renewal period.
                     * @return AptitudeTesDate The renewal period.
                     * 
                     */
                    std::string GetAptitudeTesDate() const;

                    /**
                     * 判断参数 AptitudeTesDate 是否已赋值
                     * @return AptitudeTesDate 是否已赋值
                     * 
                     */
                    bool AptitudeTesDateHasBeenSet() const;

                    /**
                     * 获取The issue date.
                     * @return DateOfIssue The issue date.
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
                     * 获取The Base64-encoded identity photo.
                     * @return Photo The Base64-encoded identity photo.
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
                     * 获取The gender.
                     * @return Sex The gender.
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
                     * 获取The birth date in the format of dd/mm/yyyy.
                     * @return Birthday The birth date in the format of dd/mm/yyyy.
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                private:

                    /**
                     * The ID card number.
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * The license number.
                     */
                    std::string m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * The resident registration number.
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * The license class type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The address.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * The name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The renewal period.
                     */
                    std::string m_aptitudeTesDate;
                    bool m_aptitudeTesDateHasBeenSet;

                    /**
                     * The issue date.
                     */
                    std::string m_dateOfIssue;
                    bool m_dateOfIssueHasBeenSet;

                    /**
                     * The Base64-encoded identity photo.
                     */
                    std::string m_photo;
                    bool m_photoHasBeenSet;

                    /**
                     * The gender.
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * The birth date in the format of dd/mm/yyyy.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEKOREANDRIVINGLICENSEOCRRESPONSE_H_
