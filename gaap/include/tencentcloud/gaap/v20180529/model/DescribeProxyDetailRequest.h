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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYDETAILREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeProxyDetail request structure.
                */
                class DescribeProxyDetailRequest : public AbstractModel
                {
                public:
                    DescribeProxyDetailRequest();
                    ~DescribeProxyDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Connection ID to be queried.
                     * @return ProxyId Connection ID to be queried.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection ID to be queried.
                     * @param _proxyId Connection ID to be queried.
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                private:

                    /**
                     * Connection ID to be queried.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYDETAILREQUEST_H_
