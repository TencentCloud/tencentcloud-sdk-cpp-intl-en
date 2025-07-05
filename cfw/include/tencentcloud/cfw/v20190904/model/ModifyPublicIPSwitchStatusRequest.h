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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYPUBLICIPSWITCHSTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYPUBLICIPSWITCHSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyPublicIPSwitchStatus request structure.
                */
                class ModifyPublicIPSwitchStatusRequest : public AbstractModel
                {
                public:
                    ModifyPublicIPSwitchStatusRequest();
                    ~ModifyPublicIPSwitchStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Public IP
                     * @return FireWallPublicIP Public IP
                     * 
                     */
                    std::string GetFireWallPublicIP() const;

                    /**
                     * 设置Public IP
                     * @param _fireWallPublicIP Public IP
                     * 
                     */
                    void SetFireWallPublicIP(const std::string& _fireWallPublicIP);

                    /**
                     * 判断参数 FireWallPublicIP 是否已赋值
                     * @return FireWallPublicIP 是否已赋值
                     * 
                     */
                    bool FireWallPublicIPHasBeenSet() const;

                    /**
                     * 获取Status value. 0: off; 1: on
                     * @return Status Status value. 0: off; 1: on
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status value. 0: off; 1: on
                     * @param _status Status value. 0: off; 1: on
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Public IP
                     */
                    std::string m_fireWallPublicIP;
                    bool m_fireWallPublicIPHasBeenSet;

                    /**
                     * Status value. 0: off; 1: on
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYPUBLICIPSWITCHSTATUSREQUEST_H_
