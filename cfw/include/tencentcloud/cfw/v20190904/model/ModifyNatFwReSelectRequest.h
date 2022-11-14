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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWRESELECTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWRESELECTREQUEST_H_

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
                * ModifyNatFwReSelect request structure.
                */
                class ModifyNatFwReSelectRequest : public AbstractModel
                {
                public:
                    ModifyNatFwReSelectRequest();
                    ~ModifyNatFwReSelectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Mode. 1: use existing; 0: create new
                     * @return Mode Mode. 1: use existing; 0: create new
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置Mode. 1: use existing; 0: create new
                     * @param Mode Mode. 1: use existing; 0: create new
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Firewall instance ID
                     * @return CfwInstance Firewall instance ID
                     */
                    std::string GetCfwInstance() const;

                    /**
                     * 设置Firewall instance ID
                     * @param CfwInstance Firewall instance ID
                     */
                    void SetCfwInstance(const std::string& _cfwInstance);

                    /**
                     * 判断参数 CfwInstance 是否已赋值
                     * @return CfwInstance 是否已赋值
                     */
                    bool CfwInstanceHasBeenSet() const;

                    /**
                     * 获取List of NAT gateways reconnected for the Using Existing mode. Only one of NatGwList and VpcList can be passed.
                     * @return NatGwList List of NAT gateways reconnected for the Using Existing mode. Only one of NatGwList and VpcList can be passed.
                     */
                    std::vector<std::string> GetNatGwList() const;

                    /**
                     * 设置List of NAT gateways reconnected for the Using Existing mode. Only one of NatGwList and VpcList can be passed.
                     * @param NatGwList List of NAT gateways reconnected for the Using Existing mode. Only one of NatGwList and VpcList can be passed.
                     */
                    void SetNatGwList(const std::vector<std::string>& _natGwList);

                    /**
                     * 判断参数 NatGwList 是否已赋值
                     * @return NatGwList 是否已赋值
                     */
                    bool NatGwListHasBeenSet() const;

                    /**
                     * 获取List of VPCs reconnected for the Create New mode. Only one of NatGwList and VpcList can be passed.
                     * @return VpcList List of VPCs reconnected for the Create New mode. Only one of NatGwList and VpcList can be passed.
                     */
                    std::vector<std::string> GetVpcList() const;

                    /**
                     * 设置List of VPCs reconnected for the Create New mode. Only one of NatGwList and VpcList can be passed.
                     * @param VpcList List of VPCs reconnected for the Create New mode. Only one of NatGwList and VpcList can be passed.
                     */
                    void SetVpcList(const std::vector<std::string>& _vpcList);

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     */
                    bool VpcListHasBeenSet() const;

                private:

                    /**
                     * Mode. 1: use existing; 0: create new
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Firewall instance ID
                     */
                    std::string m_cfwInstance;
                    bool m_cfwInstanceHasBeenSet;

                    /**
                     * List of NAT gateways reconnected for the Using Existing mode. Only one of NatGwList and VpcList can be passed.
                     */
                    std::vector<std::string> m_natGwList;
                    bool m_natGwListHasBeenSet;

                    /**
                     * List of VPCs reconnected for the Create New mode. Only one of NatGwList and VpcList can be passed.
                     */
                    std::vector<std::string> m_vpcList;
                    bool m_vpcListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWRESELECTREQUEST_H_
