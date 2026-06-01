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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYPROTECTMODEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYPROTECTMODEREQUEST_H_

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
                * ModifyProtectMode request structure.
                */
                class ModifyProtectModeRequest : public AbstractModel
                {
                public:
                    ModifyProtectModeRequest();
                    ~ModifyProtectModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data replication method, defaults to 0. Supported values include: 0 - asynchronous replication, 1 - semi-sync replication, 2 - strong sync replication.
                     * @return ProtectMode Data replication method, defaults to 0. Supported values include: 0 - asynchronous replication, 1 - semi-sync replication, 2 - strong sync replication.
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置Data replication method, defaults to 0. Supported values include: 0 - asynchronous replication, 1 - semi-sync replication, 2 - strong sync replication.
                     * @param _protectMode Data replication method, defaults to 0. Supported values include: 0 - asynchronous replication, 1 - semi-sync replication, 2 - strong sync replication.
                     * 
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     * 
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Data replication method, defaults to 0. Supported values include: 0 - asynchronous replication, 1 - semi-sync replication, 2 - strong sync replication.
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYPROTECTMODEREQUEST_H_
