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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILDRIVERLICENSEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILDRIVERLICENSEOCRRESPONSE_H_

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
                * RecognizeBrazilDriverLicenseOCR response structure.
                */
                class RecognizeBrazilDriverLicenseOCRResponse : public AbstractModel
                {
                public:
                    RecognizeBrazilDriverLicenseOCRResponse();
                    ~RecognizeBrazilDriverLicenseOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the license holder.
                     * @return NOME Name of the license holder.
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
                     * 获取Driver's license category.
                     * @return CatHab Driver's license category.
                     * 
                     */
                    std::string GetCatHab() const;

                    /**
                     * 判断参数 CatHab 是否已赋值
                     * @return CatHab 是否已赋值
                     * 
                     */
                    bool CatHabHasBeenSet() const;

                    /**
                     * 获取Driver's license number (CNH).
                     * @return CNHNumber Driver's license number (CNH).
                     * 
                     */
                    std::string GetCNHNumber() const;

                    /**
                     * 判断参数 CNHNumber 是否已赋值
                     * @return CNHNumber 是否已赋值
                     * 
                     */
                    bool CNHNumberHasBeenSet() const;

                    /**
                     * 获取Validity date (valid until).
                     * @return VALIDADE Validity date (valid until).
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
                     * 获取Qualification information.
                     * @return QUALIFICATION Qualification information.
                     * 
                     */
                    std::string GetQUALIFICATION() const;

                    /**
                     * 判断参数 QUALIFICATION 是否已赋值
                     * @return QUALIFICATION 是否已赋值
                     * 
                     */
                    bool QUALIFICATIONHasBeenSet() const;

                    /**
                     * 获取ID number (Identity document number).
                     * @return IDENTIDADE ID number (Identity document number).
                     * 
                     */
                    std::string GetIDENTIDADE() const;

                    /**
                     * 判断参数 IDENTIDADE 是否已赋值
                     * @return IDENTIDADE 是否已赋值
                     * 
                     */
                    bool IDENTIDADEHasBeenSet() const;

                    /**
                     * 获取CPF
                     * @return CPF CPF
                     * 
                     */
                    std::string GetCPF() const;

                    /**
                     * 判断参数 CPF 是否已赋值
                     * @return CPF 是否已赋值
                     * 
                     */
                    bool CPFHasBeenSet() const;

                    /**
                     * 获取Date of birth.
                     * @return NASCIMENTO Date of birth.
                     * 
                     */
                    std::string GetNASCIMENTO() const;

                    /**
                     * 判断参数 NASCIMENTO 是否已赋值
                     * @return NASCIMENTO 是否已赋值
                     * 
                     */
                    bool NASCIMENTOHasBeenSet() const;

                    /**
                     * 获取Membership
                     * @return MEMBERSHIP Membership
                     * 
                     */
                    std::string GetMEMBERSHIP() const;

                    /**
                     * 判断参数 MEMBERSHIP 是否已赋值
                     * @return MEMBERSHIP 是否已赋值
                     * 
                     */
                    bool MEMBERSHIPHasBeenSet() const;

                    /**
                     * 获取Registration number
                     * @return REGISTRO Registration number
                     * 
                     */
                    std::string GetREGISTRO() const;

                    /**
                     * 判断参数 REGISTRO 是否已赋值
                     * @return REGISTRO 是否已赋值
                     * 
                     */
                    bool REGISTROHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return OBSERVATIONS Remarks
                     * 
                     */
                    std::string GetOBSERVATIONS() const;

                    /**
                     * 判断参数 OBSERVATIONS 是否已赋值
                     * @return OBSERVATIONS 是否已赋值
                     * 
                     */
                    bool OBSERVATIONSHasBeenSet() const;

                    /**
                     * 获取Date of issue.
                     * @return IssueDate Date of issue.
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
                     * 获取Place of issue.
                     * @return LOCAL Place of issue.
                     * 
                     */
                    std::string GetLOCAL() const;

                    /**
                     * 判断参数 LOCAL 是否已赋值
                     * @return LOCAL 是否已赋值
                     * 
                     */
                    bool LOCALHasBeenSet() const;

                    /**
                     * 获取Registration number on the back of the card.
                     * @return BackNumber Registration number on the back of the card.
                     * 
                     */
                    std::string GetBackNumber() const;

                    /**
                     * 判断参数 BackNumber 是否已赋值
                     * @return BackNumber 是否已赋值
                     * 
                     */
                    bool BackNumberHasBeenSet() const;

                    /**
                     * 获取This field is deprecated and will always return "1". Usage is not recommended.
                     * @return AdvancedInfo This field is deprecated and will always return "1". Usage is not recommended.
                     * @deprecated
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     * @deprecated
                     */
                    bool AdvancedInfoHasBeenSet() const;

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
                     * Name of the license holder.
                     */
                    std::string m_nOME;
                    bool m_nOMEHasBeenSet;

                    /**
                     * Driver's license category.
                     */
                    std::string m_catHab;
                    bool m_catHabHasBeenSet;

                    /**
                     * Driver's license number (CNH).
                     */
                    std::string m_cNHNumber;
                    bool m_cNHNumberHasBeenSet;

                    /**
                     * Validity date (valid until).
                     */
                    std::string m_vALIDADE;
                    bool m_vALIDADEHasBeenSet;

                    /**
                     * Qualification information.
                     */
                    std::string m_qUALIFICATION;
                    bool m_qUALIFICATIONHasBeenSet;

                    /**
                     * ID number (Identity document number).
                     */
                    std::string m_iDENTIDADE;
                    bool m_iDENTIDADEHasBeenSet;

                    /**
                     * CPF
                     */
                    std::string m_cPF;
                    bool m_cPFHasBeenSet;

                    /**
                     * Date of birth.
                     */
                    std::string m_nASCIMENTO;
                    bool m_nASCIMENTOHasBeenSet;

                    /**
                     * Membership
                     */
                    std::string m_mEMBERSHIP;
                    bool m_mEMBERSHIPHasBeenSet;

                    /**
                     * Registration number
                     */
                    std::string m_rEGISTRO;
                    bool m_rEGISTROHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_oBSERVATIONS;
                    bool m_oBSERVATIONSHasBeenSet;

                    /**
                     * Date of issue.
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * Place of issue.
                     */
                    std::string m_lOCAL;
                    bool m_lOCALHasBeenSet;

                    /**
                     * Registration number on the back of the card.
                     */
                    std::string m_backNumber;
                    bool m_backNumberHasBeenSet;

                    /**
                     * This field is deprecated and will always return "1". Usage is not recommended.
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

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

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILDRIVERLICENSEOCRRESPONSE_H_
