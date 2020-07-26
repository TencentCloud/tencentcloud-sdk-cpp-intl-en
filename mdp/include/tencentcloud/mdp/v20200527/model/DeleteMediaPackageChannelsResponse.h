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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DELETEMEDIAPACKAGECHANNELSRESPONSE_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DELETEMEDIAPACKAGECHANNELSRESPONSE_H_

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
                * DeleteMediaPackageChannels response structure.
                */
                class DeleteMediaPackageChannelsResponse : public AbstractModel
                {
                public:
                    DeleteMediaPackageChannelsResponse();
                    ~DeleteMediaPackageChannelsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取The information list of channels that have been deleted.
                     * @return SuccessInfos The information list of channels that have been deleted.
                     */
                    std::vector<ChannelInfo> GetSuccessInfos() const;

                    /**
                     * 判断参数 SuccessInfos 是否已赋值
                     * @return SuccessInfos 是否已赋值
                     */
                    bool SuccessInfosHasBeenSet() const;

                    /**
                     * 获取The information list of channels that failed to be deleted.
                     * @return FailInfos The information list of channels that failed to be deleted.
                     */
                    std::vector<ChannelInfo> GetFailInfos() const;

                    /**
                     * 判断参数 FailInfos 是否已赋值
                     * @return FailInfos 是否已赋值
                     */
                    bool FailInfosHasBeenSet() const;

                private:

                    /**
                     * The information list of channels that have been deleted.
                     */
                    std::vector<ChannelInfo> m_successInfos;
                    bool m_successInfosHasBeenSet;

                    /**
                     * The information list of channels that failed to be deleted.
                     */
                    std::vector<ChannelInfo> m_failInfos;
                    bool m_failInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DELETEMEDIAPACKAGECHANNELSRESPONSE_H_
