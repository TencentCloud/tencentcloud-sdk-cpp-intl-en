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

#include <tencentcloud/vod/v20180717/model/AigcAudioTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcAudioTaskInput::AigcAudioTaskInput() :
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_fileInfosHasBeenSet(false),
    m_lastFrameFileIdHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_negativePromptHasBeenSet(false),
    m_enhancePromptHasBeenSet(false),
    m_generationModeHasBeenSet(false),
    m_outputConfigHasBeenSet(false)
{
}

CoreInternalOutcome AigcAudioTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("FileInfos") && !value["FileInfos"].IsNull())
    {
        if (!value["FileInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.FileInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["FileInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AigcVideoTaskInputFileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileInfos.push_back(item);
        }
        m_fileInfosHasBeenSet = true;
    }

    if (value.HasMember("LastFrameFileId") && !value["LastFrameFileId"].IsNull())
    {
        if (!value["LastFrameFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.LastFrameFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastFrameFileId = string(value["LastFrameFileId"].GetString());
        m_lastFrameFileIdHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("NegativePrompt") && !value["NegativePrompt"].IsNull())
    {
        if (!value["NegativePrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.NegativePrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_negativePrompt = string(value["NegativePrompt"].GetString());
        m_negativePromptHasBeenSet = true;
    }

    if (value.HasMember("EnhancePrompt") && !value["EnhancePrompt"].IsNull())
    {
        if (!value["EnhancePrompt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.EnhancePrompt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enhancePrompt = value["EnhancePrompt"].GetBool();
        m_enhancePromptHasBeenSet = true;
    }

    if (value.HasMember("GenerationMode") && !value["GenerationMode"].IsNull())
    {
        if (!value["GenerationMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.GenerationMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_generationMode = string(value["GenerationMode"].GetString());
        m_generationModeHasBeenSet = true;
    }

    if (value.HasMember("OutputConfig") && !value["OutputConfig"].IsNull())
    {
        if (!value["OutputConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.OutputConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputConfig.Deserialize(value["OutputConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcAudioTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_fileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileInfos.begin(); itr != m_fileInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lastFrameFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastFrameFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastFrameFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_negativePromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NegativePrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_negativePrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_enhancePromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancePrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enhancePrompt, allocator);
    }

    if (m_generationModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerationMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_generationMode.c_str(), allocator).Move(), allocator);
    }

    if (m_outputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AigcAudioTaskInput::GetModelName() const
{
    return m_modelName;
}

void AigcAudioTaskInput::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool AigcAudioTaskInput::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string AigcAudioTaskInput::GetModelVersion() const
{
    return m_modelVersion;
}

void AigcAudioTaskInput::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool AigcAudioTaskInput::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

vector<AigcVideoTaskInputFileInfo> AigcAudioTaskInput::GetFileInfos() const
{
    return m_fileInfos;
}

void AigcAudioTaskInput::SetFileInfos(const vector<AigcVideoTaskInputFileInfo>& _fileInfos)
{
    m_fileInfos = _fileInfos;
    m_fileInfosHasBeenSet = true;
}

bool AigcAudioTaskInput::FileInfosHasBeenSet() const
{
    return m_fileInfosHasBeenSet;
}

string AigcAudioTaskInput::GetLastFrameFileId() const
{
    return m_lastFrameFileId;
}

void AigcAudioTaskInput::SetLastFrameFileId(const string& _lastFrameFileId)
{
    m_lastFrameFileId = _lastFrameFileId;
    m_lastFrameFileIdHasBeenSet = true;
}

bool AigcAudioTaskInput::LastFrameFileIdHasBeenSet() const
{
    return m_lastFrameFileIdHasBeenSet;
}

string AigcAudioTaskInput::GetPrompt() const
{
    return m_prompt;
}

void AigcAudioTaskInput::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool AigcAudioTaskInput::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string AigcAudioTaskInput::GetNegativePrompt() const
{
    return m_negativePrompt;
}

void AigcAudioTaskInput::SetNegativePrompt(const string& _negativePrompt)
{
    m_negativePrompt = _negativePrompt;
    m_negativePromptHasBeenSet = true;
}

bool AigcAudioTaskInput::NegativePromptHasBeenSet() const
{
    return m_negativePromptHasBeenSet;
}

bool AigcAudioTaskInput::GetEnhancePrompt() const
{
    return m_enhancePrompt;
}

void AigcAudioTaskInput::SetEnhancePrompt(const bool& _enhancePrompt)
{
    m_enhancePrompt = _enhancePrompt;
    m_enhancePromptHasBeenSet = true;
}

bool AigcAudioTaskInput::EnhancePromptHasBeenSet() const
{
    return m_enhancePromptHasBeenSet;
}

string AigcAudioTaskInput::GetGenerationMode() const
{
    return m_generationMode;
}

void AigcAudioTaskInput::SetGenerationMode(const string& _generationMode)
{
    m_generationMode = _generationMode;
    m_generationModeHasBeenSet = true;
}

bool AigcAudioTaskInput::GenerationModeHasBeenSet() const
{
    return m_generationModeHasBeenSet;
}

AigcAudioOutputConfig AigcAudioTaskInput::GetOutputConfig() const
{
    return m_outputConfig;
}

void AigcAudioTaskInput::SetOutputConfig(const AigcAudioOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool AigcAudioTaskInput::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

