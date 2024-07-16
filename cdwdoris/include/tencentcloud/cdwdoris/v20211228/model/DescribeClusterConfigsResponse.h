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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/ClusterConfigsInfoFromEMR.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeClusterConfigs response structure.
                */
                class DescribeClusterConfigsResponse : public AbstractModel
                {
                public:
                    DescribeClusterConfigsResponse();
                    ~DescribeClusterConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Return information about the instance's configuration file.
                     * @return ClusterConfList Return information about the instance's configuration file.
                     * 
                     */
                    std::vector<ClusterConfigsInfoFromEMR> GetClusterConfList() const;

                    /**
                     * 判断参数 ClusterConfList 是否已赋值
                     * @return ClusterConfList 是否已赋值
                     * 
                     */
                    bool ClusterConfListHasBeenSet() const;

                    /**
                     * 获取Return the current kernel version. If it does not exist, a null character string is returned.
                     * @return BuildVersion Return the current kernel version. If it does not exist, a null character string is returned.
                     * 
                     */
                    std::string GetBuildVersion() const;

                    /**
                     * 判断参数 BuildVersion 是否已赋值
                     * @return BuildVersion 是否已赋值
                     * 
                     */
                    bool BuildVersionHasBeenSet() const;

                private:

                    /**
                     * Return information about the instance's configuration file.
                     */
                    std::vector<ClusterConfigsInfoFromEMR> m_clusterConfList;
                    bool m_clusterConfListHasBeenSet;

                    /**
                     * Return the current kernel version. If it does not exist, a null character string is returned.
                     */
                    std::string m_buildVersion;
                    bool m_buildVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSRESPONSE_H_
