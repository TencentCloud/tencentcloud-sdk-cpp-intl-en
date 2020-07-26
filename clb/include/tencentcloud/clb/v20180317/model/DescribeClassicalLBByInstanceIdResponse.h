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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBBYINSTANCEIDRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBBYINSTANCEIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ClassicalLoadBalancerInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeClassicalLBByInstanceId response structure.
                */
                class DescribeClassicalLBByInstanceIdResponse : public AbstractModel
                {
                public:
                    DescribeClassicalLBByInstanceIdResponse();
                    ~DescribeClassicalLBByInstanceIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取CLB information list
                     * @return LoadBalancerInfoList CLB information list
                     */
                    std::vector<ClassicalLoadBalancerInfo> GetLoadBalancerInfoList() const;

                    /**
                     * 判断参数 LoadBalancerInfoList 是否已赋值
                     * @return LoadBalancerInfoList 是否已赋值
                     */
                    bool LoadBalancerInfoListHasBeenSet() const;

                private:

                    /**
                     * CLB information list
                     */
                    std::vector<ClassicalLoadBalancerInfo> m_loadBalancerInfoList;
                    bool m_loadBalancerInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBBYINSTANCEIDRESPONSE_H_
