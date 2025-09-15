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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyResource request structure.
                */
                class ModifyResourceRequest : public AbstractModel
                {
                public:
                    ModifyResourceRequest();
                    ~ModifyResourceRequest() = default;
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
                     * 获取Billing type.
                     * @return PayMode Billing type.
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Billing type.
                     * @param _payMode Billing type.
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Resized CPU.
                     * @return NewCpu Resized CPU.
                     * 
                     */
                    int64_t GetNewCpu() const;

                    /**
                     * 设置Resized CPU.
                     * @param _newCpu Resized CPU.
                     * 
                     */
                    void SetNewCpu(const int64_t& _newCpu);

                    /**
                     * 判断参数 NewCpu 是否已赋值
                     * @return NewCpu 是否已赋值
                     * 
                     */
                    bool NewCpuHasBeenSet() const;

                    /**
                     * 获取Resized memory.
                     * @return NewMem Resized memory.
                     * 
                     */
                    int64_t GetNewMem() const;

                    /**
                     * 设置Resized memory.
                     * @param _newMem Resized memory.
                     * 
                     */
                    void SetNewMem(const int64_t& _newMem);

                    /**
                     * 判断参数 NewMem 是否已赋值
                     * @return NewMem 是否已赋值
                     * 
                     */
                    bool NewMemHasBeenSet() const;

                    /**
                     * 获取Token
                     * @return ClientToken Token
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置Token
                     * @param _clientToken Token
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Resized machine specifications.
                     * @return InstanceType Resized machine specifications.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Resized machine specifications.
                     * @param _instanceType Resized machine specifications.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Node ID List.
                     * @return ResourceIdList Node ID List.
                     * 
                     */
                    std::vector<std::string> GetResourceIdList() const;

                    /**
                     * 设置Node ID List.
                     * @param _resourceIdList Node ID List.
                     * 
                     */
                    void SetResourceIdList(const std::vector<std::string>& _resourceIdList);

                    /**
                     * 判断参数 ResourceIdList 是否已赋值
                     * @return ResourceIdList 是否已赋值
                     * 
                     */
                    bool ResourceIdListHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Billing type.
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Resized CPU.
                     */
                    int64_t m_newCpu;
                    bool m_newCpuHasBeenSet;

                    /**
                     * Resized memory.
                     */
                    int64_t m_newMem;
                    bool m_newMemHasBeenSet;

                    /**
                     * Token
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Resized machine specifications.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Node ID List.
                     */
                    std::vector<std::string> m_resourceIdList;
                    bool m_resourceIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCEREQUEST_H_
