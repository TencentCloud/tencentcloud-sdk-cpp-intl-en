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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEALIASDOMAINSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEALIASDOMAINSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AliasDomain.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeAliasDomains response structure.
                */
                class DescribeAliasDomainsResponse : public AbstractModel
                {
                public:
                    DescribeAliasDomainsResponse();
                    ~DescribeAliasDomainsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total eligible alias domain names.
                     * @return TotalCount Total eligible alias domain names.
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Information of the eligible alias domain names.
                     * @return AliasDomains Information of the eligible alias domain names.
                     */
                    std::vector<AliasDomain> GetAliasDomains() const;

                    /**
                     * 判断参数 AliasDomains 是否已赋值
                     * @return AliasDomains 是否已赋值
                     */
                    bool AliasDomainsHasBeenSet() const;

                private:

                    /**
                     * Total eligible alias domain names.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Information of the eligible alias domain names.
                     */
                    std::vector<AliasDomain> m_aliasDomains;
                    bool m_aliasDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEALIASDOMAINSRESPONSE_H_
