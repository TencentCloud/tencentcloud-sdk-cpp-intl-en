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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_LISTDATAKEYSREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_LISTDATAKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ListDataKeys request structure.
                */
                class ListDataKeysRequest : public AbstractModel
                {
                public:
                    ListDataKeysRequest();
                    ~ListDataKeysRequest() = default;
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
                     * 获取Filter criteria based on the creator role. default 0 means data key created by oneself, 1 means data key automatically created by other cloud services.
                     * @return Role Filter criteria based on the creator role. default 0 means data key created by oneself, 1 means data key automatically created by other cloud services.
                     * 
                     */
                    uint64_t GetRole() const;

                    /**
                     * 设置Filter criteria based on the creator role. default 0 means data key created by oneself, 1 means data key automatically created by other cloud services.
                     * @param _role Filter criteria based on the creator role. default 0 means data key created by oneself, 1 means data key automatically created by other cloud services.
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
                     * 获取HSM cluster ID corresponding to KMS advanced edition (only applicable to KMS exclusive/managed service instance).
                     * @return HsmClusterId HSM cluster ID corresponding to KMS advanced edition (only applicable to KMS exclusive/managed service instance).
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置HSM cluster ID corresponding to KMS advanced edition (only applicable to KMS exclusive/managed service instance).
                     * @param _hsmClusterId HSM cluster ID corresponding to KMS advanced edition (only applicable to KMS exclusive/managed service instance).
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

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
                     * Filter criteria based on the creator role. default 0 means data key created by oneself, 1 means data key automatically created by other cloud services.
                     */
                    uint64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * HSM cluster ID corresponding to KMS advanced edition (only applicable to KMS exclusive/managed service instance).
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_LISTDATAKEYSREQUEST_H_
