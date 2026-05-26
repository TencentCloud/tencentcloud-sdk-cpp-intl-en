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
                     * 获取Specifies the database instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @return DBInstanceId Specifies the database instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Specifies the database instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @param _dBInstanceId Specifies the database instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
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
                     * 获取Instance name. only supports chinese, english, digits, "_", or "-" with length less than 60.

                     * @return InstanceName Instance name. only supports chinese, english, digits, "_", or "-" with length less than 60.

                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name. only supports chinese, english, digits, "_", or "-" with length less than 60.

                     * @param _instanceName Instance name. only supports chinese, english, digits, "_", or "-" with length less than 60.

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
                     * Specifies the database instance ID, such as postgres-6fego161. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Instance name. only supports chinese, english, digits, "_", or "-" with length less than 60.

                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCENAMEREQUEST_H_
