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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGSETINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ItemSeq.h>
#include <tencentcloud/emr/v20190103/model/Item.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Resource scheduling - configuration set information.
                */
                class ConfigSetInfo : public AbstractModel
                {
                public:
                    ConfigSetInfo();
                    ~ConfigSetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration set name.
                     * @return ConfigSet Configuration set name.
                     * 
                     */
                    std::string GetConfigSet() const;

                    /**
                     * 设置Configuration set name.
                     * @param _configSet Configuration set name.
                     * 
                     */
                    void SetConfigSet(const std::string& _configSet);

                    /**
                     * 判断参数 ConfigSet 是否已赋值
                     * @return ConfigSet 是否已赋值
                     * 
                     */
                    bool ConfigSetHasBeenSet() const;

                    /**
                     * 获取The capacity scheduler will use it, where tag-related configuration is set. The key values are consistent with the fields returned by **DescribeYarnQueue**.
The key values are as follows:
- labelName: Tag name, that is, tags in tag management.
- capacity: Capacity. The value is a **numeric string**.
- maximum-capacity: Maximum capacity. The value is a **numeric string**.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LabelParams The capacity scheduler will use it, where tag-related configuration is set. The key values are consistent with the fields returned by **DescribeYarnQueue**.
The key values are as follows:
- labelName: Tag name, that is, tags in tag management.
- capacity: Capacity. The value is a **numeric string**.
- maximum-capacity: Maximum capacity. The value is a **numeric string**.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ItemSeq> GetLabelParams() const;

                    /**
                     * 设置The capacity scheduler will use it, where tag-related configuration is set. The key values are consistent with the fields returned by **DescribeYarnQueue**.
The key values are as follows:
- labelName: Tag name, that is, tags in tag management.
- capacity: Capacity. The value is a **numeric string**.
- maximum-capacity: Maximum capacity. The value is a **numeric string**.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labelParams The capacity scheduler will use it, where tag-related configuration is set. The key values are consistent with the fields returned by **DescribeYarnQueue**.
The key values are as follows:
- labelName: Tag name, that is, tags in tag management.
- capacity: Capacity. The value is a **numeric string**.
- maximum-capacity: Maximum capacity. The value is a **numeric string**.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabelParams(const std::vector<ItemSeq>& _labelParams);

                    /**
                     * 判断参数 LabelParams 是否已赋值
                     * @return LabelParams 是否已赋值
                     * 
                     */
                    bool LabelParamsHasBeenSet() const;

                    /**
                     * 获取Set parameters related to the configuration set. The key values are consistent with the fields returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key values are as follows:
- minResources: Minimum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxResources: Maximum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxChildResources: Maximum resource amount for undeclared subqueues. The value is a **numeric string** or **null**.
- maxRunningApps: Maximum number of apps that can run concurrently. The value is a **numeric string** or **null**.
- weight: weight. The value is a **numeric string** or **null**.
- maxAMShare: Maximum App Master share. The value is a **numeric string** or **null**, where the number range is [0,1] or -1.

```
type YarnResource struct {
	Vcores *int `json:"vcores"`
	Memory *int `json:"memory"`
	Type *string `json:"type"` // The value can be percent or null. When the value is percent, it indicates the percentage used; otherwise, the absolute value used is indicated. The value can be percent only for maxResources and maxChildResources.
}
```

###### Capacity scheduler.
The key values are as follows:
- minimum-user-limit-percent: Minimum user capacity. The value is a **JSON string of the YarnResource type** or **null**, where the number range is [0,100].
- user-limit-factor: User resource factor. The value is a **JSON string of the YarnResource type** or **null**.
- maximum-applications: Maximum number of applications, that is, Max-Applications. The value is a **numeric string** or **null**, where the numbers must be positive integers.
- maximum-am-resource-percent: maximum AM percent. The value is a **numeric string** or **null**, where the number range is [0,1] or -1.
- default-application-priority: Resource pool priority. The value is a **numeric string** or **null**, where the numbers must be positive integers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BasicParams Set parameters related to the configuration set. The key values are consistent with the fields returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key values are as follows:
- minResources: Minimum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxResources: Maximum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxChildResources: Maximum resource amount for undeclared subqueues. The value is a **numeric string** or **null**.
- maxRunningApps: Maximum number of apps that can run concurrently. The value is a **numeric string** or **null**.
- weight: weight. The value is a **numeric string** or **null**.
- maxAMShare: Maximum App Master share. The value is a **numeric string** or **null**, where the number range is [0,1] or -1.

```
type YarnResource struct {
	Vcores *int `json:"vcores"`
	Memory *int `json:"memory"`
	Type *string `json:"type"` // The value can be percent or null. When the value is percent, it indicates the percentage used; otherwise, the absolute value used is indicated. The value can be percent only for maxResources and maxChildResources.
}
```

###### Capacity scheduler.
The key values are as follows:
- minimum-user-limit-percent: Minimum user capacity. The value is a **JSON string of the YarnResource type** or **null**, where the number range is [0,100].
- user-limit-factor: User resource factor. The value is a **JSON string of the YarnResource type** or **null**.
- maximum-applications: Maximum number of applications, that is, Max-Applications. The value is a **numeric string** or **null**, where the numbers must be positive integers.
- maximum-am-resource-percent: maximum AM percent. The value is a **numeric string** or **null**, where the number range is [0,1] or -1.
- default-application-priority: Resource pool priority. The value is a **numeric string** or **null**, where the numbers must be positive integers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Item> GetBasicParams() const;

                    /**
                     * 设置Set parameters related to the configuration set. The key values are consistent with the fields returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key values are as follows:
- minResources: Minimum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxResources: Maximum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxChildResources: Maximum resource amount for undeclared subqueues. The value is a **numeric string** or **null**.
- maxRunningApps: Maximum number of apps that can run concurrently. The value is a **numeric string** or **null**.
- weight: weight. The value is a **numeric string** or **null**.
- maxAMShare: Maximum App Master share. The value is a **numeric string** or **null**, where the number range is [0,1] or -1.

```
type YarnResource struct {
	Vcores *int `json:"vcores"`
	Memory *int `json:"memory"`
	Type *string `json:"type"` // The value can be percent or null. When the value is percent, it indicates the percentage used; otherwise, the absolute value used is indicated. The value can be percent only for maxResources and maxChildResources.
}
```

###### Capacity scheduler.
The key values are as follows:
- minimum-user-limit-percent: Minimum user capacity. The value is a **JSON string of the YarnResource type** or **null**, where the number range is [0,100].
- user-limit-factor: User resource factor. The value is a **JSON string of the YarnResource type** or **null**.
- maximum-applications: Maximum number of applications, that is, Max-Applications. The value is a **numeric string** or **null**, where the numbers must be positive integers.
- maximum-am-resource-percent: maximum AM percent. The value is a **numeric string** or **null**, where the number range is [0,1] or -1.
- default-application-priority: Resource pool priority. The value is a **numeric string** or **null**, where the numbers must be positive integers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _basicParams Set parameters related to the configuration set. The key values are consistent with the fields returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key values are as follows:
- minResources: Minimum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxResources: Maximum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxChildResources: Maximum resource amount for undeclared subqueues. The value is a **numeric string** or **null**.
- maxRunningApps: Maximum number of apps that can run concurrently. The value is a **numeric string** or **null**.
- weight: weight. The value is a **numeric string** or **null**.
- maxAMShare: Maximum App Master share. The value is a **numeric string** or **null**, where the number range is [0,1] or -1.

```
type YarnResource struct {
	Vcores *int `json:"vcores"`
	Memory *int `json:"memory"`
	Type *string `json:"type"` // The value can be percent or null. When the value is percent, it indicates the percentage used; otherwise, the absolute value used is indicated. The value can be percent only for maxResources and maxChildResources.
}
```

###### Capacity scheduler.
The key values are as follows:
- minimum-user-limit-percent: Minimum user capacity. The value is a **JSON string of the YarnResource type** or **null**, where the number range is [0,100].
- user-limit-factor: User resource factor. The value is a **JSON string of the YarnResource type** or **null**.
- maximum-applications: Maximum number of applications, that is, Max-Applications. The value is a **numeric string** or **null**, where the numbers must be positive integers.
- maximum-am-resource-percent: maximum AM percent. The value is a **numeric string** or **null**, where the number range is [0,1] or -1.
- default-application-priority: Resource pool priority. The value is a **numeric string** or **null**, where the numbers must be positive integers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBasicParams(const std::vector<Item>& _basicParams);

                    /**
                     * 判断参数 BasicParams 是否已赋值
                     * @return BasicParams 是否已赋值
                     * 
                     */
                    bool BasicParamsHasBeenSet() const;

                private:

                    /**
                     * Configuration set name.
                     */
                    std::string m_configSet;
                    bool m_configSetHasBeenSet;

                    /**
                     * The capacity scheduler will use it, where tag-related configuration is set. The key values are consistent with the fields returned by **DescribeYarnQueue**.
The key values are as follows:
- labelName: Tag name, that is, tags in tag management.
- capacity: Capacity. The value is a **numeric string**.
- maximum-capacity: Maximum capacity. The value is a **numeric string**.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ItemSeq> m_labelParams;
                    bool m_labelParamsHasBeenSet;

                    /**
                     * Set parameters related to the configuration set. The key values are consistent with the fields returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key values are as follows:
- minResources: Minimum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxResources: Maximum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxChildResources: Maximum resource amount for undeclared subqueues. The value is a **numeric string** or **null**.
- maxRunningApps: Maximum number of apps that can run concurrently. The value is a **numeric string** or **null**.
- weight: weight. The value is a **numeric string** or **null**.
- maxAMShare: Maximum App Master share. The value is a **numeric string** or **null**, where the number range is [0,1] or -1.

```
type YarnResource struct {
	Vcores *int `json:"vcores"`
	Memory *int `json:"memory"`
	Type *string `json:"type"` // The value can be percent or null. When the value is percent, it indicates the percentage used; otherwise, the absolute value used is indicated. The value can be percent only for maxResources and maxChildResources.
}
```

###### Capacity scheduler.
The key values are as follows:
- minimum-user-limit-percent: Minimum user capacity. The value is a **JSON string of the YarnResource type** or **null**, where the number range is [0,100].
- user-limit-factor: User resource factor. The value is a **JSON string of the YarnResource type** or **null**.
- maximum-applications: Maximum number of applications, that is, Max-Applications. The value is a **numeric string** or **null**, where the numbers must be positive integers.
- maximum-am-resource-percent: maximum AM percent. The value is a **numeric string** or **null**, where the number range is [0,1] or -1.
- default-application-priority: Resource pool priority. The value is a **numeric string** or **null**, where the numbers must be positive integers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Item> m_basicParams;
                    bool m_basicParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGSETINFO_H_
