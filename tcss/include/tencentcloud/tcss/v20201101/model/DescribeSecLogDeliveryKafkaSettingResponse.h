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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGDELIVERYKAFKASETTINGRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGDELIVERYKAFKASETTINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/SecLogDeliveryKafkaSettingInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeSecLogDeliveryKafkaSetting response structure.
                */
                class DescribeSecLogDeliveryKafkaSettingResponse : public AbstractModel
                {
                public:
                    DescribeSecLogDeliveryKafkaSettingResponse();
                    ~DescribeSecLogDeliveryKafkaSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Message queue instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceID Message queue instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Message queue instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Message queue instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Domain
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain Domain
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取List of log types
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogTypeList List of log types
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SecLogDeliveryKafkaSettingInfo> GetLogTypeList() const;

                    /**
                     * 判断参数 LogTypeList 是否已赋值
                     * @return LogTypeList 是否已赋值
                     */
                    bool LogTypeListHasBeenSet() const;

                    /**
                     * 获取Username
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return User Username
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUser() const;

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Region ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @return RegionID Region ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetRegionID() const;

                    /**
                     * 判断参数 RegionID 是否已赋值
                     * @return RegionID 是否已赋值
                     */
                    bool RegionIDHasBeenSet() const;

                private:

                    /**
                     * Message queue instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Message queue instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Domain
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * List of log types
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SecLogDeliveryKafkaSettingInfo> m_logTypeList;
                    bool m_logTypeListHasBeenSet;

                    /**
                     * Username
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Region ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_regionID;
                    bool m_regionIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGDELIVERYKAFKASETTINGRESPONSE_H_
