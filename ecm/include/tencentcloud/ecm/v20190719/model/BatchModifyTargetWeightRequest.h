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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_BATCHMODIFYTARGETWEIGHTREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_BATCHMODIFYTARGETWEIGHTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/TargetsWeightRule.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取CLB instance ID
                     * @return LoadBalancerId CLB instance ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID
                     * @param _loadBalancerId CLB instance ID
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
                     * 获取List of weights to be modified in batches
                     * @return ModifyList List of weights to be modified in batches
                     * 
                     */
                    std::vector<TargetsWeightRule> GetModifyList() const;

                    /**
                     * 设置List of weights to be modified in batches
                     * @param _modifyList List of weights to be modified in batches
                     * 
                     */
                    void SetModifyList(const std::vector<TargetsWeightRule>& _modifyList);

                    /**
                     * 判断参数 ModifyList 是否已赋值
                     * @return ModifyList 是否已赋值
                     * 
                     */
                    bool ModifyListHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * List of weights to be modified in batches
                     */
                    std::vector<TargetsWeightRule> m_modifyList;
                    bool m_modifyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_BATCHMODIFYTARGETWEIGHTREQUEST_H_
