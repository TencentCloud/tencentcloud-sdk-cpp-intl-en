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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CHECKEDGECLUSTERCIDRRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CHECKEDGECLUSTERCIDRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CheckEdgeClusterCIDR response structure.
                */
                class CheckEdgeClusterCIDRResponse : public AbstractModel
                {
                public:
                    CheckEdgeClusterCIDRResponse();
                    ~CheckEdgeClusterCIDRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Return code. Valid values:
-1: Internal error
0: No conflict
1: Conflict between VPC and serviceCIDR
2: Conflict between VPC and podCIDR
3: Conflict between serviceCIDR and podCIDR
                     * @return ConflictCode Return code. Valid values:
-1: Internal error
0: No conflict
1: Conflict between VPC and serviceCIDR
2: Conflict between VPC and podCIDR
3: Conflict between serviceCIDR and podCIDR
                     * 
                     */
                    int64_t GetConflictCode() const;

                    /**
                     * 判断参数 ConflictCode 是否已赋值
                     * @return ConflictCode 是否已赋值
                     * 
                     */
                    bool ConflictCodeHasBeenSet() const;

                    /**
                     * 获取CIDR block conflict description
                     * @return ConflictMsg CIDR block conflict description
                     * 
                     */
                    std::string GetConflictMsg() const;

                    /**
                     * 判断参数 ConflictMsg 是否已赋值
                     * @return ConflictMsg 是否已赋值
                     * 
                     */
                    bool ConflictMsgHasBeenSet() const;

                private:

                    /**
                     * Return code. Valid values:
-1: Internal error
0: No conflict
1: Conflict between VPC and serviceCIDR
2: Conflict between VPC and podCIDR
3: Conflict between serviceCIDR and podCIDR
                     */
                    int64_t m_conflictCode;
                    bool m_conflictCodeHasBeenSet;

                    /**
                     * CIDR block conflict description
                     */
                    std::string m_conflictMsg;
                    bool m_conflictMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CHECKEDGECLUSTERCIDRRESPONSE_H_
