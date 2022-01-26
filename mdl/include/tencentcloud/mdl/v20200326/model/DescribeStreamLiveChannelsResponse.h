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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVECHANNELSRESPONSE_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVECHANNELSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/StreamLiveChannelInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * DescribeStreamLiveChannels response structure.
                */
                class DescribeStreamLiveChannelsResponse : public AbstractModel
                {
                public:
                    DescribeStreamLiveChannelsResponse();
                    ~DescribeStreamLiveChannelsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of channel information
Note: this field may return `null`, indicating that no valid value was found.
                     * @return Infos List of channel information
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<StreamLiveChannelInfo> GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     */
                    bool InfosHasBeenSet() const;

                private:

                    /**
                     * List of channel information
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<StreamLiveChannelInfo> m_infos;
                    bool m_infosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVECHANNELSRESPONSE_H_
