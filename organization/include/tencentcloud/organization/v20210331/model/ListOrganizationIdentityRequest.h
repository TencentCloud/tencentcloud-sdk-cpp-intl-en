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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTORGANIZATIONIDENTITYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTORGANIZATIONIDENTITYREQUEST_H_

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
                * ListOrganizationIdentity request structure.
                */
                class ListOrganizationIdentityRequest : public AbstractModel
                {
                public:
                    ListOrganizationIdentityRequest();
                    ~ListOrganizationIdentityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset.  It must be an integer multiple of the value of `Limit`.  Default value: `0`.
                     * @return Offset Offset.  It must be an integer multiple of the value of `Limit`.  Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset.  It must be an integer multiple of the value of `Limit`.  Default value: `0`.
                     * @param _offset Offset.  It must be an integer multiple of the value of `Limit`.  Default value: `0`.
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
                     * 获取The limit for the number of query results.  Value range:  1-50.  Default value:  `10`.
                     * @return Limit The limit for the number of query results.  Value range:  1-50.  Default value:  `10`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The limit for the number of query results.  Value range:  1-50.  Default value:  `10`.
                     * @param _limit The limit for the number of query results.  Value range:  1-50.  Default value:  `10`.
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
                     * 获取Search by name.
                     * @return SearchKey Search by name.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search by name.
                     * @param _searchKey Search by name.
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
                     * 获取Identity ID, which can be searched by identity ID.
                     * @return IdentityId Identity ID, which can be searched by identity ID.
                     * 
                     */
                    uint64_t GetIdentityId() const;

                    /**
                     * 设置Identity ID, which can be searched by identity ID.
                     * @param _identityId Identity ID, which can be searched by identity ID.
                     * 
                     */
                    void SetIdentityId(const uint64_t& _identityId);

                    /**
                     * 判断参数 IdentityId 是否已赋值
                     * @return IdentityId 是否已赋值
                     * 
                     */
                    bool IdentityIdHasBeenSet() const;

                    /**
                     * 获取Identity type.  Valid values: `1` (Preset), `2` (Custom).
                     * @return IdentityType Identity type.  Valid values: `1` (Preset), `2` (Custom).
                     * 
                     */
                    uint64_t GetIdentityType() const;

                    /**
                     * 设置Identity type.  Valid values: `1` (Preset), `2` (Custom).
                     * @param _identityType Identity type.  Valid values: `1` (Preset), `2` (Custom).
                     * 
                     */
                    void SetIdentityType(const uint64_t& _identityType);

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     * 
                     */
                    bool IdentityTypeHasBeenSet() const;

                private:

                    /**
                     * Offset.  It must be an integer multiple of the value of `Limit`.  Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The limit for the number of query results.  Value range:  1-50.  Default value:  `10`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Search by name.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Identity ID, which can be searched by identity ID.
                     */
                    uint64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * Identity type.  Valid values: `1` (Preset), `2` (Custom).
                     */
                    uint64_t m_identityType;
                    bool m_identityTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTORGANIZATIONIDENTITYREQUEST_H_
