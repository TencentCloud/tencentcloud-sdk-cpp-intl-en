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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBNAMEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyDBName request structure.
                */
                class ModifyDBNameRequest : public AbstractModel
                {
                public:
                    ModifyDBNameRequest();
                    ~ModifyDBNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Old database name
                     * @return OldDBName Old database name
                     */
                    std::string GetOldDBName() const;

                    /**
                     * 设置Old database name
                     * @param OldDBName Old database name
                     */
                    void SetOldDBName(const std::string& _oldDBName);

                    /**
                     * 判断参数 OldDBName 是否已赋值
                     * @return OldDBName 是否已赋值
                     */
                    bool OldDBNameHasBeenSet() const;

                    /**
                     * 获取New name of database
                     * @return NewDBName New name of database
                     */
                    std::string GetNewDBName() const;

                    /**
                     * 设置New name of database
                     * @param NewDBName New name of database
                     */
                    void SetNewDBName(const std::string& _newDBName);

                    /**
                     * 判断参数 NewDBName 是否已赋值
                     * @return NewDBName 是否已赋值
                     */
                    bool NewDBNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Old database name
                     */
                    std::string m_oldDBName;
                    bool m_oldDBNameHasBeenSet;

                    /**
                     * New name of database
                     */
                    std::string m_newDBName;
                    bool m_newDBNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBNAMEREQUEST_H_
