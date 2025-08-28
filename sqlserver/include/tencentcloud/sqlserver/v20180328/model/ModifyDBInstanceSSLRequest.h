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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCESSLREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCESSLREQUEST_H_

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
                * ModifyDBInstanceSSL request structure.
                */
                class ModifyDBInstanceSSLRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSSLRequest();
                    ~ModifyDBInstanceSSLRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取Operation type. enable - enable SSL; disable - disable SSL; renew - update the validity period of the certificate.
                     * @return Type Operation type. enable - enable SSL; disable - disable SSL; renew - update the validity period of the certificate.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Operation type. enable - enable SSL; disable - disable SSL; renew - update the validity period of the certificate.
                     * @param _type Operation type. enable - enable SSL; disable - disable SSL; renew - update the validity period of the certificate.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Operation settings. 0 - execute immediately; 1 - execute within the maintenance time. The default value is 0.
                     * @return WaitSwitch Operation settings. 0 - execute immediately; 1 - execute within the maintenance time. The default value is 0.
                     * 
                     */
                    uint64_t GetWaitSwitch() const;

                    /**
                     * 设置Operation settings. 0 - execute immediately; 1 - execute within the maintenance time. The default value is 0.
                     * @param _waitSwitch Operation settings. 0 - execute immediately; 1 - execute within the maintenance time. The default value is 0.
                     * 
                     */
                    void SetWaitSwitch(const uint64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                    /**
                     * 获取Whether it is protected through KMS encryption. 0 - no; 1 - yes. The default value is 0.
                     * @return IsKMS Whether it is protected through KMS encryption. 0 - no; 1 - yes. The default value is 0.
                     * 
                     */
                    int64_t GetIsKMS() const;

                    /**
                     * 设置Whether it is protected through KMS encryption. 0 - no; 1 - yes. The default value is 0.
                     * @param _isKMS Whether it is protected through KMS encryption. 0 - no; 1 - yes. The default value is 0.
                     * 
                     */
                    void SetIsKMS(const int64_t& _isKMS);

                    /**
                     * 判断参数 IsKMS 是否已赋值
                     * @return IsKMS 是否已赋值
                     * 
                     */
                    bool IsKMSHasBeenSet() const;

                    /**
                     * 获取This parameter is required when the value of IsKMS is 1.
                     * @return KeyId This parameter is required when the value of IsKMS is 1.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置This parameter is required when the value of IsKMS is 1.
                     * @param _keyId This parameter is required when the value of IsKMS is 1.
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取This parameter is required when the value of IsKMS is 1.
                     * @return KeyRegion This parameter is required when the value of IsKMS is 1.
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置This parameter is required when the value of IsKMS is 1.
                     * @param _keyRegion This parameter is required when the value of IsKMS is 1.
                     * 
                     */
                    void SetKeyRegion(const std::string& _keyRegion);

                    /**
                     * 判断参数 KeyRegion 是否已赋值
                     * @return KeyRegion 是否已赋值
                     * 
                     */
                    bool KeyRegionHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Operation type. enable - enable SSL; disable - disable SSL; renew - update the validity period of the certificate.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Operation settings. 0 - execute immediately; 1 - execute within the maintenance time. The default value is 0.
                     */
                    uint64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                    /**
                     * Whether it is protected through KMS encryption. 0 - no; 1 - yes. The default value is 0.
                     */
                    int64_t m_isKMS;
                    bool m_isKMSHasBeenSet;

                    /**
                     * This parameter is required when the value of IsKMS is 1.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * This parameter is required when the value of IsKMS is 1.
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCESSLREQUEST_H_
