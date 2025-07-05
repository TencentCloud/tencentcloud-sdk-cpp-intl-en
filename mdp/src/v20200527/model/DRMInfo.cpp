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

#include <tencentcloud/mdp/v20200527/model/DRMInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

DRMInfo::DRMInfo() :
    m_encryptionMethodHasBeenSet(false),
    m_dRMSystemsHasBeenSet(false),
    m_resourceIDHasBeenSet(false),
    m_keyServerUrlHasBeenSet(false),
    m_videoEncryptionPresetHasBeenSet(false),
    m_audioEncryptionPresetHasBeenSet(false),
    m_constantInitializationVectorHasBeenSet(false),
    m_keyRotationIntervalHasBeenSet(false)
{
}

CoreInternalOutcome DRMInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EncryptionMethod") && !value["EncryptionMethod"].IsNull())
    {
        if (!value["EncryptionMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DRMInfo.EncryptionMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionMethod = string(value["EncryptionMethod"].GetString());
        m_encryptionMethodHasBeenSet = true;
    }

    if (value.HasMember("DRMSystems") && !value["DRMSystems"].IsNull())
    {
        if (!value["DRMSystems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DRMInfo.DRMSystems` is not array type"));

        const rapidjson::Value &tmpValue = value["DRMSystems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dRMSystems.push_back((*itr).GetString());
        }
        m_dRMSystemsHasBeenSet = true;
    }

    if (value.HasMember("ResourceID") && !value["ResourceID"].IsNull())
    {
        if (!value["ResourceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DRMInfo.ResourceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceID = string(value["ResourceID"].GetString());
        m_resourceIDHasBeenSet = true;
    }

    if (value.HasMember("KeyServerUrl") && !value["KeyServerUrl"].IsNull())
    {
        if (!value["KeyServerUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DRMInfo.KeyServerUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyServerUrl = string(value["KeyServerUrl"].GetString());
        m_keyServerUrlHasBeenSet = true;
    }

    if (value.HasMember("VideoEncryptionPreset") && !value["VideoEncryptionPreset"].IsNull())
    {
        if (!value["VideoEncryptionPreset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DRMInfo.VideoEncryptionPreset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoEncryptionPreset = string(value["VideoEncryptionPreset"].GetString());
        m_videoEncryptionPresetHasBeenSet = true;
    }

    if (value.HasMember("AudioEncryptionPreset") && !value["AudioEncryptionPreset"].IsNull())
    {
        if (!value["AudioEncryptionPreset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DRMInfo.AudioEncryptionPreset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioEncryptionPreset = string(value["AudioEncryptionPreset"].GetString());
        m_audioEncryptionPresetHasBeenSet = true;
    }

    if (value.HasMember("ConstantInitializationVector") && !value["ConstantInitializationVector"].IsNull())
    {
        if (!value["ConstantInitializationVector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DRMInfo.ConstantInitializationVector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_constantInitializationVector = string(value["ConstantInitializationVector"].GetString());
        m_constantInitializationVectorHasBeenSet = true;
    }

    if (value.HasMember("KeyRotationInterval") && !value["KeyRotationInterval"].IsNull())
    {
        if (!value["KeyRotationInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DRMInfo.KeyRotationInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keyRotationInterval = value["KeyRotationInterval"].GetInt64();
        m_keyRotationIntervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DRMInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encryptionMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptionMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_dRMSystemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DRMSystems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dRMSystems.begin(); itr != m_dRMSystems.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_keyServerUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyServerUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyServerUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_videoEncryptionPresetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoEncryptionPreset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoEncryptionPreset.c_str(), allocator).Move(), allocator);
    }

    if (m_audioEncryptionPresetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioEncryptionPreset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioEncryptionPreset.c_str(), allocator).Move(), allocator);
    }

    if (m_constantInitializationVectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConstantInitializationVector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_constantInitializationVector.c_str(), allocator).Move(), allocator);
    }

    if (m_keyRotationIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyRotationInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keyRotationInterval, allocator);
    }

}


string DRMInfo::GetEncryptionMethod() const
{
    return m_encryptionMethod;
}

void DRMInfo::SetEncryptionMethod(const string& _encryptionMethod)
{
    m_encryptionMethod = _encryptionMethod;
    m_encryptionMethodHasBeenSet = true;
}

bool DRMInfo::EncryptionMethodHasBeenSet() const
{
    return m_encryptionMethodHasBeenSet;
}

vector<string> DRMInfo::GetDRMSystems() const
{
    return m_dRMSystems;
}

void DRMInfo::SetDRMSystems(const vector<string>& _dRMSystems)
{
    m_dRMSystems = _dRMSystems;
    m_dRMSystemsHasBeenSet = true;
}

bool DRMInfo::DRMSystemsHasBeenSet() const
{
    return m_dRMSystemsHasBeenSet;
}

string DRMInfo::GetResourceID() const
{
    return m_resourceID;
}

void DRMInfo::SetResourceID(const string& _resourceID)
{
    m_resourceID = _resourceID;
    m_resourceIDHasBeenSet = true;
}

bool DRMInfo::ResourceIDHasBeenSet() const
{
    return m_resourceIDHasBeenSet;
}

string DRMInfo::GetKeyServerUrl() const
{
    return m_keyServerUrl;
}

void DRMInfo::SetKeyServerUrl(const string& _keyServerUrl)
{
    m_keyServerUrl = _keyServerUrl;
    m_keyServerUrlHasBeenSet = true;
}

bool DRMInfo::KeyServerUrlHasBeenSet() const
{
    return m_keyServerUrlHasBeenSet;
}

string DRMInfo::GetVideoEncryptionPreset() const
{
    return m_videoEncryptionPreset;
}

void DRMInfo::SetVideoEncryptionPreset(const string& _videoEncryptionPreset)
{
    m_videoEncryptionPreset = _videoEncryptionPreset;
    m_videoEncryptionPresetHasBeenSet = true;
}

bool DRMInfo::VideoEncryptionPresetHasBeenSet() const
{
    return m_videoEncryptionPresetHasBeenSet;
}

string DRMInfo::GetAudioEncryptionPreset() const
{
    return m_audioEncryptionPreset;
}

void DRMInfo::SetAudioEncryptionPreset(const string& _audioEncryptionPreset)
{
    m_audioEncryptionPreset = _audioEncryptionPreset;
    m_audioEncryptionPresetHasBeenSet = true;
}

bool DRMInfo::AudioEncryptionPresetHasBeenSet() const
{
    return m_audioEncryptionPresetHasBeenSet;
}

string DRMInfo::GetConstantInitializationVector() const
{
    return m_constantInitializationVector;
}

void DRMInfo::SetConstantInitializationVector(const string& _constantInitializationVector)
{
    m_constantInitializationVector = _constantInitializationVector;
    m_constantInitializationVectorHasBeenSet = true;
}

bool DRMInfo::ConstantInitializationVectorHasBeenSet() const
{
    return m_constantInitializationVectorHasBeenSet;
}

int64_t DRMInfo::GetKeyRotationInterval() const
{
    return m_keyRotationInterval;
}

void DRMInfo::SetKeyRotationInterval(const int64_t& _keyRotationInterval)
{
    m_keyRotationInterval = _keyRotationInterval;
    m_keyRotationIntervalHasBeenSet = true;
}

bool DRMInfo::KeyRotationIntervalHasBeenSet() const
{
    return m_keyRotationIntervalHasBeenSet;
}

