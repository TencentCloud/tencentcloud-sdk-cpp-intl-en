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

#include <tencentcloud/cynosdb/v20190107/model/CreateClustersResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateClustersResponse::CreateClustersResponse() :
    m_tranIdHasBeenSet(false),
    m_dealNamesHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_clusterIdsHasBeenSet(false),
    m_bigDealIdsHasBeenSet(false)
{
}

CoreInternalOutcome CreateClustersResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TranId") && !rsp["TranId"].IsNull())
    {
        if (!rsp["TranId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranId = string(rsp["TranId"].GetString());
        m_tranIdHasBeenSet = true;
    }

    if (rsp.HasMember("DealNames") && !rsp["DealNames"].IsNull())
    {
        if (!rsp["DealNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DealNames` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DealNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dealNames.push_back((*itr).GetString());
        }
        m_dealNamesHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceIds") && !rsp["ResourceIds"].IsNull())
    {
        if (!rsp["ResourceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ResourceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceIds.push_back((*itr).GetString());
        }
        m_resourceIdsHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterIds") && !rsp["ClusterIds"].IsNull())
    {
        if (!rsp["ClusterIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ClusterIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_clusterIds.push_back((*itr).GetString());
        }
        m_clusterIdsHasBeenSet = true;
    }

    if (rsp.HasMember("BigDealIds") && !rsp["BigDealIds"].IsNull())
    {
        if (!rsp["BigDealIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BigDealIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BigDealIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bigDealIds.push_back((*itr).GetString());
        }
        m_bigDealIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateClustersResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_tranIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranId.c_str(), allocator).Move(), allocator);
    }

    if (m_dealNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dealNames.begin(); itr != m_dealNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIds.begin(); itr != m_clusterIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bigDealIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDealIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bigDealIds.begin(); itr != m_bigDealIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string CreateClustersResponse::GetTranId() const
{
    return m_tranId;
}

bool CreateClustersResponse::TranIdHasBeenSet() const
{
    return m_tranIdHasBeenSet;
}

vector<string> CreateClustersResponse::GetDealNames() const
{
    return m_dealNames;
}

bool CreateClustersResponse::DealNamesHasBeenSet() const
{
    return m_dealNamesHasBeenSet;
}

vector<string> CreateClustersResponse::GetResourceIds() const
{
    return m_resourceIds;
}

bool CreateClustersResponse::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

vector<string> CreateClustersResponse::GetClusterIds() const
{
    return m_clusterIds;
}

bool CreateClustersResponse::ClusterIdsHasBeenSet() const
{
    return m_clusterIdsHasBeenSet;
}

vector<string> CreateClustersResponse::GetBigDealIds() const
{
    return m_bigDealIds;
}

bool CreateClustersResponse::BigDealIdsHasBeenSet() const
{
    return m_bigDealIdsHasBeenSet;
}


