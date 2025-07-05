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
                * Mini program category information
                */
                class MNPTypeDefine : public AbstractModel
                {
                public:
                    MNPTypeDefine();
                    ~MNPTypeDefine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program category name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TypeName Mini program category name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Mini program category name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _typeName Mini program category name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Mini program category value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TypeValue Mini program category value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTypeValue() const;

                    /**
                     * 设置Mini program category value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _typeValue Mini program category value
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Category ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TypeId Category ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTypeId() const;

                    /**
                     * 设置Category ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _typeId Category ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUser Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUser Creator
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether it is a system category
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsSystem Whether it is a system category
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsSystem() const;

                    /**
                     * 设置Whether it is a system category
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isSystem Whether it is a system category
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Mini program category name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Mini program category value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_typeValue;
                    bool m_typeValueHasBeenSet;

                    /**
                     * Category ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Whether it is a system category
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isSystem;
                    bool m_isSystemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPTYPEDEFINE_H_
