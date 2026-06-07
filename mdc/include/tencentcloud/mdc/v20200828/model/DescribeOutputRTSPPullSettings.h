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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTRTSPPULLSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTRTSPPULLSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/DescribeOutputRTSPPullServerUrl.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * 
                */
                class DescribeOutputRTSPPullSettings : public AbstractModel
                {
                public:
                    DescribeOutputRTSPPullSettings();
                    ~DescribeOutputRTSPPullSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ServerUrls 
                     * 
                     */
                    std::vector<DescribeOutputRTSPPullServerUrl> GetServerUrls() const;

                    /**
                     * 设置
                     * @param _serverUrls 
                     * 
                     */
                    void SetServerUrls(const std::vector<DescribeOutputRTSPPullServerUrl>& _serverUrls);

                    /**
                     * 判断参数 ServerUrls 是否已赋值
                     * @return ServerUrls 是否已赋值
                     * 
                     */
                    bool ServerUrlsHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<DescribeOutputRTSPPullServerUrl> m_serverUrls;
                    bool m_serverUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTRTSPPULLSETTINGS_H_
