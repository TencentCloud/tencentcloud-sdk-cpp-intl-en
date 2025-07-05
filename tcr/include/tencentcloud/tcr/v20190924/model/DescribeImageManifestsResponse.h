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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGEMANIFESTSRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGEMANIFESTSRESPONSE_H_

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
                * DescribeImageManifests response structure.
                */
                class DescribeImageManifestsResponse : public AbstractModel
                {
                public:
                    DescribeImageManifestsResponse();
                    ~DescribeImageManifestsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Image manifest information
                     * @return Manifest Image manifest information
                     * 
                     */
                    std::string GetManifest() const;

                    /**
                     * 判断参数 Manifest 是否已赋值
                     * @return Manifest 是否已赋值
                     * 
                     */
                    bool ManifestHasBeenSet() const;

                    /**
                     * 获取Image configuration information
                     * @return Config Image configuration information
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * Image manifest information
                     */
                    std::string m_manifest;
                    bool m_manifestHasBeenSet;

                    /**
                     * Image configuration information
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMAGEMANIFESTSRESPONSE_H_
