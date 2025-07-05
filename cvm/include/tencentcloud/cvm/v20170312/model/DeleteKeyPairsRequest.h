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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DELETEKEYPAIRSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DELETEKEYPAIRSREQUEST_H_

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
                * DeleteKeyPairs request structure.
                */
                class DeleteKeyPairsRequest : public AbstractModel
                {
                public:
                    DeleteKeyPairsRequest();
                    ~DeleteKeyPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取One or more key pair IDs to be operated. The maximum number of key pairs per request is 100.<br>You can obtain an available key pair ID in the following ways:<br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair ID.</li><br><li>Call the [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) API and obtain the key pair ID from the `KeyId` in the response.</li>
                     * @return KeyIds One or more key pair IDs to be operated. The maximum number of key pairs per request is 100.<br>You can obtain an available key pair ID in the following ways:<br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair ID.</li><br><li>Call the [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) API and obtain the key pair ID from the `KeyId` in the response.</li>
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置One or more key pair IDs to be operated. The maximum number of key pairs per request is 100.<br>You can obtain an available key pair ID in the following ways:<br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair ID.</li><br><li>Call the [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) API and obtain the key pair ID from the `KeyId` in the response.</li>
                     * @param _keyIds One or more key pair IDs to be operated. The maximum number of key pairs per request is 100.<br>You can obtain an available key pair ID in the following ways:<br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair ID.</li><br><li>Call the [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) API and obtain the key pair ID from the `KeyId` in the response.</li>
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                private:

                    /**
                     * One or more key pair IDs to be operated. The maximum number of key pairs per request is 100.<br>You can obtain an available key pair ID in the following ways:<br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair ID.</li><br><li>Call the [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) API and obtain the key pair ID from the `KeyId` in the response.</li>
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DELETEKEYPAIRSREQUEST_H_
