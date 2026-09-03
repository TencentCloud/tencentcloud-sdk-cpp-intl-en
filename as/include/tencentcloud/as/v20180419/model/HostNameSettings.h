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
                     * 获取CVM HostName.
<li>Dots (.) and hyphens (-) cannot be used as the first or last character of HostName, and cannot be used consecutively.</li> 
<li>Windows instances are not supported.</li> 
<li>Instances of other types (e.g., Linux): The length of the character should be within the range of [2, 42]. Multiple dots (.) are allowed. Each segment between dot marks can consist of letters (case-insensitive), digits, and hyphens (-). Using only digits is not allowed.</li>
                     * @return HostName CVM HostName.
<li>Dots (.) and hyphens (-) cannot be used as the first or last character of HostName, and cannot be used consecutively.</li> 
<li>Windows instances are not supported.</li> 
<li>Instances of other types (e.g., Linux): The length of the character should be within the range of [2, 42]. Multiple dots (.) are allowed. Each segment between dot marks can consist of letters (case-insensitive), digits, and hyphens (-). Using only digits is not allowed.</li>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置CVM HostName.
<li>Dots (.) and hyphens (-) cannot be used as the first or last character of HostName, and cannot be used consecutively.</li> 
<li>Windows instances are not supported.</li> 
<li>Instances of other types (e.g., Linux): The length of the character should be within the range of [2, 42]. Multiple dots (.) are allowed. Each segment between dot marks can consist of letters (case-insensitive), digits, and hyphens (-). Using only digits is not allowed.</li>
                     * @param _hostName CVM HostName.
<li>Dots (.) and hyphens (-) cannot be used as the first or last character of HostName, and cannot be used consecutively.</li> 
<li>Windows instances are not supported.</li> 
<li>Instances of other types (e.g., Linux): The length of the character should be within the range of [2, 42]. Multiple dots (.) are allowed. Each segment between dot marks can consist of letters (case-insensitive), digits, and hyphens (-). Using only digits is not allowed.</li>
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取The style of the CVM host name. Valid values include ORIGINAL and UNIQUE, and the default value is ORIGINAL.
<li>ORIGINAL: AS passes HostName filled in the input parameters to CVM. CVM may append serial numbers to HostName, which can result in conflicts with HostName of instances in the scaling group.</li> 
<li> UNIQUE: HostName filled in the input parameters acts as a prefix for the HostName. AS and CVM will expand this prefix to ensure that HostName of the instance in the scaling group is unique.</li>
                     * @return HostNameStyle The style of the CVM host name. Valid values include ORIGINAL and UNIQUE, and the default value is ORIGINAL.
