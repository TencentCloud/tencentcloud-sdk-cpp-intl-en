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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DESTINATIONSYNCCONFIG_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DESTINATIONSYNCCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * Target region list of the sync task, including region and cluster information. if the cluster is empty, it means public cloud shared cluster. if the cluster is not empty, it means dedicated cluster.
                */
                class DestinationSyncConfig : public AbstractModel
                {
                public:
                    DestinationSyncConfig();
                    ~DestinationSyncConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the target region of the synchronization task.
                     * @return DestinationRegion Specifies the target region of the synchronization task.
                     * 
                     */
                    std::string GetDestinationRegion() const;

                    /**
                     * 设置Specifies the target region of the synchronization task.
                     * @param _destinationRegion Specifies the target region of the synchronization task.
                     * 
                     */
                    void SetDestinationRegion(const std::string& _destinationRegion);

                    /**
                     * 判断参数 DestinationRegion 是否已赋值
                     * @return DestinationRegion 是否已赋值
                     * 
                     */
                    bool DestinationRegionHasBeenSet() const;

                    /**
                     * 获取HsmClusterId being empty indicates public cloud shared version. if not empty, it indicates exclusive edition cluster in the region.
                     * @return HsmClusterId HsmClusterId being empty indicates public cloud shared version. if not empty, it indicates exclusive edition cluster in the region.
                     * 
                     */
                    std::string GetHsmClusterId() const;

                    /**
                     * 设置HsmClusterId being empty indicates public cloud shared version. if not empty, it indicates exclusive edition cluster in the region.
                     * @param _hsmClusterId HsmClusterId being empty indicates public cloud shared version. if not empty, it indicates exclusive edition cluster in the region.
                     * 
                     */
                    void SetHsmClusterId(const std::string& _hsmClusterId);

                    /**
                     * 判断参数 HsmClusterId 是否已赋值
                     * @return HsmClusterId 是否已赋值
                     * 
                     */
                    bool HsmClusterIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the target region of the synchronization task.
                     */
                    std::string m_destinationRegion;
                    bool m_destinationRegionHasBeenSet;

                    /**
                     * HsmClusterId being empty indicates public cloud shared version. if not empty, it indicates exclusive edition cluster in the region.
                     */
                    std::string m_hsmClusterId;
                    bool m_hsmClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DESTINATIONSYNCCONFIG_H_
