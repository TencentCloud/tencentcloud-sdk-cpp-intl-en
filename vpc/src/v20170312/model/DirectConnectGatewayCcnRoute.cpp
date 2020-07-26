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

#include <tencentcloud/vpc/v20170312/model/DirectConnectGatewayCcnRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

DirectConnectGatewayCcnRoute::DirectConnectGatewayCcnRoute() :
    m_routeIdHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_aSPathHasBeenSet(false)
{
}

CoreInternalOutcome DirectConnectGatewayCcnRoute::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGatewayCcnRoute.RouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = string(value["RouteId"].GetString());
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("DestinationCidrBlock") && !value["DestinationCidrBlock"].IsNull())
    {
        if (!value["DestinationCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectGatewayCcnRoute.DestinationCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidrBlock = string(value["DestinationCidrBlock"].GetString());
        m_destinationCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("ASPath") && !value["ASPath"].IsNull())
    {
        if (!value["ASPath"].IsArray())
            return CoreInternalOutcome(Error("response `DirectConnectGatewayCcnRoute.ASPath` is not array type"));

        const Value &tmpValue = value["ASPath"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aSPath.push_back((*itr).GetString());
        }
        m_aSPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DirectConnectGatewayCcnRoute::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_routeIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_routeId.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationCidrBlockHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestinationCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_destinationCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_aSPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ASPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_aSPath.begin(); itr != m_aSPath.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DirectConnectGatewayCcnRoute::GetRouteId() const
{
    return m_routeId;
}

void DirectConnectGatewayCcnRoute::SetRouteId(const string& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool DirectConnectGatewayCcnRoute::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

string DirectConnectGatewayCcnRoute::GetDestinationCidrBlock() const
{
    return m_destinationCidrBlock;
}

void DirectConnectGatewayCcnRoute::SetDestinationCidrBlock(const string& _destinationCidrBlock)
{
    m_destinationCidrBlock = _destinationCidrBlock;
    m_destinationCidrBlockHasBeenSet = true;
}

bool DirectConnectGatewayCcnRoute::DestinationCidrBlockHasBeenSet() const
{
    return m_destinationCidrBlockHasBeenSet;
}

vector<string> DirectConnectGatewayCcnRoute::GetASPath() const
{
    return m_aSPath;
}

void DirectConnectGatewayCcnRoute::SetASPath(const vector<string>& _aSPath)
{
    m_aSPath = _aSPath;
    m_aSPathHasBeenSet = true;
}

bool DirectConnectGatewayCcnRoute::ASPathHasBeenSet() const
{
    return m_aSPathHasBeenSet;
}

