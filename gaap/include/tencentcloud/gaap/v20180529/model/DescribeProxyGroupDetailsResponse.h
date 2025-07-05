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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPDETAILSRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/ProxyGroupDetail.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeProxyGroupDetails response structure.
                */
                class DescribeProxyGroupDetailsResponse : public AbstractModel
                {
                public:
                    DescribeProxyGroupDetailsResponse();
                    ~DescribeProxyGroupDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Connection group details
                     * @return ProxyGroupDetail Connection group details
                     * 
                     */
                    ProxyGroupDetail GetProxyGroupDetail() const;

                    /**
                     * 判断参数 ProxyGroupDetail 是否已赋值
                     * @return ProxyGroupDetail 是否已赋值
                     * 
                     */
                    bool ProxyGroupDetailHasBeenSet() const;

                private:

                    /**
                     * Connection group details
                     */
                    ProxyGroupDetail m_proxyGroupDetail;
                    bool m_proxyGroupDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPDETAILSRESPONSE_H_
