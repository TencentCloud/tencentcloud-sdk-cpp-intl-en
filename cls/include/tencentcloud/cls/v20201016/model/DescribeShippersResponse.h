/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESHIPPERSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESHIPPERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ShipperInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeShippers response structure.
                */
                class DescribeShippersResponse : public AbstractModel
                {
                public:
                    DescribeShippersResponse();
                    ~DescribeShippersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Shipping rule list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Shippers Shipping rule list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ShipperInfo> GetShippers() const;

                    /**
                     * 判断参数 Shippers 是否已赋值
                     * @return Shippers 是否已赋值
                     */
                    bool ShippersHasBeenSet() const;

                    /**
                     * 获取Total number of results obtained in this query
                     * @return TotalCount Total number of results obtained in this query
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Shipping rule list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ShipperInfo> m_shippers;
                    bool m_shippersHasBeenSet;

                    /**
                     * Total number of results obtained in this query
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESHIPPERSRESPONSE_H_
