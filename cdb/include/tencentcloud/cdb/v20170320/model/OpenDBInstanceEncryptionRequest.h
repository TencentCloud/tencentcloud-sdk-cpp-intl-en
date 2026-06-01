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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_OPENDBINSTANCEENCRYPTIONREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_OPENDBINSTANCEENCRYPTIONREQUEST_H_

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
                * OpenDBInstanceEncryption request structure.
                */
                class OpenDBInstanceEncryptionRequest : public AbstractModel
                {
                public:
                    OpenDBInstanceEncryptionRequest();
                    ~OpenDBInstanceEncryptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud database instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return InstanceId Cloud database instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cloud database instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _instanceId Cloud database instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
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
                     * 获取Custom key ID, the unique identifier of CMK. If left empty, the automatically generated key KMS-CDB by using Tencent Cloud will be used.
                     * @return KeyId Custom key ID, the unique identifier of CMK. If left empty, the automatically generated key KMS-CDB by using Tencent Cloud will be used.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Custom key ID, the unique identifier of CMK. If left empty, the automatically generated key KMS-CDB by using Tencent Cloud will be used.
                     * @param _keyId Custom key ID, the unique identifier of CMK. If left empty, the automatically generated key KMS-CDB by using Tencent Cloud will be used.
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
                     * 获取Storage region of the custom key. For example: ap-guangzhou. This parameter is required when KeyId is not empty.
                     * @return KeyRegion Storage region of the custom key. For example: ap-guangzhou. This parameter is required when KeyId is not empty.
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置Storage region of the custom key. For example: ap-guangzhou. This parameter is required when KeyId is not empty.
                     * @param _keyRegion Storage region of the custom key. For example: ap-guangzhou. This parameter is required when KeyId is not empty.
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
                     * Cloud database instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Custom key ID, the unique identifier of CMK. If left empty, the automatically generated key KMS-CDB by using Tencent Cloud will be used.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Storage region of the custom key. For example: ap-guangzhou. This parameter is required when KeyId is not empty.
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_OPENDBINSTANCEENCRYPTIONREQUEST_H_
