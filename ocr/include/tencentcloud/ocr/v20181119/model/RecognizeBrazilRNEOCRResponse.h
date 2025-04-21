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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILRNEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILRNEOCRRESPONSE_H_

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
                * RecognizeBrazilRNEOCR response structure.
                */
                class RecognizeBrazilRNEOCRResponse : public AbstractModel
                {
                public:
                    RecognizeBrazilRNEOCRResponse();
                    ~RecognizeBrazilRNEOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取RNE
                     * @return RNE RNE
                     * 
                     */
                    std::string GetRNE() const;

                    /**
                     * 判断参数 RNE 是否已赋值
                     * @return RNE 是否已赋值
                     * 
                     */
                    bool RNEHasBeenSet() const;

                    /**
                     * 获取Classification
                     * @return CLASSIFICATION Classification
                     * 
                     */
                    std::string GetCLASSIFICATION() const;

                    /**
                     * 判断参数 CLASSIFICATION 是否已赋值
                     * @return CLASSIFICATION 是否已赋值
                     * 
                     */
                    bool CLASSIFICATIONHasBeenSet() const;

                    /**
                     * 获取Valid date
                     * @return VALIDADE Valid date
                     * 
                     */
                    std::string GetVALIDADE() const;

                    /**
                     * 判断参数 VALIDADE 是否已赋值
                     * @return VALIDADE 是否已赋值
                     * 
                     */
                    bool VALIDADEHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return NOME Name
                     * 
                     */
                    std::string GetNOME() const;

                    /**
                     * 判断参数 NOME 是否已赋值
                     * @return NOME 是否已赋值
                     * 
                     */
                    bool NOMEHasBeenSet() const;

                    /**
                     * 获取Family information
                     * @return Membership Family information
                     * 
                     */
                    std::string GetMembership() const;

                    /**
                     * 判断参数 Membership 是否已赋值
                     * @return Membership 是否已赋值
                     * 
                     */
                    bool MembershipHasBeenSet() const;

                    /**
                     * 获取Nationality
                     * @return NACIONALIDADE Nationality
                     * 
                     */
                    std::string GetNACIONALIDADE() const;

                    /**
                     * 判断参数 NACIONALIDADE 是否已赋值
                     * @return NACIONALIDADE 是否已赋值
                     * 
                     */
                    bool NACIONALIDADEHasBeenSet() const;

                    /**
                     * 获取Place of Birth
                     * @return NATURALIDADE Place of Birth
                     * 
                     */
                    std::string GetNATURALIDADE() const;

                    /**
                     * 判断参数 NATURALIDADE 是否已赋值
                     * @return NATURALIDADE 是否已赋值
                     * 
                     */
                    bool NATURALIDADEHasBeenSet() const;

                    /**
                     * 获取Issuing agency
                     * @return IssuingAgency Issuing agency
                     * 
                     */
                    std::string GetIssuingAgency() const;

                    /**
                     * 判断参数 IssuingAgency 是否已赋值
                     * @return IssuingAgency 是否已赋值
                     * 
                     */
                    bool IssuingAgencyHasBeenSet() const;

                    /**
                     * 获取Birthday
                     * @return DateOfBirth Birthday
                     * 
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 判断参数 DateOfBirth 是否已赋值
                     * @return DateOfBirth 是否已赋值
                     * 
                     */
                    bool DateOfBirthHasBeenSet() const;

                    /**
                     * 获取Gender
                     * @return Sex Gender
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
                     * 获取Date of entry
                     * @return EntryDate Date of entry
                     * 
                     */
                    std::string GetEntryDate() const;

                    /**
                     * 判断参数 EntryDate 是否已赋值
                     * @return EntryDate 是否已赋值
                     * 
                     */
                    bool EntryDateHasBeenSet() const;

                    /**
                     * 获取VIA
                     * @return VIA VIA
                     * 
                     */
                    std::string GetVIA() const;

                    /**
                     * 判断参数 VIA 是否已赋值
                     * @return VIA 是否已赋值
                     * 
                     */
                    bool VIAHasBeenSet() const;

                    /**
                     * 获取Dispatch date
                     * @return DispatchDate Dispatch date
                     * 
                     */
                    std::string GetDispatchDate() const;

                    /**
                     * 判断参数 DispatchDate 是否已赋值
                     * @return DispatchDate 是否已赋值
                     * 
                     */
                    bool DispatchDateHasBeenSet() const;

                    /**
                     * 获取MRZ
                     * @return MRZ MRZ
                     * 
                     */
                    std::string GetMRZ() const;

                    /**
                     * 判断参数 MRZ 是否已赋值
                     * @return MRZ 是否已赋值
                     * 
                     */
                    bool MRZHasBeenSet() const;

                    /**
                     * 获取PortraitImage base64
                     * @return PortraitImage PortraitImage base64
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
                     * RNE
                     */
                    std::string m_rNE;
                    bool m_rNEHasBeenSet;

                    /**
                     * Classification
                     */
                    std::string m_cLASSIFICATION;
                    bool m_cLASSIFICATIONHasBeenSet;

                    /**
                     * Valid date
                     */
                    std::string m_vALIDADE;
                    bool m_vALIDADEHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_nOME;
                    bool m_nOMEHasBeenSet;

                    /**
                     * Family information
                     */
                    std::string m_membership;
                    bool m_membershipHasBeenSet;

                    /**
                     * Nationality
                     */
                    std::string m_nACIONALIDADE;
                    bool m_nACIONALIDADEHasBeenSet;

                    /**
                     * Place of Birth
                     */
                    std::string m_nATURALIDADE;
                    bool m_nATURALIDADEHasBeenSet;

                    /**
                     * Issuing agency
                     */
                    std::string m_issuingAgency;
                    bool m_issuingAgencyHasBeenSet;

                    /**
                     * Birthday
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * Gender
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Date of entry
                     */
                    std::string m_entryDate;
                    bool m_entryDateHasBeenSet;

                    /**
                     * VIA
                     */
                    std::string m_vIA;
                    bool m_vIAHasBeenSet;

                    /**
                     * Dispatch date
                     */
                    std::string m_dispatchDate;
                    bool m_dispatchDateHasBeenSet;

                    /**
                     * MRZ
                     */
                    std::string m_mRZ;
                    bool m_mRZHasBeenSet;

                    /**
                     * PortraitImage base64
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILRNEOCRRESPONSE_H_
