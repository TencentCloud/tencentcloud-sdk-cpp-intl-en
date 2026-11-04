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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSAGESUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSAGESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ResourceConsumption.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Aggregated details of plug-in resource usage (exclusive to the PLUGIN domain)
                */
                class PluginUsageSummary : public AbstractModel
                {
                public:
                    PluginUsageSummary();
                    ~PluginUsageSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Number of calls (top-level count of API calls)</p>
                     * @return CallCount <p>Number of calls (top-level count of API calls)</p>
                     * 
                     */
                    double GetCallCount() const;

                    /**
                     * 设置<p>Number of calls (top-level count of API calls)</p>
                     * @param _callCount <p>Number of calls (top-level count of API calls)</p>
                     * 
                     */
                    void SetCallCount(const double& _callCount);

                    /**
                     * 判断参数 CallCount 是否已赋值
                     * @return CallCount 是否已赋值
                     * 
                     */
                    bool CallCountHasBeenSet() const;

                    /**
                     * 获取<p>Consumption measurement list for the PLUGIN domain (authoritative field): lists each measurement category by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_*). Being empty indicates total_tokens</p>
                     * @return ResourceConsumptionList <p>Consumption measurement list for the PLUGIN domain (authoritative field): lists each measurement category by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_*). Being empty indicates total_tokens</p>
                     * 
                     */
                    std::vector<ResourceConsumption> GetResourceConsumptionList() const;

                    /**
                     * 设置<p>Consumption measurement list for the PLUGIN domain (authoritative field): lists each measurement category by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_*). Being empty indicates total_tokens</p>
                     * @param _resourceConsumptionList <p>Consumption measurement list for the PLUGIN domain (authoritative field): lists each measurement category by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_*). Being empty indicates total_tokens</p>
                     * 
                     */
                    void SetResourceConsumptionList(const std::vector<ResourceConsumption>& _resourceConsumptionList);

                    /**
                     * 判断参数 ResourceConsumptionList 是否已赋值
                     * @return ResourceConsumptionList 是否已赋值
                     * 
                     */
                    bool ResourceConsumptionListHasBeenSet() const;

                private:

                    /**
                     * <p>Number of calls (top-level count of API calls)</p>
                     */
                    double m_callCount;
                    bool m_callCountHasBeenSet;

                    /**
                     * <p>Consumption measurement list for the PLUGIN domain (authoritative field): lists each measurement category by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_*). Being empty indicates total_tokens</p>
                     */
                    std::vector<ResourceConsumption> m_resourceConsumptionList;
                    bool m_resourceConsumptionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSAGESUMMARY_H_
