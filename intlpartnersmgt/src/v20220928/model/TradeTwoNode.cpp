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

#include <tencentcloud/intlpartnersmgt/v20220928/model/TradeTwoNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

TradeTwoNode::TradeTwoNode() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tradeInfoHasBeenSet(false)
{
}

CoreInternalOutcome TradeTwoNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeTwoNode.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeTwoNode.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TradeInfo") && !value["TradeInfo"].IsNull())
    {
        if (!value["TradeInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeTwoNode.TradeInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeInfo = string(value["TradeInfo"].GetString());
        m_tradeInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TradeTwoNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeInfo.c_str(), allocator).Move(), allocator);
    }

}


string TradeTwoNode::GetId() const
{
    return m_id;
}

void TradeTwoNode::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TradeTwoNode::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TradeTwoNode::GetName() const
{
    return m_name;
}

void TradeTwoNode::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TradeTwoNode::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TradeTwoNode::GetTradeInfo() const
{
    return m_tradeInfo;
}

void TradeTwoNode::SetTradeInfo(const string& _tradeInfo)
{
    m_tradeInfo = _tradeInfo;
    m_tradeInfoHasBeenSet = true;
}

bool TradeTwoNode::TradeInfoHasBeenSet() const
{
    return m_tradeInfoHasBeenSet;
}

