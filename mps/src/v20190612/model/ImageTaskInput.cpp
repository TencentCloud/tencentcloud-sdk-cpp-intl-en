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

#include <tencentcloud/mps/v20190612/model/ImageTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ImageTaskInput::ImageTaskInput() :
    m_encodeConfigHasBeenSet(false),
    m_enhanceConfigHasBeenSet(false),
    m_eraseConfigHasBeenSet(false),
    m_aiPosterSuiteConfigHasBeenSet(false),
    m_aiCutoutConfigHasBeenSet(false),
    m_aiExpansionConfigHasBeenSet(false),
    m_aiStoryboardConfigHasBeenSet(false),
    m_understandImageConfigHasBeenSet(false)
{
}

CoreInternalOutcome ImageTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EncodeConfig") && !value["EncodeConfig"].IsNull())
    {
        if (!value["EncodeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskInput.EncodeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_encodeConfig.Deserialize(value["EncodeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_encodeConfigHasBeenSet = true;
    }

    if (value.HasMember("EnhanceConfig") && !value["EnhanceConfig"].IsNull())
    {
        if (!value["EnhanceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskInput.EnhanceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enhanceConfig.Deserialize(value["EnhanceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enhanceConfigHasBeenSet = true;
    }

    if (value.HasMember("EraseConfig") && !value["EraseConfig"].IsNull())
    {
        if (!value["EraseConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskInput.EraseConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eraseConfig.Deserialize(value["EraseConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eraseConfigHasBeenSet = true;
    }

    if (value.HasMember("AiPosterSuiteConfig") && !value["AiPosterSuiteConfig"].IsNull())
    {
        if (!value["AiPosterSuiteConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskInput.AiPosterSuiteConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiPosterSuiteConfig.Deserialize(value["AiPosterSuiteConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiPosterSuiteConfigHasBeenSet = true;
    }

    if (value.HasMember("AiCutoutConfig") && !value["AiCutoutConfig"].IsNull())
    {
        if (!value["AiCutoutConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskInput.AiCutoutConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiCutoutConfig.Deserialize(value["AiCutoutConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiCutoutConfigHasBeenSet = true;
    }

    if (value.HasMember("AiExpansionConfig") && !value["AiExpansionConfig"].IsNull())
    {
        if (!value["AiExpansionConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskInput.AiExpansionConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiExpansionConfig.Deserialize(value["AiExpansionConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiExpansionConfigHasBeenSet = true;
    }

    if (value.HasMember("AiStoryboardConfig") && !value["AiStoryboardConfig"].IsNull())
    {
        if (!value["AiStoryboardConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskInput.AiStoryboardConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiStoryboardConfig.Deserialize(value["AiStoryboardConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiStoryboardConfigHasBeenSet = true;
    }

    if (value.HasMember("UnderstandImageConfig") && !value["UnderstandImageConfig"].IsNull())
    {
        if (!value["UnderstandImageConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTaskInput.UnderstandImageConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_understandImageConfig.Deserialize(value["UnderstandImageConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_understandImageConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encodeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_encodeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enhanceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhanceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhanceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eraseConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eraseConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiPosterSuiteConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiPosterSuiteConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiPosterSuiteConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiCutoutConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiCutoutConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiCutoutConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiExpansionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiExpansionConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiExpansionConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiStoryboardConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiStoryboardConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiStoryboardConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_understandImageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnderstandImageConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_understandImageConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


ImageEncodeConfig ImageTaskInput::GetEncodeConfig() const
{
    return m_encodeConfig;
}

void ImageTaskInput::SetEncodeConfig(const ImageEncodeConfig& _encodeConfig)
{
    m_encodeConfig = _encodeConfig;
    m_encodeConfigHasBeenSet = true;
}

bool ImageTaskInput::EncodeConfigHasBeenSet() const
{
    return m_encodeConfigHasBeenSet;
}

ImageEnhanceConfig ImageTaskInput::GetEnhanceConfig() const
{
    return m_enhanceConfig;
}

void ImageTaskInput::SetEnhanceConfig(const ImageEnhanceConfig& _enhanceConfig)
{
    m_enhanceConfig = _enhanceConfig;
    m_enhanceConfigHasBeenSet = true;
}

bool ImageTaskInput::EnhanceConfigHasBeenSet() const
{
    return m_enhanceConfigHasBeenSet;
}

ImageEraseConfig ImageTaskInput::GetEraseConfig() const
{
    return m_eraseConfig;
}

void ImageTaskInput::SetEraseConfig(const ImageEraseConfig& _eraseConfig)
{
    m_eraseConfig = _eraseConfig;
    m_eraseConfigHasBeenSet = true;
}

bool ImageTaskInput::EraseConfigHasBeenSet() const
{
    return m_eraseConfigHasBeenSet;
}

AiPosterSuiteConfig ImageTaskInput::GetAiPosterSuiteConfig() const
{
    return m_aiPosterSuiteConfig;
}

void ImageTaskInput::SetAiPosterSuiteConfig(const AiPosterSuiteConfig& _aiPosterSuiteConfig)
{
    m_aiPosterSuiteConfig = _aiPosterSuiteConfig;
    m_aiPosterSuiteConfigHasBeenSet = true;
}

bool ImageTaskInput::AiPosterSuiteConfigHasBeenSet() const
{
    return m_aiPosterSuiteConfigHasBeenSet;
}

AiCutoutConfig ImageTaskInput::GetAiCutoutConfig() const
{
    return m_aiCutoutConfig;
}

void ImageTaskInput::SetAiCutoutConfig(const AiCutoutConfig& _aiCutoutConfig)
{
    m_aiCutoutConfig = _aiCutoutConfig;
    m_aiCutoutConfigHasBeenSet = true;
}

bool ImageTaskInput::AiCutoutConfigHasBeenSet() const
{
    return m_aiCutoutConfigHasBeenSet;
}

AiExpansionConfig ImageTaskInput::GetAiExpansionConfig() const
{
    return m_aiExpansionConfig;
}

void ImageTaskInput::SetAiExpansionConfig(const AiExpansionConfig& _aiExpansionConfig)
{
    m_aiExpansionConfig = _aiExpansionConfig;
    m_aiExpansionConfigHasBeenSet = true;
}

bool ImageTaskInput::AiExpansionConfigHasBeenSet() const
{
    return m_aiExpansionConfigHasBeenSet;
}

AiStoryboardConfig ImageTaskInput::GetAiStoryboardConfig() const
{
    return m_aiStoryboardConfig;
}

void ImageTaskInput::SetAiStoryboardConfig(const AiStoryboardConfig& _aiStoryboardConfig)
{
    m_aiStoryboardConfig = _aiStoryboardConfig;
    m_aiStoryboardConfigHasBeenSet = true;
}

bool ImageTaskInput::AiStoryboardConfigHasBeenSet() const
{
    return m_aiStoryboardConfigHasBeenSet;
}

UnderstandImageConfig ImageTaskInput::GetUnderstandImageConfig() const
{
    return m_understandImageConfig;
}

void ImageTaskInput::SetUnderstandImageConfig(const UnderstandImageConfig& _understandImageConfig)
{
    m_understandImageConfig = _understandImageConfig;
    m_understandImageConfigHasBeenSet = true;
}

bool ImageTaskInput::UnderstandImageConfigHasBeenSet() const
{
    return m_understandImageConfigHasBeenSet;
}

