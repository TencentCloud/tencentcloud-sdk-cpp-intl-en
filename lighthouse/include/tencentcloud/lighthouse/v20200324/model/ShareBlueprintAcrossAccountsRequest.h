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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SHAREBLUEPRINTACROSSACCOUNTSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SHAREBLUEPRINTACROSSACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ShareBlueprintAcrossAccounts request structure.
                */
                class ShareBlueprintAcrossAccountsRequest : public AbstractModel
                {
                public:
                    ShareBlueprintAcrossAccountsRequest();
                    ~ShareBlueprintAcrossAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image ID, which can be obtained through the BlueprintId returned by the [DescribeBlueprints](https://www.tencentcloud.comom/document/product/1207/47689?from_cn_redirect=1) API.
                     * @return BlueprintId Image ID, which can be obtained through the BlueprintId returned by the [DescribeBlueprints](https://www.tencentcloud.comom/document/product/1207/47689?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置Image ID, which can be obtained through the BlueprintId returned by the [DescribeBlueprints](https://www.tencentcloud.comom/document/product/1207/47689?from_cn_redirect=1) API.
                     * @param _blueprintId Image ID, which can be obtained through the BlueprintId returned by the [DescribeBlueprints](https://www.tencentcloud.comom/document/product/1207/47689?from_cn_redirect=1) API.
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取List of [account IDs](https://www.tencentcloud.comom/document/product/213/4944?from_cn_redirect=1#.E8.8E.B7.E5.8F.96.E4.B8.BB.E8.B4.A6.E5.8F.B7.E7.9A.84.E8.B4.A6.E5.8F.B7-id) that receive the shared images. The account ID is different from the QQ number. To query a user account ID, view the account ID column in the account information. The maximum number of accounts is 10.
                     * @return AccountIds List of [account IDs](https://www.tencentcloud.comom/document/product/213/4944?from_cn_redirect=1#.E8.8E.B7.E5.8F.96.E4.B8.BB.E8.B4.A6.E5.8F.B7.E7.9A.84.E8.B4.A6.E5.8F.B7-id) that receive the shared images. The account ID is different from the QQ number. To query a user account ID, view the account ID column in the account information. The maximum number of accounts is 10.
                     * 
                     */
                    std::vector<std::string> GetAccountIds() const;

                    /**
                     * 设置List of [account IDs](https://www.tencentcloud.comom/document/product/213/4944?from_cn_redirect=1#.E8.8E.B7.E5.8F.96.E4.B8.BB.E8.B4.A6.E5.8F.B7.E7.9A.84.E8.B4.A6.E5.8F.B7-id) that receive the shared images. The account ID is different from the QQ number. To query a user account ID, view the account ID column in the account information. The maximum number of accounts is 10.
                     * @param _accountIds List of [account IDs](https://www.tencentcloud.comom/document/product/213/4944?from_cn_redirect=1#.E8.8E.B7.E5.8F.96.E4.B8.BB.E8.B4.A6.E5.8F.B7.E7.9A.84.E8.B4.A6.E5.8F.B7-id) that receive the shared images. The account ID is different from the QQ number. To query a user account ID, view the account ID column in the account information. The maximum number of accounts is 10.
                     * 
                     */
                    void SetAccountIds(const std::vector<std::string>& _accountIds);

                    /**
                     * 判断参数 AccountIds 是否已赋值
                     * @return AccountIds 是否已赋值
                     * 
                     */
                    bool AccountIdsHasBeenSet() const;

                private:

                    /**
                     * Image ID, which can be obtained through the BlueprintId returned by the [DescribeBlueprints](https://www.tencentcloud.comom/document/product/1207/47689?from_cn_redirect=1) API.
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * List of [account IDs](https://www.tencentcloud.comom/document/product/213/4944?from_cn_redirect=1#.E8.8E.B7.E5.8F.96.E4.B8.BB.E8.B4.A6.E5.8F.B7.E7.9A.84.E8.B4.A6.E5.8F.B7-id) that receive the shared images. The account ID is different from the QQ number. To query a user account ID, view the account ID column in the account information. The maximum number of accounts is 10.
                     */
                    std::vector<std::string> m_accountIds;
                    bool m_accountIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SHAREBLUEPRINTACROSSACCOUNTSREQUEST_H_
