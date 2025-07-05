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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPECONFIG_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/ObjectTypeConfigFields.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Object type configuration
                */
                class ObjectTypeConfig : public AbstractModel
                {
                public:
                    ObjectTypeConfig();
                    ~ObjectTypeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Primary key
                     * @return Key Primary key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Primary key
                     * @param _key Primary key
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取List of object type configuration fields
                     * @return Fields List of object type configuration fields
                     * 
                     */
                    std::vector<ObjectTypeConfigFields> GetFields() const;

                    /**
                     * 设置List of object type configuration fields
                     * @param _fields List of object type configuration fields
                     * 
                     */
                    void SetFields(const std::vector<ObjectTypeConfigFields>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                private:

                    /**
                     * Primary key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * List of object type configuration fields
                     */
                    std::vector<ObjectTypeConfigFields> m_fields;
                    bool m_fieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPECONFIG_H_
