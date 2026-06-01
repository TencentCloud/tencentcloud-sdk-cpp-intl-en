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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * AddInstances response structure.
                */
                class AddInstancesResponse : public AbstractModel
                {
                public:
                    AddInstancesResponse();
                    ~AddInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Freeze transaction. One frozen flow is activated at a time.</p>
                     * @return TranId <p>Freeze transaction. One frozen flow is activated at a time.</p>
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     * 
                     */
                    bool TranIdHasBeenSet() const;

                    /**
                     * 获取<p>Order ID for payment. Description: Recommend you use the <a href="https://www.tencentcloud.com/document/product/1098/40735">DescribeResourcesByDealName</a> api to query order associated instance.</p>
                     * @return DealNames <p>Order ID for payment. Description: Recommend you use the <a href="https://www.tencentcloud.com/document/product/1098/40735">DescribeResourcesByDealName</a> api to query order associated instance.</p>
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                    /**
                     * 获取<p>Delivery resource id list.</p>
                     * @return ResourceIds <p>Delivery resource id list.</p>
                     * @deprecated
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * @deprecated
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Large order number</p>
                     * @return BigDealIds <p>Large order number</p>
                     * 
                     */
                    std::vector<std::string> GetBigDealIds() const;

                    /**
                     * 判断参数 BigDealIds 是否已赋值
                     * @return BigDealIds 是否已赋值
                     * 
                     */
                    bool BigDealIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Freeze transaction. One frozen flow is activated at a time.</p>
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                    /**
                     * <p>Order ID for payment. Description: Recommend you use the <a href="https://www.tencentcloud.com/document/product/1098/40735">DescribeResourcesByDealName</a> api to query order associated instance.</p>
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * <p>Delivery resource id list.</p>
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * <p>Large order number</p>
                     */
                    std::vector<std::string> m_bigDealIds;
                    bool m_bigDealIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESRESPONSE_H_
