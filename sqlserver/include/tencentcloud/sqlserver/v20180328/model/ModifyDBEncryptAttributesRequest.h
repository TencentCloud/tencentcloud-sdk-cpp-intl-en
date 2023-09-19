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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBENCRYPTATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBENCRYPTATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DBTDEEncrypt.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDBEncryptAttributes request structure.
                */
                class ModifyDBEncryptAttributesRequest : public AbstractModel
                {
                public:
                    ModifyDBEncryptAttributesRequest();
                    ~ModifyDBEncryptAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取A parameter used to enable or disable TDE of the database
                     * @return DBTDEEncrypt A parameter used to enable or disable TDE of the database
                     * 
                     */
                    std::vector<DBTDEEncrypt> GetDBTDEEncrypt() const;

                    /**
                     * 设置A parameter used to enable or disable TDE of the database
                     * @param _dBTDEEncrypt A parameter used to enable or disable TDE of the database
                     * 
                     */
                    void SetDBTDEEncrypt(const std::vector<DBTDEEncrypt>& _dBTDEEncrypt);

                    /**
                     * 判断参数 DBTDEEncrypt 是否已赋值
                     * @return DBTDEEncrypt 是否已赋值
                     * 
                     */
                    bool DBTDEEncryptHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * A parameter used to enable or disable TDE of the database
                     */
                    std::vector<DBTDEEncrypt> m_dBTDEEncrypt;
                    bool m_dBTDEEncryptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBENCRYPTATTRIBUTESREQUEST_H_
