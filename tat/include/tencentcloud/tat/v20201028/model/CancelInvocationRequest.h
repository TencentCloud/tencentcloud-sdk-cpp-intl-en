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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_CANCELINVOCATIONREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_CANCELINVOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CancelInvocation request structure.
                */
                class CancelInvocationRequest : public AbstractModel
                {
                public:
                    CancelInvocationRequest();
                    ~CancelInvocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Execution activity ID
                     * @return InvocationId Execution activity ID
                     * 
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 设置Execution activity ID
                     * @param _invocationId Execution activity ID
                     * 
                     */
                    void SetInvocationId(const std::string& _invocationId);

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     * 
                     */
                    bool InvocationIdHasBeenSet() const;

                    /**
                     * 获取Instance ID list. A maximum of 100 IDs are allowed. Supported instance types:
<li> `CVM`
<li> `LIGHTHOUSE`
                     * @return InstanceIds Instance ID list. A maximum of 100 IDs are allowed. Supported instance types:
<li> `CVM`
<li> `LIGHTHOUSE`
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list. A maximum of 100 IDs are allowed. Supported instance types:
<li> `CVM`
<li> `LIGHTHOUSE`
                     * @param _instanceIds Instance ID list. A maximum of 100 IDs are allowed. Supported instance types:
<li> `CVM`
<li> `LIGHTHOUSE`
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * Execution activity ID
                     */
                    std::string m_invocationId;
                    bool m_invocationIdHasBeenSet;

                    /**
                     * Instance ID list. A maximum of 100 IDs are allowed. Supported instance types:
<li> `CVM`
<li> `LIGHTHOUSE`
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CANCELINVOCATIONREQUEST_H_
