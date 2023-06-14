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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEIPALARMTHRESHOLDCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEIPALARMTHRESHOLDCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/IPAlarmThresholdRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateIPAlarmThresholdConfig request structure.
                */
                class CreateIPAlarmThresholdConfigRequest : public AbstractModel
                {
                public:
                    CreateIPAlarmThresholdConfigRequest();
                    ~CreateIPAlarmThresholdConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IP alarm threshold configurations
                     * @return IpAlarmThresholdConfigList List of IP alarm threshold configurations
                     * 
                     */
                    std::vector<IPAlarmThresholdRelation> GetIpAlarmThresholdConfigList() const;

                    /**
                     * 设置List of IP alarm threshold configurations
                     * @param _ipAlarmThresholdConfigList List of IP alarm threshold configurations
                     * 
                     */
                    void SetIpAlarmThresholdConfigList(const std::vector<IPAlarmThresholdRelation>& _ipAlarmThresholdConfigList);

                    /**
                     * 判断参数 IpAlarmThresholdConfigList 是否已赋值
                     * @return IpAlarmThresholdConfigList 是否已赋值
                     * 
                     */
                    bool IpAlarmThresholdConfigListHasBeenSet() const;

                private:

                    /**
                     * List of IP alarm threshold configurations
                     */
                    std::vector<IPAlarmThresholdRelation> m_ipAlarmThresholdConfigList;
                    bool m_ipAlarmThresholdConfigListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEIPALARMTHRESHOLDCONFIGREQUEST_H_
