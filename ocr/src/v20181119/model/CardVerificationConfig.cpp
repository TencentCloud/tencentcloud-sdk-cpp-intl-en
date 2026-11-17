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

#include <tencentcloud/ocr/v20181119/model/CardVerificationConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

CardVerificationConfig::CardVerificationConfig() :
    m_enableRecognitionHasBeenSet(false),
    m_enableQualityCheckHasBeenSet(false),
    m_enableTamperCheckHasBeenSet(false),
    m_enableCopyCheckHasBeenSet(false),
    m_enableRecaptureCheckHasBeenSet(false),
    m_enableFormatCheckHasBeenSet(false),
    m_enableConsistencyCheckHasBeenSet(false)
{
}

CoreInternalOutcome CardVerificationConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableRecognition") && !value["EnableRecognition"].IsNull())
    {
        if (!value["EnableRecognition"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerificationConfig.EnableRecognition` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableRecognition = value["EnableRecognition"].GetBool();
        m_enableRecognitionHasBeenSet = true;
    }

    if (value.HasMember("EnableQualityCheck") && !value["EnableQualityCheck"].IsNull())
    {
        if (!value["EnableQualityCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerificationConfig.EnableQualityCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableQualityCheck = value["EnableQualityCheck"].GetBool();
        m_enableQualityCheckHasBeenSet = true;
    }

    if (value.HasMember("EnableTamperCheck") && !value["EnableTamperCheck"].IsNull())
    {
        if (!value["EnableTamperCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerificationConfig.EnableTamperCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableTamperCheck = value["EnableTamperCheck"].GetBool();
        m_enableTamperCheckHasBeenSet = true;
    }

    if (value.HasMember("EnableCopyCheck") && !value["EnableCopyCheck"].IsNull())
    {
        if (!value["EnableCopyCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerificationConfig.EnableCopyCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCopyCheck = value["EnableCopyCheck"].GetBool();
        m_enableCopyCheckHasBeenSet = true;
    }

    if (value.HasMember("EnableRecaptureCheck") && !value["EnableRecaptureCheck"].IsNull())
    {
        if (!value["EnableRecaptureCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerificationConfig.EnableRecaptureCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableRecaptureCheck = value["EnableRecaptureCheck"].GetBool();
        m_enableRecaptureCheckHasBeenSet = true;
    }

    if (value.HasMember("EnableFormatCheck") && !value["EnableFormatCheck"].IsNull())
    {
        if (!value["EnableFormatCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerificationConfig.EnableFormatCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableFormatCheck = value["EnableFormatCheck"].GetBool();
        m_enableFormatCheckHasBeenSet = true;
    }

    if (value.HasMember("EnableConsistencyCheck") && !value["EnableConsistencyCheck"].IsNull())
    {
        if (!value["EnableConsistencyCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerificationConfig.EnableConsistencyCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableConsistencyCheck = value["EnableConsistencyCheck"].GetBool();
        m_enableConsistencyCheckHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CardVerificationConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableRecognitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRecognition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRecognition, allocator);
    }

    if (m_enableQualityCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableQualityCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableQualityCheck, allocator);
    }

    if (m_enableTamperCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTamperCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTamperCheck, allocator);
    }

    if (m_enableCopyCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCopyCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCopyCheck, allocator);
    }

    if (m_enableRecaptureCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRecaptureCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRecaptureCheck, allocator);
    }

    if (m_enableFormatCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFormatCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFormatCheck, allocator);
    }

    if (m_enableConsistencyCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableConsistencyCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableConsistencyCheck, allocator);
    }

}


bool CardVerificationConfig::GetEnableRecognition() const
{
    return m_enableRecognition;
}

void CardVerificationConfig::SetEnableRecognition(const bool& _enableRecognition)
{
    m_enableRecognition = _enableRecognition;
    m_enableRecognitionHasBeenSet = true;
}

bool CardVerificationConfig::EnableRecognitionHasBeenSet() const
{
    return m_enableRecognitionHasBeenSet;
}

bool CardVerificationConfig::GetEnableQualityCheck() const
{
    return m_enableQualityCheck;
}

void CardVerificationConfig::SetEnableQualityCheck(const bool& _enableQualityCheck)
{
    m_enableQualityCheck = _enableQualityCheck;
    m_enableQualityCheckHasBeenSet = true;
}

bool CardVerificationConfig::EnableQualityCheckHasBeenSet() const
{
    return m_enableQualityCheckHasBeenSet;
}

bool CardVerificationConfig::GetEnableTamperCheck() const
{
    return m_enableTamperCheck;
}

void CardVerificationConfig::SetEnableTamperCheck(const bool& _enableTamperCheck)
{
    m_enableTamperCheck = _enableTamperCheck;
    m_enableTamperCheckHasBeenSet = true;
}

bool CardVerificationConfig::EnableTamperCheckHasBeenSet() const
{
    return m_enableTamperCheckHasBeenSet;
}

bool CardVerificationConfig::GetEnableCopyCheck() const
{
    return m_enableCopyCheck;
}

void CardVerificationConfig::SetEnableCopyCheck(const bool& _enableCopyCheck)
{
    m_enableCopyCheck = _enableCopyCheck;
    m_enableCopyCheckHasBeenSet = true;
}

bool CardVerificationConfig::EnableCopyCheckHasBeenSet() const
{
    return m_enableCopyCheckHasBeenSet;
}

bool CardVerificationConfig::GetEnableRecaptureCheck() const
{
    return m_enableRecaptureCheck;
}

void CardVerificationConfig::SetEnableRecaptureCheck(const bool& _enableRecaptureCheck)
{
    m_enableRecaptureCheck = _enableRecaptureCheck;
    m_enableRecaptureCheckHasBeenSet = true;
}

bool CardVerificationConfig::EnableRecaptureCheckHasBeenSet() const
{
    return m_enableRecaptureCheckHasBeenSet;
}

bool CardVerificationConfig::GetEnableFormatCheck() const
{
    return m_enableFormatCheck;
}

void CardVerificationConfig::SetEnableFormatCheck(const bool& _enableFormatCheck)
{
    m_enableFormatCheck = _enableFormatCheck;
    m_enableFormatCheckHasBeenSet = true;
}

bool CardVerificationConfig::EnableFormatCheckHasBeenSet() const
{
    return m_enableFormatCheckHasBeenSet;
}

bool CardVerificationConfig::GetEnableConsistencyCheck() const
{
    return m_enableConsistencyCheck;
}

void CardVerificationConfig::SetEnableConsistencyCheck(const bool& _enableConsistencyCheck)
{
    m_enableConsistencyCheck = _enableConsistencyCheck;
    m_enableConsistencyCheckHasBeenSet = true;
}

bool CardVerificationConfig::EnableConsistencyCheckHasBeenSet() const
{
    return m_enableConsistencyCheckHasBeenSet;
}

