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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALISSUETRENDRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALISSUETRENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/Trend.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetCredentialIssueTrend response structure.
                */
                class GetCredentialIssueTrendResponse : public AbstractModel
                {
                public:
                    GetCredentialIssueTrendResponse();
                    ~GetCredentialIssueTrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The trend information.
                     * @return Trend The trend information.
                     */
                    std::vector<Trend> GetTrend() const;

                    /**
                     * 判断参数 Trend 是否已赋值
                     * @return Trend 是否已赋值
                     */
                    bool TrendHasBeenSet() const;

                private:

                    /**
                     * The trend information.
                     */
                    std::vector<Trend> m_trend;
                    bool m_trendHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETCREDENTIALISSUETRENDRESPONSE_H_
