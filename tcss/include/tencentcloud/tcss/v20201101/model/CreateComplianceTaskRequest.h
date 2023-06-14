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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECOMPLIANCETASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECOMPLIANCETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateComplianceTask request structure.
                */
                class CreateComplianceTaskRequest : public AbstractModel
                {
                public:
                    CreateComplianceTaskRequest();
                    ~CreateComplianceTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of asset types to be scanned
`ASSET_CONTAINER`: Container.
`ASSET_IMAGE`: Image.
`ASSET_HOST`: Server.
`ASSET_K8S`: K8s asset.
A valid value must be entered for the `AssetTypeSet`, `PolicySetId`, or `PeriodTaskId` parameter.
                     * @return AssetTypeSet List of asset types to be scanned
`ASSET_CONTAINER`: Container.
`ASSET_IMAGE`: Image.
`ASSET_HOST`: Server.
`ASSET_K8S`: K8s asset.
A valid value must be entered for the `AssetTypeSet`, `PolicySetId`, or `PeriodTaskId` parameter.
                     * 
                     */
                    std::vector<std::string> GetAssetTypeSet() const;

                    /**
                     * 设置List of asset types to be scanned
`ASSET_CONTAINER`: Container.
`ASSET_IMAGE`: Image.
`ASSET_HOST`: Server.
`ASSET_K8S`: K8s asset.
A valid value must be entered for the `AssetTypeSet`, `PolicySetId`, or `PeriodTaskId` parameter.
                     * @param _assetTypeSet List of asset types to be scanned
`ASSET_CONTAINER`: Container.
`ASSET_IMAGE`: Image.
`ASSET_HOST`: Server.
`ASSET_K8S`: K8s asset.
A valid value must be entered for the `AssetTypeSet`, `PolicySetId`, or `PeriodTaskId` parameter.
                     * 
                     */
                    void SetAssetTypeSet(const std::vector<std::string>& _assetTypeSet);

                    /**
                     * 判断参数 AssetTypeSet 是否已赋值
                     * @return AssetTypeSet 是否已赋值
                     * 
                     */
                    bool AssetTypeSetHasBeenSet() const;

                    /**
                     * 获取Policy set ID
                     * @return PolicySetId Policy set ID
                     * 
                     */
                    uint64_t GetPolicySetId() const;

                    /**
                     * 设置Policy set ID
                     * @param _policySetId Policy set ID
                     * 
                     */
                    void SetPolicySetId(const uint64_t& _policySetId);

                    /**
                     * 判断参数 PolicySetId 是否已赋值
                     * @return PolicySetId 是否已赋值
                     * 
                     */
                    bool PolicySetIdHasBeenSet() const;

                    /**
                     * 获取Scheduled task ID
                     * @return PeriodTaskId Scheduled task ID
                     * 
                     */
                    uint64_t GetPeriodTaskId() const;

                    /**
                     * 设置Scheduled task ID
                     * @param _periodTaskId Scheduled task ID
                     * 
                     */
                    void SetPeriodTaskId(const uint64_t& _periodTaskId);

                    /**
                     * 判断参数 PeriodTaskId 是否已赋值
                     * @return PeriodTaskId 是否已赋值
                     * 
                     */
                    bool PeriodTaskIdHasBeenSet() const;

                private:

                    /**
                     * List of asset types to be scanned
`ASSET_CONTAINER`: Container.
`ASSET_IMAGE`: Image.
`ASSET_HOST`: Server.
`ASSET_K8S`: K8s asset.
A valid value must be entered for the `AssetTypeSet`, `PolicySetId`, or `PeriodTaskId` parameter.
                     */
                    std::vector<std::string> m_assetTypeSet;
                    bool m_assetTypeSetHasBeenSet;

                    /**
                     * Policy set ID
                     */
                    uint64_t m_policySetId;
                    bool m_policySetIdHasBeenSet;

                    /**
                     * Scheduled task ID
                     */
                    uint64_t m_periodTaskId;
                    bool m_periodTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECOMPLIANCETASKREQUEST_H_
