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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DISASSOCIATEINSTANCESKEYPAIRSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DISASSOCIATEINSTANCESKEYPAIRSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DisassociateInstancesKeyPairs request structure.
                */
                class DisassociateInstancesKeyPairsRequest : public AbstractModel
                {
                public:
                    DisassociateInstancesKeyPairsRequest();
                    ~DisassociateInstancesKeyPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取You can get available instance IDs in the following ways:
Log in to the console to query instance IDs.
Get the instance IDs from the `InstanceId` field in the information returned by the `DescribeInstances` API.
                     * @return InstanceIds You can get available instance IDs in the following ways:
Log in to the console to query instance IDs.
Get the instance IDs from the `InstanceId` field in the information returned by the `DescribeInstances` API.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置You can get available instance IDs in the following ways:
Log in to the console to query instance IDs.
Get the instance IDs from the `InstanceId` field in the information returned by the `DescribeInstances` API.
                     * @param InstanceIds You can get available instance IDs in the following ways:
Log in to the console to query instance IDs.
Get the instance IDs from the `InstanceId` field in the information returned by the `DescribeInstances` API.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取List of key pair IDs. Each request can contain up to 100 key pairs. The key pair ID takes the form of `skey-11112222`.

You can get available key IDs in the following ways:
Log in to the console to query key IDs.
Get the key pair IDs from the `KeyId` field in the information returned by the `DescribeKeyPairs` API.
                     * @return KeyIds List of key pair IDs. Each request can contain up to 100 key pairs. The key pair ID takes the form of `skey-11112222`.

You can get available key IDs in the following ways:
Log in to the console to query key IDs.
Get the key pair IDs from the `KeyId` field in the information returned by the `DescribeKeyPairs` API.
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置List of key pair IDs. Each request can contain up to 100 key pairs. The key pair ID takes the form of `skey-11112222`.

You can get available key IDs in the following ways:
Log in to the console to query key IDs.
Get the key pair IDs from the `KeyId` field in the information returned by the `DescribeKeyPairs` API.
                     * @param KeyIds List of key pair IDs. Each request can contain up to 100 key pairs. The key pair ID takes the form of `skey-11112222`.

You can get available key IDs in the following ways:
Log in to the console to query key IDs.
Get the key pair IDs from the `KeyId` field in the information returned by the `DescribeKeyPairs` API.
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     */
                    bool KeyIdsHasBeenSet() const;

                    /**
                     * 获取Whether to force shut down the running instance. We recommend you manually shut down the running instance before unbinding the key. Valid values:
TRUE: yes.
FALSE: no.

Default value: FALSE.
                     * @return ForceStop Whether to force shut down the running instance. We recommend you manually shut down the running instance before unbinding the key. Valid values:
TRUE: yes.
FALSE: no.

Default value: FALSE.
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置Whether to force shut down the running instance. We recommend you manually shut down the running instance before unbinding the key. Valid values:
TRUE: yes.
FALSE: no.

Default value: FALSE.
                     * @param ForceStop Whether to force shut down the running instance. We recommend you manually shut down the running instance before unbinding the key. Valid values:
TRUE: yes.
FALSE: no.

Default value: FALSE.
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     */
                    bool ForceStopHasBeenSet() const;

                private:

                    /**
                     * You can get available instance IDs in the following ways:
Log in to the console to query instance IDs.
Get the instance IDs from the `InstanceId` field in the information returned by the `DescribeInstances` API.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * List of key pair IDs. Each request can contain up to 100 key pairs. The key pair ID takes the form of `skey-11112222`.

You can get available key IDs in the following ways:
Log in to the console to query key IDs.
Get the key pair IDs from the `KeyId` field in the information returned by the `DescribeKeyPairs` API.
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * Whether to force shut down the running instance. We recommend you manually shut down the running instance before unbinding the key. Valid values:
TRUE: yes.
FALSE: no.

Default value: FALSE.
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DISASSOCIATEINSTANCESKEYPAIRSREQUEST_H_
