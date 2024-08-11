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

#include <tencentcloud/tcmpp/v20240801/model/DescribeShowCaseResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeShowCaseResp::DescribeShowCaseResp() :
    m_mNPIdHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_mNPDescHasBeenSet(false),
    m_mNPVersionHasBeenSet(false),
    m_mNPVersionIntroHasBeenSet(false),
    m_qRCodeUrlHasBeenSet(false),
    m_appListHasBeenSet(false),
    m_testEntrancePathHasBeenSet(false)
{
}

CoreInternalOutcome DescribeShowCaseResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeShowCaseResp.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeShowCaseResp.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPDesc") && !value["MNPDesc"].IsNull())
    {
        if (!value["MNPDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeShowCaseResp.MNPDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPDesc = string(value["MNPDesc"].GetString());
        m_mNPDescHasBeenSet = true;
    }

    if (value.HasMember("MNPVersion") && !value["MNPVersion"].IsNull())
    {
        if (!value["MNPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeShowCaseResp.MNPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersion = string(value["MNPVersion"].GetString());
        m_mNPVersionHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionIntro") && !value["MNPVersionIntro"].IsNull())
    {
        if (!value["MNPVersionIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeShowCaseResp.MNPVersionIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionIntro = string(value["MNPVersionIntro"].GetString());
        m_mNPVersionIntroHasBeenSet = true;
    }

    if (value.HasMember("QRCodeUrl") && !value["QRCodeUrl"].IsNull())
    {
        if (!value["QRCodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeShowCaseResp.QRCodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeUrl = string(value["QRCodeUrl"].GetString());
        m_qRCodeUrlHasBeenSet = true;
    }

    if (value.HasMember("AppList") && !value["AppList"].IsNull())
    {
        if (!value["AppList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeShowCaseResp.AppList` is not array type"));

        const rapidjson::Value &tmpValue = value["AppList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ShowCaseRelAppInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_appList.push_back(item);
        }
        m_appListHasBeenSet = true;
    }

    if (value.HasMember("TestEntrancePath") && !value["TestEntrancePath"].IsNull())
    {
        if (!value["TestEntrancePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeShowCaseResp.TestEntrancePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_testEntrancePath = string(value["TestEntrancePath"].GetString());
        m_testEntrancePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeShowCaseResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_appListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_appList.begin(); itr != m_appList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_testEntrancePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestEntrancePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_testEntrancePath.c_str(), allocator).Move(), allocator);
    }

}


string DescribeShowCaseResp::GetMNPId() const
{
    return m_mNPId;
}

void DescribeShowCaseResp::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeShowCaseResp::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string DescribeShowCaseResp::GetMNPName() const
{
    return m_mNPName;
}

void DescribeShowCaseResp::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool DescribeShowCaseResp::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string DescribeShowCaseResp::GetMNPDesc() const
{
    return m_mNPDesc;
}

void DescribeShowCaseResp::SetMNPDesc(const string& _mNPDesc)
{
    m_mNPDesc = _mNPDesc;
    m_mNPDescHasBeenSet = true;
}

bool DescribeShowCaseResp::MNPDescHasBeenSet() const
{
    return m_mNPDescHasBeenSet;
}

string DescribeShowCaseResp::GetMNPVersion() const
{
    return m_mNPVersion;
}

void DescribeShowCaseResp::SetMNPVersion(const string& _mNPVersion)
{
    m_mNPVersion = _mNPVersion;
    m_mNPVersionHasBeenSet = true;
}

bool DescribeShowCaseResp::MNPVersionHasBeenSet() const
{
    return m_mNPVersionHasBeenSet;
}

string DescribeShowCaseResp::GetMNPVersionIntro() const
{
    return m_mNPVersionIntro;
}

void DescribeShowCaseResp::SetMNPVersionIntro(const string& _mNPVersionIntro)
{
    m_mNPVersionIntro = _mNPVersionIntro;
    m_mNPVersionIntroHasBeenSet = true;
}

bool DescribeShowCaseResp::MNPVersionIntroHasBeenSet() const
{
    return m_mNPVersionIntroHasBeenSet;
}

string DescribeShowCaseResp::GetQRCodeUrl() const
{
    return m_qRCodeUrl;
}

void DescribeShowCaseResp::SetQRCodeUrl(const string& _qRCodeUrl)
{
    m_qRCodeUrl = _qRCodeUrl;
    m_qRCodeUrlHasBeenSet = true;
}

bool DescribeShowCaseResp::QRCodeUrlHasBeenSet() const
{
    return m_qRCodeUrlHasBeenSet;
}

vector<ShowCaseRelAppInfo> DescribeShowCaseResp::GetAppList() const
{
    return m_appList;
}

void DescribeShowCaseResp::SetAppList(const vector<ShowCaseRelAppInfo>& _appList)
{
    m_appList = _appList;
    m_appListHasBeenSet = true;
}

bool DescribeShowCaseResp::AppListHasBeenSet() const
{
    return m_appListHasBeenSet;
}

string DescribeShowCaseResp::GetTestEntrancePath() const
{
    return m_testEntrancePath;
}

void DescribeShowCaseResp::SetTestEntrancePath(const string& _testEntrancePath)
{
    m_testEntrancePath = _testEntrancePath;
    m_testEntrancePathHasBeenSet = true;
}

bool DescribeShowCaseResp::TestEntrancePathHasBeenSet() const
{
    return m_testEntrancePathHasBeenSet;
}

