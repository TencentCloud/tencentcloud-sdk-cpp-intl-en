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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILRNEINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILRNEINFO_H_

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
                * BrazilRNEInfo
                */
                class BrazilRNEInfo : public AbstractModel
                {
                public:
                    BrazilRNEInfo();
                    ~BrazilRNEInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RNE
                     * @return RNE RNE
                     * 
                     */
                    std::string GetRNE() const;

                    /**
                     * 设置RNE
                     * @param _rNE RNE
                     * 
                     */
                    void SetRNE(const std::string& _rNE);

                    /**
                     * 判断参数 RNE 是否已赋值
                     * @return RNE 是否已赋值
                     * 
                     */
                    bool RNEHasBeenSet() const;

                    /**
                     * 获取CLASSIFICAÇÃO(CLASSIFICATION)
                     * @return CLASSIFICATION CLASSIFICAÇÃO(CLASSIFICATION)
                     * 
                     */
                    std::string GetCLASSIFICATION() const;

                    /**
                     * 设置CLASSIFICAÇÃO(CLASSIFICATION)
                     * @param _cLASSIFICATION CLASSIFICAÇÃO(CLASSIFICATION)
                     * 
                     */
                    void SetCLASSIFICATION(const std::string& _cLASSIFICATION);

                    /**
                     * 判断参数 CLASSIFICATION 是否已赋值
                     * @return CLASSIFICATION 是否已赋值
                     * 
                     */
                    bool CLASSIFICATIONHasBeenSet() const;

                    /**
                     * 获取VALIDADE
                     * @return VALIDADE VALIDADE
                     * 
                     */
                    std::string GetVALIDADE() const;

                    /**
                     * 设置VALIDADE
                     * @param _vALIDADE VALIDADE
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
                     * 获取NOME
                     * @return NOME NOME
                     * 
                     */
                    std::string GetNOME() const;

                    /**
                     * 设置NOME
                     * @param _nOME NOME
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
                     * 获取FILIAÇÃO(MEMBERSHIP)
                     * @return Membership FILIAÇÃO(MEMBERSHIP)
                     * 
                     */
                    std::string GetMembership() const;

                    /**
                     * 设置FILIAÇÃO(MEMBERSHIP)
                     * @param _membership FILIAÇÃO(MEMBERSHIP)
                     * 
                     */
                    void SetMembership(const std::string& _membership);

                    /**
                     * 判断参数 Membership 是否已赋值
                     * @return Membership 是否已赋值
                     * 
                     */
                    bool MembershipHasBeenSet() const;

                    /**
                     * 获取NACIONALIDADE
                     * @return NACIONALIDADE NACIONALIDADE
                     * 
                     */
                    std::string GetNACIONALIDADE() const;

                    /**
                     * 设置NACIONALIDADE
                     * @param _nACIONALIDADE NACIONALIDADE
                     * 
                     */
                    void SetNACIONALIDADE(const std::string& _nACIONALIDADE);

                    /**
                     * 判断参数 NACIONALIDADE 是否已赋值
                     * @return NACIONALIDADE 是否已赋值
                     * 
                     */
                    bool NACIONALIDADEHasBeenSet() const;

                    /**
                     * 获取NATURALIDADE(PAÍS)
                     * @return NATURALIDADE NATURALIDADE(PAÍS)
                     * 
                     */
                    std::string GetNATURALIDADE() const;

                    /**
                     * 设置NATURALIDADE(PAÍS)
                     * @param _nATURALIDADE NATURALIDADE(PAÍS)
                     * 
                     */
                    void SetNATURALIDADE(const std::string& _nATURALIDADE);

                    /**
                     * 判断参数 NATURALIDADE 是否已赋值
                     * @return NATURALIDADE 是否已赋值
                     * 
                     */
                    bool NATURALIDADEHasBeenSet() const;

                    /**
                     * 获取ORGÃO EXPEDIDOR(IssuingAgency)
                     * @return IssuingAgency ORGÃO EXPEDIDOR(IssuingAgency)
                     * 
                     */
                    std::string GetIssuingAgency() const;

                    /**
                     * 设置ORGÃO EXPEDIDOR(IssuingAgency)
                     * @param _issuingAgency ORGÃO EXPEDIDOR(IssuingAgency)
                     * 
                     */
                    void SetIssuingAgency(const std::string& _issuingAgency);

                    /**
                     * 判断参数 IssuingAgency 是否已赋值
                     * @return IssuingAgency 是否已赋值
                     * 
                     */
                    bool IssuingAgencyHasBeenSet() const;

                    /**
                     * 获取DATA DE NASCIMENTO(DateOfBirth)
                     * @return DateOfBirth DATA DE NASCIMENTO(DateOfBirth)
                     * 
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 设置DATA DE NASCIMENTO(DateOfBirth)
                     * @param _dateOfBirth DATA DE NASCIMENTO(DateOfBirth)
                     * 
                     */
                    void SetDateOfBirth(const std::string& _dateOfBirth);

                    /**
                     * 判断参数 DateOfBirth 是否已赋值
                     * @return DateOfBirth 是否已赋值
                     * 
                     */
                    bool DateOfBirthHasBeenSet() const;

                    /**
                     * 获取SEXO
                     * @return Sex SEXO
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置SEXO
                     * @param _sex SEXO
                     * 
                     */
                    void SetSex(const std::string& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取DATA DE ENTRADA(EntryDate)
                     * @return EntryDate DATA DE ENTRADA(EntryDate)
                     * 
                     */
                    std::string GetEntryDate() const;

                    /**
                     * 设置DATA DE ENTRADA(EntryDate)
                     * @param _entryDate DATA DE ENTRADA(EntryDate)
                     * 
                     */
                    void SetEntryDate(const std::string& _entryDate);

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
                     * 设置VIA
                     * @param _vIA VIA
                     * 
                     */
                    void SetVIA(const std::string& _vIA);

                    /**
                     * 判断参数 VIA 是否已赋值
                     * @return VIA 是否已赋值
                     * 
                     */
                    bool VIAHasBeenSet() const;

                    /**
                     * 获取DATA DE EXPEDIÇÃO(DispatchDate)
                     * @return DispatchDate DATA DE EXPEDIÇÃO(DispatchDate)
                     * 
                     */
                    std::string GetDispatchDate() const;

                    /**
                     * 设置DATA DE EXPEDIÇÃO(DispatchDate)
                     * @param _dispatchDate DATA DE EXPEDIÇÃO(DispatchDate)
                     * 
                     */
                    void SetDispatchDate(const std::string& _dispatchDate);

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
                     * 设置MRZ
                     * @param _mRZ MRZ
                     * 
                     */
                    void SetMRZ(const std::string& _mRZ);

                    /**
                     * 判断参数 MRZ 是否已赋值
                     * @return MRZ 是否已赋值
                     * 
                     */
                    bool MRZHasBeenSet() const;

                    /**
                     * 获取PortraitImage
                     * @return PortraitImage PortraitImage
                     * 
                     */
                    std::string GetPortraitImage() const;

                    /**
                     * 设置PortraitImage
                     * @param _portraitImage PortraitImage
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
                     * RNE
                     */
                    std::string m_rNE;
                    bool m_rNEHasBeenSet;

                    /**
                     * CLASSIFICAÇÃO(CLASSIFICATION)
                     */
                    std::string m_cLASSIFICATION;
                    bool m_cLASSIFICATIONHasBeenSet;

                    /**
                     * VALIDADE
                     */
                    std::string m_vALIDADE;
                    bool m_vALIDADEHasBeenSet;

                    /**
                     * NOME
                     */
                    std::string m_nOME;
                    bool m_nOMEHasBeenSet;

                    /**
                     * FILIAÇÃO(MEMBERSHIP)
                     */
                    std::string m_membership;
                    bool m_membershipHasBeenSet;

                    /**
                     * NACIONALIDADE
                     */
                    std::string m_nACIONALIDADE;
                    bool m_nACIONALIDADEHasBeenSet;

                    /**
                     * NATURALIDADE(PAÍS)
                     */
                    std::string m_nATURALIDADE;
                    bool m_nATURALIDADEHasBeenSet;

                    /**
                     * ORGÃO EXPEDIDOR(IssuingAgency)
                     */
                    std::string m_issuingAgency;
                    bool m_issuingAgencyHasBeenSet;

                    /**
                     * DATA DE NASCIMENTO(DateOfBirth)
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * SEXO
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * DATA DE ENTRADA(EntryDate)
                     */
                    std::string m_entryDate;
                    bool m_entryDateHasBeenSet;

                    /**
                     * VIA
                     */
                    std::string m_vIA;
                    bool m_vIAHasBeenSet;

                    /**
                     * DATA DE EXPEDIÇÃO(DispatchDate)
                     */
                    std::string m_dispatchDate;
                    bool m_dispatchDateHasBeenSet;

                    /**
                     * MRZ
                     */
                    std::string m_mRZ;
                    bool m_mRZHasBeenSet;

                    /**
                     * PortraitImage
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILRNEINFO_H_
