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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETDESTIPBYNAMERESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETDESTIPBYNAMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/DestIpInfo.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetDestIPByName response structure.
                */
                class GetDestIPByNameResponse : public AbstractModel
                {
                public:
                    GetDestIPByNameResponse();
                    ~GetDestIPByNameResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Target IP info
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DestIpInfo Target IP info
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DestIpInfo> GetDestIpInfo() const;

                    /**
                     * 判断参数 DestIpInfo 是否已赋值
                     * @return DestIpInfo 是否已赋值
                     * 
                     */
                    bool DestIpInfoHasBeenSet() const;

                    /**
                     * 获取Access region. Value ranges from 'MC' to 'AM'. MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas.
                     * @return AccessRegion Access region. Value ranges from 'MC' to 'AM'. MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas.
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     * 
                     */
                    bool AccessRegionHasBeenSet() const;

                private:

                    /**
                     * Target IP info
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DestIpInfo> m_destIpInfo;
                    bool m_destIpInfoHasBeenSet;

                    /**
                     * Access region. Value ranges from 'MC' to 'AM'. MC=Chinese mainland AP=Asia Pacific EU=Europe AM=Americas.
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETDESTIPBYNAMERESPONSE_H_
