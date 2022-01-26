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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROVINCEISPPLAYINFOLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROVINCEISPPLAYINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/PlayStatInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeProvinceIspPlayInfoList response structure.
                */
                class DescribeProvinceIspPlayInfoListResponse : public AbstractModel
                {
                public:
                    DescribeProvinceIspPlayInfoListResponse();
                    ~DescribeProvinceIspPlayInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Playback information list.
                     * @return DataInfoList Playback information list.
                     */
                    std::vector<PlayStatInfo> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     */
                    bool DataInfoListHasBeenSet() const;

                    /**
                     * 获取Statistics type, which is the same as the input parameter.
                     * @return StatType Statistics type, which is the same as the input parameter.
                     */
                    std::string GetStatType() const;

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     */
                    bool StatTypeHasBeenSet() const;

                private:

                    /**
                     * Playback information list.
                     */
                    std::vector<PlayStatInfo> m_dataInfoList;
                    bool m_dataInfoListHasBeenSet;

                    /**
                     * Statistics type, which is the same as the input parameter.
                     */
                    std::string m_statType;
                    bool m_statTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPROVINCEISPPLAYINFOLISTRESPONSE_H_
