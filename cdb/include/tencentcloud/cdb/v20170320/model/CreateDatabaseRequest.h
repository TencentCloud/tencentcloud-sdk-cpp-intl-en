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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDATABASEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateDatabase request structure.
                */
                class CreateDatabaseRequest : public AbstractModel
                {
                public:
                    CreateDatabaseRequest();
                    ~CreateDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of `cdb-c1nl9rpv`,  which is the same as the one displayed in the TencentDB console.
                     * @return InstanceId Instance ID in the format of `cdb-c1nl9rpv`,  which is the same as the one displayed in the TencentDB console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of `cdb-c1nl9rpv`,  which is the same as the one displayed in the TencentDB console.
                     * @param _instanceId Instance ID in the format of `cdb-c1nl9rpv`,  which is the same as the one displayed in the TencentDB console.
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
                     * 获取
                     * @return DBName 
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置
                     * @param _dBName 
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取Character set. Valid values:  `utf8`, `gbk`, `latin1`, `utf8mb4`.
                     * @return CharacterSetName Character set. Valid values:  `utf8`, `gbk`, `latin1`, `utf8mb4`.
                     * 
                     */
                    std::string GetCharacterSetName() const;

                    /**
                     * 设置Character set. Valid values:  `utf8`, `gbk`, `latin1`, `utf8mb4`.
                     * @param _characterSetName Character set. Valid values:  `utf8`, `gbk`, `latin1`, `utf8mb4`.
                     * 
                     */
                    void SetCharacterSetName(const std::string& _characterSetName);

                    /**
                     * 判断参数 CharacterSetName 是否已赋值
                     * @return CharacterSetName 是否已赋值
                     * 
                     */
                    bool CharacterSetNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of `cdb-c1nl9rpv`,  which is the same as the one displayed in the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * Character set. Valid values:  `utf8`, `gbk`, `latin1`, `utf8mb4`.
                     */
                    std::string m_characterSetName;
                    bool m_characterSetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDATABASEREQUEST_H_
