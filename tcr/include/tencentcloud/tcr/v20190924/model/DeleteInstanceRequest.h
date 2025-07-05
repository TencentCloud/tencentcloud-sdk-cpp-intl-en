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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DELETEINSTANCEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DELETEINSTANCEREQUEST_H_

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
                * DeleteInstance request structure.
                */
                class DeleteInstanceRequest : public AbstractModel
                {
                public:
                    DeleteInstanceRequest();
                    ~DeleteInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return RegistryId Instance ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID
                     * @param _registryId Instance ID
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
                     * 获取Whether to delete the bucket. Default value: false.
                     * @return DeleteBucket Whether to delete the bucket. Default value: false.
                     * 
                     */
                    bool GetDeleteBucket() const;

                    /**
                     * 设置Whether to delete the bucket. Default value: false.
                     * @param _deleteBucket Whether to delete the bucket. Default value: false.
                     * 
                     */
                    void SetDeleteBucket(const bool& _deleteBucket);

                    /**
                     * 判断参数 DeleteBucket 是否已赋值
                     * @return DeleteBucket 是否已赋值
                     * 
                     */
                    bool DeleteBucketHasBeenSet() const;

                    /**
                     * 获取Whether to enable the `dryRun` mode. Default value: false.
                     * @return DryRun Whether to enable the `dryRun` mode. Default value: false.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether to enable the `dryRun` mode. Default value: false.
                     * @param _dryRun Whether to enable the `dryRun` mode. Default value: false.
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
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Whether to delete the bucket. Default value: false.
                     */
                    bool m_deleteBucket;
                    bool m_deleteBucketHasBeenSet;

                    /**
                     * Whether to enable the `dryRun` mode. Default value: false.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DELETEINSTANCEREQUEST_H_
