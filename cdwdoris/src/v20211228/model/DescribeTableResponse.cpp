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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeTableResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeTableResponse::DescribeTableResponse() :
    m_keysTypeHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_indexInfosHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_distributionHasBeenSet(false),
    m_tableCommentHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTableResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("KeysType") && !rsp["KeysType"].IsNull())
    {
        if (!rsp["KeysType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeysType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keysType = string(rsp["KeysType"].GetString());
        m_keysTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Columns") && !rsp["Columns"].IsNull())
    {
        if (!rsp["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Columns` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Column item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columns.push_back(item);
        }
        m_columnsHasBeenSet = true;
    }

    if (rsp.HasMember("IndexInfos") && !rsp["IndexInfos"].IsNull())
    {
        if (!rsp["IndexInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndexInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IndexInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndexInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_indexInfos.push_back(item);
        }
        m_indexInfosHasBeenSet = true;
    }

    if (rsp.HasMember("Partition") && !rsp["Partition"].IsNull())
    {
        if (!rsp["Partition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Partition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_partition.Deserialize(rsp["Partition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partitionHasBeenSet = true;
    }

    if (rsp.HasMember("Distribution") && !rsp["Distribution"].IsNull())
    {
        if (!rsp["Distribution"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Distribution` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_distribution.Deserialize(rsp["Distribution"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_distributionHasBeenSet = true;
    }

    if (rsp.HasMember("TableComment") && !rsp["TableComment"].IsNull())
    {
        if (!rsp["TableComment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableComment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableComment = string(rsp["TableComment"].GetString());
        m_tableCommentHasBeenSet = true;
    }

    if (rsp.HasMember("Properties") && !rsp["Properties"].IsNull())
    {
        if (!rsp["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Properties` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Property item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (rsp.HasMember("Message") && !rsp["Message"].IsNull())
    {
        if (!rsp["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(rsp["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTableResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_keysTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeysType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keysType.c_str(), allocator).Move(), allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_indexInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_indexInfos.begin(); itr != m_indexInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_partition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_distributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Distribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_distribution.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tableCommentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableComment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableComment.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
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


string DescribeTableResponse::GetKeysType() const
{
    return m_keysType;
}

bool DescribeTableResponse::KeysTypeHasBeenSet() const
{
    return m_keysTypeHasBeenSet;
}

vector<Column> DescribeTableResponse::GetColumns() const
{
    return m_columns;
}

bool DescribeTableResponse::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<IndexInfo> DescribeTableResponse::GetIndexInfos() const
{
    return m_indexInfos;
}

bool DescribeTableResponse::IndexInfosHasBeenSet() const
{
    return m_indexInfosHasBeenSet;
}

Partition DescribeTableResponse::GetPartition() const
{
    return m_partition;
}

bool DescribeTableResponse::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

Distribution DescribeTableResponse::GetDistribution() const
{
    return m_distribution;
}

bool DescribeTableResponse::DistributionHasBeenSet() const
{
    return m_distributionHasBeenSet;
}

string DescribeTableResponse::GetTableComment() const
{
    return m_tableComment;
}

bool DescribeTableResponse::TableCommentHasBeenSet() const
{
    return m_tableCommentHasBeenSet;
}

vector<Property> DescribeTableResponse::GetProperties() const
{
    return m_properties;
}

bool DescribeTableResponse::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string DescribeTableResponse::GetMessage() const
{
    return m_message;
}

bool DescribeTableResponse::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}


