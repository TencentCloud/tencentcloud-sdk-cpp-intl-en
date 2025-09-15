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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODEDETAILPRICERESULT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODEDETAILPRICERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PartDetailPriceItem.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Price details by node, used for creating the cluster price list
                */
                class NodeDetailPriceResult : public AbstractModel
                {
                public:
                    NodeDetailPriceResult();
                    ~NodeDetailPriceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node type: Master, Core, Task, Common, Router, and MySQL.
                     * @return NodeType Node type: Master, Core, Task, Common, Router, and MySQL.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type: Master, Core, Task, Common, Router, and MySQL.
                     * @param _nodeType Node type: Master, Core, Task, Common, Router, and MySQL.
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Price details by node part
                     * @return PartDetailPrice Price details by node part
                     * 
                     */
                    std::vector<PartDetailPriceItem> GetPartDetailPrice() const;

                    /**
                     * 设置Price details by node part
                     * @param _partDetailPrice Price details by node part
                     * 
                     */
                    void SetPartDetailPrice(const std::vector<PartDetailPriceItem>& _partDetailPrice);

                    /**
                     * 判断参数 PartDetailPrice 是否已赋值
                     * @return PartDetailPrice 是否已赋值
                     * 
                     */
                    bool PartDetailPriceHasBeenSet() const;

                private:

                    /**
                     * Node type: Master, Core, Task, Common, Router, and MySQL.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Price details by node part
                     */
                    std::vector<PartDetailPriceItem> m_partDetailPrice;
                    bool m_partDetailPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODEDETAILPRICERESULT_H_
