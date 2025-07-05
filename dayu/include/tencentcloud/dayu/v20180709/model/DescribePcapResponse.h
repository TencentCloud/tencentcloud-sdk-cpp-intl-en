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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEPCAPRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEPCAPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribePcap response structure.
                */
                class DescribePcapResponse : public AbstractModel
                {
                public:
                    DescribePcapResponse();
                    ~DescribePcapResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取PCAP packet download link list, which is an empty array if there are no PCAP packets;
                     * @return PcapUrlList PCAP packet download link list, which is an empty array if there are no PCAP packets;
                     * 
                     */
                    std::vector<std::string> GetPcapUrlList() const;

                    /**
                     * 判断参数 PcapUrlList 是否已赋值
                     * @return PcapUrlList 是否已赋值
                     * 
                     */
                    bool PcapUrlListHasBeenSet() const;

                private:

                    /**
                     * PCAP packet download link list, which is an empty array if there are no PCAP packets;
                     */
                    std::vector<std::string> m_pcapUrlList;
                    bool m_pcapUrlListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEPCAPRESPONSE_H_
