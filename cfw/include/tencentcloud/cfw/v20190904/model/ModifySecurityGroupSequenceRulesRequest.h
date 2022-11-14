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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPSEQUENCERULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPSEQUENCERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SecurityGroupOrderIndexData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifySecurityGroupSequenceRules request structure.
                */
                class ModifySecurityGroupSequenceRulesRequest : public AbstractModel
                {
                public:
                    ModifySecurityGroupSequenceRulesRequest();
                    ~ModifySecurityGroupSequenceRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Direction. 0: outbound; 1: inbound. 1 by default
                     * @return Direction Direction. 0: outbound; 1: inbound. 1 by default
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Direction. 0: outbound; 1: inbound. 1 by default
                     * @param Direction Direction. 0: outbound; 1: inbound. 1 by default
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Sorting data of enterprise security group rules
                     * @return Data Sorting data of enterprise security group rules
                     */
                    std::vector<SecurityGroupOrderIndexData> GetData() const;

                    /**
                     * 设置Sorting data of enterprise security group rules
                     * @param Data Sorting data of enterprise security group rules
                     */
                    void SetData(const std::vector<SecurityGroupOrderIndexData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Direction. 0: outbound; 1: inbound. 1 by default
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Sorting data of enterprise security group rules
                     */
                    std::vector<SecurityGroupOrderIndexData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPSEQUENCERULESREQUEST_H_
