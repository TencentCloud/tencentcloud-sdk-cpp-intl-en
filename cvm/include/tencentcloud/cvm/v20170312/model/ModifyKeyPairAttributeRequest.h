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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYKEYPAIRATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYKEYPAIRATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyKeyPairAttribute request structure.
                */
                class ModifyKeyPairAttributeRequest : public AbstractModel
                {
                public:
                    ModifyKeyPairAttributeRequest();
                    ~ModifyKeyPairAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Key pair ID in the format of `skey-xxxxxxxx`. <br><br>You can obtain the available key pair IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair IDs. <br><li>Call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) and look for `KeyId` in the response.
                     * @return KeyId Key pair ID in the format of `skey-xxxxxxxx`. <br><br>You can obtain the available key pair IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair IDs. <br><li>Call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) and look for `KeyId` in the response.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Key pair ID in the format of `skey-xxxxxxxx`. <br><br>You can obtain the available key pair IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair IDs. <br><li>Call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) and look for `KeyId` in the response.
                     * @param _keyId Key pair ID in the format of `skey-xxxxxxxx`. <br><br>You can obtain the available key pair IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair IDs. <br><li>Call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) and look for `KeyId` in the response.
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
                     * 获取New key pair name, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     * @return KeyName New key pair name, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置New key pair name, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     * @param _keyName New key pair name, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取New key pair description. You can specify any name you like, but its length cannot exceed 60 characters.
                     * @return Description New key pair description. You can specify any name you like, but its length cannot exceed 60 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置New key pair description. You can specify any name you like, but its length cannot exceed 60 characters.
                     * @param _description New key pair description. You can specify any name you like, but its length cannot exceed 60 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Key pair ID in the format of `skey-xxxxxxxx`. <br><br>You can obtain the available key pair IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair IDs. <br><li>Call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) and look for `KeyId` in the response.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * New key pair name, which can contain numbers, letters, and underscores, with a maximum length of 25 characters.
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * New key pair description. You can specify any name you like, but its length cannot exceed 60 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYKEYPAIRATTRIBUTEREQUEST_H_
