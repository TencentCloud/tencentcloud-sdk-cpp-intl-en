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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEMACHINEREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEMACHINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeMachine request structure.
                */
                class DescribeMachineRequest : public AbstractModel
                {
                public:
                    DescribeMachineRequest();
                    ~DescribeMachineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取If this parameter is not `0`, machines supporting IPv6 will be queried.
                     * @return Ipv6Enable If this parameter is not `0`, machines supporting IPv6 will be queried.
                     * 
                     */
                    int64_t GetIpv6Enable() const;

                    /**
                     * 设置If this parameter is not `0`, machines supporting IPv6 will be queried.
                     * @param _ipv6Enable If this parameter is not `0`, machines supporting IPv6 will be queried.
                     * 
                     */
                    void SetIpv6Enable(const int64_t& _ipv6Enable);

                    /**
                     * 判断参数 Ipv6Enable 是否已赋值
                     * @return Ipv6Enable 是否已赋值
                     * 
                     */
                    bool Ipv6EnableHasBeenSet() const;

                private:

                    /**
                     * If this parameter is not `0`, machines supporting IPv6 will be queried.
                     */
                    int64_t m_ipv6Enable;
                    bool m_ipv6EnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEMACHINEREQUEST_H_
