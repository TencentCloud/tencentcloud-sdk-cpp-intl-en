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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBESECURITYGROUPASSOCIATIONSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBESECURITYGROUPASSOCIATIONSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/SecurityGroupAssociationStatistics.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupAssociationStatistics response structure.
                */
                class DescribeSecurityGroupAssociationStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeSecurityGroupAssociationStatisticsResponse();
                    ~DescribeSecurityGroupAssociationStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Statistics on the instances associated with the security group.
                     * @return SecurityGroupAssociationStatisticsSet Statistics on the instances associated with the security group.
                     * 
                     */
                    std::vector<SecurityGroupAssociationStatistics> GetSecurityGroupAssociationStatisticsSet() const;

                    /**
                     * 判断参数 SecurityGroupAssociationStatisticsSet 是否已赋值
                     * @return SecurityGroupAssociationStatisticsSet 是否已赋值
                     * 
                     */
                    bool SecurityGroupAssociationStatisticsSetHasBeenSet() const;

                private:

                    /**
                     * Statistics on the instances associated with the security group.
                     */
                    std::vector<SecurityGroupAssociationStatistics> m_securityGroupAssociationStatisticsSet;
                    bool m_securityGroupAssociationStatisticsSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBESECURITYGROUPASSOCIATIONSTATISTICSRESPONSE_H_
