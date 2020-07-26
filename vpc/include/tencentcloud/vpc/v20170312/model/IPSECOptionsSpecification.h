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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_IPSECOPTIONSSPECIFICATION_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_IPSECOPTIONSSPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * IPSec configuration. The IPSec secure session configuration is provided by Tencent Cloud.
                */
                class IPSECOptionsSpecification : public AbstractModel
                {
                public:
                    IPSECOptionsSpecification();
                    ~IPSECOptionsSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Encryption algorithm. Available values: '3DES-CBC', 'AES-CBC-128', 'AES-CBC-192', 'AES-CBC-256', 'DES-CBC', and 'NULL'. Default is AES-CBC-128.
                     * @return EncryptAlgorithm Encryption algorithm. Available values: '3DES-CBC', 'AES-CBC-128', 'AES-CBC-192', 'AES-CBC-256', 'DES-CBC', and 'NULL'. Default is AES-CBC-128.
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 设置Encryption algorithm. Available values: '3DES-CBC', 'AES-CBC-128', 'AES-CBC-192', 'AES-CBC-256', 'DES-CBC', and 'NULL'. Default is AES-CBC-128.
                     * @param EncryptAlgorithm Encryption algorithm. Available values: '3DES-CBC', 'AES-CBC-128', 'AES-CBC-192', 'AES-CBC-256', 'DES-CBC', and 'NULL'. Default is AES-CBC-128.
                     */
                    void SetEncryptAlgorithm(const std::string& _encryptAlgorithm);

                    /**
                     * 判断参数 EncryptAlgorithm 是否已赋值
                     * @return EncryptAlgorithm 是否已赋值
                     */
                    bool EncryptAlgorithmHasBeenSet() const;

                    /**
                     * 获取Verification algorithm. Available value: 'MD5' and 'SHA1'. Default is:
                     * @return IntegrityAlgorith Verification algorithm. Available value: 'MD5' and 'SHA1'. Default is:
                     */
                    std::string GetIntegrityAlgorith() const;

                    /**
                     * 设置Verification algorithm. Available value: 'MD5' and 'SHA1'. Default is:
                     * @param IntegrityAlgorith Verification algorithm. Available value: 'MD5' and 'SHA1'. Default is:
                     */
                    void SetIntegrityAlgorith(const std::string& _integrityAlgorith);

                    /**
                     * 判断参数 IntegrityAlgorith 是否已赋值
                     * @return IntegrityAlgorith 是否已赋值
                     */
                    bool IntegrityAlgorithHasBeenSet() const;

                    /**
                     * 获取IPsec SA lifetime (in sec). Value range: 180-604800
                     * @return IPSECSaLifetimeSeconds IPsec SA lifetime (in sec). Value range: 180-604800
                     */
                    uint64_t GetIPSECSaLifetimeSeconds() const;

                    /**
                     * 设置IPsec SA lifetime (in sec). Value range: 180-604800
                     * @param IPSECSaLifetimeSeconds IPsec SA lifetime (in sec). Value range: 180-604800
                     */
                    void SetIPSECSaLifetimeSeconds(const uint64_t& _iPSECSaLifetimeSeconds);

                    /**
                     * 判断参数 IPSECSaLifetimeSeconds 是否已赋值
                     * @return IPSECSaLifetimeSeconds 是否已赋值
                     */
                    bool IPSECSaLifetimeSecondsHasBeenSet() const;

                    /**
                     * 获取PFS. Available value: 'NULL', 'DH-GROUP1', 'DH-GROUP2', 'DH-GROUP5', 'DH-GROUP14', and 'DH-GROUP24'. Default is NULL.
                     * @return PfsDhGroup PFS. Available value: 'NULL', 'DH-GROUP1', 'DH-GROUP2', 'DH-GROUP5', 'DH-GROUP14', and 'DH-GROUP24'. Default is NULL.
                     */
                    std::string GetPfsDhGroup() const;

                    /**
                     * 设置PFS. Available value: 'NULL', 'DH-GROUP1', 'DH-GROUP2', 'DH-GROUP5', 'DH-GROUP14', and 'DH-GROUP24'. Default is NULL.
                     * @param PfsDhGroup PFS. Available value: 'NULL', 'DH-GROUP1', 'DH-GROUP2', 'DH-GROUP5', 'DH-GROUP14', and 'DH-GROUP24'. Default is NULL.
                     */
                    void SetPfsDhGroup(const std::string& _pfsDhGroup);

                    /**
                     * 判断参数 PfsDhGroup 是否已赋值
                     * @return PfsDhGroup 是否已赋值
                     */
                    bool PfsDhGroupHasBeenSet() const;

                    /**
                     * 获取IPsec SA lifetime (in KB). Value range: 2560-604800
                     * @return IPSECSaLifetimeTraffic IPsec SA lifetime (in KB). Value range: 2560-604800
                     */
                    uint64_t GetIPSECSaLifetimeTraffic() const;

                    /**
                     * 设置IPsec SA lifetime (in KB). Value range: 2560-604800
                     * @param IPSECSaLifetimeTraffic IPsec SA lifetime (in KB). Value range: 2560-604800
                     */
                    void SetIPSECSaLifetimeTraffic(const uint64_t& _iPSECSaLifetimeTraffic);

                    /**
                     * 判断参数 IPSECSaLifetimeTraffic 是否已赋值
                     * @return IPSECSaLifetimeTraffic 是否已赋值
                     */
                    bool IPSECSaLifetimeTrafficHasBeenSet() const;

                private:

                    /**
                     * Encryption algorithm. Available values: '3DES-CBC', 'AES-CBC-128', 'AES-CBC-192', 'AES-CBC-256', 'DES-CBC', and 'NULL'. Default is AES-CBC-128.
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * Verification algorithm. Available value: 'MD5' and 'SHA1'. Default is:
                     */
                    std::string m_integrityAlgorith;
                    bool m_integrityAlgorithHasBeenSet;

                    /**
                     * IPsec SA lifetime (in sec). Value range: 180-604800
                     */
                    uint64_t m_iPSECSaLifetimeSeconds;
                    bool m_iPSECSaLifetimeSecondsHasBeenSet;

                    /**
                     * PFS. Available value: 'NULL', 'DH-GROUP1', 'DH-GROUP2', 'DH-GROUP5', 'DH-GROUP14', and 'DH-GROUP24'. Default is NULL.
                     */
                    std::string m_pfsDhGroup;
                    bool m_pfsDhGroupHasBeenSet;

                    /**
                     * IPsec SA lifetime (in KB). Value range: 2560-604800
                     */
                    uint64_t m_iPSECSaLifetimeTraffic;
                    bool m_iPSECSaLifetimeTrafficHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IPSECOPTIONSSPECIFICATION_H_
