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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEPRODUCTSKUSRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEPRODUCTSKUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/ProductSKU.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeProductSKUs response structure.
                */
                class DescribeProductSKUsResponse : public AbstractModel
                {
                public:
                    DescribeProductSKUsResponse();
                    ~DescribeProductSKUsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Product configuration information

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Product configuration information

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ProductSKU> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Product configuration information

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ProductSKU> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEPRODUCTSKUSRESPONSE_H_
