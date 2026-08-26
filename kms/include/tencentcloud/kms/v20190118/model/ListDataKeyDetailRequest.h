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
#include <tencentcloud/kms/v20190118/model/MemberAccount.h>


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
                     * 获取<p>It means the same as the Offset in SQL queries, indicating that this retrieval starts from the Offset-th element of the sequentially arranged array. It defaults to 0.</p>
                     * @return Offset <p>It means the same as the Offset in SQL queries, indicating that this retrieval starts from the Offset-th element of the sequentially arranged array. It defaults to 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>It means the same as the Offset in SQL queries, indicating that this retrieval starts from the Offset-th element of the sequentially arranged array. It defaults to 0.</p>
                     * @param _offset <p>It means the same as the Offset in SQL queries, indicating that this retrieval starts from the Offset-th element of the sequentially arranged array. It defaults to 0.</p>
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
                     * 获取<p>The meaning is consistent with the Limit in SQL queries, indicating that this time up to Limit elements can be retrieved. The default value is 10, and the maximum value is 200.</p>
                     * @return Limit <p>The meaning is consistent with the Limit in SQL queries, indicating that this time up to Limit elements can be retrieved. The default value is 10, and the maximum value is 200.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>The meaning is consistent with the Limit in SQL queries, indicating that this time up to Limit elements can be retrieved. The default value is 10, and the maximum value is 200.</p>
                     * @param _limit <p>The meaning is consistent with the Limit in SQL queries, indicating that this time up to Limit elements can be retrieved. The default value is 10, and the maximum value is 200.</p>
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
                     * 获取<p>Filter by creator role. Default value 0 indicates data keys created by the user, and 1 indicates data keys automatically created by authorized other Cloud services.</p>
                     * @return Role <p>Filter by creator role. Default value 0 indicates data keys created by the user, and 1 indicates data keys automatically created by authorized other Cloud services.</p>
                     * 
                     */
                    uint64_t GetRole() const;

                    /**
                     * 设置<p>Filter by creator role. Default value 0 indicates data keys created by the user, and 1 indicates data keys automatically created by authorized other Cloud services.</p>
                     * @param _role <p>Filter by creator role. Default value 0 indicates data keys created by the user, and 1 indicates data keys automatically created by authorized other Cloud services.</p>
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
                     * 获取<p>Sort by DataKey creation time. 0 indicates sort in descending order, and 1 indicates sort in ascending order.</p>
                     * @return OrderType <p>Sort by DataKey creation time. 0 indicates sort in descending order, and 1 indicates sort in ascending order.</p>
                     * 
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置<p>Sort by DataKey creation time. 0 indicates sort in descending order, and 1 indicates sort in ascending order.</p>
                     * @param _orderType <p>Sort by DataKey creation time. 0 indicates sort in descending order, and 1 indicates sort in ascending order.</p>
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
                     * 获取<p>Filter by DataKey status. 0 indicates all DataKeys, 1 indicates querying only Enabled DataKeys, 2 indicates querying only Disabled DataKeys, and 3 indicates querying DataKeys in PendingDelete state (keys in scheduled deletion status).</p>
                     * @return KeyState <p>Filter by DataKey status. 0 indicates all DataKeys, 1 indicates querying only Enabled DataKeys, 2 indicates querying only Disabled DataKeys, and 3 indicates querying DataKeys in PendingDelete state (keys in scheduled deletion status).</p>
                     * 
                     */
                    uint64_t GetKeyState() const;

                    /**
                     * 设置<p>Filter by DataKey status. 0 indicates all DataKeys, 1 indicates querying only Enabled DataKeys, 2 indicates querying only Disabled DataKeys, and 3 indicates querying DataKeys in PendingDelete state (keys in scheduled deletion status).</p>
                     * @param _keyState <p>Filter by DataKey status. 0 indicates all DataKeys, 1 indicates querying only Enabled DataKeys, 2 indicates querying only Disabled DataKeys, and 3 indicates querying DataKeys in PendingDelete state (keys in scheduled deletion status).</p>
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
                     * 获取<p>Perform a fuzzy match query by DataKeyId or DataKeyName</p>
                     * @return SearchKeyAlias <p>Perform a fuzzy match query by DataKeyId or DataKeyName</p>
                     * 
                     */
                    std::string GetSearchKeyAlias() const;

                    /**
                     * 设置<p>Perform a fuzzy match query by DataKeyId or DataKeyName</p>
                     * @param _searchKeyAlias <p>Perform a fuzzy match query by DataKeyId or DataKeyName</p>
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
                     * 获取<p>Filter by DateKey type. "TENCENT_KMS" filters data keys with key material created by KMS. "EXTERNAL" filters EXTERNAL type data keys with key material to import. "ALL" or leave unset queries both types. Case-sensitive.</p>
                     * @return Origin <p>Filter by DateKey type. "TENCENT_KMS" filters data keys with key material created by KMS. "EXTERNAL" filters EXTERNAL type data keys with key material to import. "ALL" or leave unset queries both types. Case-sensitive.</p>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置<p>Filter by DateKey type. "TENCENT_KMS" filters data keys with key material created by KMS. "EXTERNAL" filters EXTERNAL type data keys with key material to import. "ALL" or leave unset queries both types. Case-sensitive.</p>
                     * @param _origin <p>Filter by DateKey type. "TENCENT_KMS" filters data keys with key material created by KMS. "EXTERNAL" filters EXTERNAL type data keys with key material to import. "ALL" or leave unset queries both types. Case-sensitive.</p>
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
                     * 获取<p>HSM Cluster ID corresponding to the KMS advanced edition. When specifying a cluster ID, query the key list within the specified cluster. When specifying default, query the key list of the public cloud shared version. If empty, query all key lists by default, including cluster and non-cluster.</p>
                     * @return HsmClusterId <p>HSM Cluster ID corresponding to the KMS advanced edition. When specifying a cluster ID, query the key list within the specified cluster. When specifying default, query the key list of the public cloud shared version. If empty, query all key lists by default, including cluster and non-cluster.</p>
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置<p>HSM Cluster ID corresponding to the KMS advanced edition. When specifying a cluster ID, query the key list within the specified cluster. When specifying default, query the key list of the public cloud shared version. If empty, query all key lists by default, including cluster and non-cluster.</p>
                     * @param _hsmClusterId <p>HSM Cluster ID corresponding to the KMS advanced edition. When specifying a cluster ID, query the key list within the specified cluster. When specifying default, query the key list of the public cloud shared version. If empty, query all key lists by default, including cluster and non-cluster.</p>
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
                     * 获取<p>Root key globally unique identifier</p>
                     * @return KeyId <p>Root key globally unique identifier</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>Root key globally unique identifier</p>
                     * @param _keyId <p>Root key globally unique identifier</p>
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
                     * 获取<p>Length of the data key</p>
                     * @return DataKeyLen <p>Length of the data key</p>
                     * 
                     */
                    uint64_t GetDataKeyLen() const;

                    /**
                     * 设置<p>Length of the data key</p>
                     * @param _dataKeyLen <p>Length of the data key</p>
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
                     * 获取<p>Tag filtering condition</p>
                     * @return TagFilters <p>Tag filtering condition</p>
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置<p>Tag filtering condition</p>
                     * @param _tagFilters <p>Tag filtering condition</p>
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取<p>Member account information array</p>
                     * @return MemberAccounts <p>Member account information array</p>
                     * 
                     */
                    std::vector<MemberAccount> GetMemberAccounts() const;

                    /**
                     * 设置<p>Member account information array</p>
                     * @param _memberAccounts <p>Member account information array</p>
                     * 
                     */
                    void SetMemberAccounts(const std::vector<MemberAccount>& _memberAccounts);

                    /**
                     * 判断参数 MemberAccounts 是否已赋值
                     * @return MemberAccounts 是否已赋值
                     * 
                     */
                    bool MemberAccountsHasBeenSet() const;

                private:

                    /**
                     * <p>It means the same as the Offset in SQL queries, indicating that this retrieval starts from the Offset-th element of the sequentially arranged array. It defaults to 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>The meaning is consistent with the Limit in SQL queries, indicating that this time up to Limit elements can be retrieved. The default value is 10, and the maximum value is 200.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Filter by creator role. Default value 0 indicates data keys created by the user, and 1 indicates data keys automatically created by authorized other Cloud services.</p>
                     */
                    uint64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>Sort by DataKey creation time. 0 indicates sort in descending order, and 1 indicates sort in ascending order.</p>
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>Filter by DataKey status. 0 indicates all DataKeys, 1 indicates querying only Enabled DataKeys, 2 indicates querying only Disabled DataKeys, and 3 indicates querying DataKeys in PendingDelete state (keys in scheduled deletion status).</p>
                     */
                    uint64_t m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * <p>Perform a fuzzy match query by DataKeyId or DataKeyName</p>
                     */
                    std::string m_searchKeyAlias;
                    bool m_searchKeyAliasHasBeenSet;

                    /**
                     * <p>Filter by DateKey type. "TENCENT_KMS" filters data keys with key material created by KMS. "EXTERNAL" filters EXTERNAL type data keys with key material to import. "ALL" or leave unset queries both types. Case-sensitive.</p>
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * <p>HSM Cluster ID corresponding to the KMS advanced edition. When specifying a cluster ID, query the key list within the specified cluster. When specifying default, query the key list of the public cloud shared version. If empty, query all key lists by default, including cluster and non-cluster.</p>
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                    /**
                     * <p>Root key globally unique identifier</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>Length of the data key</p>
                     */
                    uint64_t m_dataKeyLen;
                    bool m_dataKeyLenHasBeenSet;

                    /**
                     * <p>Tag filtering condition</p>
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * <p>Member account information array</p>
                     */
                    std::vector<MemberAccount> m_memberAccounts;
                    bool m_memberAccountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_LISTDATAKEYDETAILREQUEST_H_
