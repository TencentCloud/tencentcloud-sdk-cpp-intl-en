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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DETACHWORKGROUPPOLICYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DETACHWORKGROUPPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DetachWorkGroupPolicy request structure.
                */
                class DetachWorkGroupPolicyRequest : public AbstractModel
                {
                public:
                    DetachWorkGroupPolicyRequest();
                    ~DetachWorkGroupPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Working group ID
                     * @return WorkGroupId Working group ID
                     * 
                     */
                    int64_t GetWorkGroupId() const;

                    /**
                     * 设置Working group ID
                     * @param _workGroupId Working group ID
                     * 
                     */
                    void SetWorkGroupId(const int64_t& _workGroupId);

                    /**
                     * 判断参数 WorkGroupId 是否已赋值
                     * @return WorkGroupId 是否已赋值
                     * 
                     */
                    bool WorkGroupIdHasBeenSet() const;

                    /**
                     * 获取Collection of unbound permissions
                     * @return PolicySet Collection of unbound permissions
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置Collection of unbound permissions
                     * @param _policySet Collection of unbound permissions
                     * 
                     */
                    void SetPolicySet(const std::vector<Policy>& _policySet);

                    /**
                     * 判断参数 PolicySet 是否已赋值
                     * @return PolicySet 是否已赋值
                     * 
                     */
                    bool PolicySetHasBeenSet() const;

                private:

                    /**
                     * Working group ID
                     */
                    int64_t m_workGroupId;
                    bool m_workGroupIdHasBeenSet;

                    /**
                     * Collection of unbound permissions
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DETACHWORKGROUPPOLICYREQUEST_H_
