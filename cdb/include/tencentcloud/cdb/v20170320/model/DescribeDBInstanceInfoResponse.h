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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCEINFORESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCEINFORESPONSE_H_

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
                * DescribeDBInstanceInfo response structure.
                */
                class DescribeDBInstanceInfoResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceInfoResponse();
                    ~DescribeDBInstanceInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Whether encryption is enabled. YES: enabled, NO: not enabled.
                     * @return Encryption Whether encryption is enabled. YES: enabled, NO: not enabled.
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取Encryption key ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KeyId Encryption key ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Key region.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KeyRegion Key region.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 判断参数 KeyRegion 是否已赋值
                     * @return KeyRegion 是否已赋值
                     * 
                     */
                    bool KeyRegionHasBeenSet() const;

                    /**
                     * 获取The default region of the KMS service currently used by the TencentDB backend service.
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return DefaultKmsRegion The default region of the KMS service currently used by the TencentDB backend service.
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetDefaultKmsRegion() const;

                    /**
                     * 判断参数 DefaultKmsRegion 是否已赋值
                     * @return DefaultKmsRegion 是否已赋值
                     * 
                     */
                    bool DefaultKmsRegionHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Whether encryption is enabled. YES: enabled, NO: not enabled.
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * Encryption key ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Key region.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                    /**
                     * The default region of the KMS service currently used by the TencentDB backend service.
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_defaultKmsRegion;
                    bool m_defaultKmsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCEINFORESPONSE_H_
