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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCESTATUSRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/RegistryStatus.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeInstanceStatus response structure.
                */
                class DescribeInstanceStatusResponse : public AbstractModel
                {
                public:
                    DescribeInstanceStatusResponse();
                    ~DescribeInstanceStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of instance statuses
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegistryStatusSet List of instance statuses
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RegistryStatus> GetRegistryStatusSet() const;

                    /**
                     * 判断参数 RegistryStatusSet 是否已赋值
                     * @return RegistryStatusSet 是否已赋值
                     * 
                     */
                    bool RegistryStatusSetHasBeenSet() const;

                private:

                    /**
                     * List of instance statuses
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RegistryStatus> m_registryStatusSet;
                    bool m_registryStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCESTATUSRESPONSE_H_
