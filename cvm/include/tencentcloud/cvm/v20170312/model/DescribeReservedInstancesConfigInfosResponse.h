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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESCONFIGINFOSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESCONFIGINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ReservedInstanceConfigInfoItem.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeReservedInstancesConfigInfos response structure.
                */
                class DescribeReservedInstancesConfigInfosResponse : public AbstractModel
                {
                public:
                    DescribeReservedInstancesConfigInfosResponse();
                    ~DescribeReservedInstancesConfigInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Static configurations of the reserved instance.
                     * @return ReservedInstanceConfigInfos Static configurations of the reserved instance.
                     * 
                     */
                    std::vector<ReservedInstanceConfigInfoItem> GetReservedInstanceConfigInfos() const;

                    /**
                     * 判断参数 ReservedInstanceConfigInfos 是否已赋值
                     * @return ReservedInstanceConfigInfos 是否已赋值
                     * 
                     */
                    bool ReservedInstanceConfigInfosHasBeenSet() const;

                private:

                    /**
                     * Static configurations of the reserved instance.
                     */
                    std::vector<ReservedInstanceConfigInfoItem> m_reservedInstanceConfigInfos;
                    bool m_reservedInstanceConfigInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESCONFIGINFOSRESPONSE_H_
