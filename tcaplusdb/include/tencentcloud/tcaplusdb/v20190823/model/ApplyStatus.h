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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLYSTATUS_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLYSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Application ID and status
                */
                class ApplyStatus : public AbstractModel
                {
                public:
                    ApplyStatus();
                    ~ApplyStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Value format: cluster ID-application ID
                     * @return ApplicationId Value format: cluster ID-application ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Value format: cluster ID-application ID
                     * @param ApplicationId Value format: cluster ID-application ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Status. Valid values: `-1` (canceled), `0` (pending approval), `1` (application approved and task submitted), `2` (rejected). Only applications in the pending approval status can be updated.
                     * @return ApplicationStatus Status. Valid values: `-1` (canceled), `0` (pending approval), `1` (application approved and task submitted), `2` (rejected). Only applications in the pending approval status can be updated.
                     */
                    int64_t GetApplicationStatus() const;

                    /**
                     * 设置Status. Valid values: `-1` (canceled), `0` (pending approval), `1` (application approved and task submitted), `2` (rejected). Only applications in the pending approval status can be updated.
                     * @param ApplicationStatus Status. Valid values: `-1` (canceled), `0` (pending approval), `1` (application approved and task submitted), `2` (rejected). Only applications in the pending approval status can be updated.
                     */
                    void SetApplicationStatus(const int64_t& _applicationStatus);

                    /**
                     * 判断参数 ApplicationStatus 是否已赋值
                     * @return ApplicationStatus 是否已赋值
                     */
                    bool ApplicationStatusHasBeenSet() const;

                    /**
                     * 获取Application type
                     * @return ApplicationType Application type
                     */
                    int64_t GetApplicationType() const;

                    /**
                     * 设置Application type
                     * @param ApplicationType Application type
                     */
                    void SetApplicationType(const int64_t& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * Value format: cluster ID-application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Status. Valid values: `-1` (canceled), `0` (pending approval), `1` (application approved and task submitted), `2` (rejected). Only applications in the pending approval status can be updated.
                     */
                    int64_t m_applicationStatus;
                    bool m_applicationStatusHasBeenSet;

                    /**
                     * Application type
                     */
                    int64_t m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLYSTATUS_H_
