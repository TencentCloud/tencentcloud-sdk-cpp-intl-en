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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEENVIRONMENTSTATUSREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEENVIRONMENTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribeEnvironmentStatus request structure.
                */
                class DescribeEnvironmentStatusRequest : public AbstractModel
                {
                public:
                    DescribeEnvironmentStatusRequest();
                    ~DescribeEnvironmentStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the environment
                     * @return EnvironmentIds ID of the environment
                     * 
                     */
                    std::vector<std::string> GetEnvironmentIds() const;

                    /**
                     * 设置ID of the environment
                     * @param _environmentIds ID of the environment
                     * 
                     */
                    void SetEnvironmentIds(const std::vector<std::string>& _environmentIds);

                    /**
                     * 判断参数 EnvironmentIds 是否已赋值
                     * @return EnvironmentIds 是否已赋值
                     * 
                     */
                    bool EnvironmentIdsHasBeenSet() const;

                    /**
                     * 获取Source channel
                     * @return SourceChannel Source channel
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置Source channel
                     * @param _sourceChannel Source channel
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                private:

                    /**
                     * ID of the environment
                     */
                    std::vector<std::string> m_environmentIds;
                    bool m_environmentIdsHasBeenSet;

                    /**
                     * Source channel
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEENVIRONMENTSTATUSREQUEST_H_
