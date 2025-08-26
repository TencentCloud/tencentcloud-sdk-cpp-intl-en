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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILIDCARDINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILIDCARDINFO_H_

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
                * Specifies the identity card type in brazil.
                */
                class BrazilIDCardInfo : public AbstractModel
                {
                public:
                    BrazilIDCardInfo();
                    ~BrazilIDCardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name.
                     * @return Nome Name.
                     * 
                     */
                    std::string GetNome() const;

                    /**
                     * 设置Name.
                     * @param _nome Name.
                     * 
                     */
                    void SetNome(const std::string& _nome);

                    /**
                     * 判断参数 Nome 是否已赋值
                     * @return Nome 是否已赋值
                     * 
                     */
                    bool NomeHasBeenSet() const;

                    /**
                     * 获取Parent information.
                     * @return MemberShip Parent information.
                     * 
                     */
                    std::string GetMemberShip() const;

                    /**
                     * 设置Parent information.
                     * @param _memberShip Parent information.
                     * 
                     */
                    void SetMemberShip(const std::string& _memberShip);

                    /**
                     * 判断参数 MemberShip 是否已赋值
                     * @return MemberShip 是否已赋值
                     * 
                     */
                    bool MemberShipHasBeenSet() const;

                    /**
                     * 获取Date of birth.
                     * @return DataNascimento Date of birth.
                     * 
                     */
                    std::string GetDataNascimento() const;

                    /**
                     * 设置Date of birth.
                     * @param _dataNascimento Date of birth.
                     * 
                     */
                    void SetDataNascimento(const std::string& _dataNascimento);

                    /**
                     * 判断参数 DataNascimento 是否已赋值
                     * @return DataNascimento 是否已赋值
                     * 
                     */
                    bool DataNascimentoHasBeenSet() const;

                    /**
                     * 获取Issuing organization.
                     * @return IssuingAgency Issuing organization.
                     * 
                     */
                    std::string GetIssuingAgency() const;

                    /**
                     * 设置Issuing organization.
                     * @param _issuingAgency Issuing organization.
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
                     * 获取Specifies the blood type.
                     * @return Fatorrh Specifies the blood type.
                     * 
                     */
                    std::string GetFatorrh() const;

                    /**
                     * 设置Specifies the blood type.
                     * @param _fatorrh Specifies the blood type.
                     * 
                     */
                    void SetFatorrh(const std::string& _fatorrh);

                    /**
                     * 判断参数 Fatorrh 是否已赋值
                     * @return Fatorrh 是否已赋值
                     * 
                     */
                    bool FatorrhHasBeenSet() const;

                    /**
                     * 获取Birthplace.
                     * @return NaturalIDade Birthplace.
                     * 
                     */
                    std::string GetNaturalIDade() const;

                    /**
                     * 设置Birthplace.
                     * @param _naturalIDade Birthplace.
                     * 
                     */
                    void SetNaturalIDade(const std::string& _naturalIDade);

                    /**
                     * 判断参数 NaturalIDade 是否已赋值
                     * @return NaturalIDade 是否已赋值
                     * 
                     */
                    bool NaturalIDadeHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Observations Remarks.
                     * 
                     */
                    std::string GetObservations() const;

                    /**
                     * 设置Remarks.
                     * @param _observations Remarks.
                     * 
                     */
                    void SetObservations(const std::string& _observations);

                    /**
                     * 判断参数 Observations 是否已赋值
                     * @return Observations 是否已赋值
                     * 
                     */
                    bool ObservationsHasBeenSet() const;

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
                     * 获取DNI Type
                     * @return DNI DNI Type
                     * 
                     */
                    std::string GetDNI() const;

                    /**
                     * 设置DNI Type
                     * @param _dNI DNI Type
                     * 
                     */
                    void SetDNI(const std::string& _dNI);

                    /**
                     * 判断参数 DNI 是否已赋值
                     * @return DNI 是否已赋值
                     * 
                     */
                    bool DNIHasBeenSet() const;

                    /**
                     * 获取Common registration.
                     * @return RegistroGeral Common registration.
                     * 
                     */
                    std::string GetRegistroGeral() const;

                    /**
                     * 设置Common registration.
                     * @param _registroGeral Common registration.
                     * 
                     */
                    void SetRegistroGeral(const std::string& _registroGeral);

                    /**
                     * 判断参数 RegistroGeral 是否已赋值
                     * @return RegistroGeral 是否已赋值
                     * 
                     */
                    bool RegistroGeralHasBeenSet() const;

                    /**
                     * 获取Issue date. valid values: dd/mm/yyyy.
                     * @return DispatchDate Issue date. valid values: dd/mm/yyyy.
                     * 
                     */
                    std::string GetDispatchDate() const;

                    /**
                     * 设置Issue date. valid values: dd/mm/yyyy.
                     * @param _dispatchDate Issue date. valid values: dd/mm/yyyy.
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
                     * 获取Address.
                     * @return Registro Address.
                     * 
                     */
                    std::string GetRegistro() const;

                    /**
                     * 设置Address.
                     * @param _registro Address.
                     * 
                     */
                    void SetRegistro(const std::string& _registro);

                    /**
                     * 判断参数 Registro 是否已赋值
                     * @return Registro 是否已赋值
                     * 
                     */
                    bool RegistroHasBeenSet() const;

                    /**
                     * 获取Specifies the avatar in Base64 format of the id card.
                     * @return PortraitImage Specifies the avatar in Base64 format of the id card.
                     * 
                     */
                    std::string GetPortraitImage() const;

                    /**
                     * 设置Specifies the avatar in Base64 format of the id card.
                     * @param _portraitImage Specifies the avatar in Base64 format of the id card.
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
                     * 获取Original identity information.
                     * @return DocOrigem Original identity information.
                     * 
                     */
                    std::string GetDocOrigem() const;

                    /**
                     * 设置Original identity information.
                     * @param _docOrigem Original identity information.
                     * 
                     */
                    void SetDocOrigem(const std::string& _docOrigem);

                    /**
                     * 判断参数 DocOrigem 是否已赋值
                     * @return DocOrigem 是否已赋值
                     * 
                     */
                    bool DocOrigemHasBeenSet() const;

                private:

                    /**
                     * Name.
                     */
                    std::string m_nome;
                    bool m_nomeHasBeenSet;

                    /**
                     * Parent information.
                     */
                    std::string m_memberShip;
                    bool m_memberShipHasBeenSet;

                    /**
                     * Date of birth.
                     */
                    std::string m_dataNascimento;
                    bool m_dataNascimentoHasBeenSet;

                    /**
                     * Issuing organization.
                     */
                    std::string m_issuingAgency;
                    bool m_issuingAgencyHasBeenSet;

                    /**
                     * Specifies the blood type.
                     */
                    std::string m_fatorrh;
                    bool m_fatorrhHasBeenSet;

                    /**
                     * Birthplace.
                     */
                    std::string m_naturalIDade;
                    bool m_naturalIDadeHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_observations;
                    bool m_observationsHasBeenSet;

                    /**
                     * CPF Type
                     */
                    std::string m_cPF;
                    bool m_cPFHasBeenSet;

                    /**
                     * DNI Type
                     */
                    std::string m_dNI;
                    bool m_dNIHasBeenSet;

                    /**
                     * Common registration.
                     */
                    std::string m_registroGeral;
                    bool m_registroGeralHasBeenSet;

                    /**
                     * Issue date. valid values: dd/mm/yyyy.
                     */
                    std::string m_dispatchDate;
                    bool m_dispatchDateHasBeenSet;

                    /**
                     * Address.
                     */
                    std::string m_registro;
                    bool m_registroHasBeenSet;

                    /**
                     * Specifies the avatar in Base64 format of the id card.
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                    /**
                     * Original identity information.
                     */
                    std::string m_docOrigem;
                    bool m_docOrigemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILIDCARDINFO_H_
