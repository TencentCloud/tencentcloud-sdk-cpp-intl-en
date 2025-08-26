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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILDRIVERLICENSEINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILDRIVERLICENSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Driver'S license type in brazil.
                */
                class BrazilDriverLicenseInfo : public AbstractModel
                {
                public:
                    BrazilDriverLicenseInfo();
                    ~BrazilDriverLicenseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name.
                     * @return NOME Name.
                     * 
                     */
                    std::string GetNOME() const;

                    /**
                     * 设置Name.
                     * @param _nOME Name.
                     * 
                     */
                    void SetNOME(const std::string& _nOME);

                    /**
                     * 判断参数 NOME 是否已赋值
                     * @return NOME 是否已赋值
                     * 
                     */
                    bool NOMEHasBeenSet() const;

                    /**
                     * 获取Specifies the driver's license type.
                     * @return CatHab Specifies the driver's license type.
                     * 
                     */
                    std::string GetCatHab() const;

                    /**
                     * 设置Specifies the driver's license type.
                     * @param _catHab Specifies the driver's license type.
                     * 
                     */
                    void SetCatHab(const std::string& _catHab);

                    /**
                     * 判断参数 CatHab 是否已赋值
                     * @return CatHab 是否已赋值
                     * 
                     */
                    bool CatHabHasBeenSet() const;

                    /**
                     * 获取Driver’s license id.
                     * @return CNHNumber Driver’s license id.
                     * 
                     */
                    std::string GetCNHNumber() const;

                    /**
                     * 设置Driver’s license id.
                     * @param _cNHNumber Driver’s license id.
                     * 
                     */
                    void SetCNHNumber(const std::string& _cNHNumber);

                    /**
                     * 判断参数 CNHNumber 是否已赋值
                     * @return CNHNumber 是否已赋值
                     * 
                     */
                    bool CNHNumberHasBeenSet() const;

                    /**
                     * 获取Expiration date.
                     * @return VALIDADE Expiration date.
                     * 
                     */
                    std::string GetVALIDADE() const;

                    /**
                     * 设置Expiration date.
                     * @param _vALIDADE Expiration date.
                     * 
                     */
                    void SetVALIDADE(const std::string& _vALIDADE);

                    /**
                     * 判断参数 VALIDADE 是否已赋值
                     * @return VALIDADE 是否已赋值
                     * 
                     */
                    bool VALIDADEHasBeenSet() const;

                    /**
                     * 获取Indicates the qualification.
                     * @return QUALIFICATION Indicates the qualification.
                     * 
                     */
                    std::string GetQUALIFICATION() const;

                    /**
                     * 设置Indicates the qualification.
                     * @param _qUALIFICATION Indicates the qualification.
                     * 
                     */
                    void SetQUALIFICATION(const std::string& _qUALIFICATION);

                    /**
                     * 判断参数 QUALIFICATION 是否已赋值
                     * @return QUALIFICATION 是否已赋值
                     * 
                     */
                    bool QUALIFICATIONHasBeenSet() const;

                    /**
                     * 获取Identity card number.
                     * @return IDENTIDADE Identity card number.
                     * 
                     */
                    std::string GetIDENTIDADE() const;

                    /**
                     * 设置Identity card number.
                     * @param _iDENTIDADE Identity card number.
                     * 
                     */
                    void SetIDENTIDADE(const std::string& _iDENTIDADE);

                    /**
                     * 判断参数 IDENTIDADE 是否已赋值
                     * @return IDENTIDADE 是否已赋值
                     * 
                     */
                    bool IDENTIDADEHasBeenSet() const;

                    /**
                     * 获取Tax number of the person.
                     * @return CPF Tax number of the person.
                     * 
                     */
                    std::string GetCPF() const;

                    /**
                     * 设置Tax number of the person.
                     * @param _cPF Tax number of the person.
                     * 
                     */
                    void SetCPF(const std::string& _cPF);

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
                     * 设置Date of birth.
                     * @param _nASCIMENTO Date of birth.
                     * 
                     */
                    void SetNASCIMENTO(const std::string& _nASCIMENTO);

                    /**
                     * 判断参数 NASCIMENTO 是否已赋值
                     * @return NASCIMENTO 是否已赋值
                     * 
                     */
                    bool NASCIMENTOHasBeenSet() const;

                    /**
                     * 获取Membership status.
                     * @return MEMBERSHIP Membership status.
                     * 
                     */
                    std::string GetMEMBERSHIP() const;

                    /**
                     * 设置Membership status.
                     * @param _mEMBERSHIP Membership status.
                     * 
                     */
                    void SetMEMBERSHIP(const std::string& _mEMBERSHIP);

                    /**
                     * 判断参数 MEMBERSHIP 是否已赋值
                     * @return MEMBERSHIP 是否已赋值
                     * 
                     */
                    bool MEMBERSHIPHasBeenSet() const;

                    /**
                     * 获取Registration number.
                     * @return REGISTRO Registration number.
                     * 
                     */
                    std::string GetREGISTRO() const;

                    /**
                     * 设置Registration number.
                     * @param _rEGISTRO Registration number.
                     * 
                     */
                    void SetREGISTRO(const std::string& _rEGISTRO);

                    /**
                     * 判断参数 REGISTRO 是否已赋值
                     * @return REGISTRO 是否已赋值
                     * 
                     */
                    bool REGISTROHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return OBSERVATIONS Remarks.
                     * 
                     */
                    std::string GetOBSERVATIONS() const;

                    /**
                     * 设置Remarks.
                     * @param _oBSERVATIONS Remarks.
                     * 
                     */
                    void SetOBSERVATIONS(const std::string& _oBSERVATIONS);

                    /**
                     * 判断参数 OBSERVATIONS 是否已赋值
                     * @return OBSERVATIONS 是否已赋值
                     * 
                     */
                    bool OBSERVATIONSHasBeenSet() const;

                    /**
                     * 获取Issue date.
                     * @return IssueDate Issue date.
                     * 
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 设置Issue date.
                     * @param _issueDate Issue date.
                     * 
                     */
                    void SetIssueDate(const std::string& _issueDate);

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     * 
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取Issuing location.
                     * @return LOCAL Issuing location.
                     * 
                     */
                    std::string GetLOCAL() const;

                    /**
                     * 设置Issuing location.
                     * @param _lOCAL Issuing location.
                     * 
                     */
                    void SetLOCAL(const std::string& _lOCAL);

                    /**
                     * 判断参数 LOCAL 是否已赋值
                     * @return LOCAL 是否已赋值
                     * 
                     */
                    bool LOCALHasBeenSet() const;

                    /**
                     * 获取Record number.
                     * @return BackNumber Record number.
                     * 
                     */
                    std::string GetBackNumber() const;

                    /**
                     * 设置Record number.
                     * @param _backNumber Record number.
                     * 
                     */
                    void SetBackNumber(const std::string& _backNumber);

                    /**
                     * 判断参数 BackNumber 是否已赋值
                     * @return BackNumber 是否已赋值
                     * 
                     */
                    bool BackNumberHasBeenSet() const;

                    /**
                     * 获取Specifies the avatar in base64 format.
                     * @return PortraitImage Specifies the avatar in base64 format.
                     * 
                     */
                    std::string GetPortraitImage() const;

                    /**
                     * 设置Specifies the avatar in base64 format.
                     * @param _portraitImage Specifies the avatar in base64 format.
                     * 
                     */
                    void SetPortraitImage(const std::string& _portraitImage);

                    /**
                     * 判断参数 PortraitImage 是否已赋值
                     * @return PortraitImage 是否已赋值
                     * 
                     */
                    bool PortraitImageHasBeenSet() const;

                private:

                    /**
                     * Name.
                     */
                    std::string m_nOME;
                    bool m_nOMEHasBeenSet;

                    /**
                     * Specifies the driver's license type.
                     */
                    std::string m_catHab;
                    bool m_catHabHasBeenSet;

                    /**
                     * Driver’s license id.
                     */
                    std::string m_cNHNumber;
                    bool m_cNHNumberHasBeenSet;

                    /**
                     * Expiration date.
                     */
                    std::string m_vALIDADE;
                    bool m_vALIDADEHasBeenSet;

                    /**
                     * Indicates the qualification.
                     */
                    std::string m_qUALIFICATION;
                    bool m_qUALIFICATIONHasBeenSet;

                    /**
                     * Identity card number.
                     */
                    std::string m_iDENTIDADE;
                    bool m_iDENTIDADEHasBeenSet;

                    /**
                     * Tax number of the person.
                     */
                    std::string m_cPF;
                    bool m_cPFHasBeenSet;

                    /**
                     * Date of birth.
                     */
                    std::string m_nASCIMENTO;
                    bool m_nASCIMENTOHasBeenSet;

                    /**
                     * Membership status.
                     */
                    std::string m_mEMBERSHIP;
                    bool m_mEMBERSHIPHasBeenSet;

                    /**
                     * Registration number.
                     */
                    std::string m_rEGISTRO;
                    bool m_rEGISTROHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_oBSERVATIONS;
                    bool m_oBSERVATIONSHasBeenSet;

                    /**
                     * Issue date.
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * Issuing location.
                     */
                    std::string m_lOCAL;
                    bool m_lOCALHasBeenSet;

                    /**
                     * Record number.
                     */
                    std::string m_backNumber;
                    bool m_backNumberHasBeenSet;

                    /**
                     * Specifies the avatar in base64 format.
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILDRIVERLICENSEINFO_H_
