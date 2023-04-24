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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESDRIVINGLICENSEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESDRIVINGLICENSEOCRRESPONSE_H_

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
                * RecognizePhilippinesDrivingLicenseOCR response structure.
                */
                class RecognizePhilippinesDrivingLicenseOCRResponse : public AbstractModel
                {
                public:
                    RecognizePhilippinesDrivingLicenseOCRResponse();
                    ~RecognizePhilippinesDrivingLicenseOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The Base64-encoded identity photo.
                     * @return HeadPortrait The Base64-encoded identity photo.
                     */
                    TextDetectionResult GetHeadPortrait() const;

                    /**
                     * 判断参数 HeadPortrait 是否已赋值
                     * @return HeadPortrait 是否已赋值
                     */
                    bool HeadPortraitHasBeenSet() const;

                    /**
                     * 获取The full name.
                     * @return Name The full name.
                     */
                    TextDetectionResult GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The last name.
                     * @return LastName The last name.
                     */
                    TextDetectionResult GetLastName() const;

                    /**
                     * 判断参数 LastName 是否已赋值
                     * @return LastName 是否已赋值
                     */
                    bool LastNameHasBeenSet() const;

                    /**
                     * 获取The first name.
                     * @return FirstName The first name.
                     */
                    TextDetectionResult GetFirstName() const;

                    /**
                     * 判断参数 FirstName 是否已赋值
                     * @return FirstName 是否已赋值
                     */
                    bool FirstNameHasBeenSet() const;

                    /**
                     * 获取The middle name.
                     * @return MiddleName The middle name.
                     */
                    TextDetectionResult GetMiddleName() const;

                    /**
                     * 判断参数 MiddleName 是否已赋值
                     * @return MiddleName 是否已赋值
                     */
                    bool MiddleNameHasBeenSet() const;

                    /**
                     * 获取The nationality.
                     * @return Nationality The nationality.
                     */
                    TextDetectionResult GetNationality() const;

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取The gender.
                     * @return Sex The gender.
                     */
                    TextDetectionResult GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取The address.
                     * @return Address The address.
                     */
                    TextDetectionResult GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取The license No.
                     * @return LicenseNo The license No.
                     */
                    TextDetectionResult GetLicenseNo() const;

                    /**
                     * 判断参数 LicenseNo 是否已赋值
                     * @return LicenseNo 是否已赋值
                     */
                    bool LicenseNoHasBeenSet() const;

                    /**
                     * 获取The expiration date.
                     * @return ExpiresDate The expiration date.
                     */
                    TextDetectionResult GetExpiresDate() const;

                    /**
                     * 判断参数 ExpiresDate 是否已赋值
                     * @return ExpiresDate 是否已赋值
                     */
                    bool ExpiresDateHasBeenSet() const;

                    /**
                     * 获取The agency code.
                     * @return AgencyCode The agency code.
                     */
                    TextDetectionResult GetAgencyCode() const;

                    /**
                     * 判断参数 AgencyCode 是否已赋值
                     * @return AgencyCode 是否已赋值
                     */
                    bool AgencyCodeHasBeenSet() const;

                    /**
                     * 获取The date of birth.
                     * @return Birthday The date of birth.
                     */
                    TextDetectionResult GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     */
                    bool BirthdayHasBeenSet() const;

                private:

                    /**
                     * The Base64-encoded identity photo.
                     */
                    TextDetectionResult m_headPortrait;
                    bool m_headPortraitHasBeenSet;

                    /**
                     * The full name.
                     */
                    TextDetectionResult m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The last name.
                     */
                    TextDetectionResult m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * The first name.
                     */
                    TextDetectionResult m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * The middle name.
                     */
                    TextDetectionResult m_middleName;
                    bool m_middleNameHasBeenSet;

                    /**
                     * The nationality.
                     */
                    TextDetectionResult m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * The gender.
                     */
                    TextDetectionResult m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * The address.
                     */
                    TextDetectionResult m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * The license No.
                     */
                    TextDetectionResult m_licenseNo;
                    bool m_licenseNoHasBeenSet;

                    /**
                     * The expiration date.
                     */
                    TextDetectionResult m_expiresDate;
                    bool m_expiresDateHasBeenSet;

                    /**
                     * The agency code.
                     */
                    TextDetectionResult m_agencyCode;
                    bool m_agencyCodeHasBeenSet;

                    /**
                     * The date of birth.
                     */
                    TextDetectionResult m_birthday;
                    bool m_birthdayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESDRIVINGLICENSEOCRRESPONSE_H_
