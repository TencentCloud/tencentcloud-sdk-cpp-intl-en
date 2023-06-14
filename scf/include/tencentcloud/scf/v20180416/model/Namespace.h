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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACE_H_

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
                * Namespace
                */
                class Namespace : public AbstractModel
                {
                public:
                    Namespace();
                    ~Namespace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creation time of the namespace
                     * @return ModTime Creation time of the namespace
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置Creation time of the namespace
                     * @param _modTime Creation time of the namespace
                     * 
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取Modification time of the namespace
                     * @return AddTime Modification time of the namespace
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置Modification time of the namespace
                     * @param _addTime Modification time of the namespace
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取Namespace description
                     * @return Description Namespace description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Namespace description
                     * @param _description Namespace description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Namespace name
                     * @return Name Namespace name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Namespace name
                     * @param _name Namespace name
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
                     * 获取The default value is default. TCB indicates that the namespace is developed and created through the mini-program cloud.
                     * @return Type The default value is default. TCB indicates that the namespace is developed and created through the mini-program cloud.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The default value is default. TCB indicates that the namespace is developed and created through the mini-program cloud.
                     * @param _type The default value is default. TCB indicates that the namespace is developed and created through the mini-program cloud.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Creation time of the namespace
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * Modification time of the namespace
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * Namespace description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Namespace name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The default value is default. TCB indicates that the namespace is developed and created through the mini-program cloud.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACE_H_
