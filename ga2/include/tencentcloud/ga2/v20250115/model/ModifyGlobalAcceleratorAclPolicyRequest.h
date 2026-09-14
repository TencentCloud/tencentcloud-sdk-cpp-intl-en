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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORACLPOLICYREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORACLPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * ModifyGlobalAcceleratorAclPolicy request structure.
                */
                class ModifyGlobalAcceleratorAclPolicyRequest : public AbstractModel
                {
                public:
                    ModifyGlobalAcceleratorAclPolicyRequest();
                    ~ModifyGlobalAcceleratorAclPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Global acceleration instance ID.</p>
                     * @return GlobalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>Global acceleration instance ID.</p>
                     * @param _globalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>Access control policy ID.</p>
                     * @return GlobalAcceleratorAclPolicyId <p>Access control policy ID.</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorAclPolicyId() const;

                    /**
                     * 设置<p>Access control policy ID.</p>
                     * @param _globalAcceleratorAclPolicyId <p>Access control policy ID.</p>
                     * 
                     */
                    void SetGlobalAcceleratorAclPolicyId(const std::string& _globalAcceleratorAclPolicyId);

                    /**
                     * 判断参数 GlobalAcceleratorAclPolicyId 是否已赋值
                     * @return GlobalAcceleratorAclPolicyId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorAclPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>Access control policy status.</p><p>Enumeration values:</p><ul><li>OPEN: On.</li><li>CLOSE: Off.</li></ul>
                     * @return Status <p>Access control policy status.</p><p>Enumeration values:</p><ul><li>OPEN: On.</li><li>CLOSE: Off.</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Access control policy status.</p><p>Enumeration values:</p><ul><li>OPEN: On.</li><li>CLOSE: Off.</li></ul>
                     * @param _status <p>Access control policy status.</p><p>Enumeration values:</p><ul><li>OPEN: On.</li><li>CLOSE: Off.</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Global acceleration instance ID.</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>Access control policy ID.</p>
                     */
                    std::string m_globalAcceleratorAclPolicyId;
                    bool m_globalAcceleratorAclPolicyIdHasBeenSet;

                    /**
                     * <p>Access control policy status.</p><p>Enumeration values:</p><ul><li>OPEN: On.</li><li>CLOSE: Off.</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORACLPOLICYREQUEST_H_
