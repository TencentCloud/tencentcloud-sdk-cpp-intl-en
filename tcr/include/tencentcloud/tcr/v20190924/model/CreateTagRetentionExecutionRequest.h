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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATETAGRETENTIONEXECUTIONREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATETAGRETENTIONEXECUTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateTagRetentionExecution request structure.
                */
                class CreateTagRetentionExecutionRequest : public AbstractModel
                {
                public:
                    CreateTagRetentionExecutionRequest();
                    ~CreateTagRetentionExecutionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Primary instance ID
                     * @return RegistryId Primary instance ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Primary instance ID
                     * @param _registryId Primary instance ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Tag retention rule ID
                     * @return RetentionId Tag retention rule ID
                     * 
                     */
                    int64_t GetRetentionId() const;

                    /**
                     * 设置Tag retention rule ID
                     * @param _retentionId Tag retention rule ID
                     * 
                     */
                    void SetRetentionId(const int64_t& _retentionId);

                    /**
                     * 判断参数 RetentionId 是否已赋值
                     * @return RetentionId 是否已赋值
                     * 
                     */
                    bool RetentionIdHasBeenSet() const;

                    /**
                     * 获取Whether the execution is simulated. Default value: false (not simulated)
                     * @return DryRun Whether the execution is simulated. Default value: false (not simulated)
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether the execution is simulated. Default value: false (not simulated)
                     * @param _dryRun Whether the execution is simulated. Default value: false (not simulated)
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * Primary instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Tag retention rule ID
                     */
                    int64_t m_retentionId;
                    bool m_retentionIdHasBeenSet;

                    /**
                     * Whether the execution is simulated. Default value: false (not simulated)
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATETAGRETENTIONEXECUTIONREQUEST_H_
