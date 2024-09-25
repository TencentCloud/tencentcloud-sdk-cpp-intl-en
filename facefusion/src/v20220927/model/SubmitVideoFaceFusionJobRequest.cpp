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

#include <tencentcloud/facefusion/v20220927/model/SubmitVideoFaceFusionJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Facefusion::V20220927::Model;
using namespace std;

SubmitVideoFaceFusionJobRequest::SubmitVideoFaceFusionJobRequest() :
    m_projectIdHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_mergeInfosHasBeenSet(false),
    m_celebrityIdentifyHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_userDesignatedUrlHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_metaDataHasBeenSet(false)
{
}

string SubmitVideoFaceFusionJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_mergeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mergeInfos.begin(); itr != m_mergeInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_celebrityIdentifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CelebrityIdentify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_celebrityIdentify, allocator);
    }

    if (m_logoParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logoParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userDesignatedUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDesignatedUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userDesignatedUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metaData.begin(); itr != m_metaData.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitVideoFaceFusionJobRequest::GetProjectId() const
{
    return m_projectId;
}

void SubmitVideoFaceFusionJobRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SubmitVideoFaceFusionJobRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SubmitVideoFaceFusionJobRequest::GetModelId() const
{
    return m_modelId;
}

void SubmitVideoFaceFusionJobRequest::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool SubmitVideoFaceFusionJobRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

vector<MergeInfo> SubmitVideoFaceFusionJobRequest::GetMergeInfos() const
{
    return m_mergeInfos;
}

void SubmitVideoFaceFusionJobRequest::SetMergeInfos(const vector<MergeInfo>& _mergeInfos)
{
    m_mergeInfos = _mergeInfos;
    m_mergeInfosHasBeenSet = true;
}

bool SubmitVideoFaceFusionJobRequest::MergeInfosHasBeenSet() const
{
    return m_mergeInfosHasBeenSet;
}

int64_t SubmitVideoFaceFusionJobRequest::GetCelebrityIdentify() const
{
    return m_celebrityIdentify;
}

void SubmitVideoFaceFusionJobRequest::SetCelebrityIdentify(const int64_t& _celebrityIdentify)
{
    m_celebrityIdentify = _celebrityIdentify;
    m_celebrityIdentifyHasBeenSet = true;
}

bool SubmitVideoFaceFusionJobRequest::CelebrityIdentifyHasBeenSet() const
{
    return m_celebrityIdentifyHasBeenSet;
}

LogoParam SubmitVideoFaceFusionJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitVideoFaceFusionJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitVideoFaceFusionJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

string SubmitVideoFaceFusionJobRequest::GetUserDesignatedUrl() const
{
    return m_userDesignatedUrl;
}

void SubmitVideoFaceFusionJobRequest::SetUserDesignatedUrl(const string& _userDesignatedUrl)
{
    m_userDesignatedUrl = _userDesignatedUrl;
    m_userDesignatedUrlHasBeenSet = true;
}

bool SubmitVideoFaceFusionJobRequest::UserDesignatedUrlHasBeenSet() const
{
    return m_userDesignatedUrlHasBeenSet;
}

string SubmitVideoFaceFusionJobRequest::GetUserIp() const
{
    return m_userIp;
}

void SubmitVideoFaceFusionJobRequest::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool SubmitVideoFaceFusionJobRequest::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

vector<MetaData> SubmitVideoFaceFusionJobRequest::GetMetaData() const
{
    return m_metaData;
}

void SubmitVideoFaceFusionJobRequest::SetMetaData(const vector<MetaData>& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool SubmitVideoFaceFusionJobRequest::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}


