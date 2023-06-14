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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBASEBACKUPEXPIRETIMEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBASEBACKUPEXPIRETIMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyBaseBackupExpireTime request structure.
                */
                class ModifyBaseBackupExpireTimeRequest : public AbstractModel
                {
                public:
                    ModifyBaseBackupExpireTimeRequest();
                    ~ModifyBaseBackupExpireTimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return DBInstanceId Instance ID
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _dBInstanceId Instance ID
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Base backup ID
                     * @return BaseBackupId Base backup ID
                     * 
                     */
                    std::string GetBaseBackupId() const;

                    /**
                     * 设置Base backup ID
                     * @param _baseBackupId Base backup ID
                     * 
                     */
                    void SetBaseBackupId(const std::string& _baseBackupId);

                    /**
                     * 判断参数 BaseBackupId 是否已赋值
                     * @return BaseBackupId 是否已赋值
                     * 
                     */
                    bool BaseBackupIdHasBeenSet() const;

                    /**
                     * 获取New expiration time
                     * @return NewExpireTime New expiration time
                     * 
                     */
                    std::string GetNewExpireTime() const;

                    /**
                     * 设置New expiration time
                     * @param _newExpireTime New expiration time
                     * 
                     */
                    void SetNewExpireTime(const std::string& _newExpireTime);

                    /**
                     * 判断参数 NewExpireTime 是否已赋值
                     * @return NewExpireTime 是否已赋值
                     * 
                     */
                    bool NewExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Base backup ID
                     */
                    std::string m_baseBackupId;
                    bool m_baseBackupIdHasBeenSet;

                    /**
                     * New expiration time
                     */
                    std::string m_newExpireTime;
                    bool m_newExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBASEBACKUPEXPIRETIMEREQUEST_H_
