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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUTRTMPPULLSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUTRTMPPULLSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/DescribeRTMPPullSourceAddress.h>


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
                class DescribeInputRTMPPullSettings : public AbstractModel
                {
                public:
                    DescribeInputRTMPPullSettings();
                    ~DescribeInputRTMPPullSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SourceAddresses 
                     * 
                     */
                    std::vector<DescribeRTMPPullSourceAddress> GetSourceAddresses() const;

                    /**
                     * 设置
                     * @param _sourceAddresses 
                     * 
                     */
                    void SetSourceAddresses(const std::vector<DescribeRTMPPullSourceAddress>& _sourceAddresses);

                    /**
                     * 判断参数 SourceAddresses 是否已赋值
                     * @return SourceAddresses 是否已赋值
                     * 
                     */
                    bool SourceAddressesHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<DescribeRTMPPullSourceAddress> m_sourceAddresses;
                    bool m_sourceAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUTRTMPPULLSETTINGS_H_
