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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPTYPEDEFINE_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPTYPEDEFINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Mini program category information.
                */
                class MNPTypeDefine : public AbstractModel
                {
                public:
                    MNPTypeDefine();
                    ~MNPTypeDefine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program category name.
                     * @return TypeName Mini program category name.
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Mini program category name.
                     * @param _typeName Mini program category name.
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取Mini program category values.
                     * @return TypeValue Mini program category values.
                     * 
                     */
                    std::vector<std::string> GetTypeValue() const;

                    /**
                     * 设置Mini program category values.
                     * @param _typeValue Mini program category values.
                     * 
                     */
                    void SetTypeValue(const std::vector<std::string>& _typeValue);

                    /**
                     * 判断参数 TypeValue 是否已赋值
                     * @return TypeValue 是否已赋值
                     * 
                     */
                    bool TypeValueHasBeenSet() const;

                    /**
                     * 获取Category ID.
                     * @return TypeId Category ID.
                     * 
                     */
                    int64_t GetTypeId() const;

                    /**
                     * 设置Category ID.
                     * @param _typeId Category ID.
                     * 
                     */
                    void SetTypeId(const int64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Creator.
                     * @return CreateUser Creator.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator.
                     * @param _createUser Creator.
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取Whether it is a system category.
                     * @return IsSystem Whether it is a system category.
                     * 
                     */
                    bool GetIsSystem() const;

                    /**
                     * 设置Whether it is a system category.
                     * @param _isSystem Whether it is a system category.
                     * 
                     */
                    void SetIsSystem(const bool& _isSystem);

                    /**
                     * 判断参数 IsSystem 是否已赋值
                     * @return IsSystem 是否已赋值
                     * 
                     */
                    bool IsSystemHasBeenSet() const;

                private:

                    /**
                     * Mini program category name.
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Mini program category values.
                     */
                    std::vector<std::string> m_typeValue;
                    bool m_typeValueHasBeenSet;

                    /**
                     * Category ID.
                     */
                    int64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * Creation time.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Creator.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Whether it is a system category.
                     */
                    bool m_isSystem;
                    bool m_isSystemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPTYPEDEFINE_H_
