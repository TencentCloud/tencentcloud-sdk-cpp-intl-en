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

#include <tencentcloud/ocr/v20181119/model/BrazilIDCardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

BrazilIDCardInfo::BrazilIDCardInfo() :
    m_nomeHasBeenSet(false),
    m_memberShipHasBeenSet(false),
    m_dataNascimentoHasBeenSet(false),
    m_issuingAgencyHasBeenSet(false),
    m_fatorrhHasBeenSet(false),
    m_naturalIDadeHasBeenSet(false),
    m_observationsHasBeenSet(false),
    m_cPFHasBeenSet(false),
    m_dNIHasBeenSet(false),
    m_registroGeralHasBeenSet(false),
    m_dispatchDateHasBeenSet(false),
    m_registroHasBeenSet(false),
    m_portraitImageHasBeenSet(false),
    m_docOrigemHasBeenSet(false)
{
}

CoreInternalOutcome BrazilIDCardInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Nome") && !value["Nome"].IsNull())
    {
        if (!value["Nome"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.Nome` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nome = string(value["Nome"].GetString());
        m_nomeHasBeenSet = true;
    }

    if (value.HasMember("MemberShip") && !value["MemberShip"].IsNull())
    {
        if (!value["MemberShip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.MemberShip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberShip = string(value["MemberShip"].GetString());
        m_memberShipHasBeenSet = true;
    }

    if (value.HasMember("DataNascimento") && !value["DataNascimento"].IsNull())
    {
        if (!value["DataNascimento"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.DataNascimento` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataNascimento = string(value["DataNascimento"].GetString());
        m_dataNascimentoHasBeenSet = true;
    }

    if (value.HasMember("IssuingAgency") && !value["IssuingAgency"].IsNull())
    {
        if (!value["IssuingAgency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.IssuingAgency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuingAgency = string(value["IssuingAgency"].GetString());
        m_issuingAgencyHasBeenSet = true;
    }

    if (value.HasMember("Fatorrh") && !value["Fatorrh"].IsNull())
    {
        if (!value["Fatorrh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.Fatorrh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fatorrh = string(value["Fatorrh"].GetString());
        m_fatorrhHasBeenSet = true;
    }

    if (value.HasMember("NaturalIDade") && !value["NaturalIDade"].IsNull())
    {
        if (!value["NaturalIDade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.NaturalIDade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_naturalIDade = string(value["NaturalIDade"].GetString());
        m_naturalIDadeHasBeenSet = true;
    }

    if (value.HasMember("Observations") && !value["Observations"].IsNull())
    {
        if (!value["Observations"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.Observations` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_observations = string(value["Observations"].GetString());
        m_observationsHasBeenSet = true;
    }

    if (value.HasMember("CPF") && !value["CPF"].IsNull())
    {
        if (!value["CPF"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.CPF` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cPF = string(value["CPF"].GetString());
        m_cPFHasBeenSet = true;
    }

    if (value.HasMember("DNI") && !value["DNI"].IsNull())
    {
        if (!value["DNI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.DNI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dNI = string(value["DNI"].GetString());
        m_dNIHasBeenSet = true;
    }

    if (value.HasMember("RegistroGeral") && !value["RegistroGeral"].IsNull())
    {
        if (!value["RegistroGeral"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.RegistroGeral` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registroGeral = string(value["RegistroGeral"].GetString());
        m_registroGeralHasBeenSet = true;
    }

    if (value.HasMember("DispatchDate") && !value["DispatchDate"].IsNull())
    {
        if (!value["DispatchDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.DispatchDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dispatchDate = string(value["DispatchDate"].GetString());
        m_dispatchDateHasBeenSet = true;
    }

    if (value.HasMember("Registro") && !value["Registro"].IsNull())
    {
        if (!value["Registro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.Registro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registro = string(value["Registro"].GetString());
        m_registroHasBeenSet = true;
    }

    if (value.HasMember("PortraitImage") && !value["PortraitImage"].IsNull())
    {
        if (!value["PortraitImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.PortraitImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitImage = string(value["PortraitImage"].GetString());
        m_portraitImageHasBeenSet = true;
    }

    if (value.HasMember("DocOrigem") && !value["DocOrigem"].IsNull())
    {
        if (!value["DocOrigem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrazilIDCardInfo.DocOrigem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docOrigem = string(value["DocOrigem"].GetString());
        m_docOrigemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BrazilIDCardInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nomeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nome";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nome.c_str(), allocator).Move(), allocator);
    }

    if (m_memberShipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberShip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberShip.c_str(), allocator).Move(), allocator);
    }

    if (m_dataNascimentoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataNascimento";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataNascimento.c_str(), allocator).Move(), allocator);
    }

    if (m_issuingAgencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuingAgency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuingAgency.c_str(), allocator).Move(), allocator);
    }

    if (m_fatorrhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fatorrh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fatorrh.c_str(), allocator).Move(), allocator);
    }

    if (m_naturalIDadeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NaturalIDade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_naturalIDade.c_str(), allocator).Move(), allocator);
    }

    if (m_observationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Observations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_observations.c_str(), allocator).Move(), allocator);
    }

    if (m_cPFHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPF";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cPF.c_str(), allocator).Move(), allocator);
    }

    if (m_dNIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DNI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dNI.c_str(), allocator).Move(), allocator);
    }

    if (m_registroGeralHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistroGeral";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registroGeral.c_str(), allocator).Move(), allocator);
    }

    if (m_dispatchDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispatchDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dispatchDate.c_str(), allocator).Move(), allocator);
    }

    if (m_registroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Registro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registro.c_str(), allocator).Move(), allocator);
    }

    if (m_portraitImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portraitImage.c_str(), allocator).Move(), allocator);
    }

    if (m_docOrigemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocOrigem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docOrigem.c_str(), allocator).Move(), allocator);
    }

}


string BrazilIDCardInfo::GetNome() const
{
    return m_nome;
}

void BrazilIDCardInfo::SetNome(const string& _nome)
{
    m_nome = _nome;
    m_nomeHasBeenSet = true;
}

bool BrazilIDCardInfo::NomeHasBeenSet() const
{
    return m_nomeHasBeenSet;
}

string BrazilIDCardInfo::GetMemberShip() const
{
    return m_memberShip;
}

void BrazilIDCardInfo::SetMemberShip(const string& _memberShip)
{
    m_memberShip = _memberShip;
    m_memberShipHasBeenSet = true;
}

bool BrazilIDCardInfo::MemberShipHasBeenSet() const
{
    return m_memberShipHasBeenSet;
}

string BrazilIDCardInfo::GetDataNascimento() const
{
    return m_dataNascimento;
}

void BrazilIDCardInfo::SetDataNascimento(const string& _dataNascimento)
{
    m_dataNascimento = _dataNascimento;
    m_dataNascimentoHasBeenSet = true;
}

bool BrazilIDCardInfo::DataNascimentoHasBeenSet() const
{
    return m_dataNascimentoHasBeenSet;
}

string BrazilIDCardInfo::GetIssuingAgency() const
{
    return m_issuingAgency;
}

void BrazilIDCardInfo::SetIssuingAgency(const string& _issuingAgency)
{
    m_issuingAgency = _issuingAgency;
    m_issuingAgencyHasBeenSet = true;
}

bool BrazilIDCardInfo::IssuingAgencyHasBeenSet() const
{
    return m_issuingAgencyHasBeenSet;
}

string BrazilIDCardInfo::GetFatorrh() const
{
    return m_fatorrh;
}

void BrazilIDCardInfo::SetFatorrh(const string& _fatorrh)
{
    m_fatorrh = _fatorrh;
    m_fatorrhHasBeenSet = true;
}

bool BrazilIDCardInfo::FatorrhHasBeenSet() const
{
    return m_fatorrhHasBeenSet;
}

string BrazilIDCardInfo::GetNaturalIDade() const
{
    return m_naturalIDade;
}

void BrazilIDCardInfo::SetNaturalIDade(const string& _naturalIDade)
{
    m_naturalIDade = _naturalIDade;
    m_naturalIDadeHasBeenSet = true;
}

bool BrazilIDCardInfo::NaturalIDadeHasBeenSet() const
{
    return m_naturalIDadeHasBeenSet;
}

string BrazilIDCardInfo::GetObservations() const
{
    return m_observations;
}

void BrazilIDCardInfo::SetObservations(const string& _observations)
{
    m_observations = _observations;
    m_observationsHasBeenSet = true;
}

bool BrazilIDCardInfo::ObservationsHasBeenSet() const
{
    return m_observationsHasBeenSet;
}

string BrazilIDCardInfo::GetCPF() const
{
    return m_cPF;
}

void BrazilIDCardInfo::SetCPF(const string& _cPF)
{
    m_cPF = _cPF;
    m_cPFHasBeenSet = true;
}

bool BrazilIDCardInfo::CPFHasBeenSet() const
{
    return m_cPFHasBeenSet;
}

string BrazilIDCardInfo::GetDNI() const
{
    return m_dNI;
}

void BrazilIDCardInfo::SetDNI(const string& _dNI)
{
    m_dNI = _dNI;
    m_dNIHasBeenSet = true;
}

bool BrazilIDCardInfo::DNIHasBeenSet() const
{
    return m_dNIHasBeenSet;
}

string BrazilIDCardInfo::GetRegistroGeral() const
{
    return m_registroGeral;
}

void BrazilIDCardInfo::SetRegistroGeral(const string& _registroGeral)
{
    m_registroGeral = _registroGeral;
    m_registroGeralHasBeenSet = true;
}

bool BrazilIDCardInfo::RegistroGeralHasBeenSet() const
{
    return m_registroGeralHasBeenSet;
}

string BrazilIDCardInfo::GetDispatchDate() const
{
    return m_dispatchDate;
}

void BrazilIDCardInfo::SetDispatchDate(const string& _dispatchDate)
{
    m_dispatchDate = _dispatchDate;
    m_dispatchDateHasBeenSet = true;
}

bool BrazilIDCardInfo::DispatchDateHasBeenSet() const
{
    return m_dispatchDateHasBeenSet;
}

string BrazilIDCardInfo::GetRegistro() const
{
    return m_registro;
}

void BrazilIDCardInfo::SetRegistro(const string& _registro)
{
    m_registro = _registro;
    m_registroHasBeenSet = true;
}

bool BrazilIDCardInfo::RegistroHasBeenSet() const
{
    return m_registroHasBeenSet;
}

string BrazilIDCardInfo::GetPortraitImage() const
{
    return m_portraitImage;
}

void BrazilIDCardInfo::SetPortraitImage(const string& _portraitImage)
{
    m_portraitImage = _portraitImage;
    m_portraitImageHasBeenSet = true;
}

bool BrazilIDCardInfo::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}

string BrazilIDCardInfo::GetDocOrigem() const
{
    return m_docOrigem;
}

void BrazilIDCardInfo::SetDocOrigem(const string& _docOrigem)
{
    m_docOrigem = _docOrigem;
    m_docOrigemHasBeenSet = true;
}

bool BrazilIDCardInfo::DocOrigemHasBeenSet() const
{
    return m_docOrigemHasBeenSet;
}

