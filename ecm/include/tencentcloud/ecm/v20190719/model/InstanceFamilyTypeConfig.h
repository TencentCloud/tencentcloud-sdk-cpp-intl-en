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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCEFAMILYTYPECONFIG_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCEFAMILYTYPECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Instance family type configuration
                */
                class InstanceFamilyTypeConfig : public AbstractModel
                {
                public:
                    InstanceFamilyTypeConfig();
                    ~InstanceFamilyTypeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance model family type ID
                     * @return InstanceFamilyType Instance model family type ID
                     * 
                     */
                    std::string GetInstanceFamilyType() const;

                    /**
                     * 设置Instance model family type ID
                     * @param _instanceFamilyType Instance model family type ID
                     * 
                     */
                    void SetInstanceFamilyType(const std::string& _instanceFamilyType);

                    /**
                     * 判断参数 InstanceFamilyType 是否已赋值
                     * @return InstanceFamilyType 是否已赋值
                     * 
                     */
                    bool InstanceFamilyTypeHasBeenSet() const;

                    /**
                     * 获取Instance model family type name
                     * @return InstanceFamilyTypeName Instance model family type name
                     * 
                     */
                    std::string GetInstanceFamilyTypeName() const;

                    /**
                     * 设置Instance model family type name
                     * @param _instanceFamilyTypeName Instance model family type name
                     * 
                     */
                    void SetInstanceFamilyTypeName(const std::string& _instanceFamilyTypeName);

                    /**
                     * 判断参数 InstanceFamilyTypeName 是否已赋值
                     * @return InstanceFamilyTypeName 是否已赋值
                     * 
                     */
                    bool InstanceFamilyTypeNameHasBeenSet() const;

                private:

                    /**
                     * Instance model family type ID
                     */
                    std::string m_instanceFamilyType;
                    bool m_instanceFamilyTypeHasBeenSet;

                    /**
                     * Instance model family type name
                     */
                    std::string m_instanceFamilyTypeName;
                    bool m_instanceFamilyTypeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCEFAMILYTYPECONFIG_H_
