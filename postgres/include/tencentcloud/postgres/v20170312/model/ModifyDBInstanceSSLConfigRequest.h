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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESSLCONFIGREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESSLCONFIGREQUEST_H_

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
                * ModifyDBInstanceSSLConfig request structure.
                */
                class ModifyDBInstanceSSLConfigRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSSLConfigRequest();
                    ~ModifyDBInstanceSSLConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * @return DBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * @param _dBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
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
                     * 获取Turn on or off SSL. true - turn on; false - turn off.
                     * @return SSLEnabled Turn on or off SSL. true - turn on; false - turn off.
                     * 
                     */
                    bool GetSSLEnabled() const;

                    /**
                     * 设置Turn on or off SSL. true - turn on; false - turn off.
                     * @param _sSLEnabled Turn on or off SSL. true - turn on; false - turn off.
                     * 
                     */
                    void SetSSLEnabled(const bool& _sSLEnabled);

                    /**
                     * 判断参数 SSLEnabled 是否已赋值
                     * @return SSLEnabled 是否已赋值
                     * 
                     */
                    bool SSLEnabledHasBeenSet() const;

                    /**
                     * 获取The unique connection address protected by an SSL certificate. for a primary instance, it can be set to private and public IP addresses. for a read-only instance, it can be set to the instance IP or read-only group IP. this parameter is required when enabling SSL or modifying the SSL-protected connection address. it will be ignored when disabling SSL.
                     * @return ConnectAddress The unique connection address protected by an SSL certificate. for a primary instance, it can be set to private and public IP addresses. for a read-only instance, it can be set to the instance IP or read-only group IP. this parameter is required when enabling SSL or modifying the SSL-protected connection address. it will be ignored when disabling SSL.
                     * 
                     */
                    std::string GetConnectAddress() const;

                    /**
                     * 设置The unique connection address protected by an SSL certificate. for a primary instance, it can be set to private and public IP addresses. for a read-only instance, it can be set to the instance IP or read-only group IP. this parameter is required when enabling SSL or modifying the SSL-protected connection address. it will be ignored when disabling SSL.
                     * @param _connectAddress The unique connection address protected by an SSL certificate. for a primary instance, it can be set to private and public IP addresses. for a read-only instance, it can be set to the instance IP or read-only group IP. this parameter is required when enabling SSL or modifying the SSL-protected connection address. it will be ignored when disabling SSL.
                     * 
                     */
                    void SetConnectAddress(const std::string& _connectAddress);

                    /**
                     * 判断参数 ConnectAddress 是否已赋值
                     * @return ConnectAddress 是否已赋值
                     * 
                     */
                    bool ConnectAddressHasBeenSet() const;

                private:

                    /**
                     * Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Turn on or off SSL. true - turn on; false - turn off.
                     */
                    bool m_sSLEnabled;
                    bool m_sSLEnabledHasBeenSet;

                    /**
                     * The unique connection address protected by an SSL certificate. for a primary instance, it can be set to private and public IP addresses. for a read-only instance, it can be set to the instance IP or read-only group IP. this parameter is required when enabling SSL or modifying the SSL-protected connection address. it will be ignored when disabling SSL.
                     */
                    std::string m_connectAddress;
                    bool m_connectAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESSLCONFIGREQUEST_H_
