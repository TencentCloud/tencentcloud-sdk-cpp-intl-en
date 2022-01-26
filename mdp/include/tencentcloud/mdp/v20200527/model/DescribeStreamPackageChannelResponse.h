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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGECHANNELRESPONSE_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGECHANNELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/ChannelInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * DescribeStreamPackageChannel response structure.
                */
                class DescribeStreamPackageChannelResponse : public AbstractModel
                {
                public:
                    DescribeStreamPackageChannelResponse();
                    ~DescribeStreamPackageChannelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel information
                     * @return Info Channel information
                     */
                    ChannelInfo GetInfo() const;

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * Channel information
                     */
                    ChannelInfo m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBESTREAMPACKAGECHANNELRESPONSE_H_
