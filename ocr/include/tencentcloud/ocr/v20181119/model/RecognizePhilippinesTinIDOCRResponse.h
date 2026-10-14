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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESTINIDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESTINIDOCRRESPONSE_H_

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
                * RecognizePhilippinesTinIDOCR response structure.
                */
                class RecognizePhilippinesTinIDOCRResponse : public AbstractModel
                {
                public:
                    RecognizePhilippinesTinIDOCRResponse();
                    ~RecognizePhilippinesTinIDOCRResponse() = default;
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
                     * 获取The tax identification number (TIN).
                     * @return LicenseNumber The tax identification number (TIN).
                     * 
                     */
                    TextDetectionResult GetLicenseNumber() const;

                    /**
                     * 判断参数 LicenseNumber 是否已赋值
                     * @return LicenseNumber 是否已赋值
                     * 
                     */
                    bool LicenseNumberHasBeenSet() const;

                    /**
                     * 获取Full name of the taxpayer.
                     * @return FullName Full name of the taxpayer.
                     * 
                     */
                    TextDetectionResult GetFullName() const;

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

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
                     * 获取The birth date.
                     * @return Birthday The birth date.
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
                     * 获取The issue date.
                     * @return IssueDate The issue date.
                     * 
                     */
                    TextDetectionResult GetIssueDate() const;

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     * 
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取Given name of the taxpayer.
                     * @return GivenName Given name of the taxpayer.
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
                     * 获取Last name of the taxpayer.
                     * @return LastName Last name of the taxpayer.
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
                     * 获取Middle name of the taxpayer.
                     * @return MiddleName Middle name of the taxpayer.
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
                     * 获取Revenue district office where the taxpayer is registered.
                     * @return RDO Revenue district office where the taxpayer is registered.
                     * 
                     */
                    TextDetectionResult GetRDO() const;

                    /**
                     * 判断参数 RDO 是否已赋值
                     * @return RDO 是否已赋值
                     * 
                     */
                    bool RDOHasBeenSet() const;

                private:

                    /**
                     * Base64 encoded result of portrait photo.
                     */
                    TextDetectionResult m_headPortrait;
                    bool m_headPortraitHasBeenSet;

                    /**
                     * The tax identification number (TIN).
                     */
                    TextDetectionResult m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * Full name of the taxpayer.
                     */
                    TextDetectionResult m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * The address.
                     */
                    TextDetectionResult m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * The birth date.
                     */
                    TextDetectionResult m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * The issue date.
                     */
                    TextDetectionResult m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * Given name of the taxpayer.
                     */
                    TextDetectionResult m_givenName;
                    bool m_givenNameHasBeenSet;

                    /**
                     * Last name of the taxpayer.
                     */
                    TextDetectionResult m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * Middle name of the taxpayer.
                     */
                    TextDetectionResult m_middleName;
                    bool m_middleNameHasBeenSet;

                    /**
                     * Revenue district office where the taxpayer is registered.
                     */
                    TextDetectionResult m_rDO;
                    bool m_rDOHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESTINIDOCRRESPONSE_H_
