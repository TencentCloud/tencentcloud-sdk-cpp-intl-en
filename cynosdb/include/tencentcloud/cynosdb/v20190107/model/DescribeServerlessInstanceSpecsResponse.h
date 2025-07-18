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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESERVERLESSINSTANCESPECSRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESERVERLESSINSTANCESPECSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ServerlessSpec.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeServerlessInstanceSpecs response structure.
                */
                class DescribeServerlessInstanceSpecsResponse : public AbstractModel
                {
                public:
                    DescribeServerlessInstanceSpecsResponse();
                    ~DescribeServerlessInstanceSpecsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Available specifications of Serverless instance.
                     * @return Specs Available specifications of Serverless instance.
                     * 
                     */
                    std::vector<ServerlessSpec> GetSpecs() const;

                    /**
                     * 判断参数 Specs 是否已赋值
                     * @return Specs 是否已赋值
                     * 
                     */
                    bool SpecsHasBeenSet() const;

                private:

                    /**
                     * Available specifications of Serverless instance.
                     */
                    std::vector<ServerlessSpec> m_specs;
                    bool m_specsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESERVERLESSINSTANCESPECSRESPONSE_H_
