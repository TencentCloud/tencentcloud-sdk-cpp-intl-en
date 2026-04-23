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

#ifndef TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEAGGREGATEUSERQUOTASRESPONSE_H_
#define TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEAGGREGATEUSERQUOTASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/quota/v20241204/model/UserQuota.h>


namespace TencentCloud
{
    namespace Quota
    {
        namespace V20241204
        {
            namespace Model
            {
                /**
                * DescribeAggregateUserQuotas response structure.
                */
                class DescribeAggregateUserQuotasResponse : public AbstractModel
                {
                public:
                    DescribeAggregateUserQuotasResponse();
                    ~DescribeAggregateUserQuotasResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Quota Id
                     * @return OwnerUin Quota Id
                     * 
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取quota name
                     * @return Count quota name
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Quota dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Quota dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UserQuota> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Quota Id
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * quota name
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Quota dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserQuota> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEAGGREGATEUSERQUOTASRESPONSE_H_
