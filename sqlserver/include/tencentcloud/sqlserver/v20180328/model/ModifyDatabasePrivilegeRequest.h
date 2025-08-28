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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASEPRIVILEGEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASEPRIVILEGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DataBasePrivilegeModifyInfo.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDatabasePrivilege request structure.
                */
                class ModifyDatabasePrivilegeRequest : public AbstractModel
                {
                public:
                    ModifyDatabasePrivilegeRequest();
                    ~ModifyDatabasePrivilegeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format of mssql-njj2mtpl.
                     * @return InstanceId Instance ID, in the format of mssql-njj2mtpl.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format of mssql-njj2mtpl.
                     * @param _instanceId Instance ID, in the format of mssql-njj2mtpl.
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
                     * 获取Database permission change information.
                     * @return DataBaseSet Database permission change information.
                     * 
                     */
                    std::vector<DataBasePrivilegeModifyInfo> GetDataBaseSet() const;

                    /**
                     * 设置Database permission change information.
                     * @param _dataBaseSet Database permission change information.
                     * 
                     */
                    void SetDataBaseSet(const std::vector<DataBasePrivilegeModifyInfo>& _dataBaseSet);

                    /**
                     * 判断参数 DataBaseSet 是否已赋值
                     * @return DataBaseSet 是否已赋值
                     * 
                     */
                    bool DataBaseSetHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format of mssql-njj2mtpl.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Database permission change information.
                     */
                    std::vector<DataBasePrivilegeModifyInfo> m_dataBaseSet;
                    bool m_dataBaseSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASEPRIVILEGEREQUEST_H_
