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

#include <tencentcloud/faceid/v20180301/model/CardVerifyResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

CardVerifyResult::CardVerifyResult() :
    m_isPassHasBeenSet(false),
    m_isEditHasBeenSet(false),
    m_cardVideoHasBeenSet(false),
    m_cardImageHasBeenSet(false),
    m_cardInfoOcrJsonHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_cardInfoHasBeenSet(false),
    m_normalCardInfoHasBeenSet(false),
    m_warnCardInfosHasBeenSet(false),
    m_editDetailsHasBeenSet(false)
{
}

CoreInternalOutcome CardVerifyResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsPass") && !value["IsPass"].IsNull())
    {
        if (!value["IsPass"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.IsPass` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPass = value["IsPass"].GetBool();
        m_isPassHasBeenSet = true;
    }

    if (value.HasMember("IsEdit") && !value["IsEdit"].IsNull())
    {
        if (!value["IsEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.IsEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEdit = value["IsEdit"].GetBool();
        m_isEditHasBeenSet = true;
    }

    if (value.HasMember("CardVideo") && !value["CardVideo"].IsNull())
    {
        if (!value["CardVideo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.CardVideo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cardVideo.Deserialize(value["CardVideo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cardVideoHasBeenSet = true;
    }

    if (value.HasMember("CardImage") && !value["CardImage"].IsNull())
    {
        if (!value["CardImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.CardImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cardImage.Deserialize(value["CardImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cardImageHasBeenSet = true;
    }

    if (value.HasMember("CardInfoOcrJson") && !value["CardInfoOcrJson"].IsNull())
    {
        if (!value["CardInfoOcrJson"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.CardInfoOcrJson` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cardInfoOcrJson.Deserialize(value["CardInfoOcrJson"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cardInfoOcrJsonHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("CardInfo") && !value["CardInfo"].IsNull())
    {
        if (!value["CardInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.CardInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.NormalCardInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_normalCardInfo.Deserialize(value["NormalCardInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_normalCardInfoHasBeenSet = true;
    }

    if (value.HasMember("WarnCardInfos") && !value["WarnCardInfos"].IsNull())
    {
        if (!value["WarnCardInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.WarnCardInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["WarnCardInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_warnCardInfos.push_back((*itr).GetInt64());
        }
        m_warnCardInfosHasBeenSet = true;
    }

    if (value.HasMember("EditDetails") && !value["EditDetails"].IsNull())
    {
        if (!value["EditDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.EditDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["EditDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EditDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_editDetails.push_back(item);
        }
        m_editDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CardVerifyResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPass, allocator);
    }

    if (m_isEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEdit, allocator);
    }

    if (m_cardVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cardVideo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cardImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cardImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cardInfoOcrJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardInfoOcrJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cardInfoOcrJson.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
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

    if (m_editDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_editDetails.begin(); itr != m_editDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool CardVerifyResult::GetIsPass() const
{
    return m_isPass;
}

void CardVerifyResult::SetIsPass(const bool& _isPass)
{
    m_isPass = _isPass;
    m_isPassHasBeenSet = true;
}

bool CardVerifyResult::IsPassHasBeenSet() const
{
    return m_isPassHasBeenSet;
}

bool CardVerifyResult::GetIsEdit() const
{
    return m_isEdit;
}

void CardVerifyResult::SetIsEdit(const bool& _isEdit)
{
    m_isEdit = _isEdit;
    m_isEditHasBeenSet = true;
}

bool CardVerifyResult::IsEditHasBeenSet() const
{
    return m_isEditHasBeenSet;
}

FileInfo CardVerifyResult::GetCardVideo() const
{
    return m_cardVideo;
}

void CardVerifyResult::SetCardVideo(const FileInfo& _cardVideo)
{
    m_cardVideo = _cardVideo;
    m_cardVideoHasBeenSet = true;
}

bool CardVerifyResult::CardVideoHasBeenSet() const
{
    return m_cardVideoHasBeenSet;
}

FileInfo CardVerifyResult::GetCardImage() const
{
    return m_cardImage;
}

void CardVerifyResult::SetCardImage(const FileInfo& _cardImage)
{
    m_cardImage = _cardImage;
    m_cardImageHasBeenSet = true;
}

bool CardVerifyResult::CardImageHasBeenSet() const
{
    return m_cardImageHasBeenSet;
}

FileInfo CardVerifyResult::GetCardInfoOcrJson() const
{
    return m_cardInfoOcrJson;
}

void CardVerifyResult::SetCardInfoOcrJson(const FileInfo& _cardInfoOcrJson)
{
    m_cardInfoOcrJson = _cardInfoOcrJson;
    m_cardInfoOcrJsonHasBeenSet = true;
}

bool CardVerifyResult::CardInfoOcrJsonHasBeenSet() const
{
    return m_cardInfoOcrJsonHasBeenSet;
}

string CardVerifyResult::GetRequestId() const
{
    return m_requestId;
}

void CardVerifyResult::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool CardVerifyResult::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

CardInfo CardVerifyResult::GetCardInfo() const
{
    return m_cardInfo;
}

void CardVerifyResult::SetCardInfo(const CardInfo& _cardInfo)
{
    m_cardInfo = _cardInfo;
    m_cardInfoHasBeenSet = true;
}

bool CardVerifyResult::CardInfoHasBeenSet() const
{
    return m_cardInfoHasBeenSet;
}

NormalCardInfo CardVerifyResult::GetNormalCardInfo() const
{
    return m_normalCardInfo;
}

void CardVerifyResult::SetNormalCardInfo(const NormalCardInfo& _normalCardInfo)
{
    m_normalCardInfo = _normalCardInfo;
    m_normalCardInfoHasBeenSet = true;
}

bool CardVerifyResult::NormalCardInfoHasBeenSet() const
{
    return m_normalCardInfoHasBeenSet;
}

vector<int64_t> CardVerifyResult::GetWarnCardInfos() const
{
    return m_warnCardInfos;
}

void CardVerifyResult::SetWarnCardInfos(const vector<int64_t>& _warnCardInfos)
{
    m_warnCardInfos = _warnCardInfos;
    m_warnCardInfosHasBeenSet = true;
}

bool CardVerifyResult::WarnCardInfosHasBeenSet() const
{
    return m_warnCardInfosHasBeenSet;
}

vector<EditDetail> CardVerifyResult::GetEditDetails() const
{
    return m_editDetails;
}

void CardVerifyResult::SetEditDetails(const vector<EditDetail>& _editDetails)
{
    m_editDetails = _editDetails;
    m_editDetailsHasBeenSet = true;
}

bool CardVerifyResult::EditDetailsHasBeenSet() const
{
    return m_editDetailsHasBeenSet;
}

