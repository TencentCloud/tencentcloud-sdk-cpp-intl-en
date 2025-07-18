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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEAVAILABLETKEEDGEVERSIONRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEAVAILABLETKEEDGEVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeAvailableTKEEdgeVersion response structure.
                */
                class DescribeAvailableTKEEdgeVersionResponse : public AbstractModel
                {
                public:
                    DescribeAvailableTKEEdgeVersionResponse();
                    ~DescribeAvailableTKEEdgeVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Version list
                     * @return Versions Version list
                     * 
                     */
                    std::vector<std::string> GetVersions() const;

                    /**
                     * 判断参数 Versions 是否已赋值
                     * @return Versions 是否已赋值
                     * 
                     */
                    bool VersionsHasBeenSet() const;

                    /**
                     * 获取Latest version of the edge cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return EdgeVersionLatest Latest version of the edge cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEdgeVersionLatest() const;

                    /**
                     * 判断参数 EdgeVersionLatest 是否已赋值
                     * @return EdgeVersionLatest 是否已赋值
                     * 
                     */
                    bool EdgeVersionLatestHasBeenSet() const;

                    /**
                     * 获取Current version of the edge cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return EdgeVersionCurrent Current version of the edge cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEdgeVersionCurrent() const;

                    /**
                     * 判断参数 EdgeVersionCurrent 是否已赋值
                     * @return EdgeVersionCurrent 是否已赋值
                     * 
                     */
                    bool EdgeVersionCurrentHasBeenSet() const;

                private:

                    /**
                     * Version list
                     */
                    std::vector<std::string> m_versions;
                    bool m_versionsHasBeenSet;

                    /**
                     * Latest version of the edge cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_edgeVersionLatest;
                    bool m_edgeVersionLatestHasBeenSet;

                    /**
                     * Current version of the edge cluster
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_edgeVersionCurrent;
                    bool m_edgeVersionCurrentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEAVAILABLETKEEDGEVERSIONRESPONSE_H_
