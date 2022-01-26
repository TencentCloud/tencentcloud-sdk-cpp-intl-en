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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESETINSTANCESTYPEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESETINSTANCESTYPEREQUEST_H_

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
                * ResetInstancesType request structure.
                */
                class ResetInstancesTypeRequest : public AbstractModel
                {
                public:
                    ResetInstancesTypeRequest();
                    ~ResetInstancesTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID(s). To obtain the instance IDs, you can call the [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API and find the value `InstanceId` in the response. The maximum number of instances in each request is 1.
                     * @return InstanceIds Instance ID(s). To obtain the instance IDs, you can call the [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API and find the value `InstanceId` in the response. The maximum number of instances in each request is 1.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID(s). To obtain the instance IDs, you can call the [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API and find the value `InstanceId` in the response. The maximum number of instances in each request is 1.
                     * @param InstanceIds Instance ID(s). To obtain the instance IDs, you can call the [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API and find the value `InstanceId` in the response. The maximum number of instances in each request is 1.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Instance model. Different resource specifications are specified for different models. For specific values, call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) to get the latest specification list or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
                     * @return InstanceType Instance model. Different resource specifications are specified for different models. For specific values, call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) to get the latest specification list or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance model. Different resource specifications are specified for different models. For specific values, call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) to get the latest specification list or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
                     * @param InstanceType Instance model. Different resource specifications are specified for different models. For specific values, call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) to get the latest specification list or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Forced shutdown of a running instances. We recommend you firstly try to shut down a running instance manually. Valid values: <br><li>TRUE: forced shutdown of an instance after a normal shutdown fails.<br><li>FALSE: no forced shutdown of an instance after a normal shutdown fails.<br><br>Default value: FALSE.<br><br>A forced shutdown is similar to switching off the power of a physical computer. It may cause data loss or file system corruption. Be sure to only force a CVM to shut off if the normal shutdown fails.
                     * @return ForceStop Forced shutdown of a running instances. We recommend you firstly try to shut down a running instance manually. Valid values: <br><li>TRUE: forced shutdown of an instance after a normal shutdown fails.<br><li>FALSE: no forced shutdown of an instance after a normal shutdown fails.<br><br>Default value: FALSE.<br><br>A forced shutdown is similar to switching off the power of a physical computer. It may cause data loss or file system corruption. Be sure to only force a CVM to shut off if the normal shutdown fails.
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置Forced shutdown of a running instances. We recommend you firstly try to shut down a running instance manually. Valid values: <br><li>TRUE: forced shutdown of an instance after a normal shutdown fails.<br><li>FALSE: no forced shutdown of an instance after a normal shutdown fails.<br><br>Default value: FALSE.<br><br>A forced shutdown is similar to switching off the power of a physical computer. It may cause data loss or file system corruption. Be sure to only force a CVM to shut off if the normal shutdown fails.
                     * @param ForceStop Forced shutdown of a running instances. We recommend you firstly try to shut down a running instance manually. Valid values: <br><li>TRUE: forced shutdown of an instance after a normal shutdown fails.<br><li>FALSE: no forced shutdown of an instance after a normal shutdown fails.<br><br>Default value: FALSE.<br><br>A forced shutdown is similar to switching off the power of a physical computer. It may cause data loss or file system corruption. Be sure to only force a CVM to shut off if the normal shutdown fails.
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     */
                    bool ForceStopHasBeenSet() const;

                private:

                    /**
                     * Instance ID(s). To obtain the instance IDs, you can call the [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API and find the value `InstanceId` in the response. The maximum number of instances in each request is 1.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Instance model. Different resource specifications are specified for different models. For specific values, call [DescribeInstanceTypeConfigs](https://intl.cloud.tencent.com/document/api/213/15749?from_cn_redirect=1) to get the latest specification list or refer to [Instance Types](https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1).
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Forced shutdown of a running instances. We recommend you firstly try to shut down a running instance manually. Valid values: <br><li>TRUE: forced shutdown of an instance after a normal shutdown fails.<br><li>FALSE: no forced shutdown of an instance after a normal shutdown fails.<br><br>Default value: FALSE.<br><br>A forced shutdown is similar to switching off the power of a physical computer. It may cause data loss or file system corruption. Be sure to only force a CVM to shut off if the normal shutdown fails.
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESETINSTANCESTYPEREQUEST_H_
