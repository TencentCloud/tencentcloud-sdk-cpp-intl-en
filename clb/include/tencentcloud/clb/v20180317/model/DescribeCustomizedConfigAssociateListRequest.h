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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGASSOCIATELISTREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGASSOCIATELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeCustomizedConfigAssociateList request structure.
                */
                class DescribeCustomizedConfigAssociateListRequest : public AbstractModel
                {
                public:
                    DescribeCustomizedConfigAssociateListRequest();
                    ~DescribeCustomizedConfigAssociateListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the configuration ID, which can be obtained through the [DescribeCustomizedConfigList](https://www.tencentcloud.com/document/product/214/60009?from_cn_redirect=1) api.
                     * @return UconfigId Specifies the configuration ID, which can be obtained through the [DescribeCustomizedConfigList](https://www.tencentcloud.com/document/product/214/60009?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetUconfigId() const;

                    /**
                     * 设置Specifies the configuration ID, which can be obtained through the [DescribeCustomizedConfigList](https://www.tencentcloud.com/document/product/214/60009?from_cn_redirect=1) api.
                     * @param _uconfigId Specifies the configuration ID, which can be obtained through the [DescribeCustomizedConfigList](https://www.tencentcloud.com/document/product/214/60009?from_cn_redirect=1) api.
                     * 
                     */
                    void SetUconfigId(const std::string& _uconfigId);

                    /**
                     * 判断参数 UconfigId 是否已赋值
                     * @return UconfigId 是否已赋值
                     * 
                     */
                    bool UconfigIdHasBeenSet() const;

                    /**
                     * 获取Start position of the binding list. Default: 0.
                     * @return Offset Start position of the binding list. Default: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Start position of the binding list. Default: 0.
                     * @param _offset Start position of the binding list. Default: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of binding lists to pull. Default: 20.
                     * @return Limit Number of binding lists to pull. Default: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of binding lists to pull. Default: 20.
                     * @param _limit Number of binding lists to pull. Default: 20.
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
                     * 获取Search Domain. can be queried through the `Domain` field in the [DescribeLoadBalancersDetail](https://www.tencentcloud.com/document/product/214/46916?from_cn_redirect=1) API return value.
                     * @return Domain Search Domain. can be queried through the `Domain` field in the [DescribeLoadBalancersDetail](https://www.tencentcloud.com/document/product/214/46916?from_cn_redirect=1) API return value.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Search Domain. can be queried through the `Domain` field in the [DescribeLoadBalancersDetail](https://www.tencentcloud.com/document/product/214/46916?from_cn_redirect=1) API return value.
                     * @param _domain Search Domain. can be queried through the `Domain` field in the [DescribeLoadBalancersDetail](https://www.tencentcloud.com/document/product/214/46916?from_cn_redirect=1) API return value.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Specifies the configuration ID, which can be obtained through the [DescribeCustomizedConfigList](https://www.tencentcloud.com/document/product/214/60009?from_cn_redirect=1) api.
                     */
                    std::string m_uconfigId;
                    bool m_uconfigIdHasBeenSet;

                    /**
                     * Start position of the binding list. Default: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of binding lists to pull. Default: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Search Domain. can be queried through the `Domain` field in the [DescribeLoadBalancersDetail](https://www.tencentcloud.com/document/product/214/46916?from_cn_redirect=1) API return value.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGASSOCIATELISTREQUEST_H_
