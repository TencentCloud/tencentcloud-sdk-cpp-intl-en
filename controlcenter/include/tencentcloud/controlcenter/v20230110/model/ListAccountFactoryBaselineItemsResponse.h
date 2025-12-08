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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_LISTACCOUNTFACTORYBASELINEITEMSRESPONSE_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_LISTACCOUNTFACTORYBASELINEITEMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/controlcenter/v20230110/model/AccountFactoryItem.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * ListAccountFactoryBaselineItems response structure.
                */
                class ListAccountFactoryBaselineItemsResponse : public AbstractModel
                {
                public:
                    ListAccountFactoryBaselineItemsResponse();
                    ~ListAccountFactoryBaselineItemsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Account factory baseline list.
                     * @return BaselineItems Account factory baseline list.
                     * 
                     */
                    std::vector<AccountFactoryItem> GetBaselineItems() const;

                    /**
                     * 判断参数 BaselineItems 是否已赋值
                     * @return BaselineItems 是否已赋值
                     * 
                     */
                    bool BaselineItemsHasBeenSet() const;

                    /**
                     * 获取Total quantity.
                     * @return Total Total quantity.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Account factory baseline list.
                     */
                    std::vector<AccountFactoryItem> m_baselineItems;
                    bool m_baselineItemsHasBeenSet;

                    /**
                     * Total quantity.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_LISTACCOUNTFACTORYBASELINEITEMSRESPONSE_H_
