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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLPUBLICIPSWITCHSTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLPUBLICIPSWITCHSTATUSREQUEST_H_

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
                * ModifyAllPublicIPSwitchStatus request structure.
                */
                class ModifyAllPublicIPSwitchStatusRequest : public AbstractModel
                {
                public:
                    ModifyAllPublicIPSwitchStatusRequest();
                    ~ModifyAllPublicIPSwitchStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Status. 0: off; 1: on
                     * @return Status Status. 0: off; 1: on
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. 0: off; 1: on
                     * @param _status Status. 0: off; 1: on
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取ID of the selected firewall toggle
                     * @return FireWallPublicIPs ID of the selected firewall toggle
                     * 
                     */
                    std::vector<std::string> GetFireWallPublicIPs() const;

                    /**
                     * 设置ID of the selected firewall toggle
                     * @param _fireWallPublicIPs ID of the selected firewall toggle
                     * 
                     */
                    void SetFireWallPublicIPs(const std::vector<std::string>& _fireWallPublicIPs);

                    /**
                     * 判断参数 FireWallPublicIPs 是否已赋值
                     * @return FireWallPublicIPs 是否已赋值
                     * 
                     */
                    bool FireWallPublicIPsHasBeenSet() const;

                private:

                    /**
                     * Status. 0: off; 1: on
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * ID of the selected firewall toggle
                     */
                    std::vector<std::string> m_fireWallPublicIPs;
                    bool m_fireWallPublicIPsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLPUBLICIPSWITCHSTATUSREQUEST_H_
