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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELUSAGEDETAIL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELUSAGEDETAIL_H_

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
                * Model invocation details
                */
                class ModelUsageDetail : public AbstractModel
                {
                public:
                    ModelUsageDetail();
                    ~ModelUsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Invocation type, originating from billing scene_billing (corresponding to filter.call_type)</p>
                     * @return CallType <p>Invocation type, originating from billing scene_billing (corresponding to filter.call_type)</p>
                     * 
                     */
                    std::string GetCallType() const;

                    /**
                     * 设置<p>Invocation type, originating from billing scene_billing (corresponding to filter.call_type)</p>
                     * @param _callType <p>Invocation type, originating from billing scene_billing (corresponding to filter.call_type)</p>
                     * 
                     */
                    void SetCallType(const std::string& _callType);

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is the default knowledge base. It is only meaningful for the business where ResourceType=5 (knowledge base capacity)</p>
                     * @return IsDefaultKB <p>Whether it is the default knowledge base. It is only meaningful for the business where ResourceType=5 (knowledge base capacity)</p>
                     * 
                     */
                    bool GetIsDefaultKB() const;

                    /**
                     * 设置<p>Whether it is the default knowledge base. It is only meaningful for the business where ResourceType=5 (knowledge base capacity)</p>
                     * @param _isDefaultKB <p>Whether it is the default knowledge base. It is only meaningful for the business where ResourceType=5 (knowledge base capacity)</p>
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
                     * 获取<p>Model name</p>
                     * @return ModelName <p>Model name</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Model name</p>
                     * @param _modelName <p>Model name</p>
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
                     * 获取<p>List of consumption measurements for a single call in the MODEL field (authoritative field): lists each measurement type by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_* /cache_*), and being empty indicates total_tokens; unit=PAGE_COUNT refers to the number of pages consumed by the model</p>
                     * @return ResourceConsumptionList <p>List of consumption measurements for a single call in the MODEL field (authoritative field): lists each measurement type by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_* /cache_*), and being empty indicates total_tokens; unit=PAGE_COUNT refers to the number of pages consumed by the model</p>
                     * 
                     */
                    std::vector<ResourceConsumption> GetResourceConsumptionList() const;

                    /**
                     * 设置<p>List of consumption measurements for a single call in the MODEL field (authoritative field): lists each measurement type by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_* /cache_*), and being empty indicates total_tokens; unit=PAGE_COUNT refers to the number of pages consumed by the model</p>
                     * @param _resourceConsumptionList <p>List of consumption measurements for a single call in the MODEL field (authoritative field): lists each measurement type by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_* /cache_*), and being empty indicates total_tokens; unit=PAGE_COUNT refers to the number of pages consumed by the model</p>
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
                     * 获取<p>PU consumption of this call</p>
                     * @return ConsumptionPU <p>PU consumption of this call</p>
                     * 
                     */
                    double GetConsumptionPU() const;

                    /**
                     * 设置<p>PU consumption of this call</p>
                     * @param _consumptionPU <p>PU consumption of this call</p>
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
                     * <p>Invocation type, originating from billing scene_billing (corresponding to filter.call_type)</p>
                     */
                    std::string m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * <p>Whether it is the default knowledge base. It is only meaningful for the business where ResourceType=5 (knowledge base capacity)</p>
                     */
                    bool m_isDefaultKB;
                    bool m_isDefaultKBHasBeenSet;

                    /**
                     * <p>Model name</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>List of consumption measurements for a single call in the MODEL field (authoritative field): lists each measurement type by unit + label. When unit=TOKEN, label is case-sensitive for Token subcategories (input/output/avg_* /cache_*), and being empty indicates total_tokens; unit=PAGE_COUNT refers to the number of pages consumed by the model</p>
                     */
                    std::vector<ResourceConsumption> m_resourceConsumptionList;
                    bool m_resourceConsumptionListHasBeenSet;

                    /**
                     * <p>PU consumption of this call</p>
                     */
                    double m_consumptionPU;
                    bool m_consumptionPUHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELUSAGEDETAIL_H_
