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
                     * 获取Base64 encoded result of portrait photo.
                     * @return HeadPortrait Base64 encoded result of portrait photo.
                     * 
                     */
                    TextDetectionResult GetHeadPortrait() const;

                    /**
                     * 判断参数 HeadPortrait 是否已赋值
                     * @return HeadPortrait 是否已赋值
                     * 
                     */
                    bool HeadPortraitHasBeenSet() const;

                    /**
                     * 获取Full name of the license holder.
                     * @return Name Full name of the license holder.
                     * 
                     */
                    TextDetectionResult GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Last name / surname of the license holder.
                     * @return LastName Last name / surname of the license holder.
                     * 
                     */
                    TextDetectionResult GetLastName() const;

                    /**
                     * 判断参数 LastName 是否已赋值
                     * @return LastName 是否已赋值
                     * 
                     */
                    bool LastNameHasBeenSet() const;

                    /**
                     * 获取First name of the license holder.
                     * @return FirstName First name of the license holder.
                     * 
                     */
                    TextDetectionResult GetFirstName() const;

                    /**
                     * 判断参数 FirstName 是否已赋值
                     * @return FirstName 是否已赋值
                     * 
                     */
                    bool FirstNameHasBeenSet() const;

                    /**
                     * 获取Middle name of the license holder.
                     * @return MiddleName Middle name of the license holder.
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
                     * 获取Nationality of the license holder.
                     * @return Nationality Nationality of the license holder.
                     * 
                     */
                    TextDetectionResult GetNationality() const;

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取Gender.
                     * @return Sex Gender.
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
                     * 获取Address of the license holder.
                     * @return Address Address of the license holder.
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
                     * 获取Driver's license number.
                     * @return LicenseNo Driver's license number.
                     * 
                     */
                    TextDetectionResult GetLicenseNo() const;

                    /**
                     * 判断参数 LicenseNo 是否已赋值
                     * @return LicenseNo 是否已赋值
                     * 
                     */
                    bool LicenseNoHasBeenSet() const;

                    /**
                     * 获取Expiration date of the driver's license.
                     * @return ExpiresDate Expiration date of the driver's license.
                     * 
                     */
                    TextDetectionResult GetExpiresDate() const;

                    /**
                     * 判断参数 ExpiresDate 是否已赋值
                     * @return ExpiresDate 是否已赋值
                     * 
                     */
                    bool ExpiresDateHasBeenSet() const;

                    /**
                     * 获取Code of the issuing agency.
                     * @return AgencyCode Code of the issuing agency.
                     * 
                     */
                    TextDetectionResult GetAgencyCode() const;

                    /**
                     * 判断参数 AgencyCode 是否已赋值
                     * @return AgencyCode 是否已赋值
                     * 
                     */
                    bool AgencyCodeHasBeenSet() const;

                    /**
                     * 获取Date of birth of the license holder.
                     * @return Birthday Date of birth of the license holder.
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
                     * 获取Blood type of the  license holder.
                     * @return BloodType Blood type of the  license holder.
                     * 
                     */
                    TextDetectionResult GetBloodType() const;

                    /**
                     * 判断参数 BloodType 是否已赋值
                     * @return BloodType 是否已赋值
                     * 
                     */
                    bool BloodTypeHasBeenSet() const;

                    /**
                     * 获取Height of the license holder, in metres as printed on the card (e.g. 1.69).
                     * @return Height Height of the license holder, in metres as printed on the card (e.g. 1.69).
                     * 
                     */
                    TextDetectionResult GetHeight() const;

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Weight of the license holder, in kilograms (e.g. 65).
                     * @return Weight Weight of the license holder, in kilograms (e.g. 65).
                     * 
                     */
                    TextDetectionResult GetWeight() const;

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Eye color of the license holder (e.g. BLACK).
                     * @return EyeColor Eye color of the license holder (e.g. BLACK).
                     * 
                     */
                    TextDetectionResult GetEyeColor() const;

                    /**
                     * 判断参数 EyeColor 是否已赋值
                     * @return EyeColor 是否已赋值
                     * 
                     */
                    bool EyeColorHasBeenSet() const;

                    /**
                     * 获取Driver's license codes indicating the vehicle categories the license holder is authorized to operate (e.g. A, A1, B, B1, B2, C, D, BE, CE).
                     * @return DLCodes Driver's license codes indicating the vehicle categories the license holder is authorized to operate (e.g. A, A1, B, B1, B2, C, D, BE, CE).
                     * 
                     */
                    TextDetectionResult GetDLCodes() const;

                    /**
                     * 判断参数 DLCodes 是否已赋值
                     * @return DLCodes 是否已赋值
                     * 
                     */
                    bool DLCodesHasBeenSet() const;

                    /**
                     * 获取Restrictions that limit the license holder's driving privileges, such as transmission type (AT / MT) or vehicle-class limits.
                     * @return Restrictions Restrictions that limit the license holder's driving privileges, such as transmission type (AT / MT) or vehicle-class limits.
                     * 
                     */
                    TextDetectionResult GetRestrictions() const;

                    /**
                     * 判断参数 Restrictions 是否已赋值
                     * @return Restrictions 是否已赋值
                     * 
                     */
                    bool RestrictionsHasBeenSet() const;

                    /**
                     * 获取Driving conditions of the license holder (e.g. A = must wear glasses, D = daytime driving only).
                     * @return Conditions Driving conditions of the license holder (e.g. A = must wear glasses, D = daytime driving only).
                     * 
                     */
                    TextDetectionResult GetConditions() const;

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * Base64 encoded result of portrait photo.
                     */
                    TextDetectionResult m_headPortrait;
                    bool m_headPortraitHasBeenSet;

                    /**
                     * Full name of the license holder.
                     */
                    TextDetectionResult m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Last name / surname of the license holder.
                     */
                    TextDetectionResult m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * First name of the license holder.
                     */
                    TextDetectionResult m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * Middle name of the license holder.
                     */
                    TextDetectionResult m_middleName;
                    bool m_middleNameHasBeenSet;

                    /**
                     * Nationality of the license holder.
                     */
                    TextDetectionResult m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * Gender.
                     */
                    TextDetectionResult m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Address of the license holder.
                     */
                    TextDetectionResult m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Driver's license number.
                     */
                    TextDetectionResult m_licenseNo;
                    bool m_licenseNoHasBeenSet;

                    /**
                     * Expiration date of the driver's license.
                     */
                    TextDetectionResult m_expiresDate;
                    bool m_expiresDateHasBeenSet;

                    /**
                     * Code of the issuing agency.
                     */
                    TextDetectionResult m_agencyCode;
                    bool m_agencyCodeHasBeenSet;

                    /**
                     * Date of birth of the license holder.
                     */
                    TextDetectionResult m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Blood type of the  license holder.
                     */
                    TextDetectionResult m_bloodType;
                    bool m_bloodTypeHasBeenSet;

                    /**
                     * Height of the license holder, in metres as printed on the card (e.g. 1.69).
                     */
                    TextDetectionResult m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Weight of the license holder, in kilograms (e.g. 65).
                     */
                    TextDetectionResult m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Eye color of the license holder (e.g. BLACK).
                     */
                    TextDetectionResult m_eyeColor;
                    bool m_eyeColorHasBeenSet;

                    /**
                     * Driver's license codes indicating the vehicle categories the license holder is authorized to operate (e.g. A, A1, B, B1, B2, C, D, BE, CE).
                     */
                    TextDetectionResult m_dLCodes;
                    bool m_dLCodesHasBeenSet;

                    /**
                     * Restrictions that limit the license holder's driving privileges, such as transmission type (AT / MT) or vehicle-class limits.
                     */
                    TextDetectionResult m_restrictions;
                    bool m_restrictionsHasBeenSet;

                    /**
                     * Driving conditions of the license holder (e.g. A = must wear glasses, D = daytime driving only).
                     */
                    TextDetectionResult m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESDRIVINGLICENSEOCRRESPONSE_H_
