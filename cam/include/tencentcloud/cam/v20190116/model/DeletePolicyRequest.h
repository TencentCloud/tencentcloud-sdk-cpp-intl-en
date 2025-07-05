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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DELETEPOLICYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DELETEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DeletePolicy request structure.
                */
                class DeletePolicyRequest : public AbstractModel
                {
                public:
                    DeletePolicyRequest();
                    ~DeletePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array. Array elements are policy IDs. Policies can be deleted in a batch
                     * @return PolicyId Array. Array elements are policy IDs. Policies can be deleted in a batch
                     * 
                     */
                    std::vector<uint64_t> GetPolicyId() const;

                    /**
                     * 设置Array. Array elements are policy IDs. Policies can be deleted in a batch
                     * @param _policyId Array. Array elements are policy IDs. Policies can be deleted in a batch
                     * 
                     */
                    void SetPolicyId(const std::vector<uint64_t>& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * Array. Array elements are policy IDs. Policies can be deleted in a batch
                     */
                    std::vector<uint64_t> m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DELETEPOLICYREQUEST_H_
