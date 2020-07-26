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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBTARGETSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBTARGETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ClassicalTarget.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeClassicalLBTargets response structure.
                */
                class DescribeClassicalLBTargetsResponse : public AbstractModel
                {
                public:
                    DescribeClassicalLBTargetsResponse();
                    ~DescribeClassicalLBTargetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取List of real servers
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Targets List of real servers
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClassicalTarget> GetTargets() const;

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * List of real servers
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClassicalTarget> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBTARGETSRESPONSE_H_
