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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMEXICOVTIDRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMEXICOVTIDRESPONSE_H_

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
                * RecognizeMexicoVTID response structure.
                */
                class RecognizeMexicoVTIDResponse : public AbstractModel
                {
                public:
                    RecognizeMexicoVTIDResponse();
                    ~RecognizeMexicoVTIDResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name
                     * @return Name Name
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
                     * 获取Sex
                     * @return Sex Sex
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
                     * 获取Address
                     * @return Address Address
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
                     * 获取Vote PIN Code
                     * @return VotePIN Vote PIN Code
                     * 
                     */
                    std::string GetVotePIN() const;

                    /**
                     * 判断参数 VotePIN 是否已赋值
                     * @return VotePIN 是否已赋值
                     * 
                     */
                    bool VotePINHasBeenSet() const;

                    /**
                     * 获取Unique Population Registry Code
                     * @return CURP Unique Population Registry Code
                     * 
                     */
                    std::string GetCURP() const;

                    /**
                     * 判断参数 CURP 是否已赋值
                     * @return CURP 是否已赋值
                     * 
                     */
                    bool CURPHasBeenSet() const;

                    /**
                     * 获取Birthday
                     * @return Birth Birthday
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
                     * 获取Section Number
                     * @return SECCION Section Number
                     * 
                     */
                    std::string GetSECCION() const;

                    /**
                     * 判断参数 SECCION 是否已赋值
                     * @return SECCION 是否已赋值
                     * 
                     */
                    bool SECCIONHasBeenSet() const;

                    /**
                     * 获取IssueDate
                     * @return IssueDate IssueDate
                     * 
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     * 
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取ValidDate
                     * @return ValidDate ValidDate
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
                     * 获取State
                     * @return State State
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取City
                     * @return City City
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Locality
                     * @return Locality Locality
                     * 
                     */
                    std::string GetLocality() const;

                    /**
                     * 判断参数 Locality 是否已赋值
                     * @return Locality 是否已赋值
                     * 
                     */
                    bool LocalityHasBeenSet() const;

                    /**
                     * 获取Edition
                     * @return EMISION Edition
                     * 
                     */
                    std::string GetEMISION() const;

                    /**
                     * 判断参数 EMISION 是否已赋值
                     * @return EMISION 是否已赋值
                     * 
                     */
                    bool EMISIONHasBeenSet() const;

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

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Sex
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Address
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Vote PIN Code
                     */
                    std::string m_votePIN;
                    bool m_votePINHasBeenSet;

                    /**
                     * Unique Population Registry Code
                     */
                    std::string m_cURP;
                    bool m_cURPHasBeenSet;

                    /**
                     * Birthday
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * Section Number
                     */
                    std::string m_sECCION;
                    bool m_sECCIONHasBeenSet;

                    /**
                     * IssueDate
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * ValidDate
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * State
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * City
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Locality
                     */
                    std::string m_locality;
                    bool m_localityHasBeenSet;

                    /**
                     * Edition
                     */
                    std::string m_eMISION;
                    bool m_eMISIONHasBeenSet;

                    /**
                     * Portrait image base64
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEMEXICOVTIDRESPONSE_H_
