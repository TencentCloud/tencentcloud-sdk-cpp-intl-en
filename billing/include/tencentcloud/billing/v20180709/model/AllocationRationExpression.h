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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRATIONEXPRESSION_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRATIONEXPRESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Expression for sharing proportion.
                */
                class AllocationRationExpression : public AbstractModel
                {
                public:
                    AllocationRationExpression();
                    ~AllocationRationExpression() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cost allocation unit ID that the sharing rule belongs to.
                     * @return NodeId Cost allocation unit ID that the sharing rule belongs to.
                     * 
                     */
                    uint64_t GetNodeId() const;

                    /**
                     * 设置Cost allocation unit ID that the sharing rule belongs to.
                     * @param _nodeId Cost allocation unit ID that the sharing rule belongs to.
                     * 
                     */
                    void SetNodeId(const uint64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Sharing proportion occupied by allocation unit, pass 0 for allocation by proportion.
                     * @return Ratio Sharing proportion occupied by allocation unit, pass 0 for allocation by proportion.
                     * 
                     */
                    double GetRatio() const;

                    /**
                     * 设置Sharing proportion occupied by allocation unit, pass 0 for allocation by proportion.
                     * @param _ratio Sharing proportion occupied by allocation unit, pass 0 for allocation by proportion.
                     * 
                     */
                    void SetRatio(const double& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                private:

                    /**
                     * Cost allocation unit ID that the sharing rule belongs to.
                     */
                    uint64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Sharing proportion occupied by allocation unit, pass 0 for allocation by proportion.
                     */
                    double m_ratio;
                    bool m_ratioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONRATIONEXPRESSION_H_
