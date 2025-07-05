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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_TRADEONENODE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_TRADEONENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/TradeTwoNode.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Primary Industry Information
                */
                class TradeOneNode : public AbstractModel
                {
                public:
                    TradeOneNode();
                    ~TradeOneNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Layer-1 industry id.
                     * @return Id Layer-1 industry id.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Layer-1 industry id.
                     * @param _id Layer-1 industry id.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Layer-1 industry name.
                     * @return Name Layer-1 industry name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Layer-1 industry name.
                     * @param _name Layer-1 industry name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Layer-2 industries corresponding to the layer-1 industry.
                     * @return Children Layer-2 industries corresponding to the layer-1 industry.
                     * 
                     */
                    std::vector<TradeTwoNode> GetChildren() const;

                    /**
                     * 设置Layer-2 industries corresponding to the layer-1 industry.
                     * @param _children Layer-2 industries corresponding to the layer-1 industry.
                     * 
                     */
                    void SetChildren(const std::vector<TradeTwoNode>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * Layer-1 industry id.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Layer-1 industry name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Layer-2 industries corresponding to the layer-1 industry.
                     */
                    std::vector<TradeTwoNode> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_TRADEONENODE_H_
