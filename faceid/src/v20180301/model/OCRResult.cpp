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

#include <tencentcloud/faceid/v20180301/model/OCRResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

OCRResult::OCRResult() :
    m_isPassHasBeenSet(false),
    m_cardImageBase64HasBeenSet(false),
    m_cardInfoHasBeenSet(false),
    m_normalCardInfoHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_cardCutImageBase64HasBeenSet(false),
    m_cardBackCutImageBase64HasBeenSet(false),
    m_warnCardInfosHasBeenSet(false)
{
}

CoreInternalOutcome OCRResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsPass") && !value["IsPass"].IsNull())
    {
        if (!value["IsPass"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OCRResult.IsPass` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPass = value["IsPass"].GetBool();
        m_isPassHasBeenSet = true;
    }

    if (value.HasMember("CardImageBase64") && !value["CardImageBase64"].IsNull())
    {
        if (!value["CardImageBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OCRResult.CardImageBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardImageBase64 = string(value["CardImageBase64"].GetString());
        m_cardImageBase64HasBeenSet = true;
    }

    if (value.HasMember("CardInfo") && !value["CardInfo"].IsNull())
    {
        if (!value["CardInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OCRResult.CardInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cardInfo.Deserialize(value["CardInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cardInfoHasBeenSet = true;
    }

    if (value.HasMember("NormalCardInfo") && !value["NormalCardInfo"].IsNull())
    {
        if (!value["NormalCardInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OCRResult.NormalCardInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_normalCardInfo.Deserialize(value["NormalCardInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_normalCardInfoHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OCRResult.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("CardCutImageBase64") && !value["CardCutImageBase64"].IsNull())
    {
        if (!value["CardCutImageBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OCRResult.CardCutImageBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardCutImageBase64 = string(value["CardCutImageBase64"].GetString());
        m_cardCutImageBase64HasBeenSet = true;
    }

    if (value.HasMember("CardBackCutImageBase64") && !value["CardBackCutImageBase64"].IsNull())
    {
        if (!value["CardBackCutImageBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OCRResult.CardBackCutImageBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cardBackCutImageBase64 = string(value["CardBackCutImageBase64"].GetString());
        m_cardBackCutImageBase64HasBeenSet = true;
    }

    if (value.HasMember("WarnCardInfos") && !value["WarnCardInfos"].IsNull())
    {
        if (!value["WarnCardInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OCRResult.WarnCardInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["WarnCardInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warnCardInfos.push_back((*itr).GetInt64());
        }
        m_warnCardInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OCRResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPass, allocator);
    }

    if (m_cardImageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardImageBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardImageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_cardInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cardInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_normalCardInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalCardInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_normalCardInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_cardCutImageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardCutImageBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardCutImageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_cardBackCutImageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardBackCutImageBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cardBackCutImageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_warnCardInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnCardInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_warnCardInfos.begin(); itr != m_warnCardInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


bool OCRResult::GetIsPass() const
{
    return m_isPass;
}

void OCRResult::SetIsPass(const bool& _isPass)
{
    m_isPass = _isPass;
    m_isPassHasBeenSet = true;
}

bool OCRResult::IsPassHasBeenSet() const
{
    return m_isPassHasBeenSet;
}

string OCRResult::GetCardImageBase64() const
{
    return m_cardImageBase64;
}

void OCRResult::SetCardImageBase64(const string& _cardImageBase64)
{
    m_cardImageBase64 = _cardImageBase64;
    m_cardImageBase64HasBeenSet = true;
}

bool OCRResult::CardImageBase64HasBeenSet() const
{
    return m_cardImageBase64HasBeenSet;
}

CardInfo OCRResult::GetCardInfo() const
{
    return m_cardInfo;
}

void OCRResult::SetCardInfo(const CardInfo& _cardInfo)
{
    m_cardInfo = _cardInfo;
    m_cardInfoHasBeenSet = true;
}

bool OCRResult::CardInfoHasBeenSet() const
{
    return m_cardInfoHasBeenSet;
}

NormalCardInfo OCRResult::GetNormalCardInfo() const
{
    return m_normalCardInfo;
}

void OCRResult::SetNormalCardInfo(const NormalCardInfo& _normalCardInfo)
{
    m_normalCardInfo = _normalCardInfo;
    m_normalCardInfoHasBeenSet = true;
}

bool OCRResult::NormalCardInfoHasBeenSet() const
{
    return m_normalCardInfoHasBeenSet;
}

string OCRResult::GetRequestId() const
{
    return m_requestId;
}

void OCRResult::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool OCRResult::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string OCRResult::GetCardCutImageBase64() const
{
    return m_cardCutImageBase64;
}

void OCRResult::SetCardCutImageBase64(const string& _cardCutImageBase64)
{
    m_cardCutImageBase64 = _cardCutImageBase64;
    m_cardCutImageBase64HasBeenSet = true;
}

bool OCRResult::CardCutImageBase64HasBeenSet() const
{
    return m_cardCutImageBase64HasBeenSet;
}

string OCRResult::GetCardBackCutImageBase64() const
{
    return m_cardBackCutImageBase64;
}

void OCRResult::SetCardBackCutImageBase64(const string& _cardBackCutImageBase64)
{
    m_cardBackCutImageBase64 = _cardBackCutImageBase64;
    m_cardBackCutImageBase64HasBeenSet = true;
}

bool OCRResult::CardBackCutImageBase64HasBeenSet() const
{
    return m_cardBackCutImageBase64HasBeenSet;
}

vector<int64_t> OCRResult::GetWarnCardInfos() const
{
    return m_warnCardInfos;
}

void OCRResult::SetWarnCardInfos(const vector<int64_t>& _warnCardInfos)
{
    m_warnCardInfos = _warnCardInfos;
    m_warnCardInfosHasBeenSet = true;
}

bool OCRResult::WarnCardInfosHasBeenSet() const
{
    return m_warnCardInfosHasBeenSet;
}

