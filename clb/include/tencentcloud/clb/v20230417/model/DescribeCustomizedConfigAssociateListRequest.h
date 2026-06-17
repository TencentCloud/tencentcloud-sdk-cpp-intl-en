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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBECUSTOMIZEDCONFIGASSOCIATELISTREQUEST_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBECUSTOMIZEDCONFIGASSOCIATELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20230417
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
                     * 获取Configuration ID
                     * @return ConfigId Configuration ID
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Configuration ID
                     * @param _configId Configuration ID
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

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
                     * 获取search domain
                     * @return Domain search domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置search domain
                     * @param _domain search domain
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
                     * Configuration ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

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
                     * search domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBECUSTOMIZEDCONFIGASSOCIATELISTREQUEST_H_
