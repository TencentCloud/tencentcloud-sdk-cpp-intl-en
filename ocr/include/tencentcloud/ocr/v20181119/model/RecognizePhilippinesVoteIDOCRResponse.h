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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESVOTEIDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESVOTEIDOCRRESPONSE_H_

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
                * RecognizePhilippinesVoteIDOCR response structure.
                */
                class RecognizePhilippinesVoteIDOCRResponse : public AbstractModel
                {
                public:
                    RecognizePhilippinesVoteIDOCRResponse();
                    ~RecognizePhilippinesVoteIDOCRResponse() = default;
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
                     * 获取The voter's identification number (VIN).
                     * @return VIN The voter's identification number (VIN).
                     * 
                     */
                    TextDetectionResult GetVIN() const;

                    /**
                     * 判断参数 VIN 是否已赋值
                     * @return VIN 是否已赋值
                     * 
                     */
                    bool VINHasBeenSet() const;

                    /**
                     * 获取The first name.
                     * @return FirstName The first name.
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
                     * 获取The last name.
                     * @return LastName The last name.
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
                     * 获取The civil status.
                     * @return CivilStatus The civil status.
                     * 
                     */
                    TextDetectionResult GetCivilStatus() const;

                    /**
                     * 判断参数 CivilStatus 是否已赋值
                     * @return CivilStatus 是否已赋值
                     * 
                     */
                    bool CivilStatusHasBeenSet() const;

                    /**
                     * 获取The citizenship.
                     * @return Citizenship The citizenship.
                     * 
                     */
                    TextDetectionResult GetCitizenship() const;

                    /**
                     * 判断参数 Citizenship 是否已赋值
                     * @return Citizenship 是否已赋值
                     * 
                     */
                    bool CitizenshipHasBeenSet() const;

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
                     * 获取The precinct.
                     * @return PrecinctNo The precinct.
                     * 
                     */
                    TextDetectionResult GetPrecinctNo() const;

                    /**
                     * 判断参数 PrecinctNo 是否已赋值
                     * @return PrecinctNo 是否已赋值
                     * 
                     */
                    bool PrecinctNoHasBeenSet() const;

                private:

                    /**
                     * The Base64-encoded identity photo.
                     */
                    TextDetectionResult m_headPortrait;
                    bool m_headPortraitHasBeenSet;

                    /**
                     * The voter's identification number (VIN).
                     */
                    TextDetectionResult m_vIN;
                    bool m_vINHasBeenSet;

                    /**
                     * The first name.
                     */
                    TextDetectionResult m_firstName;
                    bool m_firstNameHasBeenSet;

                    /**
                     * The last name.
                     */
                    TextDetectionResult m_lastName;
                    bool m_lastNameHasBeenSet;

                    /**
                     * The date of birth.
                     */
                    TextDetectionResult m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * The civil status.
                     */
                    TextDetectionResult m_civilStatus;
                    bool m_civilStatusHasBeenSet;

                    /**
                     * The citizenship.
                     */
                    TextDetectionResult m_citizenship;
                    bool m_citizenshipHasBeenSet;

                    /**
                     * The address.
                     */
                    TextDetectionResult m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * The precinct.
                     */
                    TextDetectionResult m_precinctNo;
                    bool m_precinctNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEPHILIPPINESVOTEIDOCRRESPONSE_H_
