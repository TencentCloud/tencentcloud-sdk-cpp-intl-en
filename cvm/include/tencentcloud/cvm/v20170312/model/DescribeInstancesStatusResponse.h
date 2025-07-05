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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESSTATUSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/InstanceStatus.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeInstancesStatus response structure.
                */
                class DescribeInstancesStatusResponse : public AbstractModel
                {
                public:
                    DescribeInstancesStatusResponse();
                    ~DescribeInstancesStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of instance states meeting the filtering conditions.
                     * @return TotalCount Number of instance states meeting the filtering conditions.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取[Instance status](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) list.
                     * @return InstanceStatusSet [Instance status](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) list.
                     * 
                     */
                    std::vector<InstanceStatus> GetInstanceStatusSet() const;

                    /**
                     * 判断参数 InstanceStatusSet 是否已赋值
                     * @return InstanceStatusSet 是否已赋值
                     * 
                     */
                    bool InstanceStatusSetHasBeenSet() const;

                private:

                    /**
                     * Number of instance states meeting the filtering conditions.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * [Instance status](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) list.
                     */
                    std::vector<InstanceStatus> m_instanceStatusSet;
                    bool m_instanceStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEINSTANCESSTATUSRESPONSE_H_
