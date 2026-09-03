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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHARTIFACTRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHARTIFACTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/ArtifactInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeAIWorkbenchArtifact response structure.
                */
                class DescribeAIWorkbenchArtifactResponse : public AbstractModel
                {
                public:
                    DescribeAIWorkbenchArtifactResponse();
                    ~DescribeAIWorkbenchArtifactResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Product information</p>
                     * @return Artifact <p>Product information</p>
                     * 
                     */
                    ArtifactInfo GetArtifact() const;

                    /**
                     * 判断参数 Artifact 是否已赋值
                     * @return Artifact 是否已赋值
                     * 
                     */
                    bool ArtifactHasBeenSet() const;

                    /**
                     * 获取<p>COS pre-signed download URL</p>
                     * @return DownloadURL <p>COS pre-signed download URL</p>
                     * 
                     */
                    std::string GetDownloadURL() const;

                    /**
                     * 判断参数 DownloadURL 是否已赋值
                     * @return DownloadURL 是否已赋值
                     * 
                     */
                    bool DownloadURLHasBeenSet() const;

                    /**
                     * 获取<p>Download URL expiration time (in RFC3339 format)</p>
                     * @return DownloadURLExpiredAt <p>Download URL expiration time (in RFC3339 format)</p>
                     * 
                     */
                    std::string GetDownloadURLExpiredAt() const;

                    /**
                     * 判断参数 DownloadURLExpiredAt 是否已赋值
                     * @return DownloadURLExpiredAt 是否已赋值
                     * 
                     */
                    bool DownloadURLExpiredAtHasBeenSet() const;

                private:

                    /**
                     * <p>Product information</p>
                     */
                    ArtifactInfo m_artifact;
                    bool m_artifactHasBeenSet;

                    /**
                     * <p>COS pre-signed download URL</p>
                     */
                    std::string m_downloadURL;
                    bool m_downloadURLHasBeenSet;

                    /**
                     * <p>Download URL expiration time (in RFC3339 format)</p>
                     */
                    std::string m_downloadURLExpiredAt;
                    bool m_downloadURLExpiredAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHARTIFACTRESPONSE_H_
