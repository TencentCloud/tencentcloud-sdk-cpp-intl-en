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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSESERVERLESSDBEXTRANETACCESSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSESERVERLESSDBEXTRANETACCESSREQUEST_H_

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
                * CloseServerlessDBExtranetAccess request structure.
                */
                class CloseServerlessDBExtranetAccessRequest : public AbstractModel
                {
                public:
                    CloseServerlessDBExtranetAccessRequest();
                    ~CloseServerlessDBExtranetAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of an instance
                     * @return DBInstanceId Unique ID of an instance
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Unique ID of an instance
                     * @param _dBInstanceId Unique ID of an instance
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
                     * 获取Instance name
                     * @return DBInstanceName Instance name
                     * 
                     */
                    std::string GetDBInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _dBInstanceName Instance name
                     * 
                     */
                    void SetDBInstanceName(const std::string& _dBInstanceName);

                    /**
                     * 判断参数 DBInstanceName 是否已赋值
                     * @return DBInstanceName 是否已赋值
                     * 
                     */
                    bool DBInstanceNameHasBeenSet() const;

                private:

                    /**
                     * Unique ID of an instance
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_dBInstanceName;
                    bool m_dBInstanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSESERVERLESSDBEXTRANETACCESSREQUEST_H_
