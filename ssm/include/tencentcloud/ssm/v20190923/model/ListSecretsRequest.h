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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_LISTSECRETSREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_LISTSECRETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssm/v20190923/model/TagFilter.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * ListSecrets request structure.
                */
                class ListSecretsRequest : public AbstractModel
                {
                public:
                    ListSecretsRequest();
                    ~ListSecretsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Starting position of the list, starting at 0. If not specified, 0 is used by default.
                     * @return Offset Starting position of the list, starting at 0. If not specified, 0 is used by default.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting position of the list, starting at 0. If not specified, 0 is used by default.
                     * @param Offset Starting position of the list, starting at 0. If not specified, 0 is used by default.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of returned Secrets in a query. If not set or set to 0, 20 is used by default.
                     * @return Limit Maximum number of returned Secrets in a query. If not set or set to 0, 20 is used by default.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of returned Secrets in a query. If not set or set to 0, 20 is used by default.
                     * @param Limit Maximum number of returned Secrets in a query. If not set or set to 0, 20 is used by default.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Sorting order according to the creation time. If not set or set to 0, descending order is used; if set to 1, ascending order is used.
                     * @return OrderType Sorting order according to the creation time. If not set or set to 0, descending order is used; if set to 1, ascending order is used.
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置Sorting order according to the creation time. If not set or set to 0, descending order is used; if set to 1, ascending order is used.
                     * @param OrderType Sorting order according to the creation time. If not set or set to 0, descending order is used; if set to 1, ascending order is used.
                     */
                    void SetOrderType(const uint64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取Filter based on credential status.
The default value is 0, indicating to query all.
1: query the list of credentials in `Enabled` status.
2: query the list of credentials in `Disabled` status.
3: query the list of credentials in `PendingDelete` status.
4: query the list of credentials in `PendingCreate` status.
5: query the list of credentials in `CreateFailed` status.
The `PendingCreate` and `CreateFailed` status only take effect when `SecretType` is Tencent Cloud service credential
                     * @return State Filter based on credential status.
The default value is 0, indicating to query all.
1: query the list of credentials in `Enabled` status.
2: query the list of credentials in `Disabled` status.
3: query the list of credentials in `PendingDelete` status.
4: query the list of credentials in `PendingCreate` status.
5: query the list of credentials in `CreateFailed` status.
The `PendingCreate` and `CreateFailed` status only take effect when `SecretType` is Tencent Cloud service credential
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置Filter based on credential status.
The default value is 0, indicating to query all.
1: query the list of credentials in `Enabled` status.
2: query the list of credentials in `Disabled` status.
3: query the list of credentials in `PendingDelete` status.
4: query the list of credentials in `PendingCreate` status.
5: query the list of credentials in `CreateFailed` status.
The `PendingCreate` and `CreateFailed` status only take effect when `SecretType` is Tencent Cloud service credential
                     * @param State Filter based on credential status.
The default value is 0, indicating to query all.
1: query the list of credentials in `Enabled` status.
2: query the list of credentials in `Disabled` status.
3: query the list of credentials in `PendingDelete` status.
4: query the list of credentials in `PendingCreate` status.
5: query the list of credentials in `CreateFailed` status.
The `PendingCreate` and `CreateFailed` status only take effect when `SecretType` is Tencent Cloud service credential
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Filter according to Secret names. If left empty, this filter is not applied.
                     * @return SearchSecretName Filter according to Secret names. If left empty, this filter is not applied.
                     */
                    std::string GetSearchSecretName() const;

                    /**
                     * 设置Filter according to Secret names. If left empty, this filter is not applied.
                     * @param SearchSecretName Filter according to Secret names. If left empty, this filter is not applied.
                     */
                    void SetSearchSecretName(const std::string& _searchSecretName);

                    /**
                     * 判断参数 SearchSecretName 是否已赋值
                     * @return SearchSecretName 是否已赋值
                     */
                    bool SearchSecretNameHasBeenSet() const;

                    /**
                     * 获取Tag filter.
                     * @return TagFilters Tag filter.
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置Tag filter.
                     * @param TagFilters Tag filter.
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取`0` (default): user-defined secret.
`1`: Tencent Cloud services secret.
`2`: SSH key secret.
`3`: Tencent Cloud API key secret.
                     * @return SecretType `0` (default): user-defined secret.
`1`: Tencent Cloud services secret.
`2`: SSH key secret.
`3`: Tencent Cloud API key secret.
                     */
                    uint64_t GetSecretType() const;

                    /**
                     * 设置`0` (default): user-defined secret.
`1`: Tencent Cloud services secret.
`2`: SSH key secret.
`3`: Tencent Cloud API key secret.
                     * @param SecretType `0` (default): user-defined secret.
`1`: Tencent Cloud services secret.
`2`: SSH key secret.
`3`: Tencent Cloud API key secret.
                     */
                    void SetSecretType(const uint64_t& _secretType);

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     */
                    bool SecretTypeHasBeenSet() const;

                    /**
                     * 获取This parameter is valid only when SecretType is `1`.
 
An empty value indicates querying all types of Tencent Cloud service secrets.
`Mysql`: queries MySQL database credentials.
`Tdsql-mysql`: queries TDSQL MySQL database credentials.
                     * @return ProductName This parameter is valid only when SecretType is `1`.
 
An empty value indicates querying all types of Tencent Cloud service secrets.
`Mysql`: queries MySQL database credentials.
`Tdsql-mysql`: queries TDSQL MySQL database credentials.
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置This parameter is valid only when SecretType is `1`.
 
An empty value indicates querying all types of Tencent Cloud service secrets.
`Mysql`: queries MySQL database credentials.
`Tdsql-mysql`: queries TDSQL MySQL database credentials.
                     * @param ProductName This parameter is valid only when SecretType is `1`.
 
An empty value indicates querying all types of Tencent Cloud service secrets.
`Mysql`: queries MySQL database credentials.
`Tdsql-mysql`: queries TDSQL MySQL database credentials.
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                private:

                    /**
                     * Starting position of the list, starting at 0. If not specified, 0 is used by default.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of returned Secrets in a query. If not set or set to 0, 20 is used by default.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting order according to the creation time. If not set or set to 0, descending order is used; if set to 1, ascending order is used.
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * Filter based on credential status.
The default value is 0, indicating to query all.
1: query the list of credentials in `Enabled` status.
2: query the list of credentials in `Disabled` status.
3: query the list of credentials in `PendingDelete` status.
4: query the list of credentials in `PendingCreate` status.
5: query the list of credentials in `CreateFailed` status.
The `PendingCreate` and `CreateFailed` status only take effect when `SecretType` is Tencent Cloud service credential
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Filter according to Secret names. If left empty, this filter is not applied.
                     */
                    std::string m_searchSecretName;
                    bool m_searchSecretNameHasBeenSet;

                    /**
                     * Tag filter.
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * `0` (default): user-defined secret.
`1`: Tencent Cloud services secret.
`2`: SSH key secret.
`3`: Tencent Cloud API key secret.
                     */
                    uint64_t m_secretType;
                    bool m_secretTypeHasBeenSet;

                    /**
                     * This parameter is valid only when SecretType is `1`.
 
An empty value indicates querying all types of Tencent Cloud service secrets.
`Mysql`: queries MySQL database credentials.
`Tdsql-mysql`: queries TDSQL MySQL database credentials.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_LISTSECRETSREQUEST_H_
