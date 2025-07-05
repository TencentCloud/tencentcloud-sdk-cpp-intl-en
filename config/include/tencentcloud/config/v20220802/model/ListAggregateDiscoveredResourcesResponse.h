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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATEDISCOVEREDRESOURCESRESPONSE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATEDISCOVEREDRESOURCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/AggregateResourceInfo.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListAggregateDiscoveredResources response structure.
                */
                class ListAggregateDiscoveredResourcesResponse : public AbstractModel
                {
                public:
                    ListAggregateDiscoveredResourcesResponse();
                    ~ListAggregateDiscoveredResourcesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Details.
                     * @return Items Details.
                     * 
                     */
                    std::vector<AggregateResourceInfo> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取next page
Note: This field may return null, indicating that no valid value is found.
                     * @return NextToken next page
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * Details.
                     */
                    std::vector<AggregateResourceInfo> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * next page
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATEDISCOVEREDRESOURCESRESPONSE_H_
