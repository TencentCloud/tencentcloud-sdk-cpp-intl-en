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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILRNMOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILRNMOCRRESPONSE_H_

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
                * RecognizeBrazilRNMOCR response structure.
                */
                class RecognizeBrazilRNMOCRResponse : public AbstractModel
                {
                public:
                    RecognizeBrazilRNMOCRResponse();
                    ~RecognizeBrazilRNMOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Last name
                     * @return SOBRENOME Last name
                     * 
                     */
                    std::string GetSOBRENOME() const;

                    /**
                     * 判断参数 SOBRENOME 是否已赋值
                     * @return SOBRENOME 是否已赋值
                     * 
                     */
                    bool SOBRENOMEHasBeenSet() const;

                    /**
                     * 获取First name
                     * @return NOME First name
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
                     * 获取Date of Birth
                     * @return DATADENASCIMENTO Date of Birth
                     * 
                     */
                    std::string GetDATADENASCIMENTO() const;

                    /**
                     * 判断参数 DATADENASCIMENTO 是否已赋值
                     * @return DATADENASCIMENTO 是否已赋值
                     * 
                     */
                    bool DATADENASCIMENTOHasBeenSet() const;

                    /**
                     * 获取Gender
                     * @return SEXO Gender
                     * 
                     */
                    std::string GetSEXO() const;

                    /**
                     * 判断参数 SEXO 是否已赋值
                     * @return SEXO 是否已赋值
                     * 
                     */
                    bool SEXOHasBeenSet() const;

                    /**
                     * 获取Parents name
                     * @return MEMBERSHIP Parents name
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
                     * 获取Expiry Date
                     * @return VALIDADE Expiry Date
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
                     * 获取RNM
                     * @return RNM RNM
                     * 
                     */
                    std::string GetRNM() const;

                    /**
                     * 判断参数 RNM 是否已赋值
                     * @return RNM 是否已赋值
                     * 
                     */
                    bool RNMHasBeenSet() const;

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
                     * 获取
                     * @return CLASSIFICATION 
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
                     * 获取
                     * @return PRAZODERESIDENCIA 
                     * 
                     */
                    std::string GetPRAZODERESIDENCIA() const;

                    /**
                     * 判断参数 PRAZODERESIDENCIA 是否已赋值
                     * @return PRAZODERESIDENCIA 是否已赋值
                     * 
                     */
                    bool PRAZODERESIDENCIAHasBeenSet() const;

                    /**
                     * 获取Issue Date
                     * @return ISSUANCE Issue Date
                     * 
                     */
                    std::string GetISSUANCE() const;

                    /**
                     * 判断参数 ISSUANCE 是否已赋值
                     * @return ISSUANCE 是否已赋值
                     * 
                     */
                    bool ISSUANCEHasBeenSet() const;

                    /**
                     * 获取Legal basis
                     * @return AMPAROLEGAL Legal basis
                     * 
                     */
                    std::string GetAMPAROLEGAL() const;

                    /**
                     * 判断参数 AMPAROLEGAL 是否已赋值
                     * @return AMPAROLEGAL 是否已赋值
                     * 
                     */
                    bool AMPAROLEGALHasBeenSet() const;

                    /**
                     * 获取Machine readable zone code
                     * @return MRZ Machine readable zone code
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
                     * 获取PortraitImage
                     * @return PortraitImage PortraitImage
                     * 
                     */
                    std::string GetPortraitImage() const;

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
                     * 判断参数 PortraitImageBack 是否已赋值
                     * @return PortraitImageBack 是否已赋值
                     * 
                     */
                    bool PortraitImageBackHasBeenSet() const;

                private:

                    /**
                     * Last name
                     */
                    std::string m_sOBRENOME;
                    bool m_sOBRENOMEHasBeenSet;

                    /**
                     * First name
                     */
                    std::string m_nOME;
                    bool m_nOMEHasBeenSet;

                    /**
                     * Date of Birth
                     */
                    std::string m_dATADENASCIMENTO;
                    bool m_dATADENASCIMENTOHasBeenSet;

                    /**
                     * Gender
                     */
                    std::string m_sEXO;
                    bool m_sEXOHasBeenSet;

                    /**
                     * Parents name
                     */
                    std::string m_mEMBERSHIP;
                    bool m_mEMBERSHIPHasBeenSet;

                    /**
                     * Nationality
                     */
                    std::string m_nACIONALIDADE;
                    bool m_nACIONALIDADEHasBeenSet;

                    /**
                     * Expiry Date
                     */
                    std::string m_vALIDADE;
                    bool m_vALIDADEHasBeenSet;

                    /**
                     * RNM
                     */
                    std::string m_rNM;
                    bool m_rNMHasBeenSet;

                    /**
                     * CPF
                     */
                    std::string m_cPF;
                    bool m_cPFHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_cLASSIFICATION;
                    bool m_cLASSIFICATIONHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_pRAZODERESIDENCIA;
                    bool m_pRAZODERESIDENCIAHasBeenSet;

                    /**
                     * Issue Date
                     */
                    std::string m_iSSUANCE;
                    bool m_iSSUANCEHasBeenSet;

                    /**
                     * Legal basis
                     */
                    std::string m_aMPAROLEGAL;
                    bool m_aMPAROLEGALHasBeenSet;

                    /**
                     * Machine readable zone code
                     */
                    std::string m_mRZ;
                    bool m_mRZHasBeenSet;

                    /**
                     * PortraitImage
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

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILRNMOCRRESPONSE_H_
