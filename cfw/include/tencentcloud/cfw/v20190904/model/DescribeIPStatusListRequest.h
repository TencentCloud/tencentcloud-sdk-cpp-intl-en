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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEIPSTATUSLISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEIPSTATUSLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeIPStatusList request structure.
                */
                class DescribeIPStatusListRequest : public AbstractModel
                {
                public:
                    DescribeIPStatusListRequest();
                    ~DescribeIPStatusListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Asset ID
                     * @return IPList Asset ID
                     * 
                     */
                    std::vector<std::string> GetIPList() const;

                    /**
                     * 设置Asset ID
                     * @param _iPList Asset ID
                     * 
                     */
                    void SetIPList(const std::vector<std::string>& _iPList);

                    /**
                     * 判断参数 IPList 是否已赋值
                     * @return IPList 是否已赋值
                     * 
                     */
                    bool IPListHasBeenSet() const;

                private:

                    /**
                     * Asset ID
                     */
                    std::vector<std::string> m_iPList;
                    bool m_iPListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEIPSTATUSLISTREQUEST_H_
