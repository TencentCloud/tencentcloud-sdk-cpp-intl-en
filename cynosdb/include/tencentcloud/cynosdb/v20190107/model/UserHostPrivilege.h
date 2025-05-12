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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_USERHOSTPRIVILEGE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_USERHOSTPRIVILEGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * User host permissions
                */
                class UserHostPrivilege : public AbstractModel
                {
                public:
                    UserHostPrivilege();
                    ~UserHostPrivilege() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authorized user
                     * @return DbUserName Authorized user
                     * 
                     */
                    std::string GetDbUserName() const;

                    /**
                     * 设置Authorized user
                     * @param _dbUserName Authorized user
                     * 
                     */
                    void SetDbUserName(const std::string& _dbUserName);

                    /**
                     * 判断参数 DbUserName 是否已赋值
                     * @return DbUserName 是否已赋值
                     * 
                     */
                    bool DbUserNameHasBeenSet() const;

                    /**
                     * 获取Client IP
                     * @return DbHost Client IP
                     * 
                     */
                    std::string GetDbHost() const;

                    /**
                     * 设置Client IP
                     * @param _dbHost Client IP
                     * 
                     */
                    void SetDbHost(const std::string& _dbHost);

                    /**
                     * 判断参数 DbHost 是否已赋值
                     * @return DbHost 是否已赋值
                     * 
                     */
                    bool DbHostHasBeenSet() const;

                    /**
                     * 获取User permission
                     * @return DbPrivilege User permission
                     * 
                     */
                    std::string GetDbPrivilege() const;

                    /**
                     * 设置User permission
                     * @param _dbPrivilege User permission
                     * 
                     */
                    void SetDbPrivilege(const std::string& _dbPrivilege);

                    /**
                     * 判断参数 DbPrivilege 是否已赋值
                     * @return DbPrivilege 是否已赋值
                     * 
                     */
                    bool DbPrivilegeHasBeenSet() const;

                private:

                    /**
                     * Authorized user
                     */
                    std::string m_dbUserName;
                    bool m_dbUserNameHasBeenSet;

                    /**
                     * Client IP
                     */
                    std::string m_dbHost;
                    bool m_dbHostHasBeenSet;

                    /**
                     * User permission
                     */
                    std::string m_dbPrivilege;
                    bool m_dbPrivilegeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_USERHOSTPRIVILEGE_H_
