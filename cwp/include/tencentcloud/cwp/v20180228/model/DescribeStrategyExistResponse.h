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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESTRATEGYEXISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESTRATEGYEXISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeStrategyExist response structure.
                */
                class DescribeStrategyExistResponse : public AbstractModel
                {
                public:
                    DescribeStrategyExistResponse();
                    ~DescribeStrategyExistResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the policy exists. 1: yes; 0: no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IfExist Whether the policy exists. 1: yes; 0: no.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIfExist() const;

                    /**
                     * 判断参数 IfExist 是否已赋值
                     * @return IfExist 是否已赋值
                     * 
                     */
                    bool IfExistHasBeenSet() const;

                private:

                    /**
                     * Whether the policy exists. 1: yes; 0: no.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ifExist;
                    bool m_ifExistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESTRATEGYEXISTRESPONSE_H_
