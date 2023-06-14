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
                     * 获取The name.
                     * @return FullName The name.
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

                private:

                    /**
                     * The Base64-encoded identity photo.
                     */
                    TextDetectionResult m_headPortrait;
                    bool m_headPortraitHasBeenSet;

                    /**
                     * The tax identification number (TIN).
                     */
                    TextDetectionResult m_licenseNumber;
                    bool m_licenseNumberHasBeenSet;

                    /**
                     * The name.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESTINIDOCRRESPONSE_H_
