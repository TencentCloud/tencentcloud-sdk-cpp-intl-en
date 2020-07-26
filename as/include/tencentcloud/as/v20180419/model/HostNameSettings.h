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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_HOSTNAMESETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_HOSTNAMESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * CVM HostName settings
                */
                class HostNameSettings : public AbstractModel
                {
                public:
                    HostNameSettings();
                    ~HostNameSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host name of a CVM.
<br><li> A period (.) and hyphen (-) cannot be used as the first and the last characters of HostName, and multiple consecutive hyphens (-) or periods (.) are not allowed.
<br><li> No support for Windows instances.
<br><li> Other types of instances (such as Linux): the name should be a combination of 2 to 40 characters, supports multiple periods (.). The string between two periods can be composed of letters (case insensitive), numbers, and hyphens (-).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostName Host name of a CVM.
<br><li> A period (.) and hyphen (-) cannot be used as the first and the last characters of HostName, and multiple consecutive hyphens (-) or periods (.) are not allowed.
<br><li> No support for Windows instances.
<br><li> Other types of instances (such as Linux): the name should be a combination of 2 to 40 characters, supports multiple periods (.). The string between two periods can be composed of letters (case insensitive), numbers, and hyphens (-).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name of a CVM.
<br><li> A period (.) and hyphen (-) cannot be used as the first and the last characters of HostName, and multiple consecutive hyphens (-) or periods (.) are not allowed.
<br><li> No support for Windows instances.
<br><li> Other types of instances (such as Linux): the name should be a combination of 2 to 40 characters, supports multiple periods (.). The string between two periods can be composed of letters (case insensitive), numbers, and hyphens (-).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HostName Host name of a CVM.
<br><li> A period (.) and hyphen (-) cannot be used as the first and the last characters of HostName, and multiple consecutive hyphens (-) or periods (.) are not allowed.
<br><li> No support for Windows instances.
<br><li> Other types of instances (such as Linux): the name should be a combination of 2 to 40 characters, supports multiple periods (.). The string between two periods can be composed of letters (case insensitive), numbers, and hyphens (-).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Type of CVM host name. Valid values: "ORIGINAL" and "UNIQUE". Default value: "ORIGINAL"
<br><li> ORIGINAL. Auto Scaling transfers the HostName set in input parameters to the CVM directly. CVM may adds serial numbers for the HostName. The HostName of instances within the auto scaling group may conflict.
<br><li> UNIQUE. The HostName set in input parameters is the prefix of a host name. Auto Scaling and CVM expand it. The HostName of an instance in the auto scaling group is unique.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostNameStyle Type of CVM host name. Valid values: "ORIGINAL" and "UNIQUE". Default value: "ORIGINAL"
<br><li> ORIGINAL. Auto Scaling transfers the HostName set in input parameters to the CVM directly. CVM may adds serial numbers for the HostName. The HostName of instances within the auto scaling group may conflict.
<br><li> UNIQUE. The HostName set in input parameters is the prefix of a host name. Auto Scaling and CVM expand it. The HostName of an instance in the auto scaling group is unique.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHostNameStyle() const;

                    /**
                     * 设置Type of CVM host name. Valid values: "ORIGINAL" and "UNIQUE". Default value: "ORIGINAL"
<br><li> ORIGINAL. Auto Scaling transfers the HostName set in input parameters to the CVM directly. CVM may adds serial numbers for the HostName. The HostName of instances within the auto scaling group may conflict.
<br><li> UNIQUE. The HostName set in input parameters is the prefix of a host name. Auto Scaling and CVM expand it. The HostName of an instance in the auto scaling group is unique.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HostNameStyle Type of CVM host name. Valid values: "ORIGINAL" and "UNIQUE". Default value: "ORIGINAL"
<br><li> ORIGINAL. Auto Scaling transfers the HostName set in input parameters to the CVM directly. CVM may adds serial numbers for the HostName. The HostName of instances within the auto scaling group may conflict.
<br><li> UNIQUE. The HostName set in input parameters is the prefix of a host name. Auto Scaling and CVM expand it. The HostName of an instance in the auto scaling group is unique.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHostNameStyle(const std::string& _hostNameStyle);

                    /**
                     * 判断参数 HostNameStyle 是否已赋值
                     * @return HostNameStyle 是否已赋值
                     */
                    bool HostNameStyleHasBeenSet() const;

                private:

                    /**
                     * Host name of a CVM.
<br><li> A period (.) and hyphen (-) cannot be used as the first and the last characters of HostName, and multiple consecutive hyphens (-) or periods (.) are not allowed.
<br><li> No support for Windows instances.
<br><li> Other types of instances (such as Linux): the name should be a combination of 2 to 40 characters, supports multiple periods (.). The string between two periods can be composed of letters (case insensitive), numbers, and hyphens (-).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Type of CVM host name. Valid values: "ORIGINAL" and "UNIQUE". Default value: "ORIGINAL"
<br><li> ORIGINAL. Auto Scaling transfers the HostName set in input parameters to the CVM directly. CVM may adds serial numbers for the HostName. The HostName of instances within the auto scaling group may conflict.
<br><li> UNIQUE. The HostName set in input parameters is the prefix of a host name. Auto Scaling and CVM expand it. The HostName of an instance in the auto scaling group is unique.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostNameStyle;
                    bool m_hostNameStyleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_HOSTNAMESETTINGS_H_
