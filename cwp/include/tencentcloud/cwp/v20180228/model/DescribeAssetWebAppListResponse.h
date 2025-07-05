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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBAPPLISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBAPPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetWebAppBaseInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetWebAppList response structure.
                */
                class DescribeAssetWebAppListResponse : public AbstractModel
                {
                public:
                    DescribeAssetWebAppListResponse();
                    ~DescribeAssetWebAppListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of records
                     * @return Total Total number of records
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Data list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WebApps Data list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetWebAppBaseInfo> GetWebApps() const;

                    /**
                     * 判断参数 WebApps 是否已赋值
                     * @return WebApps 是否已赋值
                     * 
                     */
                    bool WebAppsHasBeenSet() const;

                private:

                    /**
                     * Total number of records
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Data list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetWebAppBaseInfo> m_webApps;
                    bool m_webAppsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBAPPLISTRESPONSE_H_
