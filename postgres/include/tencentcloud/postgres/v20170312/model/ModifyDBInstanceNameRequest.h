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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCENAMEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCENAMEREQUEST_H_

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
                * ModifyDBInstanceName request structure.
                */
                class ModifyDBInstanceNameRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceNameRequest();
                    ~ModifyDBInstanceNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database instance ID in the format of postgres-6fego161
                     * @return DBInstanceId Database instance ID in the format of postgres-6fego161
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Database instance ID in the format of postgres-6fego161
                     * @param _dBInstanceId Database instance ID in the format of postgres-6fego161
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
                     * 获取New name of database instance
                     * @return InstanceName New name of database instance
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置New name of database instance
                     * @param _instanceName New name of database instance
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * Database instance ID in the format of postgres-6fego161
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * New name of database instance
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCENAMEREQUEST_H_
