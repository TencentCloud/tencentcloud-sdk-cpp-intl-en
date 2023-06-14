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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPENCRYPTIONSTATUSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPENCRYPTIONSTATUSREQUEST_H_

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
                * ModifyBackupEncryptionStatus request structure.
                */
                class ModifyBackupEncryptionStatusRequest : public AbstractModel
                {
                public:
                    ModifyBackupEncryptionStatusRequest();
                    ~ModifyBackupEncryptionStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-XXXX, which is the same as that displayed in the TencentDB console.
                     * @return InstanceId Instance ID in the format of cdb-XXXX, which is the same as that displayed in the TencentDB console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-XXXX, which is the same as that displayed in the TencentDB console.
                     * @param _instanceId Instance ID in the format of cdb-XXXX, which is the same as that displayed in the TencentDB console.
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
                     * 获取Default encryption status for the new auto-generated physical backup files. Valid values: `on`, `off`.
                     * @return EncryptionStatus Default encryption status for the new auto-generated physical backup files. Valid values: `on`, `off`.
                     * 
                     */
                    std::string GetEncryptionStatus() const;

                    /**
                     * 设置Default encryption status for the new auto-generated physical backup files. Valid values: `on`, `off`.
                     * @param _encryptionStatus Default encryption status for the new auto-generated physical backup files. Valid values: `on`, `off`.
                     * 
                     */
                    void SetEncryptionStatus(const std::string& _encryptionStatus);

                    /**
                     * 判断参数 EncryptionStatus 是否已赋值
                     * @return EncryptionStatus 是否已赋值
                     * 
                     */
                    bool EncryptionStatusHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-XXXX, which is the same as that displayed in the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Default encryption status for the new auto-generated physical backup files. Valid values: `on`, `off`.
                     */
                    std::string m_encryptionStatus;
                    bool m_encryptionStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPENCRYPTIONSTATUSREQUEST_H_
