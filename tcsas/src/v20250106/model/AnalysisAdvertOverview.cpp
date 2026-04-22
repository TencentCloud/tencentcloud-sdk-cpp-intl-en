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

#include <tencentcloud/tcsas/v20250106/model/AnalysisAdvertOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

AnalysisAdvertOverview::AnalysisAdvertOverview() :
    m_overviewDataHasBeenSet(false)
{
}

CoreInternalOutcome AnalysisAdvertOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OverviewData") && !value["OverviewData"].IsNull())
    {
        if (!value["OverviewData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisAdvertOverview.OverviewData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_overviewData.Deserialize(value["OverviewData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_overviewDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalysisAdvertOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_overviewDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverviewData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_overviewData.ToJsonObject(value[key.c_str()], allocator);
    }

}


AdvertDataOverview AnalysisAdvertOverview::GetOverviewData() const
{
    return m_overviewData;
}

void AnalysisAdvertOverview::SetOverviewData(const AdvertDataOverview& _overviewData)
{
    m_overviewData = _overviewData;
    m_overviewDataHasBeenSet = true;
}

bool AnalysisAdvertOverview::OverviewDataHasBeenSet() const
{
    return m_overviewDataHasBeenSet;
}

