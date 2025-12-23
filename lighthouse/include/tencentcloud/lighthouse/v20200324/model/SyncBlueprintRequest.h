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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SYNCBLUEPRINTREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SYNCBLUEPRINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * SyncBlueprint request structure.
                */
                class SyncBlueprintRequest : public AbstractModel
                {
                public:
                    SyncBlueprintRequest();
                    ~SyncBlueprintRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image ID.
                     * @return BlueprintId Image ID.
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置Image ID.
                     * @param _blueprintId Image ID.
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取List of target regions for image synchronization.
                     * @return DestinationRegions List of target regions for image synchronization.
                     * 
                     */
                    std::vector<std::string> GetDestinationRegions() const;

                    /**
                     * 设置List of target regions for image synchronization.
                     * @param _destinationRegions List of target regions for image synchronization.
                     * 
                     */
                    void SetDestinationRegions(const std::vector<std::string>& _destinationRegions);

                    /**
                     * 判断参数 DestinationRegions 是否已赋值
                     * @return DestinationRegions 是否已赋值
                     * 
                     */
                    bool DestinationRegionsHasBeenSet() const;

                private:

                    /**
                     * Image ID.
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * List of target regions for image synchronization.
                     */
                    std::vector<std::string> m_destinationRegions;
                    bool m_destinationRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SYNCBLUEPRINTREQUEST_H_
