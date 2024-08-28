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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETPORTCOUNTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETPORTCOUNTREQUEST_H_

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
                * DescribeAssetPortCount request structure.
                */
                class DescribeAssetPortCountRequest : public AbstractModel
                {
                public:
                    DescribeAssetPortCountRequest();
                    ~DescribeAssetPortCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Search criteria: Return the data of specified port numbers.
                     * @return Port Search criteria: Return the data of specified port numbers.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Search criteria: Return the data of specified port numbers.
                     * @param _port Search criteria: Return the data of specified port numbers.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * Search criteria: Return the data of specified port numbers.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETPORTCOUNTREQUEST_H_
