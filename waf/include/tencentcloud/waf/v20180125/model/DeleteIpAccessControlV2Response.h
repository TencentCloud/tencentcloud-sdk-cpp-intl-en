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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETEIPACCESSCONTROLV2RESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETEIPACCESSCONTROLV2RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DeleteIpAccessControlV2 response structure.
                */
                class DeleteIpAccessControlV2Response : public AbstractModel
                {
                public:
                    DeleteIpAccessControlV2Response();
                    ~DeleteIpAccessControlV2Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of items that fail to be deleted during deletion in batches.
                     * @return FailedCount Number of items that fail to be deleted during deletion in batches.
                     * 
                     */
                    int64_t GetFailedCount() const;

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                private:

                    /**
                     * Number of items that fail to be deleted during deletion in batches.
                     */
                    int64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETEIPACCESSCONTROLV2RESPONSE_H_
