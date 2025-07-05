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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DETACHUSERPOLICYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DETACHUSERPOLICYREQUEST_H_

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
                * DetachUserPolicy request structure.
                */
                class DetachUserPolicyRequest : public AbstractModel
                {
                public:
                    DetachUserPolicyRequest();
                    ~DetachUserPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User ID, which matches Uin on the CAM side.
                     * @return UserId User ID, which matches Uin on the CAM side.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID, which matches Uin on the CAM side.
                     * @param _userId User ID, which matches Uin on the CAM side.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

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
                     * User ID, which matches Uin on the CAM side.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

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

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DETACHUSERPOLICYREQUEST_H_
