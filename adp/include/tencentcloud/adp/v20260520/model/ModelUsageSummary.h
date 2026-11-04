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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELUSAGESUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELUSAGESUMMARY_H_

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
                * Aggregated details of model resource usage (exclusive to MODEL domain)
                */
                class ModelUsageSummary : public AbstractModel
                {
                public:
                    ModelUsageSummary();
                    ~ModelUsageSummary() = default;
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
                     * 获取<p>Whether it is the default knowledge base</p>
                     * @return IsDefaultKB <p>Whether it is the default knowledge base</p>
                     * 
                     */
                    bool GetIsDefaultKB() const;

                    /**
                     * 设置<p>Whether it is the default knowledge base</p>
                     * @param _isDefaultKB <p>Whether it is the default knowledge base</p>
                     * 
                     */
                    void SetIsDefaultKB(const bool& _isDefaultKB);

                    /**
                     * 判断参数 IsDefaultKB 是否已赋值
                     * @return IsDefaultKB 是否已赋值
                     * 
                     */
                    bool IsDefaultKBHasBeenSet() const;

                    /**
                     * 获取<p>Model name, flag indicating the AI model used</p>
                     * @return ModelName <p>Model name, flag indicating the AI model used</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Model name, flag indicating the AI model used</p>
                     * @param _modelName <p>Model name, flag indicating the AI model used</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>MODEL domain consumption measurement list (authoritative field): lists each measurement category by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_* /cache_*), with an empty label indicating total_tokens; unit=PAGE_COUNT refers to the model's consumed page count</p>
                     * @return ResourceConsumptionList <p>MODEL domain consumption measurement list (authoritative field): lists each measurement category by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_* /cache_*), with an empty label indicating total_tokens; unit=PAGE_COUNT refers to the model's consumed page count</p>
                     * 
                     */
                    std::vector<ResourceConsumption> GetResourceConsumptionList() const;

                    /**
                     * 设置<p>MODEL domain consumption measurement list (authoritative field): lists each measurement category by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_* /cache_*), with an empty label indicating total_tokens; unit=PAGE_COUNT refers to the model's consumed page count</p>
                     * @param _resourceConsumptionList <p>MODEL domain consumption measurement list (authoritative field): lists each measurement category by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_* /cache_*), with an empty label indicating total_tokens; unit=PAGE_COUNT refers to the model's consumed page count</p>
                     * 
                     */
                    void SetResourceConsumptionList(const std::vector<ResourceConsumption>& _resourceConsumptionList);

                    /**
                     * 判断参数 ResourceConsumptionList 是否已赋值
                     * @return ResourceConsumptionList 是否已赋值
                     * 
                     */
                    bool ResourceConsumptionListHasBeenSet() const;

                    /**
                     * 获取<p>Total model PU consumption (sum of PU consumption within the aggregate dimension)</p>
                     * @return ConsumptionPU <p>Total model PU consumption (sum of PU consumption within the aggregate dimension)</p>
                     * 
                     */
                    double GetConsumptionPU() const;

                    /**
                     * 设置<p>Total model PU consumption (sum of PU consumption within the aggregate dimension)</p>
                     * @param _consumptionPU <p>Total model PU consumption (sum of PU consumption within the aggregate dimension)</p>
                     * 
                     */
                    void SetConsumptionPU(const double& _consumptionPU);

                    /**
                     * 判断参数 ConsumptionPU 是否已赋值
                     * @return ConsumptionPU 是否已赋值
                     * 
                     */
                    bool ConsumptionPUHasBeenSet() const;

                private:

                    /**
                     * <p>Number of calls (top-level count of API calls)</p>
                     */
                    double m_callCount;
                    bool m_callCountHasBeenSet;

                    /**
                     * <p>Whether it is the default knowledge base</p>
                     */
                    bool m_isDefaultKB;
                    bool m_isDefaultKBHasBeenSet;

                    /**
                     * <p>Model name, flag indicating the AI model used</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>MODEL domain consumption measurement list (authoritative field): lists each measurement category by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_* /cache_*), with an empty label indicating total_tokens; unit=PAGE_COUNT refers to the model's consumed page count</p>
                     */
                    std::vector<ResourceConsumption> m_resourceConsumptionList;
                    bool m_resourceConsumptionListHasBeenSet;

                    /**
                     * <p>Total model PU consumption (sum of PU consumption within the aggregate dimension)</p>
                     */
                    double m_consumptionPU;
                    bool m_consumptionPUHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELUSAGESUMMARY_H_
