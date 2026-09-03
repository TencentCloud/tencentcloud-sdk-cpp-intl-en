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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHARTIFACTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHARTIFACTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeAIWorkbenchArtifact request structure.
                */
                class DescribeAIWorkbenchArtifactRequest : public AbstractModel
                {
                public:
                    DescribeAIWorkbenchArtifactRequest();
                    ~DescribeAIWorkbenchArtifactRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Product ID</p>
                     * @return ArtifactId <p>Product ID</p>
                     * 
                     */
                    std::string GetArtifactId() const;

                    /**
                     * 设置<p>Product ID</p>
                     * @param _artifactId <p>Product ID</p>
                     * 
                     */
                    void SetArtifactId(const std::string& _artifactId);

                    /**
                     * 判断参数 ArtifactId 是否已赋值
                     * @return ArtifactId 是否已赋值
                     * 
                     */
                    bool ArtifactIdHasBeenSet() const;

                    /**
                     * 获取<p>Whether to download the URL</p><p><code>1</code> = required, <code>0</code> or not passed = not required</p>
                     * @return NeedDownloadURL <p>Whether to download the URL</p><p><code>1</code> = required, <code>0</code> or not passed = not required</p>
                     * 
                     */
                    int64_t GetNeedDownloadURL() const;

                    /**
                     * 设置<p>Whether to download the URL</p><p><code>1</code> = required, <code>0</code> or not passed = not required</p>
                     * @param _needDownloadURL <p>Whether to download the URL</p><p><code>1</code> = required, <code>0</code> or not passed = not required</p>
                     * 
                     */
                    void SetNeedDownloadURL(const int64_t& _needDownloadURL);

                    /**
                     * 判断参数 NeedDownloadURL 是否已赋值
                     * @return NeedDownloadURL 是否已赋值
                     * 
                     */
                    bool NeedDownloadURLHasBeenSet() const;

                private:

                    /**
                     * <p>Product ID</p>
                     */
                    std::string m_artifactId;
                    bool m_artifactIdHasBeenSet;

                    /**
                     * <p>Whether to download the URL</p><p><code>1</code> = required, <code>0</code> or not passed = not required</p>
                     */
                    int64_t m_needDownloadURL;
                    bool m_needDownloadURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHARTIFACTREQUEST_H_
