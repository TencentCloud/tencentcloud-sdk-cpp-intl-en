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

#include <tencentcloud/intlpartnersmgt/v20220928/model/CostAnalyzeFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

CostAnalyzeFilter::CostAnalyzeFilter() :
    m_businessInHasBeenSet(false),
    m_productInHasBeenSet(false),
    m_regionInHasBeenSet(false),
    m_actionTypeInHasBeenSet(false),
    m_payModeInHasBeenSet(false),
    m_projectInHasBeenSet(false),
    m_payerUinInHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagInHasBeenSet(false),
    m_zoneInHasBeenSet(false),
    m_ownerUinInHasBeenSet(false),
    m_componentInHasBeenSet(false),
    m_itemInHasBeenSet(false),
    m_resourceInHasBeenSet(false)
{
}

CoreInternalOutcome CostAnalyzeFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessIn") && !value["BusinessIn"].IsNull())
    {
        if (!value["BusinessIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.BusinessIn` is not array type"));

        const rapidjson::Value &tmpValue = value["BusinessIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_businessIn.push_back((*itr).GetString());
        }
        m_businessInHasBeenSet = true;
    }

    if (value.HasMember("ProductIn") && !value["ProductIn"].IsNull())
    {
        if (!value["ProductIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.ProductIn` is not array type"));

        const rapidjson::Value &tmpValue = value["ProductIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_productIn.push_back((*itr).GetString());
        }
        m_productInHasBeenSet = true;
    }

    if (value.HasMember("RegionIn") && !value["RegionIn"].IsNull())
    {
        if (!value["RegionIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.RegionIn` is not array type"));

        const rapidjson::Value &tmpValue = value["RegionIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_regionIn.push_back((*itr).GetString());
        }
        m_regionInHasBeenSet = true;
    }

    if (value.HasMember("ActionTypeIn") && !value["ActionTypeIn"].IsNull())
    {
        if (!value["ActionTypeIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.ActionTypeIn` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionTypeIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_actionTypeIn.push_back((*itr).GetString());
        }
        m_actionTypeInHasBeenSet = true;
    }

    if (value.HasMember("PayModeIn") && !value["PayModeIn"].IsNull())
    {
        if (!value["PayModeIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.PayModeIn` is not array type"));

        const rapidjson::Value &tmpValue = value["PayModeIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_payModeIn.push_back((*itr).GetString());
        }
        m_payModeInHasBeenSet = true;
    }

    if (value.HasMember("ProjectIn") && !value["ProjectIn"].IsNull())
    {
        if (!value["ProjectIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.ProjectIn` is not array type"));

        const rapidjson::Value &tmpValue = value["ProjectIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_projectIn.push_back((*itr).GetString());
        }
        m_projectInHasBeenSet = true;
    }

    if (value.HasMember("PayerUinIn") && !value["PayerUinIn"].IsNull())
    {
        if (!value["PayerUinIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.PayerUinIn` is not array type"));

        const rapidjson::Value &tmpValue = value["PayerUinIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_payerUinIn.push_back((*itr).GetString());
        }
        m_payerUinInHasBeenSet = true;
    }

    if (value.HasMember("TagKey") && !value["TagKey"].IsNull())
    {
        if (!value["TagKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.TagKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagKey = string(value["TagKey"].GetString());
        m_tagKeyHasBeenSet = true;
    }

    if (value.HasMember("TagIn") && !value["TagIn"].IsNull())
    {
        if (!value["TagIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.TagIn` is not array type"));

        const rapidjson::Value &tmpValue = value["TagIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagIn.push_back((*itr).GetString());
        }
        m_tagInHasBeenSet = true;
    }

    if (value.HasMember("ZoneIn") && !value["ZoneIn"].IsNull())
    {
        if (!value["ZoneIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.ZoneIn` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zoneIn.push_back((*itr).GetString());
        }
        m_zoneInHasBeenSet = true;
    }

    if (value.HasMember("OwnerUinIn") && !value["OwnerUinIn"].IsNull())
    {
        if (!value["OwnerUinIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.OwnerUinIn` is not array type"));

        const rapidjson::Value &tmpValue = value["OwnerUinIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ownerUinIn.push_back((*itr).GetString());
        }
        m_ownerUinInHasBeenSet = true;
    }

    if (value.HasMember("ComponentIn") && !value["ComponentIn"].IsNull())
    {
        if (!value["ComponentIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.ComponentIn` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_componentIn.push_back((*itr).GetString());
        }
        m_componentInHasBeenSet = true;
    }

    if (value.HasMember("ItemIn") && !value["ItemIn"].IsNull())
    {
        if (!value["ItemIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.ItemIn` is not array type"));

        const rapidjson::Value &tmpValue = value["ItemIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_itemIn.push_back((*itr).GetString());
        }
        m_itemInHasBeenSet = true;
    }

    if (value.HasMember("ResourceIn") && !value["ResourceIn"].IsNull())
    {
        if (!value["ResourceIn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostAnalyzeFilter.ResourceIn` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceIn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceIn.push_back((*itr).GetString());
        }
        m_resourceInHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CostAnalyzeFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_businessIn.begin(); itr != m_businessIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_productInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productIn.begin(); itr != m_productIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionIn.begin(); itr != m_regionIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_actionTypeInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTypeIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actionTypeIn.begin(); itr != m_actionTypeIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_payModeInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModeIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_payModeIn.begin(); itr != m_payModeIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIn.begin(); itr != m_projectIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_payerUinInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUinIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_payerUinIn.begin(); itr != m_payerUinIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tagInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIn.begin(); itr != m_tagIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zoneInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIn.begin(); itr != m_zoneIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerUinInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUinIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerUinIn.begin(); itr != m_ownerUinIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_componentInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_componentIn.begin(); itr != m_componentIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_itemInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_itemIn.begin(); itr != m_itemIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIn.begin(); itr != m_resourceIn.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> CostAnalyzeFilter::GetBusinessIn() const
{
    return m_businessIn;
}

void CostAnalyzeFilter::SetBusinessIn(const vector<string>& _businessIn)
{
    m_businessIn = _businessIn;
    m_businessInHasBeenSet = true;
}

bool CostAnalyzeFilter::BusinessInHasBeenSet() const
{
    return m_businessInHasBeenSet;
}

vector<string> CostAnalyzeFilter::GetProductIn() const
{
    return m_productIn;
}

void CostAnalyzeFilter::SetProductIn(const vector<string>& _productIn)
{
    m_productIn = _productIn;
    m_productInHasBeenSet = true;
}

bool CostAnalyzeFilter::ProductInHasBeenSet() const
{
    return m_productInHasBeenSet;
}

vector<string> CostAnalyzeFilter::GetRegionIn() const
{
    return m_regionIn;
}

void CostAnalyzeFilter::SetRegionIn(const vector<string>& _regionIn)
{
    m_regionIn = _regionIn;
    m_regionInHasBeenSet = true;
}

bool CostAnalyzeFilter::RegionInHasBeenSet() const
{
    return m_regionInHasBeenSet;
}

vector<string> CostAnalyzeFilter::GetActionTypeIn() const
{
    return m_actionTypeIn;
}

void CostAnalyzeFilter::SetActionTypeIn(const vector<string>& _actionTypeIn)
{
    m_actionTypeIn = _actionTypeIn;
    m_actionTypeInHasBeenSet = true;
}

bool CostAnalyzeFilter::ActionTypeInHasBeenSet() const
{
    return m_actionTypeInHasBeenSet;
}

vector<string> CostAnalyzeFilter::GetPayModeIn() const
{
    return m_payModeIn;
}

void CostAnalyzeFilter::SetPayModeIn(const vector<string>& _payModeIn)
{
    m_payModeIn = _payModeIn;
    m_payModeInHasBeenSet = true;
}

bool CostAnalyzeFilter::PayModeInHasBeenSet() const
{
    return m_payModeInHasBeenSet;
}

vector<string> CostAnalyzeFilter::GetProjectIn() const
{
    return m_projectIn;
}

void CostAnalyzeFilter::SetProjectIn(const vector<string>& _projectIn)
{
    m_projectIn = _projectIn;
    m_projectInHasBeenSet = true;
}

bool CostAnalyzeFilter::ProjectInHasBeenSet() const
{
    return m_projectInHasBeenSet;
}

vector<string> CostAnalyzeFilter::GetPayerUinIn() const
{
    return m_payerUinIn;
}

void CostAnalyzeFilter::SetPayerUinIn(const vector<string>& _payerUinIn)
{
    m_payerUinIn = _payerUinIn;
    m_payerUinInHasBeenSet = true;
}

bool CostAnalyzeFilter::PayerUinInHasBeenSet() const
{
    return m_payerUinInHasBeenSet;
}

string CostAnalyzeFilter::GetTagKey() const
{
    return m_tagKey;
}

void CostAnalyzeFilter::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool CostAnalyzeFilter::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

vector<string> CostAnalyzeFilter::GetTagIn() const
{
    return m_tagIn;
}

void CostAnalyzeFilter::SetTagIn(const vector<string>& _tagIn)
{
    m_tagIn = _tagIn;
    m_tagInHasBeenSet = true;
}

bool CostAnalyzeFilter::TagInHasBeenSet() const
{
    return m_tagInHasBeenSet;
}

vector<string> CostAnalyzeFilter::GetZoneIn() const
{
    return m_zoneIn;
}

void CostAnalyzeFilter::SetZoneIn(const vector<string>& _zoneIn)
{
    m_zoneIn = _zoneIn;
    m_zoneInHasBeenSet = true;
}

bool CostAnalyzeFilter::ZoneInHasBeenSet() const
{
    return m_zoneInHasBeenSet;
}

vector<string> CostAnalyzeFilter::GetOwnerUinIn() const
{
    return m_ownerUinIn;
}

void CostAnalyzeFilter::SetOwnerUinIn(const vector<string>& _ownerUinIn)
{
    m_ownerUinIn = _ownerUinIn;
    m_ownerUinInHasBeenSet = true;
}

bool CostAnalyzeFilter::OwnerUinInHasBeenSet() const
{
    return m_ownerUinInHasBeenSet;
}

vector<string> CostAnalyzeFilter::GetComponentIn() const
{
    return m_componentIn;
}

void CostAnalyzeFilter::SetComponentIn(const vector<string>& _componentIn)
{
    m_componentIn = _componentIn;
    m_componentInHasBeenSet = true;
}

bool CostAnalyzeFilter::ComponentInHasBeenSet() const
{
    return m_componentInHasBeenSet;
}

vector<string> CostAnalyzeFilter::GetItemIn() const
{
    return m_itemIn;
}

void CostAnalyzeFilter::SetItemIn(const vector<string>& _itemIn)
{
    m_itemIn = _itemIn;
    m_itemInHasBeenSet = true;
}

bool CostAnalyzeFilter::ItemInHasBeenSet() const
{
    return m_itemInHasBeenSet;
}

vector<string> CostAnalyzeFilter::GetResourceIn() const
{
    return m_resourceIn;
}

void CostAnalyzeFilter::SetResourceIn(const vector<string>& _resourceIn)
{
    m_resourceIn = _resourceIn;
    m_resourceInHasBeenSet = true;
}

bool CostAnalyzeFilter::ResourceInHasBeenSet() const
{
    return m_resourceInHasBeenSet;
}

