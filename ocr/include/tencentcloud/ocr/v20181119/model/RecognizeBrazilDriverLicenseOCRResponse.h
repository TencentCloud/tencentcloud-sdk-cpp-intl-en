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
                     * 获取Driving license type
                     * @return CatHab Driving license type
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
                     * 获取CNH number
                     * @return CNHNumber CNH number
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
                     * 获取Qualification
                     * @return QUALIFICATION Qualification
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
                     * 获取ID number
                     * @return IDENTIDADE ID number
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
                     * 获取Birthday
                     * @return NASCIMENTO Birthday
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
                     * 获取Remark
                     * @return OBSERVATIONS Remark
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
                     * 获取Issue date
                     * @return IssueDate Issue date
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
                     * 获取Issue location
                     * @return LOCAL Issue location
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
                     * 获取Number in the back of the card
                     * @return BackNumber Number in the back of the card
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
                     * 获取Field confidence
                     * @return AdvancedInfo Field confidence
                     * 
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     * 
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
                     * Name
                     */
                    std::string m_nOME;
                    bool m_nOMEHasBeenSet;

                    /**
                     * Driving license type
                     */
                    std::string m_catHab;
                    bool m_catHabHasBeenSet;

                    /**
                     * CNH number
                     */
                    std::string m_cNHNumber;
                    bool m_cNHNumberHasBeenSet;

                    /**
                     * Valid date
                     */
                    std::string m_vALIDADE;
                    bool m_vALIDADEHasBeenSet;

                    /**
                     * Qualification
                     */
                    std::string m_qUALIFICATION;
                    bool m_qUALIFICATIONHasBeenSet;

                    /**
                     * ID number
                     */
                    std::string m_iDENTIDADE;
                    bool m_iDENTIDADEHasBeenSet;

                    /**
                     * CPF
                     */
                    std::string m_cPF;
                    bool m_cPFHasBeenSet;

                    /**
                     * Birthday
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
                     * Remark
                     */
                    std::string m_oBSERVATIONS;
                    bool m_oBSERVATIONSHasBeenSet;

                    /**
                     * Issue date
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * Issue location
                     */
                    std::string m_lOCAL;
                    bool m_lOCALHasBeenSet;

                    /**
                     * Number in the back of the card
                     */
                    std::string m_backNumber;
                    bool m_backNumberHasBeenSet;

                    /**
                     * Field confidence
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
