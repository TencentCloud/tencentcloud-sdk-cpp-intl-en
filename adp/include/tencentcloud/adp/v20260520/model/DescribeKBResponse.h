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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEKBRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEKBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/KBCapacity.h>
#include <tencentcloud/adp/v20260520/model/ESConfig.h>
#include <tencentcloud/adp/v20260520/model/KBModelConfig.h>
#include <tencentcloud/adp/v20260520/model/Operator.h>
#include <tencentcloud/adp/v20260520/model/KBSummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeKB response structure.
                */
                class DescribeKBResponse : public AbstractModel
                {
                public:
                    DescribeKBResponse();
                    ~DescribeKBResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Associated application ID list</p>
                     * @return AppIdList <p>Associated application ID list</p>
                     * 
                     */
                    std::vector<std::string> GetAppIdList() const;

                    /**
                     * 判断参数 AppIdList 是否已赋值
                     * @return AppIdList 是否已赋值
                     * 
                     */
                    bool AppIdListHasBeenSet() const;

                    /**
                     * 获取<p>Capacity information.</p>
                     * @return CapacityInfo <p>Capacity information.</p>
                     * 
                     */
                    KBCapacity GetCapacityInfo() const;

                    /**
                     * 判断参数 CapacityInfo 是否已赋值
                     * @return CapacityInfo 是否已赋值
                     * 
                     */
                    bool CapacityInfoHasBeenSet() const;

                    /**
                     * 获取<p>ES configuration</p>
                     * @return EsConfig <p>ES configuration</p>
                     * 
                     */
                    ESConfig GetEsConfig() const;

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     * 
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取<p>Model configuration</p>
                     * @return ModelConfig <p>Model configuration</p>
                     * 
                     */
                    KBModelConfig GetModelConfig() const;

                    /**
                     * 判断参数 ModelConfig 是否已赋值
                     * @return ModelConfig 是否已赋值
                     * 
                     */
                    bool ModelConfigHasBeenSet() const;

                    /**
                     * 获取<p>Owner information</p>
                     * @return Owner <p>Owner information</p>
                     * 
                     */
                    Operator GetOwner() const;

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge base digest information</p>
                     * @return Summary <p>Knowledge base digest information</p>
                     * 
                     */
                    KBSummary GetSummary() const;

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                private:

                    /**
                     * <p>Associated application ID list</p>
                     */
                    std::vector<std::string> m_appIdList;
                    bool m_appIdListHasBeenSet;

                    /**
                     * <p>Capacity information.</p>
                     */
                    KBCapacity m_capacityInfo;
                    bool m_capacityInfoHasBeenSet;

                    /**
                     * <p>ES configuration</p>
                     */
                    ESConfig m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * <p>Model configuration</p>
                     */
                    KBModelConfig m_modelConfig;
                    bool m_modelConfigHasBeenSet;

                    /**
                     * <p>Owner information</p>
                     */
                    Operator m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>Knowledge base digest information</p>
                     */
                    KBSummary m_summary;
                    bool m_summaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEKBRESPONSE_H_
