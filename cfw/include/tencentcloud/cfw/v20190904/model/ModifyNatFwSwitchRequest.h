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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWSWITCHREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWSWITCHREQUEST_H_

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
                * ModifyNatFwSwitch request structure.
                */
                class ModifyNatFwSwitchRequest : public AbstractModel
                {
                public:
                    ModifyNatFwSwitchRequest();
                    ~ModifyNatFwSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Status. 0: off; 1: on
                     * @return Enable Status. 0: off; 1: on
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Status. 0: off; 1: on
                     * @param _enable Status. 0: off; 1: on
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取List of firewall instance IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     * @return CfwInsIdList List of firewall instance IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     * 
                     */
                    std::vector<std::string> GetCfwInsIdList() const;

                    /**
                     * 设置List of firewall instance IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     * @param _cfwInsIdList List of firewall instance IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     * 
                     */
                    void SetCfwInsIdList(const std::vector<std::string>& _cfwInsIdList);

                    /**
                     * 判断参数 CfwInsIdList 是否已赋值
                     * @return CfwInsIdList 是否已赋值
                     * 
                     */
                    bool CfwInsIdListHasBeenSet() const;

                    /**
                     * 获取List of subnet IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     * @return SubnetIdList List of subnet IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     * 
                     */
                    std::vector<std::string> GetSubnetIdList() const;

                    /**
                     * 设置List of subnet IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     * @param _subnetIdList List of subnet IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     * 
                     */
                    void SetSubnetIdList(const std::vector<std::string>& _subnetIdList);

                    /**
                     * 判断参数 SubnetIdList 是否已赋值
                     * @return SubnetIdList 是否已赋值
                     * 
                     */
                    bool SubnetIdListHasBeenSet() const;

                    /**
                     * 获取List of route table IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     * @return RouteTableIdList List of route table IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     * 
                     */
                    std::vector<std::string> GetRouteTableIdList() const;

                    /**
                     * 设置List of route table IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     * @param _routeTableIdList List of route table IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     * 
                     */
                    void SetRouteTableIdList(const std::vector<std::string>& _routeTableIdList);

                    /**
                     * 判断参数 RouteTableIdList 是否已赋值
                     * @return RouteTableIdList 是否已赋值
                     * 
                     */
                    bool RouteTableIdListHasBeenSet() const;

                private:

                    /**
                     * Status. 0: off; 1: on
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * List of firewall instance IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     */
                    std::vector<std::string> m_cfwInsIdList;
                    bool m_cfwInsIdListHasBeenSet;

                    /**
                     * List of subnet IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     */
                    std::vector<std::string> m_subnetIdList;
                    bool m_subnetIdListHasBeenSet;

                    /**
                     * List of route table IDs. Only one of CfwInsIdList, SubnetIdList, and RouteTableIdList can be passed.
                     */
                    std::vector<std::string> m_routeTableIdList;
                    bool m_routeTableIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWSWITCHREQUEST_H_
