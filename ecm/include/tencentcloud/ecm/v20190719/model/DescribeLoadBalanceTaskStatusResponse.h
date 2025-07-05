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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELOADBALANCETASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELOADBALANCETASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeLoadBalanceTaskStatus response structure.
                */
                class DescribeLoadBalanceTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeLoadBalanceTaskStatusResponse();
                    ~DescribeLoadBalanceTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Current task status. 0: succeeded; 1: failed; 2: in progress.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Current task status. 0: succeeded; 1: failed; 2: in progress.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Current task status. 0: succeeded; 1: failed; 2: in progress.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELOADBALANCETASKSTATUSRESPONSE_H_
