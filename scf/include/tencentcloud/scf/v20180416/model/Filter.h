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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_FILTER_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Key-value pair filters for conditional filtering queries, such as filtering ID, name, and status.
If more than one filter exists, the logical relationship between these filters is `AND`.
If multiple values exist in one filter, the logical relationship between these values under the same filter is `OR`.
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Fields to be filtered. Up to 10 conditions allowed.
Values of `Name`: `VpcId`, `SubnetId`, `ClsTopicId`, `ClsLogsetId`, `Role`, `CfsId`, `CfsMountInsId`, `Eip`. Values limit: 1.
Name options: Status, Runtime, FunctionType, PublicNetStatus, AsyncRunEnable, TraceEnable. Values limit: 20.
When `Name` is `Runtime`, `CustomImage` refers to the image type function 
                     * @return Name Fields to be filtered. Up to 10 conditions allowed.
Values of `Name`: `VpcId`, `SubnetId`, `ClsTopicId`, `ClsLogsetId`, `Role`, `CfsId`, `CfsMountInsId`, `Eip`. Values limit: 1.
Name options: Status, Runtime, FunctionType, PublicNetStatus, AsyncRunEnable, TraceEnable. Values limit: 20.
When `Name` is `Runtime`, `CustomImage` refers to the image type function 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Fields to be filtered. Up to 10 conditions allowed.
Values of `Name`: `VpcId`, `SubnetId`, `ClsTopicId`, `ClsLogsetId`, `Role`, `CfsId`, `CfsMountInsId`, `Eip`. Values limit: 1.
Name options: Status, Runtime, FunctionType, PublicNetStatus, AsyncRunEnable, TraceEnable. Values limit: 20.
When `Name` is `Runtime`, `CustomImage` refers to the image type function 
                     * @param _name Fields to be filtered. Up to 10 conditions allowed.
Values of `Name`: `VpcId`, `SubnetId`, `ClsTopicId`, `ClsLogsetId`, `Role`, `CfsId`, `CfsMountInsId`, `Eip`. Values limit: 1.
Name options: Status, Runtime, FunctionType, PublicNetStatus, AsyncRunEnable, TraceEnable. Values limit: 20.
When `Name` is `Runtime`, `CustomImage` refers to the image type function 
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Filter values of the field
                     * @return Values Filter values of the field
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Filter values of the field
                     * @param _values Filter values of the field
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Fields to be filtered. Up to 10 conditions allowed.
Values of `Name`: `VpcId`, `SubnetId`, `ClsTopicId`, `ClsLogsetId`, `Role`, `CfsId`, `CfsMountInsId`, `Eip`. Values limit: 1.
Name options: Status, Runtime, FunctionType, PublicNetStatus, AsyncRunEnable, TraceEnable. Values limit: 20.
When `Name` is `Runtime`, `CustomImage` refers to the image type function 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Filter values of the field
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_FILTER_H_
