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

#include <tencentcloud/mdl/v20200326/model/SubtitleConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

SubtitleConf::SubtitleConf() :
    m_nameHasBeenSet(false),
    m_captionSelectorNameHasBeenSet(false),
    m_captionSourceHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_sourceLanguageHasBeenSet(false),
    m_targetLanguageHasBeenSet(false),
    m_fontStyleHasBeenSet(false),
    m_stateEffectModeHasBeenSet(false),
    m_steadyStateDelayedTimeHasBeenSet(false),
    m_audioSelectorNameHasBeenSet(false),
    m_webVTTFontStyleHasBeenSet(false),
    m_languageCodeHasBeenSet(false),
    m_languageDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CaptionSelectorName") && !value["CaptionSelectorName"].IsNull())
    {
        if (!value["CaptionSelectorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.CaptionSelectorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_captionSelectorName = string(value["CaptionSelectorName"].GetString());
        m_captionSelectorNameHasBeenSet = true;
    }

    if (value.HasMember("CaptionSource") && !value["CaptionSource"].IsNull())
    {
        if (!value["CaptionSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.CaptionSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_captionSource = string(value["CaptionSource"].GetString());
        m_captionSourceHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.ContentType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = value["ContentType"].GetUint64();
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.TargetType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = value["TargetType"].GetUint64();
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceLanguage") && !value["SourceLanguage"].IsNull())
    {
        if (!value["SourceLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.SourceLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceLanguage = string(value["SourceLanguage"].GetString());
        m_sourceLanguageHasBeenSet = true;
    }

    if (value.HasMember("TargetLanguage") && !value["TargetLanguage"].IsNull())
    {
        if (!value["TargetLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.TargetLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetLanguage = string(value["TargetLanguage"].GetString());
        m_targetLanguageHasBeenSet = true;
    }

    if (value.HasMember("FontStyle") && !value["FontStyle"].IsNull())
    {
        if (!value["FontStyle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.FontStyle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fontStyle.Deserialize(value["FontStyle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fontStyleHasBeenSet = true;
    }

    if (value.HasMember("StateEffectMode") && !value["StateEffectMode"].IsNull())
    {
        if (!value["StateEffectMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.StateEffectMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateEffectMode = string(value["StateEffectMode"].GetString());
        m_stateEffectModeHasBeenSet = true;
    }

    if (value.HasMember("SteadyStateDelayedTime") && !value["SteadyStateDelayedTime"].IsNull())
    {
        if (!value["SteadyStateDelayedTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.SteadyStateDelayedTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_steadyStateDelayedTime = value["SteadyStateDelayedTime"].GetUint64();
        m_steadyStateDelayedTimeHasBeenSet = true;
    }

    if (value.HasMember("AudioSelectorName") && !value["AudioSelectorName"].IsNull())
    {
        if (!value["AudioSelectorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.AudioSelectorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioSelectorName = string(value["AudioSelectorName"].GetString());
        m_audioSelectorNameHasBeenSet = true;
    }

    if (value.HasMember("WebVTTFontStyle") && !value["WebVTTFontStyle"].IsNull())
    {
        if (!value["WebVTTFontStyle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.WebVTTFontStyle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webVTTFontStyle.Deserialize(value["WebVTTFontStyle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webVTTFontStyleHasBeenSet = true;
    }

    if (value.HasMember("LanguageCode") && !value["LanguageCode"].IsNull())
    {
        if (!value["LanguageCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.LanguageCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_languageCode = string(value["LanguageCode"].GetString());
        m_languageCodeHasBeenSet = true;
    }

    if (value.HasMember("LanguageDescription") && !value["LanguageDescription"].IsNull())
    {
        if (!value["LanguageDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleConf.LanguageDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_languageDescription = string(value["LanguageDescription"].GetString());
        m_languageDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_captionSelectorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptionSelectorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_captionSelectorName.c_str(), allocator).Move(), allocator);
    }

    if (m_captionSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptionSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_captionSource.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentType, allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetType, allocator);
    }

    if (m_sourceLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_targetLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_fontStyleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontStyle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fontStyle.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stateEffectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateEffectMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateEffectMode.c_str(), allocator).Move(), allocator);
    }

    if (m_steadyStateDelayedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SteadyStateDelayedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_steadyStateDelayedTime, allocator);
    }

    if (m_audioSelectorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSelectorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioSelectorName.c_str(), allocator).Move(), allocator);
    }

    if (m_webVTTFontStyleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebVTTFontStyle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webVTTFontStyle.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_languageCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_languageCode.c_str(), allocator).Move(), allocator);
    }

    if (m_languageDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_languageDescription.c_str(), allocator).Move(), allocator);
    }

}


string SubtitleConf::GetName() const
{
    return m_name;
}

void SubtitleConf::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SubtitleConf::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SubtitleConf::GetCaptionSelectorName() const
{
    return m_captionSelectorName;
}

void SubtitleConf::SetCaptionSelectorName(const string& _captionSelectorName)
{
    m_captionSelectorName = _captionSelectorName;
    m_captionSelectorNameHasBeenSet = true;
}

bool SubtitleConf::CaptionSelectorNameHasBeenSet() const
{
    return m_captionSelectorNameHasBeenSet;
}

string SubtitleConf::GetCaptionSource() const
{
    return m_captionSource;
}

void SubtitleConf::SetCaptionSource(const string& _captionSource)
{
    m_captionSource = _captionSource;
    m_captionSourceHasBeenSet = true;
}

bool SubtitleConf::CaptionSourceHasBeenSet() const
{
    return m_captionSourceHasBeenSet;
}

uint64_t SubtitleConf::GetContentType() const
{
    return m_contentType;
}

void SubtitleConf::SetContentType(const uint64_t& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool SubtitleConf::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

uint64_t SubtitleConf::GetTargetType() const
{
    return m_targetType;
}

void SubtitleConf::SetTargetType(const uint64_t& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool SubtitleConf::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string SubtitleConf::GetSourceLanguage() const
{
    return m_sourceLanguage;
}

void SubtitleConf::SetSourceLanguage(const string& _sourceLanguage)
{
    m_sourceLanguage = _sourceLanguage;
    m_sourceLanguageHasBeenSet = true;
}

bool SubtitleConf::SourceLanguageHasBeenSet() const
{
    return m_sourceLanguageHasBeenSet;
}

string SubtitleConf::GetTargetLanguage() const
{
    return m_targetLanguage;
}

void SubtitleConf::SetTargetLanguage(const string& _targetLanguage)
{
    m_targetLanguage = _targetLanguage;
    m_targetLanguageHasBeenSet = true;
}

bool SubtitleConf::TargetLanguageHasBeenSet() const
{
    return m_targetLanguageHasBeenSet;
}

SubtitleFontConf SubtitleConf::GetFontStyle() const
{
    return m_fontStyle;
}

void SubtitleConf::SetFontStyle(const SubtitleFontConf& _fontStyle)
{
    m_fontStyle = _fontStyle;
    m_fontStyleHasBeenSet = true;
}

bool SubtitleConf::FontStyleHasBeenSet() const
{
    return m_fontStyleHasBeenSet;
}

string SubtitleConf::GetStateEffectMode() const
{
    return m_stateEffectMode;
}

void SubtitleConf::SetStateEffectMode(const string& _stateEffectMode)
{
    m_stateEffectMode = _stateEffectMode;
    m_stateEffectModeHasBeenSet = true;
}

bool SubtitleConf::StateEffectModeHasBeenSet() const
{
    return m_stateEffectModeHasBeenSet;
}

uint64_t SubtitleConf::GetSteadyStateDelayedTime() const
{
    return m_steadyStateDelayedTime;
}

void SubtitleConf::SetSteadyStateDelayedTime(const uint64_t& _steadyStateDelayedTime)
{
    m_steadyStateDelayedTime = _steadyStateDelayedTime;
    m_steadyStateDelayedTimeHasBeenSet = true;
}

bool SubtitleConf::SteadyStateDelayedTimeHasBeenSet() const
{
    return m_steadyStateDelayedTimeHasBeenSet;
}

string SubtitleConf::GetAudioSelectorName() const
{
    return m_audioSelectorName;
}

void SubtitleConf::SetAudioSelectorName(const string& _audioSelectorName)
{
    m_audioSelectorName = _audioSelectorName;
    m_audioSelectorNameHasBeenSet = true;
}

bool SubtitleConf::AudioSelectorNameHasBeenSet() const
{
    return m_audioSelectorNameHasBeenSet;
}

WebVTTFontStyle SubtitleConf::GetWebVTTFontStyle() const
{
    return m_webVTTFontStyle;
}

void SubtitleConf::SetWebVTTFontStyle(const WebVTTFontStyle& _webVTTFontStyle)
{
    m_webVTTFontStyle = _webVTTFontStyle;
    m_webVTTFontStyleHasBeenSet = true;
}

bool SubtitleConf::WebVTTFontStyleHasBeenSet() const
{
    return m_webVTTFontStyleHasBeenSet;
}

string SubtitleConf::GetLanguageCode() const
{
    return m_languageCode;
}

void SubtitleConf::SetLanguageCode(const string& _languageCode)
{
    m_languageCode = _languageCode;
    m_languageCodeHasBeenSet = true;
}

bool SubtitleConf::LanguageCodeHasBeenSet() const
{
    return m_languageCodeHasBeenSet;
}

string SubtitleConf::GetLanguageDescription() const
{
    return m_languageDescription;
}

void SubtitleConf::SetLanguageDescription(const string& _languageDescription)
{
    m_languageDescription = _languageDescription;
    m_languageDescriptionHasBeenSet = true;
}

bool SubtitleConf::LanguageDescriptionHasBeenSet() const
{
    return m_languageDescriptionHasBeenSet;
}