<li>ORIGINAL: AS passes HostName filled in the input parameters to CVM. CVM may append serial numbers to HostName, which can result in conflicts with HostName of instances in the scaling group.</li> 
<li> UNIQUE: HostName filled in the input parameters acts as a prefix for the HostName. AS and CVM will expand this prefix to ensure that HostName of the instance in the scaling group is unique.</li>
                     * 
                     */
                    std::string GetHostNameStyle() const;

                    /**
                     * 设置The style of the CVM host name. Valid values include ORIGINAL and UNIQUE, and the default value is ORIGINAL.
<li>ORIGINAL: AS passes HostName filled in the input parameters to CVM. CVM may append serial numbers to HostName, which can result in conflicts with HostName of instances in the scaling group.</li> 
<li> UNIQUE: HostName filled in the input parameters acts as a prefix for the HostName. AS and CVM will expand this prefix to ensure that HostName of the instance in the scaling group is unique.</li>
                     * @param _hostNameStyle The style of the CVM host name. Valid values include ORIGINAL and UNIQUE, and the default value is ORIGINAL.
<li>ORIGINAL: AS passes HostName filled in the input parameters to CVM. CVM may append serial numbers to HostName, which can result in conflicts with HostName of instances in the scaling group.</li> 
<li> UNIQUE: HostName filled in the input parameters acts as a prefix for the HostName. AS and CVM will expand this prefix to ensure that HostName of the instance in the scaling group is unique.</li>
                     * 
                     */
                    void SetHostNameStyle(const std::string& _hostNameStyle);

                    /**
                     * 判断参数 HostNameStyle 是否已赋值
                     * @return HostNameStyle 是否已赋值
                     * 
                     */
                    bool HostNameStyleHasBeenSet() const;

                    /**
                     * 获取Hostname suffix of a CVM instance.
<li>Dots (.) and hyphens (-) cannot be used as the last character of HostNameSuffix, and cannot be used consecutively.</li> 
<li>Windows instances are not supported.</li> 
<li>Instances of other types (e.g., Linux): The length of the character should be within the range of [1, 39], and the combined length with HostName should not exceed 41. Multiple dots (.) are allowed. Each segment between dots can consist of letters (case-insensitive), digits, and hyphens (-).</li>
                     * @return HostNameSuffix Hostname suffix of a CVM instance.
<li>Dots (.) and hyphens (-) cannot be used as the last character of HostNameSuffix, and cannot be used consecutively.</li> 
<li>Windows instances are not supported.</li> 
<li>Instances of other types (e.g., Linux): The length of the character should be within the range of [1, 39], and the combined length with HostName should not exceed 41. Multiple dots (.) are allowed. Each segment between dots can consist of letters (case-insensitive), digits, and hyphens (-).</li>
                     * 
                     */
                    std::string GetHostNameSuffix() const;

                    /**
                     * 设置Hostname suffix of a CVM instance.
<li>Dots (.) and hyphens (-) cannot be used as the last character of HostNameSuffix, and cannot be used consecutively.</li> 
<li>Windows instances are not supported.</li> 
<li>Instances of other types (e.g., Linux): The length of the character should be within the range of [1, 39], and the combined length with HostName should not exceed 41. Multiple dots (.) are allowed. Each segment between dots can consist of letters (case-insensitive), digits, and hyphens (-).</li>
                     * @param _hostNameSuffix Hostname suffix of a CVM instance.
<li>Dots (.) and hyphens (-) cannot be used as the last character of HostNameSuffix, and cannot be used consecutively.</li> 
<li>Windows instances are not supported.</li> 
<li>Instances of other types (e.g., Linux): The length of the character should be within the range of [1, 39], and the combined length with HostName should not exceed 41. Multiple dots (.) are allowed. Each segment between dots can consist of letters (case-insensitive), digits, and hyphens (-).</li>
                     * 
                     */
                    void SetHostNameSuffix(const std::string& _hostNameSuffix);

                    /**
                     * 判断参数 HostNameSuffix 是否已赋值
                     * @return HostNameSuffix 是否已赋值
                     * 
                     */
                    bool HostNameSuffixHasBeenSet() const;

                    /**
                     * 获取Specifies the delimiter for the CVM host name. The default delimiter is a dot (.). Valid values: 
- dot (.)
-  hyphen (-)
- empty string.
Delimiter used for concatenating host name, index, and suffix. Assuming host name is testGpu4090, index is 0007, and suffix is server.
- The delimiter is a period (.), and the final concatenation is testGpu4090.007.server.
- Specifies the delimiter as a hyphen (-), with the final concatenation as testGpu4090-007-server.
- Delimiter is an empty string, finally concatenated as testGpu4090007server.
                     * @return HostNameDelimiter Specifies the delimiter for the CVM host name. The default delimiter is a dot (.). Valid values: 
- dot (.)
-  hyphen (-)
- empty string.
Delimiter used for concatenating host name, index, and suffix. Assuming host name is testGpu4090, index is 0007, and suffix is server.
- The delimiter is a period (.), and the final concatenation is testGpu4090.007.server.
- Specifies the delimiter as a hyphen (-), with the final concatenation as testGpu4090-007-server.
- Delimiter is an empty string, finally concatenated as testGpu4090007server.
                     * 
                     */
                    std::string GetHostNameDelimiter() const;

                    /**
                     * 设置Specifies the delimiter for the CVM host name. The default delimiter is a dot (.). Valid values: 
- dot (.)
-  hyphen (-)
- empty string.
Delimiter used for concatenating host name, index, and suffix. Assuming host name is testGpu4090, index is 0007, and suffix is server.
- The delimiter is a period (.), and the final concatenation is testGpu4090.007.server.
- Specifies the delimiter as a hyphen (-), with the final concatenation as testGpu4090-007-server.
- Delimiter is an empty string, finally concatenated as testGpu4090007server.
                     * @param _hostNameDelimiter Specifies the delimiter for the CVM host name. The default delimiter is a dot (.). Valid values: 
- dot (.)
-  hyphen (-)
- empty string.
Delimiter used for concatenating host name, index, and suffix. Assuming host name is testGpu4090, index is 0007, and suffix is server.
- The delimiter is a period (.), and the final concatenation is testGpu4090.007.server.
- Specifies the delimiter as a hyphen (-), with the final concatenation as testGpu4090-007-server.
- Delimiter is an empty string, finally concatenated as testGpu4090007server.
                     * 
                     */
                    void SetHostNameDelimiter(const std::string& _hostNameDelimiter);

                    /**
                     * 判断参数 HostNameDelimiter 是否已赋值
                     * @return HostNameDelimiter 是否已赋值
                     * 
                     */
                    bool HostNameDelimiterHasBeenSet() const;

                private:

                    /**
                     * CVM HostName.
<li>Dots (.) and hyphens (-) cannot be used as the first or last character of HostName, and cannot be used consecutively.</li> 
<li>Windows instances are not supported.</li> 
<li>Instances of other types (e.g., Linux): The length of the character should be within the range of [2, 42]. Multiple dots (.) are allowed. Each segment between dot marks can consist of letters (case-insensitive), digits, and hyphens (-). Using only digits is not allowed.</li>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * The style of the CVM host name. Valid values include ORIGINAL and UNIQUE, and the default value is ORIGINAL.
<li>ORIGINAL: AS passes HostName filled in the input parameters to CVM. CVM may append serial numbers to HostName, which can result in conflicts with HostName of instances in the scaling group.</li> 
<li> UNIQUE: HostName filled in the input parameters acts as a prefix for the HostName. AS and CVM will expand this prefix to ensure that HostName of the instance in the scaling group is unique.</li>
                     */
                    std::string m_hostNameStyle;
                    bool m_hostNameStyleHasBeenSet;

                    /**
                     * Hostname suffix of a CVM instance.
<li>Dots (.) and hyphens (-) cannot be used as the last character of HostNameSuffix, and cannot be used consecutively.</li> 
<li>Windows instances are not supported.</li> 
<li>Instances of other types (e.g., Linux): The length of the character should be within the range of [1, 39], and the combined length with HostName should not exceed 41. Multiple dots (.) are allowed. Each segment between dots can consist of letters (case-insensitive), digits, and hyphens (-).</li>
                     */
                    std::string m_hostNameSuffix;
                    bool m_hostNameSuffixHasBeenSet;

                    /**
                     * Specifies the delimiter for the CVM host name. The default delimiter is a dot (.). Valid values: 
- dot (.)
-  hyphen (-)
- empty string.
Delimiter used for concatenating host name, index, and suffix. Assuming host name is testGpu4090, index is 0007, and suffix is server.
- The delimiter is a period (.), and the final concatenation is testGpu4090.007.server.
- Specifies the delimiter as a hyphen (-), with the final concatenation as testGpu4090-007-server.
- Delimiter is an empty string, finally concatenated as testGpu4090007server.
                     */
                    std::string m_hostNameDelimiter;
                    bool m_hostNameDelimiterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_HOSTNAMESETTINGS_H_
