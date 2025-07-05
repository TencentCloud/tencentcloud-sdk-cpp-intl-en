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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DISASSOCIATEINSTANCESKEYPAIRSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DISASSOCIATEINSTANCESKEYPAIRSREQUEST_H_

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
                * DisassociateInstancesKeyPairs request structure.
                */
                class DisassociateInstancesKeyPairsRequest : public AbstractModel
                {
                public:
                    DisassociateInstancesKeyPairsRequest();
                    ~DisassociateInstancesKeyPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID(s). The maximum number of instances in each request is 100. <br><br>You can obtain the available instance IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/index) to query the instance IDs. <br><li>Call [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response.
                     * @return InstanceIds Instance ID(s). The maximum number of instances in each request is 100. <br><br>You can obtain the available instance IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/index) to query the instance IDs. <br><li>Call [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID(s). The maximum number of instances in each request is 100. <br><br>You can obtain the available instance IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/index) to query the instance IDs. <br><li>Call [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response.
                     * @param _instanceIds Instance ID(s). The maximum number of instances in each request is 100. <br><br>You can obtain the available instance IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/index) to query the instance IDs. <br><li>Call [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取List of key pair IDs. The maximum number of key pairs in each request is 100. The key pair ID is in the format of `skey-11112222`. <br><br>You can obtain the available key pair IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair IDs. <br><li>Call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) and look for `KeyId` in the response.
                     * @return KeyIds List of key pair IDs. The maximum number of key pairs in each request is 100. The key pair ID is in the format of `skey-11112222`. <br><br>You can obtain the available key pair IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair IDs. <br><li>Call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) and look for `KeyId` in the response.
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置List of key pair IDs. The maximum number of key pairs in each request is 100. The key pair ID is in the format of `skey-11112222`. <br><br>You can obtain the available key pair IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair IDs. <br><li>Call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) and look for `KeyId` in the response.
                     * @param _keyIds List of key pair IDs. The maximum number of key pairs in each request is 100. The key pair ID is in the format of `skey-11112222`. <br><br>You can obtain the available key pair IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair IDs. <br><li>Call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) and look for `KeyId` in the response.
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                    /**
                     * 获取Whether to force shut down a running instances. It is recommended to manually shut down a running instance before disassociating a key pair from it. Valid values: <br><li>TRUE: force shut down an instance after a normal shutdown fails. <br><li>FALSE: do not force shut down an instance after a normal shutdown fails. <br><br>Default value: FALSE.
                     * @return ForceStop Whether to force shut down a running instances. It is recommended to manually shut down a running instance before disassociating a key pair from it. Valid values: <br><li>TRUE: force shut down an instance after a normal shutdown fails. <br><li>FALSE: do not force shut down an instance after a normal shutdown fails. <br><br>Default value: FALSE.
                     * 
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置Whether to force shut down a running instances. It is recommended to manually shut down a running instance before disassociating a key pair from it. Valid values: <br><li>TRUE: force shut down an instance after a normal shutdown fails. <br><li>FALSE: do not force shut down an instance after a normal shutdown fails. <br><br>Default value: FALSE.
                     * @param _forceStop Whether to force shut down a running instances. It is recommended to manually shut down a running instance before disassociating a key pair from it. Valid values: <br><li>TRUE: force shut down an instance after a normal shutdown fails. <br><li>FALSE: do not force shut down an instance after a normal shutdown fails. <br><br>Default value: FALSE.
                     * 
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     * 
                     */
                    bool ForceStopHasBeenSet() const;

                private:

                    /**
                     * Instance ID(s). The maximum number of instances in each request is 100. <br><br>You can obtain the available instance IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/index) to query the instance IDs. <br><li>Call [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * List of key pair IDs. The maximum number of key pairs in each request is 100. The key pair ID is in the format of `skey-11112222`. <br><br>You can obtain the available key pair IDs in two ways: <br><li>Log in to the [console](https://console.cloud.tencent.com/cvm/sshkey) to query the key pair IDs. <br><li>Call [DescribeKeyPairs](https://intl.cloud.tencent.com/document/api/213/15699?from_cn_redirect=1) and look for `KeyId` in the response.
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * Whether to force shut down a running instances. It is recommended to manually shut down a running instance before disassociating a key pair from it. Valid values: <br><li>TRUE: force shut down an instance after a normal shutdown fails. <br><li>FALSE: do not force shut down an instance after a normal shutdown fails. <br><br>Default value: FALSE.
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DISASSOCIATEINSTANCESKEYPAIRSREQUEST_H_
