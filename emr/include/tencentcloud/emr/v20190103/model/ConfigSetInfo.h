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
                * Configuration set information in resource scheduling.
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
                     * 获取The capacity scheduler uses it to configure label-related settings. The value of key is consistent with the field returned by **DescribeYarnQueue**.
The key value information is as follows:
- labelName: label name, which is the label in label management.
- capacity: capacity. The value is a **numeric string**.
- maximum-capacity: maximum capacity. The value is a **numeric string**.
                     * @return LabelParams The capacity scheduler uses it to configure label-related settings. The value of key is consistent with the field returned by **DescribeYarnQueue**.
The key value information is as follows:
- labelName: label name, which is the label in label management.
- capacity: capacity. The value is a **numeric string**.
- maximum-capacity: maximum capacity. The value is a **numeric string**.
                     * 
                     */
                    std::vector<ItemSeq> GetLabelParams() const;

                    /**
                     * 设置The capacity scheduler uses it to configure label-related settings. The value of key is consistent with the field returned by **DescribeYarnQueue**.
The key value information is as follows:
- labelName: label name, which is the label in label management.
- capacity: capacity. The value is a **numeric string**.
- maximum-capacity: maximum capacity. The value is a **numeric string**.
                     * @param _labelParams The capacity scheduler uses it to configure label-related settings. The value of key is consistent with the field returned by **DescribeYarnQueue**.
The key value information is as follows:
- labelName: label name, which is the label in label management.
- capacity: capacity. The value is a **numeric string**.
- maximum-capacity: maximum capacity. The value is a **numeric string**.
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
                     * 获取Sets the parameters related to the configuration set. The value of key is consistent with the field returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key value information is as follows:
- minResources: minimum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxResources: maximum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxChildResources: maximum resource amount that can be allocated to undeclared subqueues. The value is a **numeric string** or **null**.
- maxRunningApps: maximum number of apps that can run simultaneously. The value is a **numeric string** or **null**.
- weight: weight. The value is a **numeric string** or **null**.
- maxAMShare: maximum share of the App Master. The value is a **numeric string** or **null**, where the numeric range is [0, 1] or -1.

```
type YarnResource struct {
	Vcores *int `json:"vcores"`
	Memory *int `json:"memory"`
	Type *string `json:"type"` // The value is `percent` or `null`. When the value is `percent`, it indicates the percentage used; otherwise, it is the absolute value used. Only maxResources and maxChildResources can be set to `percent`.
}
```

###### Capacity scheduler.
The key value information is as follows:
- minimum-user-limit-percent: minimum user capacity. The value is a **JSON string of the YarnResource type** or **null**, where the numeric range is [0, 100].
- user-limit-factor: user resource factor. The value is a **JSON string of the YarnResource type** or **null**.
- maximum-applications: maximum number of applications (Max-Applications). The value is a **numeric string** or **null**, where the number is a positive integer.
- maximum-am-resource-percent: maximum AM ratio. The value is a **numeric string** or **null**, where the numeric range is [0, 1] or -1.
- default-application-priority: resource pool priority. The value is a **numeric string** or **null**, where the number is a positive integer.
                     * @return BasicParams Sets the parameters related to the configuration set. The value of key is consistent with the field returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key value information is as follows:
- minResources: minimum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxResources: maximum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxChildResources: maximum resource amount that can be allocated to undeclared subqueues. The value is a **numeric string** or **null**.
- maxRunningApps: maximum number of apps that can run simultaneously. The value is a **numeric string** or **null**.
- weight: weight. The value is a **numeric string** or **null**.
- maxAMShare: maximum share of the App Master. The value is a **numeric string** or **null**, where the numeric range is [0, 1] or -1.

```
type YarnResource struct {
	Vcores *int `json:"vcores"`
	Memory *int `json:"memory"`
	Type *string `json:"type"` // The value is `percent` or `null`. When the value is `percent`, it indicates the percentage used; otherwise, it is the absolute value used. Only maxResources and maxChildResources can be set to `percent`.
}
```

###### Capacity scheduler.
The key value information is as follows:
- minimum-user-limit-percent: minimum user capacity. The value is a **JSON string of the YarnResource type** or **null**, where the numeric range is [0, 100].
- user-limit-factor: user resource factor. The value is a **JSON string of the YarnResource type** or **null**.
- maximum-applications: maximum number of applications (Max-Applications). The value is a **numeric string** or **null**, where the number is a positive integer.
- maximum-am-resource-percent: maximum AM ratio. The value is a **numeric string** or **null**, where the numeric range is [0, 1] or -1.
- default-application-priority: resource pool priority. The value is a **numeric string** or **null**, where the number is a positive integer.
                     * 
                     */
                    std::vector<Item> GetBasicParams() const;

                    /**
                     * 设置Sets the parameters related to the configuration set. The value of key is consistent with the field returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key value information is as follows:
- minResources: minimum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxResources: maximum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxChildResources: maximum resource amount that can be allocated to undeclared subqueues. The value is a **numeric string** or **null**.
- maxRunningApps: maximum number of apps that can run simultaneously. The value is a **numeric string** or **null**.
- weight: weight. The value is a **numeric string** or **null**.
- maxAMShare: maximum share of the App Master. The value is a **numeric string** or **null**, where the numeric range is [0, 1] or -1.

```
type YarnResource struct {
	Vcores *int `json:"vcores"`
	Memory *int `json:"memory"`
	Type *string `json:"type"` // The value is `percent` or `null`. When the value is `percent`, it indicates the percentage used; otherwise, it is the absolute value used. Only maxResources and maxChildResources can be set to `percent`.
}
```

###### Capacity scheduler.
The key value information is as follows:
- minimum-user-limit-percent: minimum user capacity. The value is a **JSON string of the YarnResource type** or **null**, where the numeric range is [0, 100].
- user-limit-factor: user resource factor. The value is a **JSON string of the YarnResource type** or **null**.
- maximum-applications: maximum number of applications (Max-Applications). The value is a **numeric string** or **null**, where the number is a positive integer.
- maximum-am-resource-percent: maximum AM ratio. The value is a **numeric string** or **null**, where the numeric range is [0, 1] or -1.
- default-application-priority: resource pool priority. The value is a **numeric string** or **null**, where the number is a positive integer.
                     * @param _basicParams Sets the parameters related to the configuration set. The value of key is consistent with the field returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key value information is as follows:
- minResources: minimum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxResources: maximum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxChildResources: maximum resource amount that can be allocated to undeclared subqueues. The value is a **numeric string** or **null**.
- maxRunningApps: maximum number of apps that can run simultaneously. The value is a **numeric string** or **null**.
- weight: weight. The value is a **numeric string** or **null**.
- maxAMShare: maximum share of the App Master. The value is a **numeric string** or **null**, where the numeric range is [0, 1] or -1.

```
type YarnResource struct {
	Vcores *int `json:"vcores"`
	Memory *int `json:"memory"`
	Type *string `json:"type"` // The value is `percent` or `null`. When the value is `percent`, it indicates the percentage used; otherwise, it is the absolute value used. Only maxResources and maxChildResources can be set to `percent`.
}
```

###### Capacity scheduler.
The key value information is as follows:
- minimum-user-limit-percent: minimum user capacity. The value is a **JSON string of the YarnResource type** or **null**, where the numeric range is [0, 100].
- user-limit-factor: user resource factor. The value is a **JSON string of the YarnResource type** or **null**.
- maximum-applications: maximum number of applications (Max-Applications). The value is a **numeric string** or **null**, where the number is a positive integer.
- maximum-am-resource-percent: maximum AM ratio. The value is a **numeric string** or **null**, where the numeric range is [0, 1] or -1.
- default-application-priority: resource pool priority. The value is a **numeric string** or **null**, where the number is a positive integer.
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
                     * The capacity scheduler uses it to configure label-related settings. The value of key is consistent with the field returned by **DescribeYarnQueue**.
The key value information is as follows:
- labelName: label name, which is the label in label management.
- capacity: capacity. The value is a **numeric string**.
- maximum-capacity: maximum capacity. The value is a **numeric string**.
                     */
                    std::vector<ItemSeq> m_labelParams;
                    bool m_labelParamsHasBeenSet;

                    /**
                     * Sets the parameters related to the configuration set. The value of key is consistent with the field returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key value information is as follows:
- minResources: minimum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxResources: maximum resource amount. The value is a **JSON string of the YarnResource type** or **null**.
- maxChildResources: maximum resource amount that can be allocated to undeclared subqueues. The value is a **numeric string** or **null**.
- maxRunningApps: maximum number of apps that can run simultaneously. The value is a **numeric string** or **null**.
- weight: weight. The value is a **numeric string** or **null**.
- maxAMShare: maximum share of the App Master. The value is a **numeric string** or **null**, where the numeric range is [0, 1] or -1.

```
type YarnResource struct {
	Vcores *int `json:"vcores"`
	Memory *int `json:"memory"`
	Type *string `json:"type"` // The value is `percent` or `null`. When the value is `percent`, it indicates the percentage used; otherwise, it is the absolute value used. Only maxResources and maxChildResources can be set to `percent`.
}
```

###### Capacity scheduler.
The key value information is as follows:
- minimum-user-limit-percent: minimum user capacity. The value is a **JSON string of the YarnResource type** or **null**, where the numeric range is [0, 100].
- user-limit-factor: user resource factor. The value is a **JSON string of the YarnResource type** or **null**.
- maximum-applications: maximum number of applications (Max-Applications). The value is a **numeric string** or **null**, where the number is a positive integer.
- maximum-am-resource-percent: maximum AM ratio. The value is a **numeric string** or **null**, where the numeric range is [0, 1] or -1.
- default-application-priority: resource pool priority. The value is a **numeric string** or **null**, where the number is a positive integer.
                     */
                    std::vector<Item> m_basicParams;
                    bool m_basicParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGSETINFO_H_
