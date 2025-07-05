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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEIMAGEVERSIONSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEIMAGEVERSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineImageVersion.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataEngineImageVersions response structure.
                */
                class DescribeDataEngineImageVersionsResponse : public AbstractModel
                {
                public:
                    DescribeDataEngineImageVersionsResponse();
                    ~DescribeDataEngineImageVersionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Major version of the image information list of clusters
                     * @return ImageParentVersions Major version of the image information list of clusters
                     * 
                     */
                    std::vector<DataEngineImageVersion> GetImageParentVersions() const;

                    /**
                     * 判断参数 ImageParentVersions 是否已赋值
                     * @return ImageParentVersions 是否已赋值
                     * 
                     */
                    bool ImageParentVersionsHasBeenSet() const;

                    /**
                     * 获取Total
                     * @return Total Total
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Major version of the image information list of clusters
                     */
                    std::vector<DataEngineImageVersion> m_imageParentVersions;
                    bool m_imageParentVersionsHasBeenSet;

                    /**
                     * Total
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEIMAGEVERSIONSRESPONSE_H_
