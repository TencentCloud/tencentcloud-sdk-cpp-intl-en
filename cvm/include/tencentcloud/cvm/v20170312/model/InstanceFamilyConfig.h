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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCEFAMILYCONFIG_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCEFAMILYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes the model family of the instance.
Examples: {'InstanceFamilyName': 'Standard S1', 'InstanceFamily': 'S1'}, {'InstanceFamilyName': 'Network-optimized N1', 'InstanceFamily': 'N1'}, {'InstanceFamilyName': 'High IO I1', 'InstanceFamily': 'I1'}, etc.
                */
                class InstanceFamilyConfig : public AbstractModel
                {
                public:
                    InstanceFamilyConfig();
                    ~InstanceFamilyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Full name of the model family.
                     * @return InstanceFamilyName Full name of the model family.
                     * 
                     */
                    std::string GetInstanceFamilyName() const;

                    /**
                     * 设置Full name of the model family.
                     * @param _instanceFamilyName Full name of the model family.
                     * 
                     */
                    void SetInstanceFamilyName(const std::string& _instanceFamilyName);

                    /**
                     * 判断参数 InstanceFamilyName 是否已赋值
                     * @return InstanceFamilyName 是否已赋值
                     * 
                     */
                    bool InstanceFamilyNameHasBeenSet() const;

                    /**
                     * 获取Acronym of the model family.
                     * @return InstanceFamily Acronym of the model family.
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置Acronym of the model family.
                     * @param _instanceFamily Acronym of the model family.
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                private:

                    /**
                     * Full name of the model family.
                     */
                    std::string m_instanceFamilyName;
                    bool m_instanceFamilyNameHasBeenSet;

                    /**
                     * Acronym of the model family.
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCEFAMILYCONFIG_H_
