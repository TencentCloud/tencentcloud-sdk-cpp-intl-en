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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMESETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMESETTINGS_H_

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
                * Settings of CVM instance names.
                */
                class InstanceNameSettings : public AbstractModel
                {
                public:
                    InstanceNameSettings();
                    ~InstanceNameSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CVM instance name. Value range: 2-108.
                     * @return InstanceName CVM instance name. Value range: 2-108.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置CVM instance name. Value range: 2-108.
                     * @param _instanceName CVM instance name. Value range: 2-108.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Type of CVM instance name. Valid values: `ORIGINAL` and `UNIQUE`. Default value: `ORIGINAL`.

`ORIGINAL`: Auto Scaling sends the input parameter `InstanceName` to the CVM directly. The CVM may append a serial number to the `InstanceName`. The `InstanceName` of the instances within the scaling group may conflict.

`UNIQUE`: the input parameter `InstanceName` is the prefix of an instance name. Auto Scaling and CVM expand it. The `InstanceName` of an instance in the scaling group is unique.
                     * @return InstanceNameStyle Type of CVM instance name. Valid values: `ORIGINAL` and `UNIQUE`. Default value: `ORIGINAL`.

`ORIGINAL`: Auto Scaling sends the input parameter `InstanceName` to the CVM directly. The CVM may append a serial number to the `InstanceName`. The `InstanceName` of the instances within the scaling group may conflict.

`UNIQUE`: the input parameter `InstanceName` is the prefix of an instance name. Auto Scaling and CVM expand it. The `InstanceName` of an instance in the scaling group is unique.
                     * 
                     */
                    std::string GetInstanceNameStyle() const;

                    /**
                     * 设置Type of CVM instance name. Valid values: `ORIGINAL` and `UNIQUE`. Default value: `ORIGINAL`.

`ORIGINAL`: Auto Scaling sends the input parameter `InstanceName` to the CVM directly. The CVM may append a serial number to the `InstanceName`. The `InstanceName` of the instances within the scaling group may conflict.

`UNIQUE`: the input parameter `InstanceName` is the prefix of an instance name. Auto Scaling and CVM expand it. The `InstanceName` of an instance in the scaling group is unique.
                     * @param _instanceNameStyle Type of CVM instance name. Valid values: `ORIGINAL` and `UNIQUE`. Default value: `ORIGINAL`.

`ORIGINAL`: Auto Scaling sends the input parameter `InstanceName` to the CVM directly. The CVM may append a serial number to the `InstanceName`. The `InstanceName` of the instances within the scaling group may conflict.

`UNIQUE`: the input parameter `InstanceName` is the prefix of an instance name. Auto Scaling and CVM expand it. The `InstanceName` of an instance in the scaling group is unique.
                     * 
                     */
                    void SetInstanceNameStyle(const std::string& _instanceNameStyle);

                    /**
                     * 判断参数 InstanceNameStyle 是否已赋值
                     * @return InstanceNameStyle 是否已赋值
                     * 
                     */
                    bool InstanceNameStyleHasBeenSet() const;

                    /**
                     * 获取CVM instance name suffix. The length of the character is within the range of [1, 105], and the combined length with InstanceName should not exceed 107.

Assume the suffix name is suffix and the original instance name is test.0, then the final instance name is test.0.suffix.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceNameSuffix CVM instance name suffix. The length of the character is within the range of [1, 105], and the combined length with InstanceName should not exceed 107.

Assume the suffix name is suffix and the original instance name is test.0, then the final instance name is test.0.suffix.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceNameSuffix() const;

                    /**
                     * 设置CVM instance name suffix. The length of the character is within the range of [1, 105], and the combined length with InstanceName should not exceed 107.

Assume the suffix name is suffix and the original instance name is test.0, then the final instance name is test.0.suffix.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceNameSuffix CVM instance name suffix. The length of the character is within the range of [1, 105], and the combined length with InstanceName should not exceed 107.

Assume the suffix name is suffix and the original instance name is test.0, then the final instance name is test.0.suffix.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceNameSuffix(const std::string& _instanceNameSuffix);

                    /**
                     * 判断参数 InstanceNameSuffix 是否已赋值
                     * @return InstanceNameSuffix 是否已赋值
                     * 
                     */
                    bool InstanceNameSuffixHasBeenSet() const;

                private:

                    /**
                     * CVM instance name. Value range: 2-108.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Type of CVM instance name. Valid values: `ORIGINAL` and `UNIQUE`. Default value: `ORIGINAL`.

`ORIGINAL`: Auto Scaling sends the input parameter `InstanceName` to the CVM directly. The CVM may append a serial number to the `InstanceName`. The `InstanceName` of the instances within the scaling group may conflict.

`UNIQUE`: the input parameter `InstanceName` is the prefix of an instance name. Auto Scaling and CVM expand it. The `InstanceName` of an instance in the scaling group is unique.
                     */
                    std::string m_instanceNameStyle;
                    bool m_instanceNameStyleHasBeenSet;

                    /**
                     * CVM instance name suffix. The length of the character is within the range of [1, 105], and the combined length with InstanceName should not exceed 107.

Assume the suffix name is suffix and the original instance name is test.0, then the final instance name is test.0.suffix.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceNameSuffix;
                    bool m_instanceNameSuffixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMESETTINGS_H_
