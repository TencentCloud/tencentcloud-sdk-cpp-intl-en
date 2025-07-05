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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCECONTAINERDETAILINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCECONTAINERDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Container asset details
                */
                class ComplianceContainerDetailInfo : public AbstractModel
                {
                public:
                    ComplianceContainerDetailInfo();
                    ~ComplianceContainerDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Container ID on the server
                     * @return ContainerId Container ID on the server
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置Container ID on the server
                     * @param _containerId Container ID on the server
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取Pod name of the container
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodName Pod name of the container
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod name of the container
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _podName Pod name of the container
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                private:

                    /**
                     * Container ID on the server
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * Pod name of the container
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCECONTAINERDETAILINFO_H_
