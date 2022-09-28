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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONTENTQUOTARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONTENTQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Quota.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeContentQuota response structure.
                */
                class DescribeContentQuotaResponse : public AbstractModel
                {
                public:
                    DescribeContentQuotaResponse();
                    ~DescribeContentQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Purging quotas.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PurgeQuota Purging quotas.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Quota> GetPurgeQuota() const;

                    /**
                     * 判断参数 PurgeQuota 是否已赋值
                     * @return PurgeQuota 是否已赋值
                     */
                    bool PurgeQuotaHasBeenSet() const;

                    /**
                     * 获取Pre-warming quotas.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrefetchQuota Pre-warming quotas.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Quota> GetPrefetchQuota() const;

                    /**
                     * 判断参数 PrefetchQuota 是否已赋值
                     * @return PrefetchQuota 是否已赋值
                     */
                    bool PrefetchQuotaHasBeenSet() const;

                private:

                    /**
                     * Purging quotas.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Quota> m_purgeQuota;
                    bool m_purgeQuotaHasBeenSet;

                    /**
                     * Pre-warming quotas.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Quota> m_prefetchQuota;
                    bool m_prefetchQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONTENTQUOTARESPONSE_H_
