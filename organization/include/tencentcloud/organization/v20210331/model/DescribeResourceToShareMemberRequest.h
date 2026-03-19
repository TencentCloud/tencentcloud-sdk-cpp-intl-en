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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBERESOURCETOSHAREMEMBERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBERESOURCETOSHAREMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeResourceToShareMember request structure.
                */
                class DescribeResourceToShareMemberRequest : public AbstractModel
                {
                public:
                    DescribeResourceToShareMemberRequest();
                    ~DescribeResourceToShareMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Shared region. you can obtain supported shared regions through the api [DescribeShareAreas](https://www.tencentcloud.com/document/product/850/103050?from_cn_redirect=1).
                     * @return Area Shared region. you can obtain supported shared regions through the api [DescribeShareAreas](https://www.tencentcloud.com/document/product/850/103050?from_cn_redirect=1).
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Shared region. you can obtain supported shared regions through the api [DescribeShareAreas](https://www.tencentcloud.com/document/product/850/103050?from_cn_redirect=1).
                     * @param _area Shared region. you can obtain supported shared regions through the api [DescribeShareAreas](https://www.tencentcloud.com/document/product/850/103050?from_cn_redirect=1).
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * @return Offset Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     * @param _offset Offset. Its value must be an integer multiple of the limit. Default value: 0.
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
                     * 获取Limit. Value range: 1–50.
                     * @return Limit Limit. Value range: 1–50.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit. Value range: 1–50.
                     * @param _limit Limit. Value range: 1–50.
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
                     * 获取Search keywords support business resource ID search.
                     * @return SearchKey Search keywords support business resource ID search.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search keywords support business resource ID search.
                     * @param _searchKey Search keywords support business resource ID search.
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取Shared resource type. For supported shared resource types, see [Overview of Resource Sharing](https://www.tencentcloud.com/document/product/850/59489?from_cn_redirect=1).
                     * @return Type Shared resource type. For supported shared resource types, see [Overview of Resource Sharing](https://www.tencentcloud.com/document/product/850/59489?from_cn_redirect=1).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Shared resource type. For supported shared resource types, see [Overview of Resource Sharing](https://www.tencentcloud.com/document/product/850/59489?from_cn_redirect=1).
                     * @param _type Shared resource type. For supported shared resource types, see [Overview of Resource Sharing](https://www.tencentcloud.com/document/product/850/59489?from_cn_redirect=1).
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Business resource ID. maximum 50.
                     * @return ProductResourceIds Business resource ID. maximum 50.
                     * 
                     */
                    std::vector<std::string> GetProductResourceIds() const;

                    /**
                     * 设置Business resource ID. maximum 50.
                     * @param _productResourceIds Business resource ID. maximum 50.
                     * 
                     */
                    void SetProductResourceIds(const std::vector<std::string>& _productResourceIds);

                    /**
                     * 判断参数 ProductResourceIds 是否已赋值
                     * @return ProductResourceIds 是否已赋值
                     * 
                     */
                    bool ProductResourceIdsHasBeenSet() const;

                private:

                    /**
                     * Shared region. you can obtain supported shared regions through the api [DescribeShareAreas](https://www.tencentcloud.com/document/product/850/103050?from_cn_redirect=1).
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Offset. Its value must be an integer multiple of the limit. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit. Value range: 1–50.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Search keywords support business resource ID search.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Shared resource type. For supported shared resource types, see [Overview of Resource Sharing](https://www.tencentcloud.com/document/product/850/59489?from_cn_redirect=1).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Business resource ID. maximum 50.
                     */
                    std::vector<std::string> m_productResourceIds;
                    bool m_productResourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBERESOURCETOSHAREMEMBERREQUEST_H_
