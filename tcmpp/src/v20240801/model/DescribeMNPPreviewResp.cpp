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

#include <tencentcloud/tcmpp/v20240801/model/DescribeMNPPreviewResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeMNPPreviewResp::DescribeMNPPreviewResp() :
    m_mNPIdHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_mNPDescHasBeenSet(false),
    m_mNPVersionHasBeenSet(false),
    m_mNPVersionIntroHasBeenSet(false),
    m_qRCodeUrlHasBeenSet(false),
    m_previewEntrancePathHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNPPreviewResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPPreviewResp.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPPreviewResp.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPDesc") && !value["MNPDesc"].IsNull())
    {
        if (!value["MNPDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPPreviewResp.MNPDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPDesc = string(value["MNPDesc"].GetString());
        m_mNPDescHasBeenSet = true;
    }

    if (value.HasMember("MNPVersion") && !value["MNPVersion"].IsNull())
    {
        if (!value["MNPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPPreviewResp.MNPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersion = string(value["MNPVersion"].GetString());
        m_mNPVersionHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionIntro") && !value["MNPVersionIntro"].IsNull())
    {
        if (!value["MNPVersionIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPPreviewResp.MNPVersionIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionIntro = string(value["MNPVersionIntro"].GetString());
        m_mNPVersionIntroHasBeenSet = true;
    }

    if (value.HasMember("QRCodeUrl") && !value["QRCodeUrl"].IsNull())
    {
        if (!value["QRCodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPPreviewResp.QRCodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeUrl = string(value["QRCodeUrl"].GetString());
        m_qRCodeUrlHasBeenSet = true;
    }

    if (value.HasMember("PreviewEntrancePath") && !value["PreviewEntrancePath"].IsNull())
    {
        if (!value["PreviewEntrancePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPPreviewResp.PreviewEntrancePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewEntrancePath = string(value["PreviewEntrancePath"].GetString());
        m_previewEntrancePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNPPreviewResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPName.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionIntroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionIntro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPVersionIntro.c_str(), allocator).Move(), allocator);
    }

    if (m_qRCodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qRCodeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_previewEntrancePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewEntrancePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewEntrancePath.c_str(), allocator).Move(), allocator);
    }

}


string DescribeMNPPreviewResp::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNPPreviewResp::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNPPreviewResp::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string DescribeMNPPreviewResp::GetMNPName() const
{
    return m_mNPName;
}

void DescribeMNPPreviewResp::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool DescribeMNPPreviewResp::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string DescribeMNPPreviewResp::GetMNPDesc() const
{
    return m_mNPDesc;
}

void DescribeMNPPreviewResp::SetMNPDesc(const string& _mNPDesc)
{
    m_mNPDesc = _mNPDesc;
    m_mNPDescHasBeenSet = true;
}

bool DescribeMNPPreviewResp::MNPDescHasBeenSet() const
{
    return m_mNPDescHasBeenSet;
}

string DescribeMNPPreviewResp::GetMNPVersion() const
{
    return m_mNPVersion;
}

void DescribeMNPPreviewResp::SetMNPVersion(const string& _mNPVersion)
{
    m_mNPVersion = _mNPVersion;
    m_mNPVersionHasBeenSet = true;
}

bool DescribeMNPPreviewResp::MNPVersionHasBeenSet() const
{
    return m_mNPVersionHasBeenSet;
}

string DescribeMNPPreviewResp::GetMNPVersionIntro() const
{
    return m_mNPVersionIntro;
}

void DescribeMNPPreviewResp::SetMNPVersionIntro(const string& _mNPVersionIntro)
{
    m_mNPVersionIntro = _mNPVersionIntro;
    m_mNPVersionIntroHasBeenSet = true;
}

bool DescribeMNPPreviewResp::MNPVersionIntroHasBeenSet() const
{
    return m_mNPVersionIntroHasBeenSet;
}

string DescribeMNPPreviewResp::GetQRCodeUrl() const
{
    return m_qRCodeUrl;
}

void DescribeMNPPreviewResp::SetQRCodeUrl(const string& _qRCodeUrl)
{
    m_qRCodeUrl = _qRCodeUrl;
    m_qRCodeUrlHasBeenSet = true;
}

bool DescribeMNPPreviewResp::QRCodeUrlHasBeenSet() const
{
    return m_qRCodeUrlHasBeenSet;
}

string DescribeMNPPreviewResp::GetPreviewEntrancePath() const
{
    return m_previewEntrancePath;
}

void DescribeMNPPreviewResp::SetPreviewEntrancePath(const string& _previewEntrancePath)
{
    m_previewEntrancePath = _previewEntrancePath;
    m_previewEntrancePathHasBeenSet = true;
}

bool DescribeMNPPreviewResp::PreviewEntrancePathHasBeenSet() const
{
    return m_previewEntrancePathHasBeenSet;
}

