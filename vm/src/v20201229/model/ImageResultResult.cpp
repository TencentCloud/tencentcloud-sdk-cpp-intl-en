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

#include <tencentcloud/vm/v20201229/model/ImageResultResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20201229::Model;
using namespace std;

ImageResultResult::ImageResultResult() :
    m_sceneHasBeenSet(false),
    m_hitFlagHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_subLabelHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_namesHasBeenSet(false),
    m_textHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

CoreInternalOutcome ImageResultResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResultResult.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("HitFlag") && !value["HitFlag"].IsNull())
    {
        if (!value["HitFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResultResult.HitFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hitFlag = value["HitFlag"].GetInt64();
        m_hitFlagHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResultResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResultResult.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("SubLabel") && !value["SubLabel"].IsNull())
    {
        if (!value["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResultResult.SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(value["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResultResult.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Names") && !value["Names"].IsNull())
    {
        if (!value["Names"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageResultResult.Names` is not array type"));

        const rapidjson::Value &tmpValue = value["Names"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_names.push_back((*itr).GetString());
        }
        m_namesHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageResultResult.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageResultResult.Details` is not array type"));

        const rapidjson::Value &tmpValue = value["Details"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageResultsResultDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_details.push_back(item);
        }
        m_detailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageResultResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_hitFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitFlag, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_subLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_namesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Names";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_names.begin(); itr != m_names.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_details.begin(); itr != m_details.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ImageResultResult::GetScene() const
{
    return m_scene;
}

void ImageResultResult::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool ImageResultResult::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

int64_t ImageResultResult::GetHitFlag() const
{
    return m_hitFlag;
}

void ImageResultResult::SetHitFlag(const int64_t& _hitFlag)
{
    m_hitFlag = _hitFlag;
    m_hitFlagHasBeenSet = true;
}

bool ImageResultResult::HitFlagHasBeenSet() const
{
    return m_hitFlagHasBeenSet;
}

string ImageResultResult::GetSuggestion() const
{
    return m_suggestion;
}

void ImageResultResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool ImageResultResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string ImageResultResult::GetLabel() const
{
    return m_label;
}

void ImageResultResult::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool ImageResultResult::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string ImageResultResult::GetSubLabel() const
{
    return m_subLabel;
}

void ImageResultResult::SetSubLabel(const string& _subLabel)
{
    m_subLabel = _subLabel;
    m_subLabelHasBeenSet = true;
}

bool ImageResultResult::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

int64_t ImageResultResult::GetScore() const
{
    return m_score;
}

void ImageResultResult::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ImageResultResult::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<string> ImageResultResult::GetNames() const
{
    return m_names;
}

void ImageResultResult::SetNames(const vector<string>& _names)
{
    m_names = _names;
    m_namesHasBeenSet = true;
}

bool ImageResultResult::NamesHasBeenSet() const
{
    return m_namesHasBeenSet;
}

string ImageResultResult::GetText() const
{
    return m_text;
}

void ImageResultResult::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ImageResultResult::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<ImageResultsResultDetail> ImageResultResult::GetDetails() const
{
    return m_details;
}

void ImageResultResult::SetDetails(const vector<ImageResultsResultDetail>& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool ImageResultResult::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

