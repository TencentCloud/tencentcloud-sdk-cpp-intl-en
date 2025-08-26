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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILRNMINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILRNMINFO_H_

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
                * Document type for brazil RNM.
                */
                class BrazilRNMInfo : public AbstractModel
                {
                public:
                    BrazilRNMInfo();
                    ~BrazilRNMInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SOBRENOME Type
                     * @return SOBRENOME SOBRENOME Type
                     * 
                     */
                    std::string GetSOBRENOME() const;

                    /**
                     * 设置SOBRENOME Type
                     * @param _sOBRENOME SOBRENOME Type
                     * 
                     */
                    void SetSOBRENOME(const std::string& _sOBRENOME);

                    /**
                     * 判断参数 SOBRENOME 是否已赋值
                     * @return SOBRENOME 是否已赋值
                     * 
                     */
                    bool SOBRENOMEHasBeenSet() const;

                    /**
                     * 获取NOME Type
                     * @return NOME NOME Type
                     * 
                     */
                    std::string GetNOME() const;

                    /**
                     * 设置NOME Type
                     * @param _nOME NOME Type
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
                     * 获取DATA DE NASCIMENTO
                     * @return DATADENASCIMENTO DATA DE NASCIMENTO
                     * 
                     */
                    std::string GetDATADENASCIMENTO() const;

                    /**
                     * 设置DATA DE NASCIMENTO
                     * @param _dATADENASCIMENTO DATA DE NASCIMENTO
                     * 
                     */
                    void SetDATADENASCIMENTO(const std::string& _dATADENASCIMENTO);

                    /**
                     * 判断参数 DATADENASCIMENTO 是否已赋值
                     * @return DATADENASCIMENTO 是否已赋值
                     * 
                     */
                    bool DATADENASCIMENTOHasBeenSet() const;

                    /**
                     * 获取SEXO F
                     * @return SEXO SEXO F
                     * 
                     */
                    std::string GetSEXO() const;

                    /**
                     * 设置SEXO F
                     * @param _sEXO SEXO F
                     * 
                     */
                    void SetSEXO(const std::string& _sEXO);

                    /**
                     * 判断参数 SEXO 是否已赋值
                     * @return SEXO 是否已赋值
                     * 
                     */
                    bool SEXOHasBeenSet() const;

                    /**
                     * 获取FILIAÇÃO(MEMBERSHIP)
                     * @return MEMBERSHIP FILIAÇÃO(MEMBERSHIP)
                     * 
                     */
                    std::string GetMEMBERSHIP() const;

                    /**
                     * 设置FILIAÇÃO(MEMBERSHIP)
                     * @param _mEMBERSHIP FILIAÇÃO(MEMBERSHIP)
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
                     * 获取NACIONALIDADE Type
                     * @return NACIONALIDADE NACIONALIDADE Type
                     * 
                     */
                    std::string GetNACIONALIDADE() const;

                    /**
                     * 设置NACIONALIDADE Type
                     * @param _nACIONALIDADE NACIONALIDADE Type
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
                     * 获取VALIDADE Type
                     * @return VALIDADE VALIDADE Type
                     * 
                     */
                    std::string GetVALIDADE() const;

                    /**
                     * 设置VALIDADE Type
                     * @param _vALIDADE VALIDADE Type
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
                     * 获取RNM Type
                     * @return RNM RNM Type
                     * 
                     */
                    std::string GetRNM() const;

                    /**
                     * 设置RNM Type
                     * @param _rNM RNM Type
                     * 
                     */
                    void SetRNM(const std::string& _rNM);

                    /**
                     * 判断参数 RNM 是否已赋值
                     * @return RNM 是否已赋值
                     * 
                     */
                    bool RNMHasBeenSet() const;

                    /**
                     * 获取CPF Type
                     * @return CPF CPF Type
                     * 
                     */
                    std::string GetCPF() const;

                    /**
                     * 设置CPF Type
                     * @param _cPF CPF Type
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
                     * 获取PRAZO DE RESIDENCIA
                     * @return PRAZODERESIDENCIA PRAZO DE RESIDENCIA
                     * 
                     */
                    std::string GetPRAZODERESIDENCIA() const;

                    /**
                     * 设置PRAZO DE RESIDENCIA
                     * @param _pRAZODERESIDENCIA PRAZO DE RESIDENCIA
                     * 
                     */
                    void SetPRAZODERESIDENCIA(const std::string& _pRAZODERESIDENCIA);

                    /**
                     * 判断参数 PRAZODERESIDENCIA 是否已赋值
                     * @return PRAZODERESIDENCIA 是否已赋值
                     * 
                     */
                    bool PRAZODERESIDENCIAHasBeenSet() const;

                    /**
                     * 获取EMISSÃO(ISSUANCE)
                     * @return ISSUANCE EMISSÃO(ISSUANCE)
                     * 
                     */
                    std::string GetISSUANCE() const;

                    /**
                     * 设置EMISSÃO(ISSUANCE)
                     * @param _iSSUANCE EMISSÃO(ISSUANCE)
                     * 
                     */
                    void SetISSUANCE(const std::string& _iSSUANCE);

                    /**
                     * 判断参数 ISSUANCE 是否已赋值
                     * @return ISSUANCE 是否已赋值
                     * 
                     */
                    bool ISSUANCEHasBeenSet() const;

                    /**
                     * 获取AMPARO LEGAL(LegalHelp)
                     * @return AMPAROLEGAL AMPARO LEGAL(LegalHelp)
                     * 
                     */
                    std::string GetAMPAROLEGAL() const;

                    /**
                     * 设置AMPARO LEGAL(LegalHelp)
                     * @param _aMPAROLEGAL AMPARO LEGAL(LegalHelp)
                     * 
                     */
                    void SetAMPAROLEGAL(const std::string& _aMPAROLEGAL);

                    /**
                     * 判断参数 AMPAROLEGAL 是否已赋值
                     * @return AMPAROLEGAL 是否已赋值
                     * 
                     */
                    bool AMPAROLEGALHasBeenSet() const;

                    /**
                     * 获取MRZCode
                     * @return MRZ MRZCode
                     * 
                     */
                    std::string GetMRZ() const;

                    /**
                     * 设置MRZCode
                     * @param _mRZ MRZCode
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
                     * 获取Portrait Image
                     * @return PortraitImage Portrait Image
                     * 
                     */
                    std::string GetPortraitImage() const;

                    /**
                     * 设置Portrait Image
                     * @param _portraitImage Portrait Image
                     * 
                     */
                    void SetPortraitImage(const std::string& _portraitImage);

                    /**
                     * 判断参数 PortraitImage 是否已赋值
                     * @return PortraitImage 是否已赋值
                     * 
                     */
                    bool PortraitImageHasBeenSet() const;

                    /**
                     * 获取PortraitImage(Back)
                     * @return PortraitImageBack PortraitImage(Back)
                     * 
                     */
                    std::string GetPortraitImageBack() const;

                    /**
                     * 设置PortraitImage(Back)
                     * @param _portraitImageBack PortraitImage(Back)
                     * 
                     */
                    void SetPortraitImageBack(const std::string& _portraitImageBack);

                    /**
                     * 判断参数 PortraitImageBack 是否已赋值
                     * @return PortraitImageBack 是否已赋值
                     * 
                     */
                    bool PortraitImageBackHasBeenSet() const;

                private:

                    /**
                     * SOBRENOME Type
                     */
                    std::string m_sOBRENOME;
                    bool m_sOBRENOMEHasBeenSet;

                    /**
                     * NOME Type
                     */
                    std::string m_nOME;
                    bool m_nOMEHasBeenSet;

                    /**
                     * DATA DE NASCIMENTO
                     */
                    std::string m_dATADENASCIMENTO;
                    bool m_dATADENASCIMENTOHasBeenSet;

                    /**
                     * SEXO F
                     */
                    std::string m_sEXO;
                    bool m_sEXOHasBeenSet;

                    /**
                     * FILIAÇÃO(MEMBERSHIP)
                     */
                    std::string m_mEMBERSHIP;
                    bool m_mEMBERSHIPHasBeenSet;

                    /**
                     * NACIONALIDADE Type
                     */
                    std::string m_nACIONALIDADE;
                    bool m_nACIONALIDADEHasBeenSet;

                    /**
                     * VALIDADE Type
                     */
                    std::string m_vALIDADE;
                    bool m_vALIDADEHasBeenSet;

                    /**
                     * RNM Type
                     */
                    std::string m_rNM;
                    bool m_rNMHasBeenSet;

                    /**
                     * CPF Type
                     */
                    std::string m_cPF;
                    bool m_cPFHasBeenSet;

                    /**
                     * CLASSIFICAÇÃO(CLASSIFICATION)
                     */
                    std::string m_cLASSIFICATION;
                    bool m_cLASSIFICATIONHasBeenSet;

                    /**
                     * PRAZO DE RESIDENCIA
                     */
                    std::string m_pRAZODERESIDENCIA;
                    bool m_pRAZODERESIDENCIAHasBeenSet;

                    /**
                     * EMISSÃO(ISSUANCE)
                     */
                    std::string m_iSSUANCE;
                    bool m_iSSUANCEHasBeenSet;

                    /**
                     * AMPARO LEGAL(LegalHelp)
                     */
                    std::string m_aMPAROLEGAL;
                    bool m_aMPAROLEGALHasBeenSet;

                    /**
                     * MRZCode
                     */
                    std::string m_mRZ;
                    bool m_mRZHasBeenSet;

                    /**
                     * Portrait Image
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                    /**
                     * PortraitImage(Back)
                     */
                    std::string m_portraitImageBack;
                    bool m_portraitImageBackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILRNMINFO_H_
