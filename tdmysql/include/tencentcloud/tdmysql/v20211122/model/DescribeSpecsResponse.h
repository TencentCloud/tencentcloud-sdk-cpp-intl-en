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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESPECSRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESPECSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/StorageNodeSpec.h>
#include <tencentcloud/tdmysql/v20211122/model/ServerlessCcu.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeSpecs response structure.
                */
                class DescribeSpecsResponse : public AbstractModel
                {
                public:
                    DescribeSpecsResponse();
                    ~DescribeSpecsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Purchasable specification list of peer nodes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HybridNodeSpecs <p>Purchasable specification list of peer nodes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<StorageNodeSpec> GetHybridNodeSpecs() const;

                    /**
                     * 判断参数 HybridNodeSpecs 是否已赋值
                     * @return HybridNodeSpecs 是否已赋值
                     * 
                     */
                    bool HybridNodeSpecsHasBeenSet() const;

                    /**
                     * 获取<p>Purchasable specification list of svls nodes</p>
                     * @return ServerlessCcuSpec <p>Purchasable specification list of svls nodes</p>
                     * 
                     */
                    std::vector<ServerlessCcu> GetServerlessCcuSpec() const;

                    /**
                     * 判断参数 ServerlessCcuSpec 是否已赋值
                     * @return ServerlessCcuSpec 是否已赋值
                     * 
                     */
                    bool ServerlessCcuSpecHasBeenSet() const;

                private:

                    /**
                     * <p>Purchasable specification list of peer nodes</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<StorageNodeSpec> m_hybridNodeSpecs;
                    bool m_hybridNodeSpecsHasBeenSet;

                    /**
                     * <p>Purchasable specification list of svls nodes</p>
                     */
                    std::vector<ServerlessCcu> m_serverlessCcuSpec;
                    bool m_serverlessCcuSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESPECSRESPONSE_H_
