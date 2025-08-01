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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELBLISTENERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELBLISTENERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/LbRsItem.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeLBListeners request structure.
                */
                class DescribeLBListenersRequest : public AbstractModel
                {
                public:
                    DescribeLBListenersRequest();
                    ~DescribeLBListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of private network IPs to be queried.
                     * @return Backends List of private network IPs to be queried.
                     * 
                     */
                    std::vector<LbRsItem> GetBackends() const;

                    /**
                     * 设置List of private network IPs to be queried.
                     * @param _backends List of private network IPs to be queried.
                     * 
                     */
                    void SetBackends(const std::vector<LbRsItem>& _backends);

                    /**
                     * 判断参数 Backends 是否已赋值
                     * @return Backends 是否已赋值
                     * 
                     */
                    bool BackendsHasBeenSet() const;

                private:

                    /**
                     * List of private network IPs to be queried.
                     */
                    std::vector<LbRsItem> m_backends;
                    bool m_backendsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELBLISTENERSREQUEST_H_
