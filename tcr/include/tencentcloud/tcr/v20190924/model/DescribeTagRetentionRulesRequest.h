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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBETAGRETENTIONRULESREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBETAGRETENTIONRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeTagRetentionRules request structure.
                */
                class DescribeTagRetentionRulesRequest : public AbstractModel
                {
                public:
                    DescribeTagRetentionRulesRequest();
                    ~DescribeTagRetentionRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Primary instance ID
                     * @return RegistryId Primary instance ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Primary instance ID
                     * @param _registryId Primary instance ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Namespace name
                     * @return NamespaceName Namespace name
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Namespace name
                     * @param _namespaceName Namespace name
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取`PageSize` for pagination
                     * @return Limit `PageSize` for pagination
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置`PageSize` for pagination
                     * @param _limit `PageSize` for pagination
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page offset
                     * @return Offset Page offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset
                     * @param _offset Page offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Primary instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Namespace name
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * `PageSize` for pagination
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBETAGRETENTIONRULESREQUEST_H_
