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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPLICENSEUNBINDSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPLICENSEUNBINDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyCSIPLicenseUnBinds request structure.
                */
                class ModifyCSIPLicenseUnBindsRequest : public AbstractModel
                {
                public:
                    ModifyCSIPLicenseUnBindsRequest();
                    ~ModifyCSIPLicenseUnBindsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID list to be unbound (can be omitted when IsAll=true)</p>
                     * @return InstanceIDs <p>Instance ID list to be unbound (can be omitted when IsAll=true)</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 设置<p>Instance ID list to be unbound (can be omitted when IsAll=true)</p>
                     * @param _instanceIDs <p>Instance ID list to be unbound (can be omitted when IsAll=true)</p>
                     * 
                     */
                    void SetInstanceIDs(const std::vector<std::string>& _instanceIDs);

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to unbind all machines bound with host authorization</p>
                     * @return IsAll <p>Whether to unbind all machines bound with host authorization</p>
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置<p>Whether to unbind all machines bound with host authorization</p>
                     * @param _isAll <p>Whether to unbind all machines bound with host authorization</p>
                     * 
                     */
                    void SetIsAll(const bool& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID list to be unbound (can be omitted when IsAll=true)</p>
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                    /**
                     * <p>Whether to unbind all machines bound with host authorization</p>
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPLICENSEUNBINDSREQUEST_H_
