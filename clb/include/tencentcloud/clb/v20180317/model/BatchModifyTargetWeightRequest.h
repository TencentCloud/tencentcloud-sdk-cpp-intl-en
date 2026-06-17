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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BATCHMODIFYTARGETWEIGHTREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BATCHMODIFYTARGETWEIGHTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RsWeightRule.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * BatchModifyTargetWeight request structure.
                */
                class BatchModifyTargetWeightRequest : public AbstractModel
                {
                public:
                    BatchModifyTargetWeightRequest();
                    ~BatchModifyTargetWeightRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>CLB instance ID.</p>
                     * @return LoadBalancerId <p>CLB instance ID.</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>CLB instance ID.</p>
                     * @param _loadBalancerId <p>CLB instance ID.</p>
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取<p>List of weights to be modified in batch. The ModifyList array can contain no more than 100 elements, ModifyList[i].Targets can have no more than 50, and the total number of Targets must not exceed 500.</p>
                     * @return ModifyList <p>List of weights to be modified in batch. The ModifyList array can contain no more than 100 elements, ModifyList[i].Targets can have no more than 50, and the total number of Targets must not exceed 500.</p>
                     * 
                     */
                    std::vector<RsWeightRule> GetModifyList() const;

                    /**
                     * 设置<p>List of weights to be modified in batch. The ModifyList array can contain no more than 100 elements, ModifyList[i].Targets can have no more than 50, and the total number of Targets must not exceed 500.</p>
                     * @param _modifyList <p>List of weights to be modified in batch. The ModifyList array can contain no more than 100 elements, ModifyList[i].Targets can have no more than 50, and the total number of Targets must not exceed 500.</p>
                     * 
                     */
                    void SetModifyList(const std::vector<RsWeightRule>& _modifyList);

                    /**
                     * 判断参数 ModifyList 是否已赋值
                     * @return ModifyList 是否已赋值
                     * 
                     */
                    bool ModifyListHasBeenSet() const;

                private:

                    /**
                     * <p>CLB instance ID.</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>List of weights to be modified in batch. The ModifyList array can contain no more than 100 elements, ModifyList[i].Targets can have no more than 50, and the total number of Targets must not exceed 500.</p>
                     */
                    std::vector<RsWeightRule> m_modifyList;
                    bool m_modifyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BATCHMODIFYTARGETWEIGHTREQUEST_H_
