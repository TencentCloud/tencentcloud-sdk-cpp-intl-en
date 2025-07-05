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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATETARGET_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATETARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Target type of migration task
                */
                class MigrateTarget : public AbstractModel
                {
                public:
                    MigrateTarget();
                    ~MigrateTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of target instance in the format of mssql-si2823jyl
                     * @return InstanceId ID of target instance in the format of mssql-si2823jyl
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of target instance in the format of mssql-si2823jyl
                     * @param _instanceId ID of target instance in the format of mssql-si2823jyl
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Username of migration target instance
                     * @return UserName Username of migration target instance
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username of migration target instance
                     * @param _userName Username of migration target instance
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Password of migration target instance
                     * @return Password Password of migration target instance
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password of migration target instance
                     * @param _password Password of migration target instance
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * ID of target instance in the format of mssql-si2823jyl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Username of migration target instance
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Password of migration target instance
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATETARGET_H_
