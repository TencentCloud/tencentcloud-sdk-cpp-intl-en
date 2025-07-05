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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATESECURITYGROUPRULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATESECURITYGROUPRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SecurityGroupListData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateSecurityGroupRules request structure.
                */
                class CreateSecurityGroupRulesRequest : public AbstractModel
                {
                public:
                    CreateSecurityGroupRulesRequest();
                    ~CreateSecurityGroupRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Added enterprise security group rule data
                     * @return Data Added enterprise security group rule data
                     * 
                     */
                    std::vector<SecurityGroupListData> GetData() const;

                    /**
                     * 设置Added enterprise security group rule data
                     * @param _data Added enterprise security group rule data
                     * 
                     */
                    void SetData(const std::vector<SecurityGroupListData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Direction. 0: outbound; 1: inbound. 1 by default
                     * @return Direction Direction. 0: outbound; 1: inbound. 1 by default
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Direction. 0: outbound; 1: inbound. 1 by default
                     * @param _direction Direction. 0: outbound; 1: inbound. 1 by default
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取0: at the end; 1: at the top; 2: in the middle. 0 by default
                     * @return Type 0: at the end; 1: at the top; 2: in the middle. 0 by default
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0: at the end; 1: at the top; 2: in the middle. 0 by default
                     * @param _type 0: at the end; 1: at the top; 2: in the middle. 0 by default
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Indicates whether to enable rules after addition. 0: disable; 1: enable. 1 by default
                     * @return Enable Indicates whether to enable rules after addition. 0: disable; 1: enable. 1 by default
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Indicates whether to enable rules after addition. 0: disable; 1: enable. 1 by default
                     * @param _enable Indicates whether to enable rules after addition. 0: disable; 1: enable. 1 by default
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * Added enterprise security group rule data
                     */
                    std::vector<SecurityGroupListData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Direction. 0: outbound; 1: inbound. 1 by default
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 0: at the end; 1: at the top; 2: in the middle. 0 by default
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Indicates whether to enable rules after addition. 0: disable; 1: enable. 1 by default
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATESECURITYGROUPRULESREQUEST_H_
