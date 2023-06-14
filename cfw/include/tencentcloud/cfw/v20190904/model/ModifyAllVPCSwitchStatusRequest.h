/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLVPCSWITCHSTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLVPCSWITCHSTATUSREQUEST_H_

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
                * ModifyAllVPCSwitchStatus request structure.
                */
                class ModifyAllVPCSwitchStatusRequest : public AbstractModel
                {
                public:
                    ModifyAllVPCSwitchStatusRequest();
                    ~ModifyAllVPCSwitchStatusRequest() = default;
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
                     * @return FireWallVpcIds ID of the selected firewall toggle
                     * 
                     */
                    std::vector<std::string> GetFireWallVpcIds() const;

                    /**
                     * 设置ID of the selected firewall toggle
                     * @param _fireWallVpcIds ID of the selected firewall toggle
                     * 
                     */
                    void SetFireWallVpcIds(const std::vector<std::string>& _fireWallVpcIds);

                    /**
                     * 判断参数 FireWallVpcIds 是否已赋值
                     * @return FireWallVpcIds 是否已赋值
                     * 
                     */
                    bool FireWallVpcIdsHasBeenSet() const;

                private:

                    /**
                     * Status. 0: off; 1: on
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * ID of the selected firewall toggle
                     */
                    std::vector<std::string> m_fireWallVpcIds;
                    bool m_fireWallVpcIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLVPCSWITCHSTATUSREQUEST_H_
