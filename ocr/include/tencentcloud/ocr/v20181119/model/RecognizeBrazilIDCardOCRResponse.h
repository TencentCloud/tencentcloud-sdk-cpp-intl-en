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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILIDCARDOCRRESPONSE_H_

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
                * RecognizeBrazilIDCardOCR response structure.
                */
                class RecognizeBrazilIDCardOCRResponse : public AbstractModel
                {
                public:
                    RecognizeBrazilIDCardOCRResponse();
                    ~RecognizeBrazilIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Name
                     * @return Nome Name
                     * 
                     */
                    std::string GetNome() const;

                    /**
                     * 判断参数 Nome 是否已赋值
                     * @return Nome 是否已赋值
                     * 
                     */
                    bool NomeHasBeenSet() const;

                    /**
                     * 获取Family information
                     * @return MemberShip Family information
                     * 
                     */
                    std::string GetMemberShip() const;

                    /**
                     * 判断参数 MemberShip 是否已赋值
                     * @return MemberShip 是否已赋值
                     * 
                     */
                    bool MemberShipHasBeenSet() const;

                    /**
                     * 获取Birthday
                     * @return DataNascimento Birthday
                     * 
                     */
                    std::string GetDataNascimento() const;

                    /**
                     * 判断参数 DataNascimento 是否已赋值
                     * @return DataNascimento 是否已赋值
                     * 
                     */
                    bool DataNascimentoHasBeenSet() const;

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
                     * 获取blood type
                     * @return Fatorrh blood type
                     * 
                     */
                    std::string GetFatorrh() const;

                    /**
                     * 判断参数 Fatorrh 是否已赋值
                     * @return Fatorrh 是否已赋值
                     * 
                     */
                    bool FatorrhHasBeenSet() const;

                    /**
                     * 获取Birth place
                     * @return NaturalIDade Birth place
                     * 
                     */
                    std::string GetNaturalIDade() const;

                    /**
                     * 判断参数 NaturalIDade 是否已赋值
                     * @return NaturalIDade 是否已赋值
                     * 
                     */
                    bool NaturalIDadeHasBeenSet() const;

                    /**
                     * 获取Additional information 
                     * @return Observations Additional information 
                     * 
                     */
                    std::string GetObservations() const;

                    /**
                     * 判断参数 Observations 是否已赋值
                     * @return Observations 是否已赋值
                     * 
                     */
                    bool ObservationsHasBeenSet() const;

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
                     * 获取DNI
                     * @return DNI DNI
                     * 
                     */
                    std::string GetDNI() const;

                    /**
                     * 判断参数 DNI 是否已赋值
                     * @return DNI 是否已赋值
                     * 
                     */
                    bool DNIHasBeenSet() const;

                    /**
                     * 获取universal registration
                     * @return RegistroGeral universal registration
                     * 
                     */
                    std::string GetRegistroGeral() const;

                    /**
                     * 判断参数 RegistroGeral 是否已赋值
                     * @return RegistroGeral 是否已赋值
                     * 
                     */
                    bool RegistroGeralHasBeenSet() const;

                    /**
                     * 获取Issue date
                     * @return DispatchDate Issue date
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
                     * 获取address
                     * @return Registro address
                     * 
                     */
                    std::string GetRegistro() const;

                    /**
                     * 判断参数 Registro 是否已赋值
                     * @return Registro 是否已赋值
                     * 
                     */
                    bool RegistroHasBeenSet() const;

                    /**
                     * 获取Portrait image
                     * @return PortraitImage Portrait image
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
                     * 获取Original identity information
                     * @return DocOrigem Original identity information
                     * 
                     */
                    std::string GetDocOrigem() const;

                    /**
                     * 判断参数 DocOrigem 是否已赋值
                     * @return DocOrigem 是否已赋值
                     * 
                     */
                    bool DocOrigemHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_nome;
                    bool m_nomeHasBeenSet;

                    /**
                     * Family information
                     */
                    std::string m_memberShip;
                    bool m_memberShipHasBeenSet;

                    /**
                     * Birthday
                     */
                    std::string m_dataNascimento;
                    bool m_dataNascimentoHasBeenSet;

                    /**
                     * Issuing agency
                     */
                    std::string m_issuingAgency;
                    bool m_issuingAgencyHasBeenSet;

                    /**
                     * blood type
                     */
                    std::string m_fatorrh;
                    bool m_fatorrhHasBeenSet;

                    /**
                     * Birth place
                     */
                    std::string m_naturalIDade;
                    bool m_naturalIDadeHasBeenSet;

                    /**
                     * Additional information 
                     */
                    std::string m_observations;
                    bool m_observationsHasBeenSet;

                    /**
                     * CPF
                     */
                    std::string m_cPF;
                    bool m_cPFHasBeenSet;

                    /**
                     * DNI
                     */
                    std::string m_dNI;
                    bool m_dNIHasBeenSet;

                    /**
                     * universal registration
                     */
                    std::string m_registroGeral;
                    bool m_registroGeralHasBeenSet;

                    /**
                     * Issue date
                     */
                    std::string m_dispatchDate;
                    bool m_dispatchDateHasBeenSet;

                    /**
                     * address
                     */
                    std::string m_registro;
                    bool m_registroHasBeenSet;

                    /**
                     * Portrait image
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                    /**
                     * Original identity information
                     */
                    std::string m_docOrigem;
                    bool m_docOrigemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEBRAZILIDCARDOCRRESPONSE_H_
