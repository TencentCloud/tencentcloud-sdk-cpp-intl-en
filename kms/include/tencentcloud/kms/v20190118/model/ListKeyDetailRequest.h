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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_LISTKEYDETAILREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_LISTKEYDETAILREQUEST_H_

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
                * ListKeyDetail request structure.
                */
                class ListKeyDetailRequest : public AbstractModel
                {
                public:
                    ListKeyDetailRequest();
                    ~ListKeyDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取This parameter has the same meaning of the `Offset` in an SQL query, indicating that this acquisition starts from the "No. Offset value" element of the array arranged in a certain order. The default value is 0.
                     * @return Offset This parameter has the same meaning of the `Offset` in an SQL query, indicating that this acquisition starts from the "No. Offset value" element of the array arranged in a certain order. The default value is 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置This parameter has the same meaning of the `Offset` in an SQL query, indicating that this acquisition starts from the "No. Offset value" element of the array arranged in a certain order. The default value is 0.
                     * @param Offset This parameter has the same meaning of the `Offset` in an SQL query, indicating that this acquisition starts from the "No. Offset value" element of the array arranged in a certain order. The default value is 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取This parameter has the same meaning of the `Limit` in an SQL query, indicating that up to `Limit` value elements can be obtained in this request. The default value is 10 and the maximum value is 200.
                     * @return Limit This parameter has the same meaning of the `Limit` in an SQL query, indicating that up to `Limit` value elements can be obtained in this request. The default value is 10 and the maximum value is 200.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置This parameter has the same meaning of the `Limit` in an SQL query, indicating that up to `Limit` value elements can be obtained in this request. The default value is 10 and the maximum value is 200.
                     * @param Limit This parameter has the same meaning of the `Limit` in an SQL query, indicating that up to `Limit` value elements can be obtained in this request. The default value is 10 and the maximum value is 200.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filters by creator role. 0 (default value): the CMK is created by the user; 1: the CMK is created automatically by an authorized Tencent Cloud service.
                     * @return Role Filters by creator role. 0 (default value): the CMK is created by the user; 1: the CMK is created automatically by an authorized Tencent Cloud service.
                     */
                    uint64_t GetRole() const;

                    /**
                     * 设置Filters by creator role. 0 (default value): the CMK is created by the user; 1: the CMK is created automatically by an authorized Tencent Cloud service.
                     * @param Role Filters by creator role. 0 (default value): the CMK is created by the user; 1: the CMK is created automatically by an authorized Tencent Cloud service.
                     */
                    void SetRole(const uint64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Sorts by CMK creation time. 0: descending; 1: ascending
                     * @return OrderType Sorts by CMK creation time. 0: descending; 1: ascending
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置Sorts by CMK creation time. 0: descending; 1: ascending
                     * @param OrderType Sorts by CMK creation time. 0: descending; 1: ascending
                     */
                    void SetOrderType(const uint64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取Filters by CMK status. 0: all CMKs; 1: CMKs in `Enabled` status only; 2: CMKs in `Disabled` status only; 3: CMKs in `PendingDelete` status only (i.e., keys with schedule deletion enabled); 4: CMKs in `PendingImport` status only; 5: CMKs in `Archived` status only.
                     * @return KeyState Filters by CMK status. 0: all CMKs; 1: CMKs in `Enabled` status only; 2: CMKs in `Disabled` status only; 3: CMKs in `PendingDelete` status only (i.e., keys with schedule deletion enabled); 4: CMKs in `PendingImport` status only; 5: CMKs in `Archived` status only.
                     */
                    uint64_t GetKeyState() const;

                    /**
                     * 设置Filters by CMK status. 0: all CMKs; 1: CMKs in `Enabled` status only; 2: CMKs in `Disabled` status only; 3: CMKs in `PendingDelete` status only (i.e., keys with schedule deletion enabled); 4: CMKs in `PendingImport` status only; 5: CMKs in `Archived` status only.
                     * @param KeyState Filters by CMK status. 0: all CMKs; 1: CMKs in `Enabled` status only; 2: CMKs in `Disabled` status only; 3: CMKs in `PendingDelete` status only (i.e., keys with schedule deletion enabled); 4: CMKs in `PendingImport` status only; 5: CMKs in `Archived` status only.
                     */
                    void SetKeyState(const uint64_t& _keyState);

                    /**
                     * 判断参数 KeyState 是否已赋值
                     * @return KeyState 是否已赋值
                     */
                    bool KeyStateHasBeenSet() const;

                    /**
                     * 获取Performs a fuzzy query by `KeyId` or `Alias`
                     * @return SearchKeyAlias Performs a fuzzy query by `KeyId` or `Alias`
                     */
                    std::string GetSearchKeyAlias() const;

                    /**
                     * 设置Performs a fuzzy query by `KeyId` or `Alias`
                     * @param SearchKeyAlias Performs a fuzzy query by `KeyId` or `Alias`
                     */
                    void SetSearchKeyAlias(const std::string& _searchKeyAlias);

                    /**
                     * 判断参数 SearchKeyAlias 是否已赋值
                     * @return SearchKeyAlias 是否已赋值
                     */
                    bool SearchKeyAliasHasBeenSet() const;

                    /**
                     * 获取Filters by CMK type. "TENCENT_KMS" indicates to filter CMKs whose key materials are created by KMS; "EXTERNAL" indicates to filter CMKs of `EXTERNAL` type whose key materials are imported by users; "ALL" or empty indicates to filter CMKs of both types. This value is case-sensitive.
                     * @return Origin Filters by CMK type. "TENCENT_KMS" indicates to filter CMKs whose key materials are created by KMS; "EXTERNAL" indicates to filter CMKs of `EXTERNAL` type whose key materials are imported by users; "ALL" or empty indicates to filter CMKs of both types. This value is case-sensitive.
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置Filters by CMK type. "TENCENT_KMS" indicates to filter CMKs whose key materials are created by KMS; "EXTERNAL" indicates to filter CMKs of `EXTERNAL` type whose key materials are imported by users; "ALL" or empty indicates to filter CMKs of both types. This value is case-sensitive.
                     * @param Origin Filters by CMK type. "TENCENT_KMS" indicates to filter CMKs whose key materials are created by KMS; "EXTERNAL" indicates to filter CMKs of `EXTERNAL` type whose key materials are imported by users; "ALL" or empty indicates to filter CMKs of both types. This value is case-sensitive.
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取Filters by the `KeyUsage` field value. Valid values: `ALL` (all CMKs), `ENCRYPT_DECRYPT` (used when this field is left empty), `ASYMMETRIC_DECRYPT_RSA_2048`, `ASYMMETRIC_DECRYPT_SM2`, `ASYMMETRIC_SIGN_VERIFY_SM2`, `ASYMMETRIC_SIGN_VERIFY_RSA_2048`, and `ASYMMETRIC_SIGN_VERIFY_ECC`.
                     * @return KeyUsage Filters by the `KeyUsage` field value. Valid values: `ALL` (all CMKs), `ENCRYPT_DECRYPT` (used when this field is left empty), `ASYMMETRIC_DECRYPT_RSA_2048`, `ASYMMETRIC_DECRYPT_SM2`, `ASYMMETRIC_SIGN_VERIFY_SM2`, `ASYMMETRIC_SIGN_VERIFY_RSA_2048`, and `ASYMMETRIC_SIGN_VERIFY_ECC`.
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 设置Filters by the `KeyUsage` field value. Valid values: `ALL` (all CMKs), `ENCRYPT_DECRYPT` (used when this field is left empty), `ASYMMETRIC_DECRYPT_RSA_2048`, `ASYMMETRIC_DECRYPT_SM2`, `ASYMMETRIC_SIGN_VERIFY_SM2`, `ASYMMETRIC_SIGN_VERIFY_RSA_2048`, and `ASYMMETRIC_SIGN_VERIFY_ECC`.
                     * @param KeyUsage Filters by the `KeyUsage` field value. Valid values: `ALL` (all CMKs), `ENCRYPT_DECRYPT` (used when this field is left empty), `ASYMMETRIC_DECRYPT_RSA_2048`, `ASYMMETRIC_DECRYPT_SM2`, `ASYMMETRIC_SIGN_VERIFY_SM2`, `ASYMMETRIC_SIGN_VERIFY_RSA_2048`, and `ASYMMETRIC_SIGN_VERIFY_ECC`.
                     */
                    void SetKeyUsage(const std::string& _keyUsage);

                    /**
                     * 判断参数 KeyUsage 是否已赋值
                     * @return KeyUsage 是否已赋值
                     */
                    bool KeyUsageHasBeenSet() const;

                    /**
                     * 获取Tag filter condition
                     * @return TagFilters Tag filter condition
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置Tag filter condition
                     * @param TagFilters Tag filter condition
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * This parameter has the same meaning of the `Offset` in an SQL query, indicating that this acquisition starts from the "No. Offset value" element of the array arranged in a certain order. The default value is 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * This parameter has the same meaning of the `Limit` in an SQL query, indicating that up to `Limit` value elements can be obtained in this request. The default value is 10 and the maximum value is 200.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filters by creator role. 0 (default value): the CMK is created by the user; 1: the CMK is created automatically by an authorized Tencent Cloud service.
                     */
                    uint64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Sorts by CMK creation time. 0: descending; 1: ascending
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Filters by CMK status. 0: all CMKs; 1: CMKs in `Enabled` status only; 2: CMKs in `Disabled` status only; 3: CMKs in `PendingDelete` status only (i.e., keys with schedule deletion enabled); 4: CMKs in `PendingImport` status only; 5: CMKs in `Archived` status only.
                     */
                    uint64_t m_keyState;
                    bool m_keyStateHasBeenSet;

                    /**
                     * Performs a fuzzy query by `KeyId` or `Alias`
                     */
                    std::string m_searchKeyAlias;
                    bool m_searchKeyAliasHasBeenSet;

                    /**
                     * Filters by CMK type. "TENCENT_KMS" indicates to filter CMKs whose key materials are created by KMS; "EXTERNAL" indicates to filter CMKs of `EXTERNAL` type whose key materials are imported by users; "ALL" or empty indicates to filter CMKs of both types. This value is case-sensitive.
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Filters by the `KeyUsage` field value. Valid values: `ALL` (all CMKs), `ENCRYPT_DECRYPT` (used when this field is left empty), `ASYMMETRIC_DECRYPT_RSA_2048`, `ASYMMETRIC_DECRYPT_SM2`, `ASYMMETRIC_SIGN_VERIFY_SM2`, `ASYMMETRIC_SIGN_VERIFY_RSA_2048`, and `ASYMMETRIC_SIGN_VERIFY_ECC`.
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * Tag filter condition
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_LISTKEYDETAILREQUEST_H_
