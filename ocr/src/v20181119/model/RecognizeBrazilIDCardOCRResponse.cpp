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

#include <tencentcloud/ocr/v20181119/model/RecognizeBrazilIDCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeBrazilIDCardOCRResponse::RecognizeBrazilIDCardOCRResponse() :
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

CoreInternalOutcome RecognizeBrazilIDCardOCRResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Nome") && !rsp["Nome"].IsNull())
    {
        if (!rsp["Nome"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Nome` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nome = string(rsp["Nome"].GetString());
        m_nomeHasBeenSet = true;
    }

    if (rsp.HasMember("MemberShip") && !rsp["MemberShip"].IsNull())
    {
        if (!rsp["MemberShip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberShip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberShip = string(rsp["MemberShip"].GetString());
        m_memberShipHasBeenSet = true;
    }

    if (rsp.HasMember("DataNascimento") && !rsp["DataNascimento"].IsNull())
    {
        if (!rsp["DataNascimento"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataNascimento` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataNascimento = string(rsp["DataNascimento"].GetString());
        m_dataNascimentoHasBeenSet = true;
    }

    if (rsp.HasMember("IssuingAgency") && !rsp["IssuingAgency"].IsNull())
    {
        if (!rsp["IssuingAgency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssuingAgency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuingAgency = string(rsp["IssuingAgency"].GetString());
        m_issuingAgencyHasBeenSet = true;
    }

    if (rsp.HasMember("Fatorrh") && !rsp["Fatorrh"].IsNull())
    {
        if (!rsp["Fatorrh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Fatorrh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fatorrh = string(rsp["Fatorrh"].GetString());
        m_fatorrhHasBeenSet = true;
    }

    if (rsp.HasMember("NaturalIDade") && !rsp["NaturalIDade"].IsNull())
    {
        if (!rsp["NaturalIDade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NaturalIDade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_naturalIDade = string(rsp["NaturalIDade"].GetString());
        m_naturalIDadeHasBeenSet = true;
    }

    if (rsp.HasMember("Observations") && !rsp["Observations"].IsNull())
    {
        if (!rsp["Observations"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Observations` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_observations = string(rsp["Observations"].GetString());
        m_observationsHasBeenSet = true;
    }

    if (rsp.HasMember("CPF") && !rsp["CPF"].IsNull())
    {
        if (!rsp["CPF"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CPF` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cPF = string(rsp["CPF"].GetString());
        m_cPFHasBeenSet = true;
    }

    if (rsp.HasMember("DNI") && !rsp["DNI"].IsNull())
    {
        if (!rsp["DNI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DNI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dNI = string(rsp["DNI"].GetString());
        m_dNIHasBeenSet = true;
    }

    if (rsp.HasMember("RegistroGeral") && !rsp["RegistroGeral"].IsNull())
    {
        if (!rsp["RegistroGeral"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistroGeral` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registroGeral = string(rsp["RegistroGeral"].GetString());
        m_registroGeralHasBeenSet = true;
    }

    if (rsp.HasMember("DispatchDate") && !rsp["DispatchDate"].IsNull())
    {
        if (!rsp["DispatchDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DispatchDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dispatchDate = string(rsp["DispatchDate"].GetString());
        m_dispatchDateHasBeenSet = true;
    }

    if (rsp.HasMember("Registro") && !rsp["Registro"].IsNull())
    {
        if (!rsp["Registro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Registro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registro = string(rsp["Registro"].GetString());
        m_registroHasBeenSet = true;
    }

    if (rsp.HasMember("PortraitImage") && !rsp["PortraitImage"].IsNull())
    {
        if (!rsp["PortraitImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitImage = string(rsp["PortraitImage"].GetString());
        m_portraitImageHasBeenSet = true;
    }

    if (rsp.HasMember("DocOrigem") && !rsp["DocOrigem"].IsNull())
    {
        if (!rsp["DocOrigem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocOrigem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docOrigem = string(rsp["DocOrigem"].GetString());
        m_docOrigemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeBrazilIDCardOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string RecognizeBrazilIDCardOCRResponse::GetNome() const
{
    return m_nome;
}

bool RecognizeBrazilIDCardOCRResponse::NomeHasBeenSet() const
{
    return m_nomeHasBeenSet;
}

string RecognizeBrazilIDCardOCRResponse::GetMemberShip() const
{
    return m_memberShip;
}

bool RecognizeBrazilIDCardOCRResponse::MemberShipHasBeenSet() const
{
    return m_memberShipHasBeenSet;
}

string RecognizeBrazilIDCardOCRResponse::GetDataNascimento() const
{
    return m_dataNascimento;
}

bool RecognizeBrazilIDCardOCRResponse::DataNascimentoHasBeenSet() const
{
    return m_dataNascimentoHasBeenSet;
}

string RecognizeBrazilIDCardOCRResponse::GetIssuingAgency() const
{
    return m_issuingAgency;
}

bool RecognizeBrazilIDCardOCRResponse::IssuingAgencyHasBeenSet() const
{
    return m_issuingAgencyHasBeenSet;
}

string RecognizeBrazilIDCardOCRResponse::GetFatorrh() const
{
    return m_fatorrh;
}

bool RecognizeBrazilIDCardOCRResponse::FatorrhHasBeenSet() const
{
    return m_fatorrhHasBeenSet;
}

string RecognizeBrazilIDCardOCRResponse::GetNaturalIDade() const
{
    return m_naturalIDade;
}

bool RecognizeBrazilIDCardOCRResponse::NaturalIDadeHasBeenSet() const
{
    return m_naturalIDadeHasBeenSet;
}

string RecognizeBrazilIDCardOCRResponse::GetObservations() const
{
    return m_observations;
}

bool RecognizeBrazilIDCardOCRResponse::ObservationsHasBeenSet() const
{
    return m_observationsHasBeenSet;
}

string RecognizeBrazilIDCardOCRResponse::GetCPF() const
{
    return m_cPF;
}

bool RecognizeBrazilIDCardOCRResponse::CPFHasBeenSet() const
{
    return m_cPFHasBeenSet;
}

string RecognizeBrazilIDCardOCRResponse::GetDNI() const
{
    return m_dNI;
}

bool RecognizeBrazilIDCardOCRResponse::DNIHasBeenSet() const
{
    return m_dNIHasBeenSet;
}

string RecognizeBrazilIDCardOCRResponse::GetRegistroGeral() const
{
    return m_registroGeral;
}

bool RecognizeBrazilIDCardOCRResponse::RegistroGeralHasBeenSet() const
{
    return m_registroGeralHasBeenSet;
}

string RecognizeBrazilIDCardOCRResponse::GetDispatchDate() const
{
    return m_dispatchDate;
}

bool RecognizeBrazilIDCardOCRResponse::DispatchDateHasBeenSet() const
{
    return m_dispatchDateHasBeenSet;
}

string RecognizeBrazilIDCardOCRResponse::GetRegistro() const
{
    return m_registro;
}

bool RecognizeBrazilIDCardOCRResponse::RegistroHasBeenSet() const
{
    return m_registroHasBeenSet;
}

string RecognizeBrazilIDCardOCRResponse::GetPortraitImage() const
{
    return m_portraitImage;
}

bool RecognizeBrazilIDCardOCRResponse::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}

string RecognizeBrazilIDCardOCRResponse::GetDocOrigem() const
{
    return m_docOrigem;
}

bool RecognizeBrazilIDCardOCRResponse::DocOrigemHasBeenSet() const
{
    return m_docOrigemHasBeenSet;
}


