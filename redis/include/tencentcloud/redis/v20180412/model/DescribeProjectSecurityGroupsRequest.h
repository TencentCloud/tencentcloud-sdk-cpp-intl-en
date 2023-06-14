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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPROJECTSECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPROJECTSECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeProjectSecurityGroups request structure.
                */
                class DescribeProjectSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DescribeProjectSecurityGroupsRequest();
                    ~DescribeProjectSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database engine name, which is `redis` for this API.
                     * @return Product Database engine name, which is `redis` for this API.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Database engine name, which is `redis` for this API.
                     * @param _product Database engine name, which is `redis` for this API.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Offset, which is an integral multiple of `Limit`.
                     * @return Offset Offset, which is an integral multiple of `Limit`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which is an integral multiple of `Limit`.
                     * @param _offset Offset, which is an integral multiple of `Limit`.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The number of security groups to be pulled. Default value: `20`.
                     * @return Limit The number of security groups to be pulled. Default value: `20`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of security groups to be pulled. Default value: `20`.
                     * @param _limit The number of security groups to be pulled. Default value: `20`.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Search criteria. You can enter a security group ID or name.
                     * @return SearchKey Search criteria. You can enter a security group ID or name.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search criteria. You can enter a security group ID or name.
                     * @param _searchKey Search criteria. You can enter a security group ID or name.
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * Database engine name, which is `redis` for this API.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Project ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Offset, which is an integral multiple of `Limit`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of security groups to be pulled. Default value: `20`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Search criteria. You can enter a security group ID or name.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPROJECTSECURITYGROUPSREQUEST_H_
