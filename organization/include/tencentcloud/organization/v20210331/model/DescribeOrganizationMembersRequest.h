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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/Tag.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeOrganizationMembers request structure.
                */
                class DescribeOrganizationMembersRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationMembersRequest();
                    ~DescribeOrganizationMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset, which is an integer multiple of the value of `Limit`. Default value: `0`.
                     * @return Offset Offset, which is an integer multiple of the value of `Limit`. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which is an integer multiple of the value of `Limit`. Default value: `0`.
                     * @param _offset Offset, which is an integer multiple of the value of `Limit`. Default value: `0`.
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
                     * 获取Limit, which defaults to `10`. Value range: 1-50.
                     * @return Limit Limit, which defaults to `10`. Value range: 1-50.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit, which defaults to `10`. Value range: 1-50.
                     * @param _limit Limit, which defaults to `10`. Value range: 1-50.
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
                     * 获取Valid values: `en` (Tencent Cloud International); `zh` (Tencent Cloud).
                     * @return Lang Valid values: `en` (Tencent Cloud International); `zh` (Tencent Cloud).
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置Valid values: `en` (Tencent Cloud International); `zh` (Tencent Cloud).
                     * @param _lang Valid values: `en` (Tencent Cloud International); `zh` (Tencent Cloud).
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                    /**
                     * 获取Search by member name or ID.
                     * @return SearchKey Search by member name or ID.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search by member name or ID.
                     * @param _searchKey Search by member name or ID.
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
                     * 获取Entity name.
                     * @return AuthName Entity name.
                     * 
                     */
                    std::string GetAuthName() const;

                    /**
                     * 设置Entity name.
                     * @param _authName Entity name.
                     * 
                     */
                    void SetAuthName(const std::string& _authName);

                    /**
                     * 判断参数 AuthName 是否已赋值
                     * @return AuthName 是否已赋值
                     * 
                     */
                    bool AuthNameHasBeenSet() const;

                    /**
                     * 获取Abbreviation of the trusted service, which is required during querying the trusted service admin.
                     * @return Product Abbreviation of the trusted service, which is required during querying the trusted service admin.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Abbreviation of the trusted service, which is required during querying the trusted service admin.
                     * @param _product Abbreviation of the trusted service, which is required during querying the trusted service admin.
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
                     * 获取Member tag search list, with a maximum of 10.
                     * @return Tags Member tag search list, with a maximum of 10.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Member tag search list, with a maximum of 10.
                     * @param _tags Member tag search list, with a maximum of 10.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Offset, which is an integer multiple of the value of `Limit`. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit, which defaults to `10`. Value range: 1-50.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Valid values: `en` (Tencent Cloud International); `zh` (Tencent Cloud).
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * Search by member name or ID.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Entity name.
                     */
                    std::string m_authName;
                    bool m_authNameHasBeenSet;

                    /**
                     * Abbreviation of the trusted service, which is required during querying the trusted service admin.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Member tag search list, with a maximum of 10.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERSREQUEST_H_
