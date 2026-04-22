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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MNGTYPEDEFINE_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MNGTYPEDEFINE_H_

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
                * Mini game type definition
                */
                class MNGTypeDefine : public AbstractModel
                {
                public:
                    MNGTypeDefine();
                    ~MNGTypeDefine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Mini game category name</p>
                     * @return TypeName <p>Mini game category name</p>
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置<p>Mini game category name</p>
                     * @param _typeName <p>Mini game category name</p>
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
                     * 获取<p>Mini game category</p>
                     * @return TypeValue <p>Mini game category</p>
                     * 
                     */
                    std::vector<std::string> GetTypeValue() const;

                    /**
                     * 设置<p>Mini game category</p>
                     * @param _typeValue <p>Mini game category</p>
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
                     * 获取<p>Category ID</p>
                     * @return TypeId <p>Category ID</p>
                     * 
                     */
                    int64_t GetTypeId() const;

                    /**
                     * 设置<p>Category ID</p>
                     * @param _typeId <p>Category ID</p>
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
                     * 获取<p>Creation time</p>
                     * @return CreateTime <p>Creation time</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>Creation time</p>
                     * @param _createTime <p>Creation time</p>
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
                     * 获取<p>Creator</p>
                     * @return CreateUser <p>Creator</p>
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置<p>Creator</p>
                     * @param _createUser <p>Creator</p>
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
                     * 获取<p>Whether this is a system category</p>
                     * @return IsSystem <p>Whether this is a system category</p>
                     * 
                     */
                    bool GetIsSystem() const;

                    /**
                     * 设置<p>Whether this is a system category</p>
                     * @param _isSystem <p>Whether this is a system category</p>
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
                     * <p>Mini game category name</p>
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * <p>Mini game category</p>
                     */
                    std::vector<std::string> m_typeValue;
                    bool m_typeValueHasBeenSet;

                    /**
                     * <p>Category ID</p>
                     */
                    int64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * <p>Creation time</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Creator</p>
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * <p>Whether this is a system category</p>
                     */
                    bool m_isSystem;
                    bool m_isSystemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MNGTYPEDEFINE_H_
