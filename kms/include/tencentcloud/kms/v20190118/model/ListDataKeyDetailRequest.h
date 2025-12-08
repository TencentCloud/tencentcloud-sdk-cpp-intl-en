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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_LISTDATAKEYDETAILREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_LISTDATAKEYDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/TagFilter.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ListDataKeyDetail request structure.
                */
                class ListDataKeyDetailRequest : public AbstractModel
                {
                public:
                    ListDataKeyDetailRequest();
                    ~ListDataKeyDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Meaning matches the Offset in SQL queries, indicates the retrieval starts from the Offset-th element in a sequentially arranged array, defaults to 0.
                     * @return Offset Meaning matches the Offset in SQL queries, indicates the retrieval starts from the Offset-th element in a sequentially arranged array, defaults to 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Meaning matches the Offset in SQL queries, indicates the retrieval starts from the Offset-th element in a sequentially arranged array, defaults to 0.
                     * @param _offset Meaning matches the Offset in SQL queries, indicates the retrieval starts from the Offset-th element in a sequentially arranged array, defaults to 0.
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
                     * 获取Specifies the maximum number of elements to retrieve, same as the Limit in SQL queries. default value is 10. maximum value is 200.
                     * @return Limit Specifies the maximum number of elements to retrieve, same as the Limit in SQL queries. default value is 10. maximum value is 200.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Specifies the maximum number of elements to retrieve, same as the Limit in SQL queries. default value is 10. maximum value is 200.
                     * @param _limit Specifies the maximum number of elements to retrieve, same as the Limit in SQL queries. default value is 10. maximum value is 200.
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
                     * 获取Filter by creator role. default 0 means data keys created by the user, 1 means data keys automatically created by authorized cloud services.
                     * @return Role Filter by creator role. default 0 means data keys created by the user, 1 means data keys automatically created by authorized cloud services.
                     * 
                     */
                    uint64_t GetRole() const;

                    /**
                     * 设置Filter by creator role. default 0 means data keys created by the user, 1 means data keys automatically created by authorized cloud services.
                     * @param _role Filter by creator role. default 0 means data keys created by the user, 1 means data keys automatically created by authorized cloud services.
                     * 
                     */
                    void SetRole(const uint64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Sorts according to the creation time of DataKey. 0 indicates descending sort. 1 indicates ascending sort.
                     * @return OrderType Sorts according to the creation time of DataKey. 0 indicates descending sort. 1 indicates ascending sort.
                     * 
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置Sorts according to the creation time of DataKey. 0 indicates descending sort. 1 indicates ascending sort.
                     * @param _orderType Sorts according to the creation time of DataKey. 0 indicates descending sort. 1 indicates ascending sort.
                     * 
                     */
                    void SetOrderType(const uint64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取Filter based on DataKey state. 0 means all datakeys, 1 means querying only Enabled datakeys, 2 means querying only Disabled datakeys, 3 means querying datakeys in PendingDelete state (keys in scheduled deletion status).
                     * @return KeyState Filter based on DataKey state. 0 means all datakeys, 1 means querying only Enabled datakeys, 2 means querying only Disabled datakeys, 3 means querying datakeys in PendingDelete state (keys in scheduled deletion status).
                     * 
                     */
                    uint64_t GetKeyState() const;

                    /**
                     * 设置Filter based on DataKey state. 0 means all datakeys, 1 means querying only Enabled datakeys, 2 means querying only Disabled datakeys, 3 means querying datakeys in PendingDelete state (keys in scheduled deletion status).
                     * @param _keyState Filter based on DataKey state. 0 means all datakeys, 1 means querying only Enabled datakeys, 2 means querying only Disabled datakeys, 3 means querying datakeys in PendingDelete state (keys in scheduled deletion status).
                     * 
                     */
                    void SetKeyState(const uint64_t& _keyState);

                    /**
                     * 判断参数 KeyState 是否已赋值
                     * @return KeyState 是否已赋值
                     * 
                     */
                    bool KeyStateHasBeenSet() const;

                    /**
                     * 获取Performs a fuzzy match query based on DataKeyId or DataKeyName.
                     * @return SearchKeyAlias Performs a fuzzy match query based on DataKeyId or DataKeyName.
                     * 
                     */
                    std::string GetSearchKeyAlias() const;

                    /**
                     * 设置Performs a fuzzy match query based on DataKeyId or DataKeyName.
                     * @param _searchKeyAlias Performs a fuzzy match query based on DataKeyId or DataKeyName.
                     * 
                     */
                    void SetSearchKeyAlias(const std::string& _searchKeyAlias);

                    /**
                     * 判断参数 SearchKeyAlias 是否已赋值
                     * @return SearchKeyAlias 是否已赋值
                     * 
                     */
                    bool SearchKeyAliasHasBeenSet() const;

                    /**
                     * 获取Filters data keys by DateKey type. "TENCENT_KMS" filters data keys with key material created by KMS. "EXTERNAL" filters EXTERNAL type data keys requiring user-imported key material. "ALL" or leave unset queries both types. case-sensitive.
                     * @return Origin Filters data keys by DateKey type. "TENCENT_KMS" filters data keys with key material created by KMS. "EXTERNAL" filters EXTERNAL type data keys requiring user-imported key material. "ALL" or leave unset queries both types. case-sensitive.
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置Filters data keys by DateKey type. "TENCENT_KMS" filters data keys with key material created by KMS. "EXTERNAL" filters EXTERNAL type data keys requiring user-imported key material. "ALL" or leave unset queries both types. case-sensitive.
                     * @param _origin Filters data keys by DateKey type. "TENCENT_KMS" filters data keys with key material created by KMS. "EXTERNAL" filters EXTERNAL type data keys requiring user-imported key material. "ALL" or leave unset queries both types. case-sensitive.
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取HSM cluster ID corresponding to KMS advanced edition.
                     * @return HsmClusterId HSM cluster ID corresponding to KMS advanced edition.
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置HSM cluster ID corresponding to KMS advanced edition.
                     * @param _hsmClusterId HSM cluster ID corresponding to KMS advanced edition.
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                    /**
                     * 获取Specifies the globally unique identifier of the root key.
                     * @return KeyId Specifies the globally unique identifier of the root key.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Specifies the globally unique identifier of the root key.
                     * @param _keyId Specifies the globally unique identifier of the root key.
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Length of the data key.
                     * @return DataKeyLen Length of the data key.
                     * 
                     */
                    uint64_t GetDataKeyLen() const;

                    /**
                     * 设置Length of the data key.
                     * @param _dataKeyLen Length of the data key.
                     * 
                     */
                    void SetDataKeyLen(const uint64_t& _dataKeyLen);

                    /**
                     * 判断参数 DataKeyLen 是否已赋值
                     * @return DataKeyLen 是否已赋值
                     * 
                     */
                    bool DataKeyLenHasBeenSet() const;

                    /**
                     * 获取Tag filtering conditions.
                     * @return TagFilters Tag filtering conditions.
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置Tag filtering conditions.
                     * @param _tagFilters Tag filtering conditions.
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * Meaning matches the Offset in SQL queries, indicates the retrieval starts from the Offset-th element in a sequentially arranged array, defaults to 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Specifies the maximum number of elements to retrieve, same as the Limit in SQL queries. default value is 10. maximum value is 200.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter by creator role. default 0 means data keys created by the user, 1 means data keys automatically created by authorized cloud services.
                     */
                    uint64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Sorts according to the creation time of DataKey. 0 indicates descending sort. 1 indicates ascending sort.
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Filter based on DataKey state. 0 means all datakeys, 1 means querying only Enabled datakeys, 2 means querying only Disabled datakeys, 3 means querying datakeys in PendingDelete state (keys in scheduled deletion status).
                     */
                    uint64_t m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * Performs a fuzzy match query based on DataKeyId or DataKeyName.
                     */
                    std::string m_searchKeyAlias;
                    bool m_searchKeyAliasHasBeenSet;

                    /**
                     * Filters data keys by DateKey type. "TENCENT_KMS" filters data keys with key material created by KMS. "EXTERNAL" filters EXTERNAL type data keys requiring user-imported key material. "ALL" or leave unset queries both types. case-sensitive.
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * HSM cluster ID corresponding to KMS advanced edition.
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * Specifies the globally unique identifier of the root key.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Length of the data key.
                     */
                    uint64_t m_dataKeyLen;
                    bool m_dataKeyLenHasBeenSet;

                    /**
                     * Tag filtering conditions.
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_LISTDATAKEYDETAILREQUEST_H_
