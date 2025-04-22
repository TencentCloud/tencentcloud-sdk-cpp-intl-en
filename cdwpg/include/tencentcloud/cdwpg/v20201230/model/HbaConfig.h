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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_HBACONFIG_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_HBACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * user_config
                */
                class HbaConfig : public AbstractModel
                {
                public:
                    HbaConfig();
                    ~HbaConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type.
                     * @return Type Type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type.
                     * @param _type Type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Database.
                     * @return Database Database.
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database.
                     * @param _database Database.
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取User.
                     * @return User User.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置User.
                     * @param _user User.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取IP address.
                     * @return Address IP address.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置IP address.
                     * @param _address IP address.
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Method.
                     * @return Method Method.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Method.
                     * @param _method Method.
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Indicates whether to perform overwriting.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Mask Indicates whether to perform overwriting.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMask() const;

                    /**
                     * 设置Indicates whether to perform overwriting.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mask Indicates whether to perform overwriting.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMask(const std::string& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     * 
                     */
                    bool MaskHasBeenSet() const;

                private:

                    /**
                     * Type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Database.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * User.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * IP address.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Method.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Indicates whether to perform overwriting.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mask;
                    bool m_maskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_HBACONFIG_H_
